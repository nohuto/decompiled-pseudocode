/*
 * XREFs of InitializeSensorExplicitly @ 0x140212C10
 * Callers:
 *     ActivateKSTInputProcessingHelper @ 0x1402155F0 (ActivateKSTInputProcessingHelper.c)
 * Callees:
 *     _anonymous_namespace_::InitializeInputSensorPass1Worker @ 0x1400E4154 (_anonymous_namespace_--InitializeInputSensorPass1Worker.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_sd @ 0x140211F1C (WPP_RECORDER_AND_TRACE_SF_sd.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall InitializeSensorExplicitly(__int64 a1, struct IRegisterInputDispatcherObjects *a2)
{
  unsigned int v3; // edi
  __int64 v4; // rbx
  int v5; // esi
  char v6; // di
  char v7; // bp
  const char *v8; // rbx
  __int64 v9; // r9
  char v10; // di
  char v11; // bp
  const char *v12; // rbx
  __int64 v13; // r9

  v3 = a1;
  v4 = W32GetUserSessionState(a1) + 48LL * (int)a1;
  if ( !*(_QWORD *)(v4 + 3144) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1133);
  v5 = anonymous_namespace_::InitializeInputSensorPass1Worker(v3, a2);
  if ( v5 < 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v10 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v10 = 0;
    }
    v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = *(const char **)(v4 + 3160);
      v13 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 69400);
      WPP_RECORDER_AND_TRACE_SF_sd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v10,
        v11,
        v13,
        2u,
        2u,
        0xEu,
        (__int64)&WPP_ae9eb3bdebde318a8206422ca8ad61bb_Traceguids,
        v12,
        v5);
    }
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 3144) + 16LL))(*(_QWORD *)(v4 + 3144));
    if ( v5 < 0 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v6 = 0;
      }
      v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v8 = *(const char **)(v4 + 3160);
        v9 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 69400);
        WPP_RECORDER_AND_TRACE_SF_sd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v6,
          v7,
          v9,
          2u,
          2u,
          0xDu,
          (__int64)&WPP_ae9eb3bdebde318a8206422ca8ad61bb_Traceguids,
          v8,
          v5);
      }
    }
  }
  return (unsigned int)v5;
}
