/*
 * XREFs of PopPowerRequestExecutionRequiredTimeoutWorker @ 0x14073DC20
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopOkayToQueueNextWorkItem @ 0x1404A4824 (PopOkayToQueueNextWorkItem.c)
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x140A37004 (PopPowerRequestHandleExecutionEnablementUpdate.c)
 *     PopAcquirePowerRequestPushLock @ 0x140A4D1E4 (PopAcquirePowerRequestPushLock.c)
 */

__int64 __fastcall PopPowerRequestExecutionRequiredTimeoutWorker(__int64 a1)
{
  LOBYTE(a1) = 1;
  PopAcquirePowerRequestPushLock(a1);
  PopPowerRequestHandleExecutionEnablementUpdate();
  PopOkayToQueueNextWorkItem((__int64)&unk_140F0DAE8);
  return PopReleaseRwLock(&PopPowerRequestLock);
}
