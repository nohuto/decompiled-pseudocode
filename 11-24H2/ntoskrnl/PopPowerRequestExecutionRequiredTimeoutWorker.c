/*
 * XREFs of PopPowerRequestExecutionRequiredTimeoutWorker @ 0x140747FD0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopOkayToQueueNextWorkItem @ 0x14049FAE4 (PopOkayToQueueNextWorkItem.c)
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x140A314CC (PopPowerRequestHandleExecutionEnablementUpdate.c)
 *     PopAcquirePowerRequestPushLock @ 0x140A473B0 (PopAcquirePowerRequestPushLock.c)
 */

__int64 __fastcall PopPowerRequestExecutionRequiredTimeoutWorker(__int64 a1)
{
  LOBYTE(a1) = 1;
  PopAcquirePowerRequestPushLock(a1);
  PopPowerRequestHandleExecutionEnablementUpdate();
  PopOkayToQueueNextWorkItem((__int64)&unk_140F0E2C8);
  return PopReleaseRwLock(&PopPowerRequestLock);
}
