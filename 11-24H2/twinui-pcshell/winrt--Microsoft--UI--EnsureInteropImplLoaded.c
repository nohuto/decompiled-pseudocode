/*
 * XREFs of winrt::Microsoft::UI::EnsureInteropImplLoaded @ 0x18045205C
 * Callers:
 *     winrt::Microsoft::UI::GetWindowFromWindowId @ 0x180452498 (winrt--Microsoft--UI--GetWindowFromWindowId.c)
 *     winrt::Microsoft::UI::GetWindowIdFromWindow @ 0x180452510 (winrt--Microsoft--UI--GetWindowIdFromWindow.c)
 *     ??0XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAEBURect@Foundation@56@I@Z @ 0x180454C1C (--0XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QE.c)
 * Callees:
 *     ??$check_bool@_N@winrt@@YA_N_NAEBUslim_source_location@impl@0@@Z @ 0x1804515F0 (--$check_bool@_N@winrt@@YA_N_NAEBUslim_source_location@impl@0@@Z.c)
 */

char winrt::Microsoft::UI::EnsureInteropImplLoaded()
{
  HMODULE ModuleHandleW; // rbx
  FARPROC ProcAddress; // rax
  char v2; // cl
  int v4; // [rsp+20h] [rbp-38h] BYREF
  __int128 v5; // [rsp+28h] [rbp-30h]
  int v6; // [rsp+38h] [rbp-20h] BYREF
  __int128 v7; // [rsp+40h] [rbp-18h]

  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&winrt::Microsoft::UI::s_module, 0LL, 0LL) )
  {
    ModuleHandleW = GetModuleHandleW(L"Microsoft.Internal.FrameworkUdk.dll");
    if ( ModuleHandleW || (ModuleHandleW = LoadLibraryW(L"Microsoft.Internal.FrameworkUdk.dll")) != 0LL )
    {
      winrt::Microsoft::UI::s_impl = GetProcAddress(ModuleHandleW, "Windowing_GetWindowIdFromWindow");
      qword_1808CB968 = (__int64)GetProcAddress(ModuleHandleW, "Windowing_GetWindowFromWindowId");
      qword_1808CB970 = (__int64)GetProcAddress(ModuleHandleW, "Windowing_GetDisplayIdFromMonitor");
      qword_1808CB978 = (__int64)GetProcAddress(ModuleHandleW, "Windowing_GetMonitorFromDisplayId");
      qword_1808CB980 = (__int64)GetProcAddress(ModuleHandleW, "Windowing_GetIconIdFromIcon");
      ProcAddress = GetProcAddress(ModuleHandleW, "Windowing_GetIconFromIconId");
      v5 = 0LL;
      qword_1808CB988 = (__int64)ProcAddress;
      v4 = 0;
      if ( !winrt::Microsoft::UI::s_impl
        || !qword_1808CB968
        || !qword_1808CB970
        || !qword_1808CB978
        || !qword_1808CB980
        || (v2 = 1, !ProcAddress) )
      {
        v2 = 0;
      }
      winrt::check_bool<bool>(v2, (winrt *)&v4);
      _InterlockedCompareExchange64(
        (volatile signed __int64 *)&winrt::Microsoft::UI::s_module,
        (signed __int64)ModuleHandleW,
        0LL);
    }
  }
  v6 = 0;
  v7 = 0LL;
  return winrt::check_bool<bool>(
           _InterlockedCompareExchange64((volatile signed __int64 *)&winrt::Microsoft::UI::s_module, 0LL, 0LL) != 0,
           (winrt *)&v6);
}
