/*
 * XREFs of NdisQueryDiagnosticSetting @ 0x140143690
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x14009EAD0 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_SD @ 0x1400AA238 (WPP_RECORDER_SF_SD_ea_1400AA238.c)
 *     wcscmp_0 @ 0x1400EDF16 (wcscmp_0.c)
 */

__int64 __fastcall NdisQueryDiagnosticSetting(const wchar_t *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v5; // rdx
  __int64 v6; // r8
  int v7; // [rsp+20h] [rbp-28h]

  if ( !wcscmp_0(a1, L"NblTracking") )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_SD(*((_QWORD *)WPP_GLOBAL_Control + 8), v2, v3, 0xFu, v7, a1);
    return *(unsigned int *)ndisNblTrackerMode;
  }
  else if ( !wcscmp_0(a1, L"OidWatchdogTimeout") )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_SD(*((_QWORD *)WPP_GLOBAL_Control + 8), v5, v6, 0x10u, v7, a1);
    return ndisWatchdogOidTimeout;
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        0x1Bu,
        0x11u,
        (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
        a1);
    return 0xFFFFFFFFLL;
  }
}
