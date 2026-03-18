/*
 * XREFs of PopPowerRequestReferenceAcquire @ 0x14046D4E0
 * Callers:
 *     PopApplyLegacyPowerRequestFlags @ 0x14046D188 (PopApplyLegacyPowerRequestFlags.c)
 *     PpmBeginHighPerfRequest @ 0x14046D320 (PpmBeginHighPerfRequest.c)
 *     PoSetPowerRequest @ 0x14046D350 (PoSetPowerRequest.c)
 *     PopPowerRequestActionInfo @ 0x140862028 (PopPowerRequestActionInfo.c)
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x140A2BD88 (PopPowerAggregatorEnterScreenOff.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x14046D734 (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     PopPowerRequestCallbackWorker @ 0x14046D8F0 (PopPowerRequestCallbackWorker.c)
 *     PopDiagTracePowerRequestChange @ 0x14046DABC (PopDiagTracePowerRequestChange.c)
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
      else if ( _InterlockedIncrement(&dword_140F0D9C0) == 1 )
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
