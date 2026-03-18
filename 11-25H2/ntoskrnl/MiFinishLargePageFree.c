/*
 * XREFs of MiFinishLargePageFree @ 0x14038D7E8
 * Callers:
 *     MiProbeUnlockPage @ 0x1402CB9A0 (MiProbeUnlockPage.c)
 *     MiFreeLargePageMemory @ 0x14038C050 (MiFreeLargePageMemory.c)
 * Callees:
 *     MiGetPfnPageSizeIndex @ 0x140220DD0 (MiGetPfnPageSizeIndex.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 *     MiFreeLargePageCharges @ 0x14038BC4C (MiFreeLargePageCharges.c)
 *     MiSetFreeZeroPfnCold @ 0x140438788 (MiSetFreeZeroPfnCold.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiInsertPossiblyBadPage @ 0x140677C6C (MiInsertPossiblyBadPage.c)
 */

__int64 __fastcall MiFinishLargePageFree(__int64 a1, int a2, int a3, char a4)
{
  __int64 v7; // r13
  int PfnPageSizeIndex; // r14d
  bool v9; // cf
  volatile signed __int32 *v10; // rbx
  __int16 v11; // r15
  unsigned __int8 v12; // di
  int v13; // r14d
  char v14; // r11
  ULONG_PTR v15; // rcx
  int v16; // eax
  __int64 v17; // rbx
  __int64 v19; // rdx
  int v20; // [rsp+68h] [rbp+10h]
  int v21; // [rsp+68h] [rbp+10h]
  int v23; // [rsp+70h] [rbp+18h]

  v7 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  PfnPageSizeIndex = MiGetPfnPageSizeIndex(a1);
  v20 = PfnPageSizeIndex;
  v9 = a2 != 0;
  v10 = (volatile signed __int32 *)(a1 + 24);
  v11 = v9;
  if ( (a4 & 0x10) != 0 )
  {
    v12 = 2;
    v13 = 0;
    while ( _interlockedbittestandset64(v10, 0x3FuLL) )
    {
      do
      {
        if ( (++v13 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait();
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)v10 < 0 );
    }
    PfnPageSizeIndex = v20;
  }
  else
  {
    v12 = MiLockPageInline(a1);
  }
  v21 = *(_DWORD *)(a1 + 32);
  BYTE2(v21) = BYTE2(v21) & 0xF8 | 5;
  *(_DWORD *)(a1 + 32) = v21;
  MiSetFreeZeroPfnCold(a1, a3 == 0);
  v23 = *(_DWORD *)(a1 + 32);
  BYTE2(v23) ^= (v14 ^ BYTE2(v23)) & 7;
  *(_DWORD *)(a1 + 32) = v23;
  v15 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)v10 & 0xC000000000000000uLL;
  v16 = *(_DWORD *)(a1 + 32);
  LOWORD(v16) = 0;
  *(_DWORD *)(a1 + 32) = v16;
  if ( (*(_QWORD *)(a1 + 40) & 0x20000000000LL) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)v10, 0x7FFFFFFFFFFFFFFFuLL);
    MiInsertPossiblyBadPage(v15);
    if ( v12 < 2u )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v19) = v12;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v19);
      }
      __writecr8(v12);
    }
  }
  else
  {
    MiInsertPageInFreeOrZeroedList(v15, v11 + 1);
    MiUnlockPage(a1, v12);
  }
  v17 = MiPageSizes[PfnPageSizeIndex];
  if ( (a4 & 8) == 0 )
    MiFreeLargePageCharges(v7, MiPageSizes[PfnPageSizeIndex], a4);
  return v17;
}
