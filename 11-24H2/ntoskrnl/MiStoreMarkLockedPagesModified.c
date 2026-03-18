/*
 * XREFs of MiStoreMarkLockedPagesModified @ 0x140432B70
 * Callers:
 *     MmStoreProbeAndLockPages @ 0x140284E70 (MmStoreProbeAndLockPages.c)
 * Callees:
 *     MiClearPageFileReservation @ 0x140213DEC (MiClearPageFileReservation.c)
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiCanPfnOriginalPteBeLost @ 0x14039E1D0 (MiCanPfnOriginalPteBeLost.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiStoreMarkLockedPagesModified(_DWORD *a1)
{
  _QWORD *v1; // rsi
  char v2; // bp
  unsigned __int64 v3; // r15
  unsigned __int8 CurrentIrql; // r14
  __int64 v5; // rbx
  unsigned int v6; // edi
  unsigned int v7; // r11d
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 result; // rax
  unsigned int v11; // [rsp+60h] [rbp+8h]
  unsigned __int64 v12; // [rsp+68h] [rbp+10h] BYREF

  v1 = a1 + 12;
  v2 = 0;
  v3 = (unsigned __int64)&a1[2 * ((((a1[8] + a1[11]) & 0xFFF) + (unsigned __int64)(unsigned int)a1[10] + 4095) >> 12)
                           + 12];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  for ( ; (unsigned __int64)v1 < v3; ++v1 )
  {
    v5 = 48LL * *v1 - 0x220000000000LL;
    v6 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v6 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v6);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v5 + 24) < 0 );
    }
    v12 = *(_QWORD *)(v5 + 16);
    if ( (v12 & 4) != 0 )
    {
      *(_QWORD *)(v5 + 16) &= ~4uLL;
      MiClearPageFileReservation((__int64 *)&v12);
    }
    else
    {
      v12 = 0LL;
    }
    if ( (*(_BYTE *)(v5 + 34) & 0x10) == 0 )
    {
      v11 = *(_DWORD *)(v5 + 32);
      v7 = HIWORD(v11);
      if ( (v11 & 0x80000) != 0
        && (unsigned int)MiCanPfnOriginalPteBeLost(v5)
        && (((*(_QWORD *)(v5 + 16) & 4) != 0) & (unsigned __int8)~(*(_BYTE *)(v5 + 34) >> 4)) != 0 )
      {
        *(_QWORD *)(v5 + 16) &= ~4uLL;
      }
      BYTE2(v11) = v7 | 0x10;
      *(_DWORD *)(v5 + 32) = v11;
    }
    v8 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v5 + 40) >> 43) & 0x3FFLL));
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v12 )
      MiReleasePageFileInfo(v8, v12, 1LL);
    ++v2;
    if ( CurrentIrql != 2 && (v2 & 0xF) == 0 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      v9 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v9, 2LL);
    }
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
