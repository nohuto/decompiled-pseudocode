/*
 * XREFs of MiStoreMarkLockedPagesModified @ 0x1402E9CB0
 * Callers:
 *     MmStoreProbeAndLockPages @ 0x1402E9990 (MmStoreProbeAndLockPages.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiCanPfnOriginalPteBeLost @ 0x1402EE318 (MiCanPfnOriginalPteBeLost.c)
 *     MiClearPageFileReservation @ 0x14030714C (MiClearPageFileReservation.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiStoreMarkLockedPagesModified(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rsi
  char v5; // bp
  unsigned __int64 v6; // r15
  unsigned __int8 CurrentIrql; // r14
  __int64 v8; // rbx
  unsigned int v9; // edi
  unsigned int v10; // r11d
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 result; // rax
  unsigned int v14; // [rsp+60h] [rbp+8h]
  unsigned __int64 v15; // [rsp+68h] [rbp+10h] BYREF

  v4 = a1 + 12;
  v5 = 0;
  v6 = (unsigned __int64)&a1[2 * ((((a1[8] + a1[11]) & 0xFFF) + (unsigned __int64)(unsigned int)a1[10] + 4095) >> 12)
                           + 12];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  for ( ; (unsigned __int64)v4 < v6; ++v4 )
  {
    v8 = 48LL * *v4 - 0x220000000000LL;
    v9 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v9 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v9);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
    v15 = *(_QWORD *)(v8 + 16);
    if ( (v15 & 4) != 0 )
    {
      *(_QWORD *)(v8 + 16) &= ~4uLL;
      MiClearPageFileReservation(&v15);
    }
    else
    {
      v15 = 0LL;
    }
    if ( (*(_BYTE *)(v8 + 34) & 0x10) == 0 )
    {
      v14 = *(_DWORD *)(v8 + 32);
      v10 = HIWORD(v14);
      if ( (v14 & 0x80000) != 0
        && (unsigned int)MiCanPfnOriginalPteBeLost(v8)
        && (((*(_QWORD *)(v8 + 16) & 4) != 0) & (unsigned __int8)~(*(_BYTE *)(v8 + 34) >> 4)) != 0 )
      {
        *(_QWORD *)(v8 + 16) &= ~4uLL;
      }
      BYTE2(v14) = v10 | 0x10;
      *(_DWORD *)(v8 + 32) = v14;
    }
    v11 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL));
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v15 )
      MiReleasePageFileInfo(v11, v15, 1LL, a4);
    ++v5;
    if ( CurrentIrql != 2 && (v5 & 0xF) == 0 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      v12 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v12, 2LL);
    }
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
