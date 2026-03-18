/*
 * XREFs of KiRcuFlushCompleted @ 0x1404F7CEC
 * Callers:
 *     KeClockInterruptNotify @ 0x140279370 (KeClockInterruptNotify.c)
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     KeWaitForMultipleObjects @ 0x14027C240 (KeWaitForMultipleObjects.c)
 *     KiRcuCheckQuiescent @ 0x14027DA00 (KiRcuCheckQuiescent.c)
 *     KiCheckWaitNext @ 0x14027DB60 (KiCheckWaitNext.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeRemoveQueueEx @ 0x14029EC50 (KeRemoveQueueEx.c)
 *     KiRetireDpcList @ 0x1403192F0 (KiRetireDpcList.c)
 *     KiRcuFlushCompletedDpcRoutine @ 0x1405B8050 (KiRcuFlushCompletedDpcRoutine.c)
 *     KiRcuFlushCompletedWorkerRoutine @ 0x1405B8070 (KiRcuFlushCompletedWorkerRoutine.c)
 *     KiRcuStartGracePeriod @ 0x1405B80A4 (KiRcuStartGracePeriod.c)
 * Callees:
 *     KeSignalGate @ 0x140225608 (KeSignalGate.c)
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObGetCurrentIrql @ 0x140256C10 (ObGetCurrentIrql.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KxTryToAcquireSpinLock @ 0x140464068 (KxTryToAcquireSpinLock.c)
 *     KiSrcuCompareGraceSequence @ 0x1404DAA50 (KiSrcuCompareGraceSequence.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall KiRcuFlushCompleted(int a1)
{
  unsigned __int8 CurrentIrql; // al
  unsigned __int64 v3; // rbx
  int v4; // edi
  __int64 v5; // r10
  __int64 *i; // r8
  __int64 v7; // r8
  _QWORD **v8; // r9
  int v9; // r11d
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rax
  _QWORD *v16; // [rsp+20h] [rbp-18h] BYREF
  _QWORD **v17; // [rsp+28h] [rbp-10h]

  if ( (__int64 *)qword_140F204B0 != &qword_140F204B0 )
  {
    CurrentIrql = ObGetCurrentIrql();
    v3 = CurrentIrql;
    if ( CurrentIrql > 2u )
    {
      KeInsertQueueDpc(&stru_140F204C0, 0LL, 0LL);
      return;
    }
    v4 = 0;
    v17 = &v16;
    v16 = &v16;
    if ( CurrentIrql < 2u )
    {
      KeAcquireSpinLockRaiseToDpc(&qword_140F20498);
    }
    else if ( !KxTryToAcquireSpinLock((volatile signed __int32 *)&qword_140F20498) )
    {
LABEL_33:
      _InterlockedOr(&dword_140F20520, 2u);
      if ( _InterlockedCompareExchange(&dword_140F20520, 3, 2) == 2 )
        ExQueueWorkItem(&stru_140F20500, CriticalWorkQueue);
      return;
    }
    v5 = qword_140F204A0;
    for ( i = (__int64 *)qword_140F204B0;
          i != &qword_140F204B0 && (int)KiSrcuCompareGraceSequence(v5, i[2]) >= 0;
          i = *(__int64 **)v7 )
    {
      if ( v3 > (*(_QWORD *)(v7 + 24) & 3uLL) )
        v4 = v9;
      if ( a1 || (*(_QWORD *)(v7 + 24) & 0xFFFFFFFFFFFFFFFCuLL) <= 8 )
      {
        v10 = *v8;
        v11 = (_QWORD *)(v7 + 8);
        v7 = *(_QWORD *)(v7 + 8);
        if ( (_QWORD **)(*v8)[1] != v8
          || *(_QWORD ***)v7 != v8
          || (*(_QWORD *)v7 = v10, v10[1] = v7, v12 = v17, *v17 != &v16) )
        {
LABEL_31:
          __fastfail(3u);
        }
        *v11 = v17;
        *v8 = &v16;
        *v12 = v8;
        v17 = v8;
      }
      else
      {
        v4 = v9;
      }
    }
    if ( (unsigned __int8)v3 < 2u )
      KeReleaseSpinLock(&qword_140F20498, v3);
    else
      KxReleaseSpinLock((volatile signed __int64 *)&qword_140F20498);
    while ( 1 )
    {
      v13 = v16;
      if ( v16 == &v16 )
        break;
      v14 = *v16;
      if ( *(_QWORD **)(*v16 + 8LL) != v16 )
        goto LABEL_31;
      v15 = (_QWORD *)v16[1];
      if ( (_QWORD *)*v15 != v16 )
        goto LABEL_31;
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      if ( v13[3] >> 2 == 1LL )
      {
        KeSignalGate((_DWORD *)v13[4], 0);
      }
      else if ( v13[3] >> 2 == 3LL )
      {
        ExFreePoolWithTag((PVOID)v13[4], 0);
      }
      else
      {
        guard_dispatch_icall_no_overrides(v13[4], v13[5]);
      }
    }
    if ( v4 )
      goto LABEL_33;
  }
}
