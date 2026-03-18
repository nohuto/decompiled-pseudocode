/*
 * XREFs of PopEvaluateGlobalUserStatus @ 0x1409BCF98
 * Callers:
 *     PopUserPresenceHostStateChange @ 0x1409BA7C8 (PopUserPresenceHostStateChange.c)
 *     PopSetGlobalUserStatus @ 0x1409BCF2C (PopSetGlobalUserStatus.c)
 * Callees:
 *     PopPrintEx @ 0x1402CB174 (PopPrintEx.c)
 *     RtlNumberOfSetBits @ 0x14042B480 (RtlNumberOfSetBits.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 *     PopSetPowerSettingValueAcDc @ 0x1409BC77C (PopSetPowerSettingValueAcDc.c)
 *     PopPrintUserActivityPresence @ 0x1409BCFE4 (PopPrintUserActivityPresence.c)
 *     PopDiagTraceSessionStateCounted @ 0x140A8A9BC (PopDiagTraceSessionStateCounted.c)
 *     PopUmpoSendUserPresencePredictionAction @ 0x140AC0F0C (PopUmpoSendUserPresencePredictionAction.c)
 */

void __fastcall PopEvaluateGlobalUserStatus()
{
  unsigned int v0; // ebx
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // [rsp+50h] [rbp+8h] BYREF
  BOOL v5; // [rsp+58h] [rbp+10h] BYREF
  int v6; // [rsp+5Ch] [rbp+14h]

  v0 = PopHostGlobalUserPresenceState;
  if ( PopHostGlobalUserPresenceState == 3 )
  {
    if ( PopMaximumConnectionSessions )
      v0 = RtlNumberOfSetBits(&PopConnectionBitmap) == 0 ? 2 : 0;
    else
      v0 = 0;
  }
  if ( v0 != PopGlobalUserPresenceState )
  {
    v4 = v0;
    ++PopGlobalUserPresenceStateTransitions;
    PopGlobalUserPresenceState = v0;
    v1 = PopPrintUserActivityPresence(v0);
    PopPrintEx(3, (int)"PopAdaptive: Global user presence/activity state: %S id: %I32u\n", v1);
    PopDiagTraceSessionStateCounted(v3, v2, v0);
    PopSetPowerSettingValueAcDc((__int64)&GUID_GLOBAL_USER_PRESENCE, 4u, (__int64)&v4);
    v5 = v0 != 0;
    PopUmpoSendUserPresencePredictionAction(v0 != 0);
    v6 = PopGlobalUserPresenceStateTransitions;
    ZwUpdateWnfStateData((__int64)&WNF_PO_SLEEP_STUDY_USER_PRESENCE_CHANGED, (__int64)&v5);
  }
}
