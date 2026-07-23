/*
 * XREFs of KiRcuFlushCompleted @ 0x14031C9F0
 * Callers:
 *     KiRetireDpcList @ 0x1402824C0 (KiRetireDpcList.c)
 *     KeRemoveQueueEx @ 0x1402D4100 (KeRemoveQueueEx.c)
 *     KeClockInterruptNotify @ 0x140319AC0 (KeClockInterruptNotify.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     KeWaitForMultipleObjects @ 0x14031CC00 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KiRcuCheckQuiescent @ 0x14032DA60 (KiRcuCheckQuiescent.c)
 *     KiCheckWaitNext @ 0x1403308C0 (KiCheckWaitNext.c)
 *     KiRcuFlushCompletedDpcRoutine @ 0x1405B9520 (KiRcuFlushCompletedDpcRoutine.c)
 *     KiRcuFlushCompletedWorkerRoutine @ 0x1405B9540 (KiRcuFlushCompletedWorkerRoutine.c)
 *     KiRcuStartGracePeriod @ 0x1405B9574 (KiRcuStartGracePeriod.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeGetEffectiveIrql @ 0x1402883D0 (KeGetEffectiveIrql.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     KeSignalGate @ 0x140314A48 (KeSignalGate.c)
 *     KxTryToAcquireSpinLock @ 0x140459EB8 (KxTryToAcquireSpinLock.c)
 *     KiSrcuCompareGraceSequence @ 0x1404CD170 (KiSrcuCompareGraceSequence.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall KiRcuFlushCompleted(__int64 a1, __int64 a2)
{
  int v2; // esi
  unsigned __int8 EffectiveIrql; // al
  unsigned __int64 v4; // rbx
  int v5; // edi
  __int64 v6; // r10
  __int64 *i; // r8
  __int64 v8; // r8
  _QWORD **v9; // r9
  int v10; // r11d
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // rax
  _QWORD *v17; // [rsp+20h] [rbp-18h] BYREF
  _QWORD **v18; // [rsp+28h] [rbp-10h]

  v2 = a1;
  if ( (__int64 *)qword_140F205D0 != &qword_140F205D0 )
  {
    EffectiveIrql = KeGetEffectiveIrql(a1, a2);
    v4 = EffectiveIrql;
    if ( EffectiveIrql > 2u )
    {
      KeInsertQueueDpc(&stru_140F205E0, 0LL, 0LL);
      return;
    }
    v5 = 0;
    v18 = &v17;
    v17 = &v17;
    if ( EffectiveIrql < 2u )
    {
      KeAcquireSpinLockRaiseToDpc(&qword_140F205B8);
    }
    else if ( !(unsigned __int8)KxTryToAcquireSpinLock(&qword_140F205B8) )
    {
LABEL_33:
      _InterlockedOr(&dword_140F20640, 2u);
      if ( _InterlockedCompareExchange(&dword_140F20640, 3, 2) == 2 )
        ExQueueWorkItem(&stru_140F20620, CriticalWorkQueue);
      return;
    }
    v6 = qword_140F205C0;
    for ( i = (__int64 *)qword_140F205D0;
          i != &qword_140F205D0 && (int)KiSrcuCompareGraceSequence(v6, i[2]) >= 0;
          i = *(__int64 **)v8 )
    {
      if ( v4 > (*(_QWORD *)(v8 + 24) & 3uLL) )
        v5 = v10;
      if ( v2 || (*(_QWORD *)(v8 + 24) & 0xFFFFFFFFFFFFFFFCuLL) <= 8 )
      {
        v11 = *v9;
        v12 = (_QWORD *)(v8 + 8);
        v8 = *(_QWORD *)(v8 + 8);
        if ( (_QWORD **)(*v9)[1] != v9
          || *(_QWORD ***)v8 != v9
          || (*(_QWORD *)v8 = v11, v11[1] = v8, v13 = v18, *v18 != &v17) )
        {
LABEL_31:
          __fastfail(3u);
        }
        *v12 = v18;
        *v9 = &v17;
        *v13 = v9;
        v18 = v9;
      }
      else
      {
        v5 = v10;
      }
    }
    if ( (unsigned __int8)v4 < 2u )
      KeReleaseSpinLock(&qword_140F205B8, v4);
    else
      KxReleaseSpinLock((volatile signed __int64 *)&qword_140F205B8);
    while ( 1 )
    {
      v14 = v17;
      if ( v17 == &v17 )
        break;
      v15 = *v17;
      if ( *(_QWORD **)(*v17 + 8LL) != v17 )
        goto LABEL_31;
      v16 = (_QWORD *)v17[1];
      if ( (_QWORD *)*v16 != v17 )
        goto LABEL_31;
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
      if ( v14[3] >> 2 == 1LL )
      {
        KeSignalGate((volatile signed __int32 *)v14[4], 0LL);
      }
      else if ( v14[3] >> 2 == 3LL )
      {
        ExFreePoolWithTag((PVOID)v14[4], 0);
      }
      else
      {
        guard_dispatch_icall_no_overrides(v14[4], v14[5]);
      }
    }
    if ( v5 )
      goto LABEL_33;
  }
}
