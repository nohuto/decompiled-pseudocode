/*
 * XREFs of TtmIsEnabled @ 0x1409BBDE8
 * Callers:
 *     PopPowerRequestCreateUserModeRequest @ 0x140331200 (PopPowerRequestCreateUserModeRequest.c)
 *     PopPowerSourceChangeCallback @ 0x1404D6D70 (PopPowerSourceChangeCallback.c)
 *     PopExecutePowerAction @ 0x140753574 (PopExecutePowerAction.c)
 *     PopPowerAggregatorHandleSystemTransitionEndIntent @ 0x1407597F0 (PopPowerAggregatorHandleSystemTransitionEndIntent.c)
 *     TtmiInitTerminals @ 0x14076F7E0 (TtmiInitTerminals.c)
 *     TtmiInitQueues @ 0x140770908 (TtmiInitQueues.c)
 *     PopPowerAggregatorNotifyCsStateExited @ 0x140902C54 (PopPowerAggregatorNotifyCsStateExited.c)
 *     TtmDispatchApi @ 0x140903408 (TtmDispatchApi.c)
 *     TtmpAcquireSessionById @ 0x140903BF4 (TtmpAcquireSessionById.c)
 *     PopPowerRequestCallbackDisplayRequired @ 0x140903ED0 (PopPowerRequestCallbackDisplayRequired.c)
 *     PopControlMonitor @ 0x1409B7F80 (PopControlMonitor.c)
 *     PopPowerRequestDelete @ 0x1409BAA40 (PopPowerRequestDelete.c)
 *     PopNotifyConsoleUserPresent @ 0x1409BB660 (PopNotifyConsoleUserPresent.c)
 *     PopAdaptiveGetConsoleSessionState @ 0x1409BB9C4 (PopAdaptiveGetConsoleSessionState.c)
 *     PopProcessSessionDisplayStateChange @ 0x1409BBD90 (PopProcessSessionDisplayStateChange.c)
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 *     PopIssueActionRequest @ 0x140A87C34 (PopIssueActionRequest.c)
 *     PopPowerRequestNotifyUserSessionAttributed @ 0x140ABB508 (PopPowerRequestNotifyUserSessionAttributed.c)
 *     PopPowerRequestInitialize @ 0x140C2DE8C (PopPowerRequestInitialize.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x14042F240 (PsIsCurrentThreadInServerSilo.c)
 */

char TtmIsEnabled()
{
  char v0; // bl

  v0 = 1;
  if ( TtmpEnabled != 1 || PsIsCurrentThreadInServerSilo() )
    return 0;
  return v0;
}
