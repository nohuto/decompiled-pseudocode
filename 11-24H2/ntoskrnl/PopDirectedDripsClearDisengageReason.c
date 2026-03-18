/*
 * XREFs of PopDirectedDripsClearDisengageReason @ 0x14046C80C
 * Callers:
 *     PnpRemoveDeviceActionRequests @ 0x14046C600 (PnpRemoveDeviceActionRequests.c)
 *     PnpDeviceActionWorker @ 0x14046CD70 (PnpDeviceActionWorker.c)
 *     PnpRemoveDeviceActionRequestFromQueue @ 0x1405A7280 (PnpRemoveDeviceActionRequestFromQueue.c)
 *     PopDirectedDripsDisengageTimerCallback @ 0x1405CF990 (PopDirectedDripsDisengageTimerCallback.c)
 *     PopPowerAggregatorEngageModernStandby @ 0x140759514 (PopPowerAggregatorEngageModernStandby.c)
 *     PopDripsWatchdogCallbackWorker @ 0x14075FC80 (PopDripsWatchdogCallbackWorker.c)
 *     PopDirectedDripsNotify @ 0x140A69400 (PopDirectedDripsNotify.c)
 * Callees:
 *     PopQueueDirectedDripsWork @ 0x14046D734 (PopQueueDirectedDripsWork.c)
 */

__int64 __fastcall PopDirectedDripsClearDisengageReason(char a1)
{
  int v1; // edx
  signed __int32 v2; // r8d
  __int64 result; // rax
  __int64 v4; // rcx
  int v5; // ett

  v1 = 1 << a1;
  _m_prefetchw(&dword_140F0DDB8);
  v2 = _InterlockedAnd(&dword_140F0DDB8, ~(1 << a1));
  _m_prefetchw(&PopDirectedDripsState);
  LODWORD(result) = PopDirectedDripsState.HandleAttributes;
  do
  {
    v4 = (unsigned int)result;
    v5 = result;
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)&PopDirectedDripsState,
                             result,
                             result);
  }
  while ( v5 != (_DWORD)result );
  if ( (result & 1) != 0 && (v2 & v1) != 0 )
    return PopQueueDirectedDripsWork(v4, 2LL);
  return result;
}
