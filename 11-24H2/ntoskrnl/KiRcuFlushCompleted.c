/*
 * XREFs of KiRcuFlushCompleted @ 0x14033D510
 * Callers:
 *     KiRcuCheckQuiescent @ 0x140206480 (KiRcuCheckQuiescent.c)
 *     KiCheckWaitNext @ 0x1402092E0 (KiCheckWaitNext.c)
 *     KiRetireDpcList @ 0x140251EB0 (KiRetireDpcList.c)
 *     KeRemoveQueueEx @ 0x1402A49D0 (KeRemoveQueueEx.c)
 *     KeClockInterruptNotify @ 0x14033A5E0 (KeClockInterruptNotify.c)
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 *     KeWaitForMultipleObjects @ 0x14033D720 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     KiRcuFlushCompletedDpcRoutine @ 0x1405BBEF0 (KiRcuFlushCompletedDpcRoutine.c)
 *     KiRcuFlushCompletedWorkerRoutine @ 0x1405BBF10 (KiRcuFlushCompletedWorkerRoutine.c)
 *     KiRcuStartGracePeriod @ 0x1405BBF44 (KiRcuStartGracePeriod.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeGetEffectiveIrql @ 0x140257DC0 (KeGetEffectiveIrql.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KeSignalGate @ 0x14030AB68 (KeSignalGate.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     KxTryToAcquireSpinLock @ 0x1404633C8 (KxTryToAcquireSpinLock.c)
 *     KiSrcuCompareGraceSequence @ 0x1404D3F60 (KiSrcuCompareGraceSequence.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall KiRcuFlushCompleted(int a1)
{
  unsigned __int8 EffectiveIrql; // al
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
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // rax
  _QWORD *v18; // [rsp+20h] [rbp-18h] BYREF
  _QWORD **v19; // [rsp+28h] [rbp-10h]

  if ( (__int64 *)qword_140F20C50 != &qword_140F20C50 )
  {
    EffectiveIrql = KeGetEffectiveIrql();
    v3 = EffectiveIrql;
    if ( EffectiveIrql > 2u )
    {
      KeInsertQueueDpc(&Dpc, 0LL, 0LL);
      return;
    }
    v4 = 0;
    v19 = &v18;
    v18 = &v18;
    if ( EffectiveIrql < 2u )
    {
      KeAcquireSpinLockRaiseToDpc(&qword_140F20C38);
    }
    else if ( !(unsigned __int8)KxTryToAcquireSpinLock(&qword_140F20C38) )
    {
LABEL_33:
      _InterlockedOr(&dword_140F20CC0, 2u);
      if ( _InterlockedCompareExchange(&dword_140F20CC0, 3, 2) == 2 )
        ExQueueWorkItem(&stru_140F20CA0, CriticalWorkQueue);
      return;
    }
    v5 = qword_140F20C40;
    for ( i = (__int64 *)qword_140F20C50;
          i != &qword_140F20C50 && (int)KiSrcuCompareGraceSequence(v5, i[2]) >= 0;
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
          || (*(_QWORD *)v7 = v10, v10[1] = v7, v12 = v19, *v19 != &v18) )
        {
LABEL_31:
          __fastfail(3u);
        }
        *v11 = v19;
        *v8 = &v18;
        *v12 = v8;
        v19 = v8;
      }
      else
      {
        v4 = v9;
      }
    }
    if ( (unsigned __int8)v3 < 2u )
      KeReleaseSpinLock(&qword_140F20C38, v3);
    else
      KxReleaseSpinLock((volatile signed __int64 *)&qword_140F20C38);
    while ( 1 )
    {
      v15 = v18;
      if ( v18 == &v18 )
        break;
      v16 = *v18;
      if ( *(_QWORD **)(*v18 + 8LL) != v18 )
        goto LABEL_31;
      v17 = (_QWORD *)v18[1];
      if ( (_QWORD *)*v17 != v18 )
        goto LABEL_31;
      *v17 = v16;
      *(_QWORD *)(v16 + 8) = v17;
      if ( v15[3] >> 2 == 1LL )
      {
        KeSignalGate((_DWORD *)v15[4], 0LL);
      }
      else if ( v15[3] >> 2 == 3LL )
      {
        ExFreePoolWithTag((PVOID)v15[4], 0);
      }
      else
      {
        guard_dispatch_icall_no_overrides(v15[4], v15[5], v13, v14);
      }
    }
    if ( v4 )
      goto LABEL_33;
  }
}
