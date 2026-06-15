/*
 * XREFs of ??0CAudioDGModule@@QEAA@XZ @ 0x140049980
 * Callers:
 *     _dynamic_initializer_for___AtlModule__ @ 0x140049960 (_dynamic_initializer_for___AtlModule__.c)
 * Callees:
 *     ??0?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ @ 0x140049AB8 (--0-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ.c)
 *     memset_0 @ 0x14005A1D4 (memset_0.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x14005E77C (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 */

// Hidden C++ exception states: #wind=5
CAudioDGModule *__fastcall CAudioDGModule::CAudioDGModule(CAudioDGModule *this)
{
  const struct wil::FailureInfo *v1; // rdx
  _BYTE v3[168]; // [rsp+50h] [rbp-A8h] BYREF

  ATL::CAtlExeModuleT<CAudioDGModule>::CAtlExeModuleT<CAudioDGModule>();
  _AtlModule = &CAudioDGModule::`vftable'{for `ATL::CAtlExeModuleT<CAudioDGModule>'};
  qword_1400C46C8 = (__int64)&CAudioDGModule::`vftable'{for `IAudioHealthMonitor'};
  qword_1400C46D8 = 0LL;
  hHandle = 0LL;
  qword_1400C46E8 = 0LL;
  dword_1400C46F0 = 0;
  byte_1400C46F4 = 0;
  qword_1400C46F8 = 0LL;
  g_fEventTracingEnabled = EtwRegisterTraceGuidsW(AeWmiCallback, 0LL, &AEWMIGUID) == 0;
  if ( wil::details::g_pfnTelemetryCallback
    && (void (__fastcall *)(bool, const struct wil::FailureInfo *))wil::details::g_pfnTelemetryCallback != AudioDgTelemetryProvider::FallbackTelemetryCallback )
  {
    memset_0(v3, 0, 0x98uLL);
    wil::details::WilFailFast((wil::details *)v3, v1);
  }
  wil::details::g_pfnTelemetryCallback = (__int64)AudioDgTelemetryProvider::FallbackTelemetryCallback;
  SetUnhandledExceptionFilter(AudioDGUnhandledExceptionFilter);
  return (CAudioDGModule *)&_AtlModule;
}
