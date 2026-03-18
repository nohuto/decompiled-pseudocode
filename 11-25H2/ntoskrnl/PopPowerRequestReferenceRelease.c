/*
 * XREFs of PopPowerRequestReferenceRelease @ 0x14046D3D0
 * Callers:
 *     PopApplyLegacyPowerRequestFlags @ 0x14046D188 (PopApplyLegacyPowerRequestFlags.c)
 *     PpmEndHighPerfRequest @ 0x14046D2B4 (PpmEndHighPerfRequest.c)
 *     PoClearPowerRequest @ 0x14046D390 (PoClearPowerRequest.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x1404AEC3C (PpmDisableHighPerfRequestDeferredExpiration.c)
 *     PpmHighPerfRequestExpiration @ 0x1405D2CE0 (PpmHighPerfRequestExpiration.c)
 *     PopPowerRequestActionInfo @ 0x140862028 (PopPowerRequestActionInfo.c)
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x140A2BD88 (PopPowerAggregatorEnterScreenOff.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x14046D734 (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     PopPowerRequestCallbackWorker @ 0x14046D8F0 (PopPowerRequestCallbackWorker.c)
 *     PopDiagTracePowerRequestChange @ 0x14046DABC (PopDiagTracePowerRequestChange.c)
 *     PopQueueWorkItem @ 0x140497BA0 (PopQueueWorkItem.c)
 */

__int64 __fastcall PopPowerRequestReferenceRelease(_DWORD *Object, unsigned int a2)
{
  __int64 v2; // rsi
  unsigned __int8 CurrentIrql; // al
  _QWORD *v5; // rdi
  int v6; // ebx
  int v8; // eax
  int v9; // eax
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = (int)a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v10 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    *((_QWORD *)&v10 + 1) = &v10;
    *(_QWORD *)&v10 = &v10;
  }
  v5 = (_QWORD *)((unsigned __int64)&v10 & -(__int64)(CurrentIrql < 2u));
  if ( a2 <= 5
    && (v8 = Object[5], _bittest(&v8, a2))
    && (a2 != 3 || (_KPROCESS *)*((_QWORD *)Object + 17) == KeGetCurrentThread()->ApcState.Process) )
  {
    KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
    v9 = Object[v2 + 10];
    if ( v9 )
    {
      Object[v2 + 10] = v9 - 1;
      PopPowerRequestEvaluatePendingRequestStatus(Object);
      PopDiagTracePowerRequestChange(Object);
      v6 = 0;
    }
    else
    {
      v6 = -1073741637;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v6 >= 0 )
    {
      if ( v5 )
      {
        if ( (_QWORD *)*v5 != v5 )
          PopPowerRequestCallbackWorker(v5);
      }
      else
      {
        PopQueueWorkItem(&PopPowerRequestUpdateWorkItem, 0LL);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v6;
}
