/*
 * XREFs of PopEvaluateGlobalUserStatus @ 0x1409651E8
 * Callers:
 *     PopSetGlobalUserStatus @ 0x14096517C (PopSetGlobalUserStatus.c)
 *     PopUserPresenceHostStateChange @ 0x140A86AB0 (PopUserPresenceHostStateChange.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140395F40 (RtlNumberOfSetBits.c)
 *     PopPrintEx @ 0x1403A9514 (PopPrintEx.c)
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 *     PopSetPowerSettingValueAcDc @ 0x1409649CC (PopSetPowerSettingValueAcDc.c)
 *     PopPrintUserActivityPresence @ 0x140965234 (PopPrintUserActivityPresence.c)
 *     PopDiagTraceSessionStateCounted @ 0x140A85EE4 (PopDiagTraceSessionStateCounted.c)
 *     PopUmpoSendUserPresencePredictionAction @ 0x140ABCE5C (PopUmpoSendUserPresencePredictionAction.c)
 */

void PopEvaluateGlobalUserStatus()
{
  unsigned int v0; // ebx
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // [rsp+50h] [rbp+8h] BYREF
  BOOL Buffer; // [rsp+58h] [rbp+10h] BYREF
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
    Buffer = v0 != 0;
    PopUmpoSendUserPresencePredictionAction(v0 != 0);
    v6 = PopGlobalUserPresenceStateTransitions;
    ZwUpdateWnfStateData(&WNF_PO_SLEEP_STUDY_USER_PRESENCE_CHANGED, &Buffer, 8u, 0LL, 0LL, 0, 0);
  }
}
