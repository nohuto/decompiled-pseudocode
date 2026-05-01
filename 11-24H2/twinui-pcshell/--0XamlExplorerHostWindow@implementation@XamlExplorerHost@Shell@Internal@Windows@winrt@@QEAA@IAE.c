/*
 * XREFs of ??0XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAEBURect@Foundation@56@I@Z @ 0x180117958
 * Callers:
 *     ??$create_and_initialize@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAIAEBURect@Foundation@67@@impl@winrt@@YAPEAUXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@1@AEAIAEBURect@Foundation@71@@Z @ 0x1801168E8 (--$create_and_initialize@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@.c)
 *     ??$make@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAIAEBURect@Foundation@67@AEAI@winrt@@YA?A_PAEAIAEBURect@Foundation@Windows@0@0@Z @ 0x180116954 (--$make@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Wind_ea_180116954.c)
 *     ?Initialize@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_NIPEAUHWND__@@_N1W4SnapControlType@34567@W4InputDeviceKind@4UI@WindowsUdk@7@PEAUHMONITOR__@@@Z @ 0x1801169D4 (-Initialize@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_N.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??0DesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x1800524BC (--0DesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Current@Window@Xaml@UI@Windows@winrt@@SA@XZ @ 0x1801E251C (-Current@Window@Xaml@UI@Windows@winrt@@SA@XZ.c)
 *     ??$as@UIWindowPrivate@Xaml@UI@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@5@$0A@@impl@winrt@@YA?AUIWindowPrivate@Xaml@UI@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18022213C (--$as@UIWindowPrivate@Xaml@UI@Windows@winrt@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@i.c)
 *     ?TransparentBackground@?$consume_Windows_UI_Xaml_IWindowPrivate@UIWindowPrivate@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x18024A2C8 (-TransparentBackground@-$consume_Windows_UI_Xaml_IWindowPrivate@UIWindowPrivate@Xaml@UI@Windows@.c)
 *     ?Instance@WinUICohabitationFunctions@@SAPEAV1@XZ @ 0x180289D68 (-Instance@WinUICohabitationFunctions@@SAPEAV1@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029730C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18031DBA0 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow *__fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow::XamlExplorerHostWindow(
        HWND *this,
        int a2,
        const struct winrt::Windows::Foundation::Rect *a3,
        int a4)
{
  __int64 *v7; // r13
  HWND *v8; // r12
  const char *v9; // r9
  int v10; // r14d
  int cy; // r15d
  __int64 v12; // r8
  HWND v13; // rcx
  __int64 *v14; // rax
  __int64 v15; // rdi
  HMODULE *v16; // rax
  HWND v17; // rsi
  FARPROC ProcAddress; // rax
  const char *v19; // r9
  int v20; // eax
  HMODULE *v21; // rax
  FARPROC v22; // rax
  const char *v23; // r9
  int v24; // eax
  _QWORD *v25; // rax
  int v27; // [rsp+20h] [rbp-E0h]
  _BYTE v29[16]; // [rsp+78h] [rbp-88h] BYREF
  char v30[8]; // [rsp+88h] [rbp-78h] BYREF
  char v31[8]; // [rsp+90h] [rbp-70h] BYREF
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow *v32; // [rsp+98h] [rbp-68h]
  _QWORD v33[4]; // [rsp+A0h] [rbp-60h] BYREF
  WNDCLASSW WndClass; // [rsp+C0h] [rbp-40h] BYREF
  int v35; // [rsp+110h] [rbp+10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]

  v32 = (winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow *)this;
  this[1] = (HWND)&winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::`vftable';
  this[2] = (HWND)&winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,winrt::Windows::Foundation::IClosable>::`vftable';
  *this = (HWND)&Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  this[4] = (HWND)1;
  *this = (HWND)&winrt::impl::heap_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow>::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,std::tuple<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow,winrt::Windows::Foundation::IClosable,IXamlExplorerHostWindowLocal>>'};
  this[3] = (HWND)&winrt::impl::heap_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow>::`vftable'{for `winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow,winrt::Windows::Foundation::IClosable,IXamlExplorerHostWindowLocal>'};
  this[5] = 0LL;
  v7 = (__int64 *)(this + 6);
  this[6] = 0LL;
  v8 = this + 7;
  this[7] = 0LL;
  *((_DWORD *)this + 16) = GetCurrentThreadId();
  this[9] = 0LL;
  this[10] = 0LL;
  this[11] = 0LL;
  this[12] = 0LL;
  memset_0(&WndClass, 0, sizeof(WndClass));
  WndClass.hCursor = LoadCursorW(0LL, (LPCWSTR)0x7F00);
  WndClass.hbrBackground = (HBRUSH)GetStockObject(4);
  WndClass.lpszClassName = L"XamlExplorerHostIslandWindow";
  WndClass.style = 3;
  WndClass.lpfnWndProc = (WNDPROC)winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow::WndProc;
  RegisterClassW(&WndClass);
  if ( this[5] )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x7A,
      (unsigned int)"pcshell\\twinui\\xamlexplorerhost\\lib\\XamlExplorerHostIslandWindow.cpp",
      v9);
  v10 = (int)*((float *)a3 + 2);
  cy = (int)*((float *)a3 + 3);
  CreateWindowInBand(
    a4 | 0x200000u,
    WndClass.lpszClassName,
    &pvData,
    0x80000000LL,
    (int)*(float *)a3,
    (int)*((float *)a3 + 1),
    v10,
    cy,
    0LL,
    0LL,
    WndClass.hInstance,
    this,
    a2);
  v13 = this[5];
  if ( !v13 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x90,
      (unsigned int)"pcshell\\twinui\\xamlexplorerhost\\lib\\XamlExplorerHostIslandWindow.cpp",
      (const char *)retaddr);
  v35 = 1;
  v33[0] = 13LL;
  v33[1] = &v35;
  v33[2] = 4LL;
  SetWindowCompositionAttribute(v13, v33, v12, retaddr);
  SetPropW(this[5], L"NonRudeHWND", HANDLE_FLAG_INHERIT);
  SetPropW(this[5], L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT);
  v14 = (__int64 *)winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource::DesktopWindowXamlSource((winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource *)v30);
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(v7, v14);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v30);
  v15 = *v7;
  v16 = (HMODULE *)WinUICohabitationFunctions::Instance();
  v17 = this[5];
  ProcAddress = GetProcAddress(*v16, "WinUICohabitation_DesktopWindowXamlSourceNative_AttachToWindow");
  if ( !ProcAddress )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x3F,
      (unsigned int)"pcshell\\twinui\\xamlexplorerhost\\lib\\WinUICohabitationFunctions.h",
      v19);
  v20 = ((__int64 (__fastcall *)(__int64, HWND))ProcAddress)(v15, v17);
  if ( v20 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x40,
      (int)"pcshell\\twinui\\xamlexplorerhost\\lib\\WinUICohabitationFunctions.h",
      (const char *)(unsigned int)v20,
      v27);
  v21 = (HMODULE *)WinUICohabitationFunctions::Instance();
  v22 = GetProcAddress(*v21, "WinUICohabitation_DesktopWindowXamlSourceNative_get_WindowHandle");
  if ( !v22 )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x46,
      (unsigned int)"pcshell\\twinui\\xamlexplorerhost\\lib\\WinUICohabitationFunctions.h",
      v23);
  v24 = ((__int64 (__fastcall *)(__int64, HWND *))v22)(v15, v8);
  if ( v24 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x47,
      (int)"pcshell\\twinui\\xamlexplorerhost\\lib\\WinUICohabitationFunctions.h",
      (const char *)(unsigned int)v24,
      v27);
  v25 = (_QWORD *)winrt::Windows::UI::Xaml::Window::Current();
  winrt::impl::as<winrt::Windows::UI::Xaml::IWindowPrivate,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    v29,
    *v25);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v31);
  winrt::impl::consume_Windows_UI_Xaml_IWindowPrivate<winrt::Windows::UI::Xaml::IWindowPrivate>::TransparentBackground(v29);
  SetWindowPos(*v8, 0LL, 0, 0, v10, cy, 0x56u);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v29);
  return (winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow *)this;
}
