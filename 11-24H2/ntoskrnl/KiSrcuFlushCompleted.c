/*
 * XREFs of KiSrcuFlushCompleted @ 0x1405C0EA4
 * Callers:
 *     KiRcuCheckQuiescent @ 0x140206480 (KiRcuCheckQuiescent.c)
 *     KiCheckWaitNext @ 0x1402092E0 (KiCheckWaitNext.c)
 *     KiRetireDpcList @ 0x140251EB0 (KiRetireDpcList.c)
 *     KeRemoveQueueEx @ 0x1402A49D0 (KeRemoveQueueEx.c)
 *     KeClockInterruptNotify @ 0x14033A5E0 (KeClockInterruptNotify.c)
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 *     KeWaitForMultipleObjects @ 0x14033D720 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     KiSrcuCheckQuiescent @ 0x140437860 (KiSrcuCheckQuiescent.c)
 *     KeSrcuReadUnlock @ 0x1405C0D30 (KeSrcuReadUnlock.c)
 *     KiSrcuFlushCompletedDpcRoutine @ 0x1405C0FE0 (KiSrcuFlushCompletedDpcRoutine.c)
 *     KiSrcuStartGracePeriod @ 0x1405C1A2C (KiSrcuStartGracePeriod.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeGetEffectiveIrql @ 0x140257DC0 (KeGetEffectiveIrql.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KeSignalGate @ 0x14030AB68 (KeSignalGate.c)
 *     KxTryToAcquireSpinLock @ 0x1404633C8 (KxTryToAcquireSpinLock.c)
 *     KiSrcuCompareGraceSequence @ 0x1404D3F60 (KiSrcuCompareGraceSequence.c)
 */

void __fastcall KiSrcuFlushCompleted(__int64 a1)
{
  __int64 v1; // r14
  KIRQL EffectiveIrql; // di
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
    EffectiveIrql = KeGetEffectiveIrql();
    if ( EffectiveIrql > 2u )
    {
LABEL_5:
      KeInsertQueueDpc((PRKDPC)(a1 + 80), 0LL, 0LL);
      return;
    }
    v15 = &v14;
    v4 = (KSPIN_LOCK *)(a1 + 40);
    v14 = &v14;
    if ( EffectiveIrql < 2u )
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
    if ( EffectiveIrql < 2u )
      KeReleaseSpinLock(v10, EffectiveIrql);
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
      KeSignalGate((_DWORD *)v11 + 6, 0LL);
    }
  }
}
