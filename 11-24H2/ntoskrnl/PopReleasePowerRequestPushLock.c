/*
 * XREFs of PopReleasePowerRequestPushLock @ 0x140A5A6BC
 * Callers:
 *     PopPowerRequestCreateCommon @ 0x1403313A8 (PopPowerRequestCreateCommon.c)
 *     PopPowerRequestHandleRequestOverrideQueryResponse @ 0x14046BFAC (PopPowerRequestHandleRequestOverrideQueryResponse.c)
 *     PopPowerRequestCallbackWorker @ 0x14046C280 (PopPowerRequestCallbackWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 */

__int64 PopReleasePowerRequestPushLock()
{
  return PopReleaseRwLock((signed __int64 *)&PopPowerRequestLock);
}
