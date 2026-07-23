/*
 * XREFs of PoDelistPowerStateTransitionBlocker @ 0x140B6BAC4
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x1402BB090 (PopUmpoSendPowerMessage.c)
 *     PopWakeDeviceList @ 0x14041BC4C (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x14041BE74 (PopSleepDeviceList.c)
 *     PopInitSystemSleeperThread @ 0x1408F8198 (PopInitSystemSleeperThread.c)
 *     PopManageTransitionRecordRequest @ 0x140A44A04 (PopManageTransitionRecordRequest.c)
 *     ExSwapinWorkerThreads @ 0x140A48C04 (ExSwapinWorkerThreads.c)
 *     PopIssueActionRequest @ 0x140A84124 (PopIssueActionRequest.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 *     PopUnlockAfterSleepWorker @ 0x140B69CD0 (PopUnlockAfterSleepWorker.c)
 *     PopFlushVolumes @ 0x140B69E80 (PopFlushVolumes.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 */

__int64 PoDelistPowerStateTransitionBlocker()
{
  unsigned int v0; // edi
  PVOID *v1; // rbx

  v0 = 0;
  if ( (unsigned int)(dword_140F0BB34 - 1) > 1 )
  {
    return (unsigned int)-1073741101;
  }
  else
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)&xmmword_140F0D288);
    if ( (unsigned int)dword_140F0D280 >= 0x40 )
    {
      v0 = -1073741801;
    }
    else
    {
      v1 = (PVOID *)&PopStateTransitonBlameStack[3 * (unsigned int)dword_140F0D280];
      ObfDereferenceObject(v1[1]);
      ObfDereferenceObject(*v1);
      *(_OWORD *)v1 = 0LL;
      *((_OWORD *)v1 + 1) = 0LL;
      *((_OWORD *)v1 + 2) = 0LL;
      --dword_140F0D280;
    }
    PopReleaseRwLock((signed __int64 *)&xmmword_140F0D288);
  }
  return v0;
}
