/*
 * XREFs of ?CreateXamlHostWindow@SharedDesktopBackgroundVisualHost@@AEAAPEAUHWND__@@XZ @ 0x180609834
 * Callers:
 *     ?XamlHostThreadProc@SharedDesktopBackgroundVisualHost@@AEAAKXZ @ 0x18060DD58 (-XamlHostThreadProc@SharedDesktopBackgroundVisualHost@@AEAAKXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ??0?$ActivityBase@VSharedVisualHostProvider@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18060855C (--0-$ActivityBase@VSharedVisualHostProvider@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ??1CreateXamlHostWindow@SharedVisualHostProvider@@QEAA@XZ @ 0x180608C74 (--1CreateXamlHostWindow@SharedVisualHostProvider@@QEAA@XZ.c)
 *     ?StartActivity@CreateXamlHostWindow@SharedVisualHostProvider@@QEAAXXZ @ 0x18060AD3C (-StartActivity@CreateXamlHostWindow@SharedVisualHostProvider@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VSharedVisualHostProvider@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18060B540 (-Stop@-$ActivityBase@VSharedVisualHostProvider@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag.c)
 */

// Hidden C++ exception states: #wind=1
HWND __fastcall SharedDesktopBackgroundVisualHost::CreateXamlHostWindow(SharedDesktopBackgroundVisualHost *this)
{
  HWND WindowInBand; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  int v6; // [rsp+70h] [rbp-90h] BYREF
  int pvAttribute; // [rsp+74h] [rbp-8Ch] BYREF
  _QWORD v8[3]; // [rsp+78h] [rbp-88h] BYREF
  WNDCLASSW WndClass; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v10[42]; // [rsp+E0h] [rbp-20h] BYREF

  wil::ActivityBase<SharedVisualHostProvider,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SharedVisualHostProvider,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v10,
    (__int64)"CreateXamlHostWindow");
  v10[0] = &SharedVisualHostProvider::CreateXamlHostWindow::`vftable';
  SharedVisualHostProvider::CreateXamlHostWindow::StartActivity((SharedVisualHostProvider::CreateXamlHostWindow *)v10);
  memset_0(&WndClass, 0, sizeof(WndClass));
  WndClass.hCursor = LoadCursorW(0LL, (LPCWSTR)0x7F00);
  WndClass.hbrBackground = (HBRUSH)GetStockObject(4);
  WndClass.lpszClassName = L"WindowName";
  WndClass.style = 3;
  WndClass.lpfnWndProc = (WNDPROC)SharedDesktopBackgroundVisualHost::WndProc;
  RegisterClassW(&WndClass);
  WindowInBand = (HWND)CreateWindowInBand(
                         2621568LL,
                         WndClass.lpszClassName,
                         &pvData,
                         0x80000000LL,
                         0,
                         0,
                         0,
                         0,
                         0LL,
                         0LL,
                         WndClass.hInstance,
                         this,
                         1);
  v6 = 1;
  v8[0] = 13LL;
  v8[1] = &v6;
  v8[2] = 4LL;
  SetWindowCompositionAttribute(WindowInBand, v8, v3, v4);
  SetPropW(WindowInBand, L"NonRudeHWND", HANDLE_FLAG_INHERIT);
  SetPropW(WindowInBand, L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT);
  pvAttribute = 1;
  DwmSetWindowAttribute(WindowInBand, 0xDu, &pvAttribute, 4u);
  wil::ActivityBase<SharedVisualHostProvider,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v10);
  SharedVisualHostProvider::CreateXamlHostWindow::~CreateXamlHostWindow((SharedVisualHostProvider::CreateXamlHostWindow *)v10);
  return WindowInBand;
}
