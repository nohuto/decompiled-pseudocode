/*
 * XREFs of rimDereferenceDev @ 0x1C0072404
 * Callers:
 *     rimFreeSpecificDevFinal @ 0x1C00C350C (rimFreeSpecificDevFinal.c)
 *     RIMCreateDev @ 0x1C00C874C (RIMCreateDev.c)
 *     RIMVirtCreateDev @ 0x1C0171108 (RIMVirtCreateDev.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C00749F8 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

LONG_PTR __fastcall rimDereferenceDev(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  int v5; // eax
  void *v6; // rsi
  void *v7; // rbp
  int v8; // edx
  int v9; // r8d

  v3 = *(_QWORD **)(a1 + 32);
  if ( !v3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 84LL);
  v5 = *(_DWORD *)(a1 + 184);
  v6 = *(void **)(a1 + 16);
  v7 = *(void **)(a1 + 24);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( (v5 & 0x20) == 0 && (v5 & 0x2000) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 188) & 8) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 97LL);
    if ( *(_QWORD *)(a1 + 192) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 98LL);
  }
  if ( v3[4] == PsGetCurrentProcess(a1, a2, a3) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v8) = 0;
    }
    if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qq(
        WPP_GLOBAL_Control->AttachedDevice,
        v8,
        v9,
        (_DWORD)gRimLog,
        4,
        1,
        10,
        (__int64)&WPP_0d2ee50f2455342177054e7d919ede81_Traceguids,
        (char)v6,
        a1);
    }
    ObCloseHandle(v6, 1);
  }
  ZwClose(v7);
  return ObfDereferenceObject(v3);
}
