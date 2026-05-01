/*
 * XREFs of ?LinkUIATrees@XamlLauncher@@AEAAX_N@Z @ 0x1801C6494
 * Callers:
 *     ?OnLauncherHide@XamlLauncher@@UEAAXXZ @ 0x1801C6450 (-OnLauncherHide@XamlLauncher@@UEAAXXZ.c)
 *     ?OnDeviceUnlockedWithLauncherAndCortanaShowing@XamlLauncher@@UEAAXXZ @ 0x18022E260 (-OnDeviceUnlockedWithLauncherAndCortanaShowing@XamlLauncher@@UEAAXXZ.c)
 *     ?OnCortanaWithoutStartShowing@XamlLauncher@@UEAAXXZ @ 0x180460460 (-OnCortanaWithoutStartShowing@XamlLauncher@@UEAAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A5D64 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$UnlinkingUIATrees@II@StartWindowTelemetry@@SAX$$QEAI0@Z @ 0x1801C6768 (--$UnlinkingUIATrees@II@StartWindowTelemetry@@SAX$$QEAI0@Z.c)
 *     ??$LinkingUIATrees@II@StartWindowTelemetry@@SAX$$QEAI0@Z @ 0x1801C6988 (--$LinkingUIATrees@II@StartWindowTelemetry@@SAX$$QEAI0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall XamlLauncher::LinkUIATrees(XamlLauncher *this, char a2)
{
  __int64 v3; // rcx
  int (__fastcall *v4)(__int64, HWND *); // rax
  const char *v5; // r9
  const char *v6; // r9
  const char *v7; // r9
  int v8; // eax
  const char *v9; // r9
  HWND v10[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  int v12; // [rsp+40h] [rbp+10h] BYREF
  int v13; // [rsp+50h] [rbp+20h] BYREF
  HWND hWnd; // [rsp+58h] [rbp+28h] BYREF

  v10[0] = 0LL;
  v3 = *((_QWORD *)this + 22);
  hWnd = 0LL;
  if ( v3 && *((_QWORD *)this + 21) )
  {
    v4 = *(int (__fastcall **)(__int64, HWND *))(*(_QWORD *)v3 + 456LL);
    if ( a2 )
    {
      if ( v4(v3, &hWnd) >= 0
        && IsWindow(hWnd)
        && (*(int (__fastcall **)(_QWORD, HWND *))(**((_QWORD **)this + 21) + 320LL))(*((_QWORD *)this + 21), v10) >= 0
        && IsWindow(v10[0]) )
      {
        v12 = (int)hWnd;
        v13 = (int)v10[0];
        StartWindowTelemetry::LinkingUIATrees<unsigned int,unsigned int>(&v13, &v12);
        if ( !SetPropW(hWnd, L"CrossProcessParentHWND", v10[0]) )
          wil::details::in1diag3::_Log_GetLastError(
            retaddr,
            (void *)0x749,
            (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
            v5);
        if ( !SetPropW(v10[0], L"CrossProcessChildHWND", hWnd) )
          wil::details::in1diag3::_Log_GetLastError(
            retaddr,
            (void *)0x74A,
            (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
            v6);
        if ( !SetPropW(hWnd, L"NonComponentUIWindow", HANDLE_FLAG_INHERIT) )
          wil::details::in1diag3::_Log_GetLastError(
            retaddr,
            (void *)0x74D,
            (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
            v7);
        RemovePropW(hWnd, L"UIA_WindowPatternEnabled");
      }
    }
    else
    {
      if ( v4(v3, &hWnd) >= 0 )
      {
        if ( IsWindow(hWnd) )
        {
          RemovePropW(hWnd, L"CrossProcessParentHWND");
          RemovePropW(hWnd, L"NonComponentUIWindow");
          if ( !SetPropW(hWnd, L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT) )
            wil::details::in1diag3::_Log_GetLastError(
              retaddr,
              (void *)0x761,
              (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
              v9);
        }
      }
      if ( (*(int (__fastcall **)(_QWORD, HWND *))(**((_QWORD **)this + 21) + 320LL))(*((_QWORD *)this + 21), v10) >= 0
        && IsWindow(v10[0]) )
      {
        RemovePropW(v10[0], L"CrossProcessChildHWND");
      }
      v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 22) + 472LL))(*((_QWORD *)this + 22));
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x769,
          (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
          (const char *)(unsigned int)v8);
      v12 = (int)hWnd;
      v13 = (int)v10[0];
      StartWindowTelemetry::UnlinkingUIATrees<unsigned int,unsigned int>(&v13, &v12);
    }
  }
}
