/*
 * XREFs of PoDelistPowerStateTransitionBlocker @ 0x140B5A8B4
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x140426264 (PopUmpoSendPowerMessage.c)
 *     PopWakeDeviceList @ 0x14043154C (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x140431774 (PopSleepDeviceList.c)
 *     PopManageTransitionRecordRequest @ 0x1409225C8 (PopManageTransitionRecordRequest.c)
 *     PopInitSystemSleeperThread @ 0x140A16CC8 (PopInitSystemSleeperThread.c)
 *     ExSwapinWorkerThreads @ 0x140A4E204 (ExSwapinWorkerThreads.c)
 *     PopIssueActionRequest @ 0x140A83104 (PopIssueActionRequest.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 *     PopUnlockAfterSleepWorker @ 0x140B57D60 (PopUnlockAfterSleepWorker.c)
 *     PopFlushVolumes @ 0x140B57F10 (PopFlushVolumes.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 */

__int64 PoDelistPowerStateTransitionBlocker()
{
  unsigned int v0; // edi
  PVOID *v1; // rbx

  v0 = 0;
  if ( (unsigned int)(dword_140F0B014 - 1) > 1 )
  {
    return (unsigned int)-1073741101;
  }
  else
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)&xmmword_140F0C928);
    if ( (unsigned int)dword_140F0C920 >= 0x40 )
    {
      v0 = -1073741801;
    }
    else
    {
      v1 = (PVOID *)&PopStateTransitonBlameStack[3 * (unsigned int)dword_140F0C920];
      ObfDereferenceObject(v1[1]);
      ObfDereferenceObject(*v1);
      *(_OWORD *)v1 = 0LL;
      *((_OWORD *)v1 + 1) = 0LL;
      *((_OWORD *)v1 + 2) = 0LL;
      --dword_140F0C920;
    }
    PopReleaseRwLock((signed __int64 *)&xmmword_140F0C928);
  }
  return v0;
}
