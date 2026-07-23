/*
 * XREFs of PopAcquirePowerRequestPushLock @ 0x140A473B0
 * Callers:
 *     PopPowerRequestCreateCommon @ 0x1402BAAB0 (PopPowerRequestCreateCommon.c)
 *     PopPowerRequestHandleRequestOverrideQueryResponse @ 0x140464C2C (PopPowerRequestHandleRequestOverrideQueryResponse.c)
 *     PopPowerRequestCallbackWorker @ 0x140464F00 (PopPowerRequestCallbackWorker.c)
 *     PopPowerRequestDebounceTimerWorker @ 0x140747F20 (PopPowerRequestDebounceTimerWorker.c)
 *     PopPowerRequestExecutionRequiredTimeoutWorker @ 0x140747FD0 (PopPowerRequestExecutionRequiredTimeoutWorker.c)
 *     PopPowerRequestNotificationsBegin @ 0x140748004 (PopPowerRequestNotificationsBegin.c)
 *     PopPowerRequestNotifyMobileHotspotChanged @ 0x14074809C (PopPowerRequestNotifyMobileHotspotChanged.c)
 *     PopPowerRequestOverrideInitialize @ 0x1407480E4 (PopPowerRequestOverrideInitialize.c)
 *     PopPowerRequestSpecialRequestSet @ 0x140A0DD9C (PopPowerRequestSpecialRequestSet.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x1402AE968 (PopAcquireRwLockShared.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 */

struct _KTHREAD *__fastcall PopAcquirePowerRequestPushLock(char a1)
{
  if ( a1 )
    return PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerRequestLock);
  else
    return (struct _KTHREAD *)PopAcquireRwLockShared(&PopPowerRequestLock);
}
