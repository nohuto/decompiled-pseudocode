/*
 * XREFs of MiFinishLargePageFree @ 0x14021B7C8
 * Callers:
 *     MiFreeLargePageMemory @ 0x14021B56C (MiFreeLargePageMemory.c)
 *     MiProbeUnlockPage @ 0x140299FB0 (MiProbeUnlockPage.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetPfnPageSizeIndex @ 0x140310FA0 (MiGetPfnPageSizeIndex.c)
 *     MiFreeLargePageCharges @ 0x1403988E0 (MiFreeLargePageCharges.c)
 *     MiSetFreeZeroPfnCold @ 0x140423EE0 (MiSetFreeZeroPfnCold.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiInsertPossiblyBadPage @ 0x14068461C (MiInsertPossiblyBadPage.c)
 */

__int64 __fastcall MiFinishLargePageFree(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r9
  int PfnPageSizeIndex; // r14d
  volatile signed __int32 *v11; // rbx
  unsigned __int8 v12; // di
  unsigned int v13; // r14d
  char v14; // r11
  ULONG_PTR v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v20; // rdx
  int v21; // [rsp+68h] [rbp+10h]
  int v22; // [rsp+68h] [rbp+10h]
  int v24; // [rsp+70h] [rbp+18h]

  v6 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  PfnPageSizeIndex = MiGetPfnPageSizeIndex();
  v21 = PfnPageSizeIndex;
  v11 = (volatile signed __int32 *)(a1 + 24);
  if ( (a4 & 0x10) != 0 )
  {
    v12 = 2;
    v13 = 0;
    while ( _interlockedbittestandset64(v11, 0x3FuLL) )
    {
      do
      {
        if ( (++v13 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v8, v7, 0LL, v9) )
        {
          HvlNotifyLongSpinWait(v13);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)v11 < 0 );
    }
    PfnPageSizeIndex = v21;
  }
  else
  {
    v12 = MiLockPageInline(a1);
  }
  v22 = *(_DWORD *)(a1 + 32);
  BYTE2(v22) = BYTE2(v22) & 0xF8 | 5;
  *(_DWORD *)(a1 + 32) = v22;
  MiSetFreeZeroPfnCold(a1, a3 == 0);
  v24 = *(_DWORD *)(a1 + 32);
  BYTE2(v24) ^= (v14 ^ BYTE2(v24)) & 7;
  *(_DWORD *)(a1 + 32) = v24;
  v15 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)v11 & 0xC000000000000000uLL;
  v16 = *(_DWORD *)(a1 + 32);
  LOWORD(v16) = 0;
  *(_DWORD *)(a1 + 32) = v16;
  if ( (*(_QWORD *)(a1 + 40) & 0x20000000000LL) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)v11, 0x7FFFFFFFFFFFFFFFuLL);
    MiInsertPossiblyBadPage(v15);
    if ( v12 < 2u )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v20) = v12;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v20);
      }
      __writecr8(v12);
    }
  }
  else
  {
    MiInsertPageInFreeOrZeroedList(v15);
    LOBYTE(v17) = v12;
    MiUnlockPage(a1, v17);
  }
  v18 = MiPageSizes[PfnPageSizeIndex];
  if ( (a4 & 8) == 0 )
    MiFreeLargePageCharges(v6, MiPageSizes[PfnPageSizeIndex], a4);
  return v18;
}
