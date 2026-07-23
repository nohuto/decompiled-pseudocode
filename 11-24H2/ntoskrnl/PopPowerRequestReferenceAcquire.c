/*
 * XREFs of PopPowerRequestReferenceAcquire @ 0x140464AF0
 * Callers:
 *     PopApplyLegacyPowerRequestFlags @ 0x140464798 (PopApplyLegacyPowerRequestFlags.c)
 *     PpmBeginHighPerfRequest @ 0x140464930 (PpmBeginHighPerfRequest.c)
 *     PoSetPowerRequest @ 0x140464960 (PoSetPowerRequest.c)
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 *     PopPowerRequestActionInfo @ 0x140A0DBB8 (PopPowerRequestActionInfo.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x140A6E038 (PopPowerAggregatorEnterScreenOff.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x140464D44 (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     PopPowerRequestCallbackWorker @ 0x140464F00 (PopPowerRequestCallbackWorker.c)
 *     PopDiagTracePowerRequestChange @ 0x1404650CC (PopDiagTracePowerRequestChange.c)
 */

__int64 __fastcall PopPowerRequestReferenceAcquire(_DWORD *Object, unsigned int a2)
{
  __int64 v2; // rbp
  unsigned __int8 CurrentIrql; // al
  _QWORD *v5; // rdi
  int v6; // ebx
  __int128 v8; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = (int)a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v8 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    *((_QWORD *)&v8 + 1) = &v8;
    *(_QWORD *)&v8 = &v8;
  }
  v5 = (_QWORD *)((unsigned __int64)&v8 & -(__int64)(CurrentIrql < 2u));
  if ( a2 <= 5
    && ((1 << a2) & Object[5]) != 0
    && (a2 != 3 || (_KPROCESS *)*((_QWORD *)Object + 17) == KeGetCurrentThread()->ApcState.Process) )
  {
    KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
    if ( Object[v2 + 10] == -1 )
    {
      v6 = -1073741675;
    }
    else
    {
      Object[7] &= ~(1 << v2);
      ++Object[v2 + 10];
      PopPowerRequestEvaluatePendingRequestStatus(Object);
      PopDiagTracePowerRequestChange(Object);
      v6 = 0;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v6 >= 0 )
    {
      if ( v5 )
      {
        if ( (_QWORD *)*v5 != v5 )
          PopPowerRequestCallbackWorker(v5);
      }
      else if ( _InterlockedIncrement(&dword_140F0E3E0) == 1 )
      {
        ExQueueWorkItem(&PopPowerRequestUpdateWorkItem, CriticalWorkQueue);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v6;
}
