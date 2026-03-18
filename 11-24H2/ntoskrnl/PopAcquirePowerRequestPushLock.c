/*
 * XREFs of PopAcquirePowerRequestPushLock @ 0x140A50600
 * Callers:
 *     PopPowerRequestCreateCommon @ 0x1403313A8 (PopPowerRequestCreateCommon.c)
 *     PopPowerRequestHandleRequestOverrideQueryResponse @ 0x14046BFAC (PopPowerRequestHandleRequestOverrideQueryResponse.c)
 *     PopPowerRequestCallbackWorker @ 0x14046C280 (PopPowerRequestCallbackWorker.c)
 *     PopPowerRequestDebounceTimerWorker @ 0x140749BF0 (PopPowerRequestDebounceTimerWorker.c)
 *     PopPowerRequestExecutionRequiredTimeoutWorker @ 0x140749CA0 (PopPowerRequestExecutionRequiredTimeoutWorker.c)
 *     PopPowerRequestNotificationsBegin @ 0x140749CD4 (PopPowerRequestNotificationsBegin.c)
 *     PopPowerRequestNotifyMobileHotspotChanged @ 0x140749D6C (PopPowerRequestNotifyMobileHotspotChanged.c)
 *     PopPowerRequestOverrideInitialize @ 0x140749DB4 (PopPowerRequestOverrideInitialize.c)
 *     PopPowerRequestSpecialRequestSet @ 0x140A14F84 (PopPowerRequestSpecialRequestSet.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x1403B5E64 (PopAcquireRwLockShared.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 */

struct _KTHREAD *__fastcall PopAcquirePowerRequestPushLock(char a1)
{
  if ( a1 )
    return PopAcquireRwLockExclusive(&PopPowerRequestLock);
  else
    return (struct _KTHREAD *)PopAcquireRwLockShared((volatile signed __int64 *)&PopPowerRequestLock);
}
