/*
 * XREFs of KiSrcuReportQuiescent @ 0x1405BEDC8
 * Callers:
 *     KiRetireDpcList @ 0x1402824C0 (KiRetireDpcList.c)
 *     KeRemoveQueueEx @ 0x1402D4100 (KeRemoveQueueEx.c)
 *     KeClockInterruptNotify @ 0x140319AC0 (KeClockInterruptNotify.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     KeWaitForMultipleObjects @ 0x14031CC00 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KiRcuCheckQuiescent @ 0x14032DA60 (KiRcuCheckQuiescent.c)
 *     KiCheckWaitNext @ 0x1403308C0 (KiCheckWaitNext.c)
 *     KiSrcuCheckQuiescent @ 0x14042A2E0 (KiSrcuCheckQuiescent.c)
 *     KeSrcuReadUnlock @ 0x1405BE300 (KeSrcuReadUnlock.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxTryToAcquireSpinLock @ 0x140459EB8 (KxTryToAcquireSpinLock.c)
 *     KiSrcuCompareGraceSequence @ 0x1404CD170 (KiSrcuCompareGraceSequence.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiSrcuNotifyGracePeriodStarted @ 0x1405BE81C (KiSrcuNotifyGracePeriodStarted.c)
 */

__int64 __fastcall KiSrcuReportQuiescent(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  unsigned int v4; // r12d
  __int64 *v5; // rdi
  __int64 v6; // r15
  int v7; // r14d
  __int64 v8; // rbp
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v10; // cl
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rax
  __int64 v16; // rbp
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 i; // r15
  signed __int64 v23; // r8
  __int64 *v24; // [rsp+68h] [rbp+10h]

  v3 = *(_QWORD *)(a1 + 56);
  v4 = 1;
  v5 = *(__int64 **)(a1 + 40);
  v6 = a2;
  v7 = 1;
  v8 = **(_QWORD **)(a1 + 48);
  v24 = (__int64 *)(a1 + 32);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    v10 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      KiRaiseIrqlProcessIrqlFlags(v10, a2);
    }
  }
  while ( v5 )
  {
    if ( !KxTryToAcquireSpinLock((volatile signed __int32 *)v5 + 4) )
    {
      if ( v7 )
      {
        KiSrcuNotifyGracePeriodStarted(v3, a1);
      }
      else
      {
        _BitScanForward64(&v18, **(_QWORD **)(a1 + 48));
        v19 = *(_QWORD *)v5[1];
        v20 = a1 - (v18 << 6);
        for ( i = v6 - 1; v19; v19 >>= 1 )
        {
          if ( (v19 & 1) != 0 )
          {
            *(_QWORD *)(v20 + 32) = i;
            KiSrcuNotifyGracePeriodStarted(v3, v20);
          }
          v20 += 64LL;
        }
      }
      goto LABEL_28;
    }
    if ( (v5[5] & v8) != 0 )
      goto LABEL_20;
    v11 = KiSrcuCompareGraceSequence(v6, v5[3]);
    if ( v11 < 0 )
      goto LABEL_20;
    if ( v12 )
    {
      if ( v11 > 0 )
      {
        v6 = v13;
        v5[6] |= v8 | v12;
      }
    }
    else
    {
      v5[3] = v6;
    }
    *v24 = v6;
    v5[5] |= v8;
    if ( v5[5] != *(_QWORD *)v5[1] )
    {
LABEL_20:
      KxReleaseSpinLock(v5 + 2);
LABEL_28:
      if ( CurrentIrql < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
      return 0LL;
    }
    if ( v7 )
    {
      v14 = v5[6];
      if ( v14 )
      {
        _BitScanForward64(&v15, **(_QWORD **)(a1 + 48));
        v16 = a1 - ((unsigned __int64)(unsigned int)v15 << 6);
        do
        {
          if ( (v14 & 1) != 0 )
          {
            *(_QWORD *)(v16 + 32) = v6;
            KiSrcuNotifyGracePeriodStarted(v3, v16);
          }
          v16 += 64LL;
          v14 >>= 1;
        }
        while ( v14 );
      }
    }
    v5[5] = 0LL;
    v5[6] = 0LL;
    KxReleaseSpinLock(v5 + 2);
    v7 = 0;
    v24 = v5 + 4;
    v17 = v5[1];
    v5 = (__int64 *)*v5;
    v8 = *(_QWORD *)(v17 + 8);
  }
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  while ( (int)KiSrcuCompareGraceSequence(v6, *(_QWORD *)(v3 + 48)) > 0 )
  {
    if ( v23 == _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 48), v6, v23) )
      return v4;
  }
  return 0;
}
