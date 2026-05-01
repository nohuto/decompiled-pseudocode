/*
 * XREFs of ?GetHostWindow@XamlAltTabViewHost@@AEAA?AUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@PEAUIImmersiveMonitor@@@Z @ 0x180285AE4
 * Callers:
 *     ?Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x180118BB0 (-Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView.c)
 * Callees:
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18004025C (--0-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ?Stop@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800406B4 (-Stop@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x18007CC04 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartActivity@GetHostWindow@XamlSwitcherTelemetry@@QEAAX_N@Z @ 0x18011A4F8 (-StartActivity@GetHostWindow@XamlSwitcherTelemetry@@QEAAX_N@Z.c)
 *     ?WindowTitle@?$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x18011E6D4 (-WindowTitle@-$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExp.c)
 *     ??0hstring@param@winrt@@QEAA@QEB_W@Z @ 0x1801B9DB8 (--0hstring@param@winrt@@QEAA@QEB_W@Z.c)
 *     ?Position@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation@UITaskGroupWindowInformation@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@@Z @ 0x1801CCD1C (-Position@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation@UITaskGroupWin.c)
 *     ??0XamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAEBURect@Foundation@45@@Z @ 0x1802C5B04 (--0XamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAEBURect@Foundati.c)
 *     ??1GetHostWindow@XamlSwitcherTelemetry@@QEAA@XZ @ 0x1802CD010 (--1GetHostWindow@XamlSwitcherTelemetry@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18031DBA0 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall XamlAltTabViewHost::GetHostWindow(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 **v5; // rdi
  unsigned __int8 v6; // bl
  int v7; // eax
  int v8; // eax
  DWORD v9; // edx
  __int64 *v10; // rax
  const char *v11; // r9
  int v13[4]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v14[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v15; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v16; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v17[42]; // [rsp+70h] [rbp-90h] BYREF
  WCHAR Buffer[264]; // [rsp+1C0h] [rbp+C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+3F8h] [rbp+2F8h]

  *(_QWORD *)v13 = 0LL;
  v5 = (__int64 **)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 312LL);
  v6 = winrt::Windows::Foundation::operator!=(
         (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))v5,
         (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))v13);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v17,
    (__int64)"GetHostWindow");
  v17[0] = &XamlSwitcherTelemetry::GetHostWindow::`vftable';
  XamlSwitcherTelemetry::GetHostWindow::StartActivity((XamlSwitcherTelemetry::GetHostWindow *)v17, v6);
  v15 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a3 + 88LL))(a3, &v15);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x216,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewhost.cpp",
      (const char *)(unsigned int)v7,
      v13[0]);
  v16 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a3 + 72LL))(a3, &v16);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x21B,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewhost.cpp",
      (const char *)(unsigned int)v8,
      v13[0]);
  LODWORD(v15) = v16;
  DWORD2(v15) = DWORD2(v16);
  *(float *)v14 = (float)(int)v16;
  *((float *)v14 + 1) = (float)SDWORD1(v15);
  *((float *)v14 + 2) = (float)(DWORD2(v16) - v16);
  *((float *)v14 + 3) = (float)(HIDWORD(v15) - DWORD1(v15));
  if ( *v5 )
  {
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupWindowInformation>::Position(
      v5,
      v14);
  }
  else
  {
    v10 = (__int64 *)winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow::XamlExplorerHostWindow(
                       (winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow *)v13,
                       0x10u,
                       (const struct winrt::Windows::Foundation::Rect *)v14);
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)v5, v10);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v13);
    if ( !LoadStringW(&_ImageBase, 0x5E9u, Buffer, 260) )
      wil::details::in1diag3::_Throw_GetLastError(
        retaddr,
        (void *)0x22A,
        (unsigned int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewhost.cpp",
        v11);
    winrt::param::hstring::hstring((winrt::param::hstring *)v14, Buffer);
    winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::WindowTitle(
      (__int64 *)v5,
      (__int64 *)v14);
  }
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v17, v9);
  *a2 = (__int64)*v5;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a2);
  XamlSwitcherTelemetry::GetHostWindow::~GetHostWindow((XamlSwitcherTelemetry::GetHostWindow *)v17);
  return a2;
}
