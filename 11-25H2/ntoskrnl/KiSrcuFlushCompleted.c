/*
 * XREFs of KiSrcuFlushCompleted @ 0x1405BCE34
 * Callers:
 *     KeClockInterruptNotify @ 0x140279370 (KeClockInterruptNotify.c)
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     KeWaitForMultipleObjects @ 0x14027C240 (KeWaitForMultipleObjects.c)
 *     KiRcuCheckQuiescent @ 0x14027DA00 (KiRcuCheckQuiescent.c)
 *     KiCheckWaitNext @ 0x14027DB60 (KiCheckWaitNext.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeRemoveQueueEx @ 0x14029EC50 (KeRemoveQueueEx.c)
 *     KiRetireDpcList @ 0x1403192F0 (KiRetireDpcList.c)
 *     KiSrcuCheckQuiescent @ 0x14043AC30 (KiSrcuCheckQuiescent.c)
 *     KeSrcuReadUnlock @ 0x1405BCCC0 (KeSrcuReadUnlock.c)
 *     KiSrcuFlushCompletedDpcRoutine @ 0x1405BCF70 (KiSrcuFlushCompletedDpcRoutine.c)
 *     KiSrcuStartGracePeriod @ 0x1405BD9BC (KiSrcuStartGracePeriod.c)
 * Callees:
 *     KeSignalGate @ 0x140225608 (KeSignalGate.c)
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObGetCurrentIrql @ 0x140256C10 (ObGetCurrentIrql.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KxTryToAcquireSpinLock @ 0x140464068 (KxTryToAcquireSpinLock.c)
 *     KiSrcuCompareGraceSequence @ 0x1404DAA50 (KiSrcuCompareGraceSequence.c)
 */

void __fastcall KiSrcuFlushCompleted(__int64 a1)
{
  __int64 v1; // r14
  KIRQL CurrentIrql; // di
  KSPIN_LOCK *v4; // rcx
  __int64 v5; // r9
  _QWORD *v6; // r8
  __int64 v7; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  KSPIN_LOCK *v10; // rcx
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  _QWORD *v13; // rax
  _QWORD *v14; // [rsp+20h] [rbp-18h] BYREF
  _QWORD **v15; // [rsp+28h] [rbp-10h]

  v1 = a1 + 64;
  if ( *(_QWORD *)v1 != v1 )
  {
    CurrentIrql = ObGetCurrentIrql();
    if ( CurrentIrql > 2u )
    {
LABEL_5:
      KeInsertQueueDpc((PRKDPC)(a1 + 80), 0LL, 0LL);
      return;
    }
    v15 = &v14;
    v4 = (KSPIN_LOCK *)(a1 + 40);
    v14 = &v14;
    if ( CurrentIrql < 2u )
    {
      KeAcquireSpinLockRaiseToDpc(v4);
    }
    else if ( !KxTryToAcquireSpinLock((volatile signed __int32 *)v4) )
    {
      goto LABEL_5;
    }
    v5 = *(_QWORD *)(a1 + 48);
    while ( *(_QWORD *)v1 != v1 && (int)KiSrcuCompareGraceSequence(v5, *(_QWORD *)(*(_QWORD *)v1 + 16LL)) >= 0 )
    {
      v7 = *v6;
      if ( *(_QWORD **)(*v6 + 8LL) != v6
        || (v8 = (_QWORD *)v6[1], (_QWORD *)*v8 != v6)
        || (*v8 = v7, *(_QWORD *)(v7 + 8) = v8, v9 = v15, *v15 != &v14) )
      {
LABEL_22:
        __fastfail(3u);
      }
      v6[1] = v15;
      *v6 = &v14;
      *v9 = v6;
      v15 = (_QWORD **)v6;
    }
    v10 = (KSPIN_LOCK *)(a1 + 40);
    if ( CurrentIrql < 2u )
      KeReleaseSpinLock(v10, CurrentIrql);
    else
      KxReleaseSpinLock((volatile signed __int64 *)v10);
    while ( 1 )
    {
      v11 = v14;
      if ( v14 == &v14 )
        break;
      v12 = *v14;
      if ( *(_QWORD **)(*v14 + 8LL) != v14 )
        goto LABEL_22;
      v13 = (_QWORD *)v14[1];
      if ( (_QWORD *)*v13 != v14 )
        goto LABEL_22;
      *v13 = v12;
      *(_QWORD *)(v12 + 8) = v13;
      KeSignalGate((_DWORD *)v11 + 6, 0);
    }
  }
}
