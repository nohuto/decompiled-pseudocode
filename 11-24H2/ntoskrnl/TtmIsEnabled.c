/*
 * XREFs of TtmIsEnabled @ 0x1409A2438
 * Callers:
 *     PopPowerRequestCreateUserModeRequest @ 0x1402B9970 (PopPowerRequestCreateUserModeRequest.c)
 *     PopPowerSourceChangeCallback @ 0x1404D01C0 (PopPowerSourceChangeCallback.c)
 *     PopExecutePowerAction @ 0x140751894 (PopExecutePowerAction.c)
 *     PopPowerAggregatorHandleSystemTransitionEndIntent @ 0x140757C90 (PopPowerAggregatorHandleSystemTransitionEndIntent.c)
 *     TtmiInitTerminals @ 0x14076FA00 (TtmiInitTerminals.c)
 *     TtmiInitQueues @ 0x140770B28 (TtmiInitQueues.c)
 *     PopPowerRequestCallbackDisplayRequired @ 0x14099B3A0 (PopPowerRequestCallbackDisplayRequired.c)
 *     TtmDispatchApi @ 0x14099D9B8 (TtmDispatchApi.c)
 *     TtmpAcquireSessionById @ 0x14099E1A4 (TtmpAcquireSessionById.c)
 *     PopControlMonitor @ 0x14099E5D0 (PopControlMonitor.c)
 *     PopPowerRequestDelete @ 0x1409A1090 (PopPowerRequestDelete.c)
 *     PopNotifyConsoleUserPresent @ 0x1409A1CB0 (PopNotifyConsoleUserPresent.c)
 *     PopAdaptiveGetConsoleSessionState @ 0x1409A2014 (PopAdaptiveGetConsoleSessionState.c)
 *     PopProcessSessionDisplayStateChange @ 0x1409A23E0 (PopProcessSessionDisplayStateChange.c)
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 *     PopPowerAggregatorNotifyCsStateExited @ 0x140A6E534 (PopPowerAggregatorNotifyCsStateExited.c)
 *     PopIssueActionRequest @ 0x140A84124 (PopIssueActionRequest.c)
 *     PopPowerRequestNotifyUserSessionAttributed @ 0x140AB6528 (PopPowerRequestNotifyUserSessionAttributed.c)
 *     PopPowerRequestInitialize @ 0x140C2FFAC (PopPowerRequestInitialize.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140421410 (PsIsCurrentThreadInServerSilo.c)
 */

char TtmIsEnabled()
{
  char v0; // bl

  v0 = 1;
  if ( TtmpEnabled != 1 || PsIsCurrentThreadInServerSilo() )
    return 0;
  return v0;
}
