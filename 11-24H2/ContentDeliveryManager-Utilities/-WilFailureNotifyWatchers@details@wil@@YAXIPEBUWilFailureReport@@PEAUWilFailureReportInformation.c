/*
 * XREFs of ?WilFailureNotifyWatchers@details@wil@@YAXIPEBUWilFailureReport@@PEAUWilFailureReportInformation@@@Z @ 0x18003CFEC
 * Callers:
 *     ?MicrosoftInternalNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@@Z @ 0x180035340 (-MicrosoftInternalNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@@Z.c)
 * Callees:
 *     ?wil_details_GetKernelBaseProcAddress@@YAP6A_JXZPEBD@Z @ 0x18003FEB8 (-wil_details_GetKernelBaseProcAddress@@YAP6A_JXZPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::WilFailureNotifyWatchers(
        wil::details *this,
        __int64 a2,
        const struct WilFailureReport *a3,
        struct WilFailureReportInformation *a4)
{
  __int64 (*KernelBaseProcAddress)(void); // rax

  KernelBaseProcAddress = (__int64 (*)(void))`wil::details::WilFailureNotifyWatchers'::`2'::s_pfnFailureNotifyWatchers;
  if ( `wil::details::WilFailureNotifyWatchers'::`2'::s_pfnFailureNotifyWatchers
    || (KernelBaseProcAddress = wil_details_GetKernelBaseProcAddress("WilFailureNotifyWatchers"),
        (`wil::details::WilFailureNotifyWatchers'::`2'::s_pfnFailureNotifyWatchers = (__int64)KernelBaseProcAddress) != 0) )
  {
    ((void (__fastcall *)(_QWORD, __int64, const struct WilFailureReport *, struct WilFailureReportInformation *))KernelBaseProcAddress)(
      0LL,
      a2,
      a3,
      a4);
  }
}
