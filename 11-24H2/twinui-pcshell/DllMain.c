/*
 * XREFs of DllMain @ 0x18016BD50
 * Callers:
 *     dllmain_dispatch @ 0x1802D1518 (dllmain_dispatch.c)
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x180083284 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     McGenEventRegister_EventRegister @ 0x18016BE98 (McGenEventRegister_EventRegister.c)
 *     McGenEventUnregister_EventUnregister @ 0x18016BEC4 (McGenEventUnregister_EventUnregister.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18029644C (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     _lambda_a3d0692cea556c01c1773f6371817817_::operator_void_(__cdecl_)(wil::FailureInfo_const_&)_noexcept @ 0x1802DB8E8 (_lambda_a3d0692cea556c01c1773f6371817817_--operator_void_(__cdecl_)(wil--FailureInfo_const_-)_no.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  __int64 (__fastcall *v5)(_QWORD); // rax
  REGHANDLE v6; // rcx
  const struct wil::FailureInfo *v7; // rdx
  _QWORD v8[21]; // [rsp+20h] [rbp-A8h] BYREF

  if ( fdwReason )
  {
    if ( fdwReason == 1 )
    {
      McGenEventRegister_EventRegister(
        hinstDLL,
        fdwReason,
        MICROSOFT_TWINUI_PUBLISHER_Context,
        MICROSOFT_TWINUI_PUBLISHER_Context);
      EventSetInformation(
        MICROSOFT_TWINUI_PUBLISHER_Context[0],
        2LL,
        &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
        (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
        v8[0],
        v8[1]);
      TraceLoggingRegisterEx_EventRegister_EventSetInformation((ULONGLONG *)&dword_1808C3DC8);
      hModule = hinstDLL;
      dword_1808C9890 = 123;
      DisableThreadLibraryCalls(hinstDLL);
      v5 = (__int64 (__fastcall *)(_QWORD))lambda_a3d0692cea556c01c1773f6371817817_::operator_void____cdecl___wil::FailureInfo_const____noexcept();
      if ( wil::details::g_pfnLoggingCallback && v5 && wil::details::g_pfnLoggingCallback != v5 )
      {
        memset_0(v8, 0, 0x98uLL);
        wil::details::WilFailFast((wil::details *)v8, v7);
      }
      wil::details::g_pfnLoggingCallback = v5;
    }
  }
  else
  {
    McGenEventUnregister_EventUnregister(MICROSOFT_TWINUI_PUBLISHER_Context, fdwReason, lpvReserved);
    v6 = RegHandle;
    RegHandle = 0LL;
    dword_1808C3DC8 = 0;
    EventUnregister(v6);
    if ( g_hActCtx != (HANDLE)-1LL )
    {
      ReleaseActCtx(g_hActCtx);
      g_hActCtx = (HANDLE)-1LL;
    }
    if ( hModule )
      hModule = (HMODULE)-1LL;
  }
  return 1;
}
