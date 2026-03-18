/*
 * XREFs of PopAcquirePowerRequestPushLock @ 0x140A4D1E4
 * Callers:
 *     PopPowerRequestCreateCommon @ 0x140425C44 (PopPowerRequestCreateCommon.c)
 *     PopPowerRequestHandleRequestOverrideQueryResponse @ 0x14046D61C (PopPowerRequestHandleRequestOverrideQueryResponse.c)
 *     PopPowerRequestCallbackWorker @ 0x14046D8F0 (PopPowerRequestCallbackWorker.c)
 *     PopPowerRequestDebounceTimerWorker @ 0x14073DB70 (PopPowerRequestDebounceTimerWorker.c)
 *     PopPowerRequestExecutionRequiredTimeoutWorker @ 0x14073DC20 (PopPowerRequestExecutionRequiredTimeoutWorker.c)
 *     PopPowerRequestNotificationsBegin @ 0x14073DC54 (PopPowerRequestNotificationsBegin.c)
 *     PopPowerRequestNotifyMobileHotspotChanged @ 0x14073DCEC (PopPowerRequestNotifyMobileHotspotChanged.c)
 *     PopPowerRequestOverrideInitialize @ 0x14073DD34 (PopPowerRequestOverrideInitialize.c)
 *     PopPowerRequestSpecialRequestSet @ 0x140862C10 (PopPowerRequestSpecialRequestSet.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x140204514 (PopAcquireRwLockShared.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 */

struct _KTHREAD *__fastcall PopAcquirePowerRequestPushLock(char a1)
{
  if ( a1 )
    return PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerRequestLock);
  else
    return (struct _KTHREAD *)PopAcquireRwLockShared(&PopPowerRequestLock);
}
