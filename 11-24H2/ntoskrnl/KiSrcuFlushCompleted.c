/*
 * XREFs of KiSrcuFlushCompleted @ 0x1405BE474
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
 *     KiSrcuFlushCompletedDpcRoutine @ 0x1405BE5B0 (KiSrcuFlushCompletedDpcRoutine.c)
 *     KiSrcuStartGracePeriod @ 0x1405BEFFC (KiSrcuStartGracePeriod.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeGetEffectiveIrql @ 0x1402883D0 (KeGetEffectiveIrql.c)
 *     KeSignalGate @ 0x140314A48 (KeSignalGate.c)
 *     KxTryToAcquireSpinLock @ 0x140459EB8 (KxTryToAcquireSpinLock.c)
 *     KiSrcuCompareGraceSequence @ 0x1404CD170 (KiSrcuCompareGraceSequence.c)
 */

void __fastcall KiSrcuFlushCompleted(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  KIRQL EffectiveIrql; // di
  KSPIN_LOCK *v5; // rcx
  __int64 v6; // r9
  volatile signed __int32 ***v7; // r8
  volatile signed __int32 **v8; // rax
  volatile signed __int32 ****v9; // rcx
  volatile signed __int32 **v10; // rax
  KSPIN_LOCK *v11; // rcx
  volatile signed __int32 *v12; // rcx
  __int64 v13; // rdx
  volatile signed __int32 **v14; // rax
  volatile signed __int32 *v15; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 **v16; // [rsp+28h] [rbp-10h]

  v2 = a1 + 64;
  if ( *(_QWORD *)v2 != v2 )
  {
    EffectiveIrql = KeGetEffectiveIrql(a1, a2);
    if ( EffectiveIrql > 2u )
    {
LABEL_5:
      KeInsertQueueDpc((PRKDPC)(a1 + 80), 0LL, 0LL);
      return;
    }
    v16 = &v15;
    v5 = (KSPIN_LOCK *)(a1 + 40);
    v15 = (volatile signed __int32 *)&v15;
    if ( EffectiveIrql < 2u )
    {
      KeAcquireSpinLockRaiseToDpc(v5);
    }
    else if ( !KxTryToAcquireSpinLock((volatile signed __int32 *)v5) )
    {
      goto LABEL_5;
    }
    v6 = *(_QWORD *)(a1 + 48);
    while ( *(_QWORD *)v2 != v2 && (int)KiSrcuCompareGraceSequence(v6, *(_QWORD *)(*(_QWORD *)v2 + 16LL)) >= 0 )
    {
      v8 = *v7;
      if ( (*v7)[1] != (volatile signed __int32 *)v7
        || (v9 = (volatile signed __int32 ****)v7[1], *v9 != v7)
        || (*v9 = (volatile signed __int32 ***)v8,
            v8[1] = (volatile signed __int32 *)v9,
            v10 = v16,
            *v16 != (volatile signed __int32 *)&v15) )
      {
LABEL_22:
        __fastfail(3u);
      }
      v7[1] = v16;
      *v7 = &v15;
      *v10 = (volatile signed __int32 *)v7;
      v16 = (volatile signed __int32 **)v7;
    }
    v11 = (KSPIN_LOCK *)(a1 + 40);
    if ( EffectiveIrql < 2u )
      KeReleaseSpinLock(v11, EffectiveIrql);
    else
      KxReleaseSpinLock((volatile signed __int64 *)v11);
    while ( 1 )
    {
      v12 = v15;
      if ( v15 == (volatile signed __int32 *)&v15 )
        break;
      v13 = *(_QWORD *)v15;
      if ( *(volatile signed __int32 **)(*(_QWORD *)v15 + 8LL) != v15 )
        goto LABEL_22;
      v14 = (volatile signed __int32 **)*((_QWORD *)v15 + 1);
      if ( *v14 != v15 )
        goto LABEL_22;
      *v14 = (volatile signed __int32 *)v13;
      *(_QWORD *)(v13 + 8) = v14;
      KeSignalGate(v12 + 6, 0LL);
    }
  }
}
