/*
 * XREFs of PoDelistPowerStateTransitionBlocker @ 0x140B6A3B4
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x140331990 (PopUmpoSendPowerMessage.c)
 *     PopWakeDeviceList @ 0x140427ABC (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x140427CE4 (PopSleepDeviceList.c)
 *     PopManageTransitionRecordRequest @ 0x14094E638 (PopManageTransitionRecordRequest.c)
 *     PopInitSystemSleeperThread @ 0x140A219E8 (PopInitSystemSleeperThread.c)
 *     ExSwapinWorkerThreads @ 0x140A51B34 (ExSwapinWorkerThreads.c)
 *     PopIssueActionRequest @ 0x140A87C34 (PopIssueActionRequest.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 *     PopUnlockAfterSleepWorker @ 0x140B67B90 (PopUnlockAfterSleepWorker.c)
 *     PopFlushVolumes @ 0x140B67D40 (PopFlushVolumes.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 */

__int64 PoDelistPowerStateTransitionBlocker()
{
  unsigned int v0; // edi
  PVOID *v1; // rbx

  v0 = 0;
  if ( (unsigned int)(dword_140F0B2B4 - 1) > 1 )
  {
    return (unsigned int)-1073741101;
  }
  else
  {
    PopAcquireRwLockExclusive(&xmmword_140F0CF68);
    if ( (unsigned int)dword_140F0CF60 >= 0x40 )
    {
      v0 = -1073741801;
    }
    else
    {
      v1 = (PVOID *)&PopStateTransitonBlameStack[3 * (unsigned int)dword_140F0CF60];
      ObfDereferenceObject(v1[1]);
      ObfDereferenceObject(*v1);
      *(_OWORD *)v1 = 0LL;
      *((_OWORD *)v1 + 1) = 0LL;
      *((_OWORD *)v1 + 2) = 0LL;
      --dword_140F0CF60;
    }
    PopReleaseRwLock((signed __int64 *)&xmmword_140F0CF68);
  }
  return v0;
}
