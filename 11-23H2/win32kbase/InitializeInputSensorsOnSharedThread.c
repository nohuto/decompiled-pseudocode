/*
 * XREFs of InitializeInputSensorsOnSharedThread @ 0x1C01E81B4
 * Callers:
 *     UserActivateMITInputProcessingHelper @ 0x1C01EC810 (UserActivateMITInputProcessingHelper.c)
 * Callees:
 *     _anonymous_namespace_::InitializeInputSensorPass1Worker @ 0x1C0084588 (_anonymous_namespace_--InitializeInputSensorPass1Worker.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_AND_TRACE_SF_sd @ 0x1C01E770C (WPP_RECORDER_AND_TRACE_SF_sd.c)
 */

__int64 __fastcall InitializeInputSensorsOnSharedThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r14
  unsigned int v8; // ebp
  _DWORD *v9; // rdi
  char v10; // bl
  char v11; // dl
  unsigned int v12; // ebp
  _QWORD *i; // rdi
  __int64 v14; // r9
  __int64 v16; // [rsp+48h] [rbp-30h]

  v4 = -1073741823;
  v7 = SGDGetUserSessionState(a1, a2, a3, a4);
  v8 = 0;
  v9 = (_DWORD *)(v7 + 3296);
  v10 = 1;
  while ( 1 )
  {
    if ( (unsigned int)(*v9 - 1) > 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1109);
    if ( *v9 == 2 )
    {
      v4 = anonymous_namespace_::InitializeInputSensorPass1Worker(
             v8,
             (struct IRegisterInputDispatcherObjects *)WPP_MAIN_CB.Queue.Wcb.DeviceObject,
             v5,
             v6);
      if ( v4 < 0 )
        break;
    }
    ++v8;
    v9 += 12;
    if ( v8 >= 3 )
      goto LABEL_15;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (v11 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
  {
    v11 = 0;
  }
  if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_sd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v11,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      14LL,
      2u,
      2u,
      0xEu,
      (__int64)&WPP_cd8caa206db33815e51fa677392a8553_Traceguids,
      *(const char **)(v7 + 48LL * v8 + 3320),
      v4);
LABEL_15:
  v12 = 0;
  for ( i = (_QWORD *)(v7 + 3304); ; i += 6 )
  {
    if ( *((_DWORD *)i - 2) == 2 )
    {
      v4 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 16LL))(*i);
      if ( v4 < 0 )
        break;
    }
    if ( ++v12 >= 3 )
      return (unsigned int)v4;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v10 = 0;
  }
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v16) = v4;
    WPP_RECORDER_AND_TRACE_SF_sd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v10,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      v14,
      2u,
      2u,
      0xFu,
      (__int64)&WPP_cd8caa206db33815e51fa677392a8553_Traceguids,
      *(const char **)(v7 + 48LL * v12 + 3320),
      v16);
  }
  return (unsigned int)v4;
}
