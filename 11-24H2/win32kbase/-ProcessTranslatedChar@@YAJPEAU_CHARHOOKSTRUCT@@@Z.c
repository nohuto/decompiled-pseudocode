/*
 * XREFs of ?ProcessTranslatedChar@@YAJPEAU_CHARHOOKSTRUCT@@@Z @ 0x1400119F0
 * Callers:
 *     <none>
 * Callees:
 *     ImpQueueCharacter @ 0x140011B18 (ImpQueueCharacter.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140136080 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1401A2654 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 __fastcall ProcessTranslatedChar(struct _CHARHOOKSTRUCT *a1)
{
  __int16 v2; // r8
  unsigned int v3; // esi
  __int64 v4; // rbp
  __int64 v5; // r14
  unsigned __int16 v6; // dx
  unsigned __int16 v7; // cx
  unsigned __int16 v8; // dx
  unsigned __int16 v9; // bx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _DWORD *InputMonitorSessionState; // rdi
  __int64 v13; // r8
  __int64 v15; // [rsp+40h] [rbp+8h]

  v15 = (unsigned int)Feature_WebThreatDefenseToggle__private_featureState;
  if ( (Feature_WebThreatDefenseToggle__private_featureState & 0x10) == 0 )
  {
    LODWORD(v15) = Feature_WebThreatDefenseToggle__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(&Feature_WebThreatDefenseToggle__private_descriptor, v15, 3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v15,
      3LL,
      &Feature_WebThreatDefenseToggle__private_descriptor);
  }
  v2 = *((_WORD *)a1 + 9);
  v3 = *((_DWORD *)a1 + 5);
  v4 = *((_QWORD *)a1 + 3);
  v5 = *(_QWORD *)a1;
  v6 = v2 & 2 | 4;
  if ( (v2 & 4) == 0 )
    v6 = v2 & 2;
  v7 = v6 | 0x10;
  if ( (v2 & 0x10) == 0 )
    v7 = v6;
  v8 = v7 | 8;
  if ( (v2 & 8) == 0 )
    v8 = v7;
  v9 = v8 | 0x20;
  if ( (v2 & 0x20) == 0 )
    v9 = v8;
  *((_WORD *)a1 + 9) = v9;
  InputMonitorSessionState = (_DWORD *)W32GetInputMonitorSessionState();
  if ( !InputMonitorSessionState )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v13);
  if ( *InputMonitorSessionState == (unsigned int)PsGetCurrentProcessSessionId() )
    return ImpQueueCharacter(v5, v4, v3, v9);
  else
    return 3221226021LL;
}
