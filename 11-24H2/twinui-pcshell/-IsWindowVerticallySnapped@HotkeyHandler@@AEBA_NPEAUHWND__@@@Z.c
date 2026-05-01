/*
 * XREFs of ?IsWindowVerticallySnapped@HotkeyHandler@@AEBA_NPEAUHWND__@@@Z @ 0x1805AF268
 * Callers:
 *     ?HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x1805AE210 (-HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ComputeSnapErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z @ 0x18008B40C (-ComputeSnapErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z.c)
 *     ?GetSnapRegionAnchorLocations@SnapLayoutHelpers@@YA?AW4SnapRegionAnchorLocations@1@AEBUCRect@Geometry@@0H@Z @ 0x1802B620C (-GetSnapRegionAnchorLocations@SnapLayoutHelpers@@YA-AW4SnapRegionAnchorLocations@1@AEBUCRect@Geo.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall HotkeyHandler::IsWindowVerticallySnapped(HotkeyHandler *this, HWND a2)
{
  bool v4; // r14
  __int64 v5; // rdi
  int (__fastcall *v6)(__int64, HWND, __int64 *); // rbx
  int v7; // eax
  HMONITOR v8; // rsi
  __int64 v9; // rdi
  int (__fastcall *v10)(__int64, HMONITOR, SnapRectHelpers **); // rbx
  int v11; // eax
  struct IImmersiveMonitor *v12; // rdx
  int v14; // eax
  SnapRectHelpers *v15; // [rsp+20h] [rbp-40h] BYREF
  __int64 v16; // [rsp+28h] [rbp-38h] BYREF
  RECT rc; // [rsp+30h] [rbp-30h] BYREF
  __int128 v18; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v4 = 0;
  v16 = 0LL;
  v5 = *((_QWORD *)this + 7);
  v6 = *(int (__fastcall **)(__int64, HWND, __int64 *))(*(_QWORD *)v5 + 48LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
  if ( v6(v5, a2, &v16) >= 0 )
  {
    rc = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, RECT *))(*(_QWORD *)v16 + 128LL))(v16, &rc);
    if ( v7 >= 0 )
    {
      v8 = MonitorFromRect(&rc, 0);
      v15 = 0LL;
      if ( v8 )
      {
        v9 = *((_QWORD *)this + 6);
        v10 = *(int (__fastcall **)(__int64, HMONITOR, SnapRectHelpers **))(*(_QWORD *)v9 + 48LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
        if ( v10(v9, v8, &v15) >= 0 )
        {
          v18 = 0LL;
          v11 = (*(__int64 (__fastcall **)(SnapRectHelpers *, __int128 *))(*(_QWORD *)v15 + 88LL))(v15, &v18);
          if ( v11 >= 0 )
          {
            v14 = SnapRectHelpers::ComputeSnapErrorThresholdForMonitor(v15, v12);
            v4 = (unsigned int)SnapLayoutHelpers::GetSnapRegionAnchorLocations(&rc, &v18, v14) == 5;
          }
          else
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x53E,
              (int)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
              (const char *)(unsigned int)v11);
          }
        }
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x537,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
        (const char *)(unsigned int)v7);
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
  return v4;
}
