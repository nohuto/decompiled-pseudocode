/*
 * XREFs of InitializeSensorExplicitly @ 0x1C00844F4
 * Callers:
 *     ActivateKSTInputProcessingHelper @ 0x1C00843D0 (ActivateKSTInputProcessingHelper.c)
 * Callees:
 *     _anonymous_namespace_::InitializeInputSensorPass1Worker @ 0x1C0084588 (_anonymous_namespace_--InitializeInputSensorPass1Worker.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_AND_TRACE_SF_sd @ 0x1C01E770C (WPP_RECORDER_AND_TRACE_SF_sd.c)
 */

__int64 __fastcall InitializeSensorExplicitly(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  int v6; // edx
  int v7; // ebx
  int v8; // r8d
  PDEVICE_OBJECT v10; // rcx
  int v11; // r9d

  v4 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters;
  v5 = SGDGetUserSessionState(a1, a2, a3, a4);
  if ( !*(_QWORD *)(v5 + 3304) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1061LL);
  v7 = anonymous_namespace_::InitializeInputSensorPass1Worker(0LL, v4);
  if ( v7 < 0 )
  {
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v6) = 0;
    }
    LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = 13;
      goto LABEL_20;
    }
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 3304) + 16LL))(*(_QWORD *)(v5 + 3304));
    if ( v7 < 0 )
    {
      v10 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v6) = 0;
      }
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v11 = 12;
LABEL_20:
        WPP_RECORDER_AND_TRACE_SF_sd(
          v10->AttachedDevice,
          v6,
          v8,
          v11,
          2,
          2,
          v11,
          (__int64)&WPP_cd8caa206db33815e51fa677392a8553_Traceguids,
          *(_QWORD *)(v5 + 3320),
          v7);
      }
    }
  }
  return (unsigned int)v7;
}
