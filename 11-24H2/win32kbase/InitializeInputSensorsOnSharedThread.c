/*
 * XREFs of InitializeInputSensorsOnSharedThread @ 0x1402129C0
 * Callers:
 *     UserActivateMITInputProcessingHelper @ 0x140215040 (UserActivateMITInputProcessingHelper.c)
 * Callees:
 *     _anonymous_namespace_::InitializeInputSensorPass1Worker @ 0x1400E4154 (_anonymous_namespace_--InitializeInputSensorPass1Worker.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_sd @ 0x140211F1C (WPP_RECORDER_AND_TRACE_SF_sd.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall InitializeInputSensorsOnSharedThread(__int64 a1)
{
  int v1; // esi
  __int64 v2; // rcx
  __int64 UserSessionState; // r14
  unsigned int v4; // ebp
  _DWORD *v5; // rbx
  char v6; // di
  __int64 v7; // rax
  char v8; // r15
  char v9; // r12
  const char *v10; // rbx
  __int64 v11; // rax
  unsigned int v12; // ebp
  _QWORD *i; // rbx
  char v14; // r15
  const char *v15; // rbx
  __int64 v16; // rax
  __int64 v18; // [rsp+48h] [rbp-30h]

  v1 = -1073741823;
  UserSessionState = W32GetUserSessionState(a1);
  v4 = 0;
  v5 = (_DWORD *)(UserSessionState + 3136);
  v6 = 1;
  while ( 1 )
  {
    if ( (unsigned int)(*v5 - 1) > 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1181);
    if ( *v5 == 2 )
    {
      v7 = W32GetUserSessionState(v2);
      v1 = anonymous_namespace_::InitializeInputSensorPass1Worker(
             v4,
             *(struct IRegisterInputDispatcherObjects **)(v7 + 19272));
      if ( v1 < 0 )
        break;
    }
    ++v4;
    v5 += 12;
    if ( v4 >= 3 )
      goto LABEL_15;
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
  {
    v8 = 0;
  }
  v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = *(const char **)(UserSessionState + 48LL * v4 + 3160);
    v11 = W32GetUserSessionState(6LL * v4);
    WPP_RECORDER_AND_TRACE_SF_sd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v8,
      v9,
      *(_QWORD *)(v11 + 69400),
      2u,
      2u,
      0xFu,
      (__int64)&WPP_ae9eb3bdebde318a8206422ca8ad61bb_Traceguids,
      v10,
      v1);
  }
LABEL_15:
  v12 = 0;
  for ( i = (_QWORD *)(UserSessionState + 3144); ; i += 6 )
  {
    if ( *((_DWORD *)i - 2) == 2 )
    {
      v1 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 16LL))(*i);
      if ( v1 < 0 )
        break;
    }
    if ( ++v12 >= 3 )
      return (unsigned int)v1;
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
  {
    v6 = 0;
  }
  v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = *(const char **)(UserSessionState + 48LL * v12 + 3160);
    v16 = W32GetUserSessionState(6LL * v12);
    LODWORD(v18) = v1;
    WPP_RECORDER_AND_TRACE_SF_sd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v6,
      v14,
      *(_QWORD *)(v16 + 69400),
      2u,
      2u,
      0x10u,
      (__int64)&WPP_ae9eb3bdebde318a8206422ca8ad61bb_Traceguids,
      v15,
      v18);
  }
  return (unsigned int)v1;
}
