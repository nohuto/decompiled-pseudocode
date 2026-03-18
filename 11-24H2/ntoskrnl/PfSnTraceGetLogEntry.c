/*
 * XREFs of PfSnTraceGetLogEntry @ 0x140276790
 * Callers:
 *     PfSnLogPageFaultCommon @ 0x140276060 (PfSnLogPageFaultCommon.c)
 *     PfSnTraceTimerRoutine @ 0x14047FAD0 (PfSnTraceTimerRoutine.c)
 *     PfSnLogScenarioMeasures @ 0x14049E454 (PfSnLogScenarioMeasures.c)
 *     PfSnLogStreamCreate @ 0x1409622A0 (PfSnLogStreamCreate.c)
 *     PfSnLogHelper @ 0x14096290C (PfSnLogHelper.c)
 *     PfSnNameRemoveAll @ 0x140962980 (PfSnNameRemoveAll.c)
 *     PfSnLogIdentifier @ 0x140A630D0 (PfSnLogIdentifier.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     PfSnTraceBufferAllocate @ 0x1404939D4 (PfSnTraceBufferAllocate.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnTraceGetLogEntry(__int64 a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v6; // ebp
  __int64 v7; // rdi
  int v8; // eax
  __int64 result; // rax
  _QWORD *v10; // r13
  unsigned __int64 v11; // r12
  _QWORD *v12; // rcx

  v6 = -a2;
  if ( (signed __int32)(a2 + _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 344), a2)) > *(_DWORD *)(a1 + 340) )
  {
    _InterlockedAdd((volatile signed __int32 *)(a1 + 344), v6);
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 400), 3, 0) )
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 368), DelayedWorkQueue);
    return 3221225865LL;
  }
  else
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(a1 + 96);
      v8 = a2 + _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 16), a2);
      if ( v8 <= 0 )
      {
        result = 3221225621LL;
        _InterlockedAdd((volatile signed __int32 *)(a1 + 344), v6);
        return result;
      }
      if ( v8 <= *(_DWORD *)(v7 + 20) )
      {
        *a3 = v7 + 16LL * (int)(v8 - a2) + 24;
        return 0LL;
      }
      _InterlockedAdd((volatile signed __int32 *)(v7 + 16), v6);
      v10 = (_QWORD *)PfSnTraceBufferAllocate();
      if ( !v10 )
        break;
      v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 128));
      if ( *(_QWORD *)(a1 + 96) == v7 )
      {
        v12 = *(_QWORD **)(a1 + 112);
        if ( *v12 != a1 + 104 )
          __fastfail(3u);
        v10[1] = v12;
        *v10 = a1 + 104;
        *v12 = v10;
        *(_QWORD *)(a1 + 112) = v10;
        ++*(_DWORD *)(a1 + 120);
        *(_QWORD *)(a1 + 96) = v10;
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 128), v11);
      }
      else
      {
        KxReleaseSpinLock(a1 + 128);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v11);
        __writecr8(v11);
        ExFreePoolWithTag(v10, 0);
      }
    }
    result = 3221225626LL;
    _InterlockedAdd((volatile signed __int32 *)(a1 + 344), v6);
  }
  return result;
}
