/*
 * XREFs of PopPowerRequestExecutionRequiredTimeoutWorker @ 0x140749CA0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopOkayToQueueNextWorkItem @ 0x1404A4D54 (PopOkayToQueueNextWorkItem.c)
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x140A3BCEC (PopPowerRequestHandleExecutionEnablementUpdate.c)
 *     PopAcquirePowerRequestPushLock @ 0x140A50600 (PopAcquirePowerRequestPushLock.c)
 */

__int64 __fastcall PopPowerRequestExecutionRequiredTimeoutWorker(__int64 a1)
{
  LOBYTE(a1) = 1;
  PopAcquirePowerRequestPushLock(a1);
  PopPowerRequestHandleExecutionEnablementUpdate();
  PopOkayToQueueNextWorkItem((__int64)&unk_140F0E128);
  return PopReleaseRwLock((signed __int64 *)&PopPowerRequestLock);
}
