/*
 * XREFs of winrt::Microsoft::UI::GetWindowIdFromWindow @ 0x1804FB7B0
 * Callers:
 *     ??0XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAEBURect@Foundation@56@I@Z @ 0x1804FADE8 (--0XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QE.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     winrt::Microsoft::UI::EnsureInteropImplLoaded_0 @ 0x1804FB578 (winrt--Microsoft--UI--EnsureInteropImplLoaded_0.c)
 */

__int64 __fastcall winrt::Microsoft::UI::GetWindowIdFromWindow(_QWORD *a1)
{
  signed int v2; // eax
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF

  winrt::Microsoft::UI::EnsureInteropImplLoaded_0();
  v2 = winrt::Microsoft::UI::s_impl(*a1, &v4);
  if ( v2 < 0 )
    winrt::throw_hresult(v2);
  return v4;
}
