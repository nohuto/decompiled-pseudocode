/*
 * XREFs of PopReleasePowerRequestPushLock @ 0x140A56D68
 * Callers:
 *     PopPowerRequestCreateCommon @ 0x140425C44 (PopPowerRequestCreateCommon.c)
 *     PopPowerRequestHandleRequestOverrideQueryResponse @ 0x14046D61C (PopPowerRequestHandleRequestOverrideQueryResponse.c)
 *     PopPowerRequestCallbackWorker @ 0x14046D8F0 (PopPowerRequestCallbackWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 */

__int64 PopReleasePowerRequestPushLock()
{
  return PopReleaseRwLock(&PopPowerRequestLock);
}
