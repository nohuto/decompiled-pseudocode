/*
 * XREFs of MiStoreMarkLockedPagesModified @ 0x1402CB6C0
 * Callers:
 *     MmStoreProbeAndLockPages @ 0x1402CB0A0 (MmStoreProbeAndLockPages.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiClearPageFileReservation @ 0x1402CC084 (MiClearPageFileReservation.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140388D44 (MiCanPfnOriginalPteBeLost.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiStoreMarkLockedPagesModified(_DWORD *a1)
{
  _QWORD *v1; // rsi
  char v2; // bp
  unsigned __int64 v3; // r15
  unsigned __int8 CurrentIrql; // r14
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  unsigned int v7; // edi
  unsigned int v8; // r11d
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 result; // rax
  unsigned int v12; // [rsp+60h] [rbp+8h]
  unsigned __int64 v13; // [rsp+68h] [rbp+10h] BYREF

  v1 = a1 + 12;
  v2 = 0;
  v3 = (unsigned __int64)&a1[2 * ((((a1[8] + a1[11]) & 0xFFF) + (unsigned __int64)(unsigned int)a1[10] + 4095) >> 12)
                           + 12];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  if ( (unsigned __int64)v1 < v3 )
  {
    v5 = 0xFFFFDE0000000000uLL;
    do
    {
      v6 = 48LL * *v1 - 0x220000000000LL;
      v7 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v7 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v5) )
          {
            HvlNotifyLongSpinWait(v7);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v6 + 24) < 0 );
      }
      v13 = *(_QWORD *)(v6 + 16);
      if ( (v13 & 4) != 0 )
      {
        *(_QWORD *)(v6 + 16) &= ~4uLL;
        MiClearPageFileReservation(&v13);
      }
      else
      {
        v13 = 0LL;
      }
      if ( (*(_BYTE *)(v6 + 34) & 0x10) == 0 )
      {
        v12 = *(_DWORD *)(v6 + 32);
        v8 = HIWORD(v12);
        if ( (v12 & 0x80000) != 0
          && (unsigned int)MiCanPfnOriginalPteBeLost(v6)
          && (((*(_QWORD *)(v6 + 16) & 4) != 0) & (unsigned __int8)~(*(_BYTE *)(v6 + 34) >> 4)) != 0 )
        {
          *(_QWORD *)(v6 + 16) &= ~4uLL;
        }
        BYTE2(v12) = v8 | 0x10;
        *(_DWORD *)(v6 + 32) = v12;
      }
      v9 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v6 + 40) >> 43) & 0x3FFLL));
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v13 )
        MiReleasePageFileInfo(v9, v13, 1);
      ++v2;
      if ( CurrentIrql != 2 && (v2 & 0xF) == 0 )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
        v10 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v10);
      }
      ++v1;
      v5 = 0xFFFFDE0000000000uLL;
    }
    while ( (unsigned __int64)v1 < v3 );
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
