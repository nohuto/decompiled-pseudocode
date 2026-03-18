/*
 * XREFs of ActivateKSTInputProcessingHelper @ 0x1402155F0
 * Callers:
 *     UserKSTInitialize @ 0x140215930 (UserKSTInitialize.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ActivateKSTInputProcessingHelper@KST@InputTraceLogging@@SAXXZ @ 0x14019F484 (-ActivateKSTInputProcessingHelper@KST@InputTraceLogging@@SAXXZ.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A3C28 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     InitializeSensorExplicitly @ 0x140212C10 (InitializeSensorExplicitly.c)
 *     ?ShouldKSTInitializeHidSensor@@YA_NXZ @ 0x1402155D4 (-ShouldKSTInitializeHidSensor@@YA_NXZ.c)
 */

_BOOL8 ActivateKSTInputProcessingHelper()
{
  char v0; // di
  char v1; // dl
  char v2; // r8
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rax
  char v13; // dl

  v0 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v1 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v1 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v2 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v2 = 0;
  }
  if ( v1 || v2 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v1,
      v2,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      2,
      20,
      (__int64)&WPP_f0b946dda9d5374ecc6b238217c99e48_Traceguids);
  InputTraceLogging::KST::ActivateKSTInputProcessingHelper();
  if ( !*(_QWORD *)(W32GetUserSessionState(v3) + 19280) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 288);
  UserSessionState = W32GetUserSessionState(v4);
  v6 = InitializeSensorExplicitly(0LL, *(struct IRegisterInputDispatcherObjects **)(UserSessionState + 19280));
  if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline()
    && v6 >= 0
    && ShouldKSTInitializeHidSensor(v8, v7, v9, v10) )
  {
    v12 = W32GetUserSessionState(v11);
    v6 = InitializeSensorExplicitly(2LL, *(struct IRegisterInputDispatcherObjects **)(v12 + 19280));
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v13 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v0 = 0;
  if ( v13 || v0 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      v0,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      2,
      21,
      (__int64)&WPP_f0b946dda9d5374ecc6b238217c99e48_Traceguids);
  return v6 >= 0;
}
