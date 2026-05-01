/*
 * XREFs of ?CreateDesktopWallpaperHWND@DesktopWallpaperHelpers@@YAJAEBUCRect@Geometry@@PEAPEAUHWND__@@@Z @ 0x18038F44C
 * Callers:
 *     ?SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z @ 0x180392440 (-SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180033234 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800C6F08 (--1-$unique_storage@U-$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1-DestroyWindow@@YAH0@ZU-$integr.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802916C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18029721C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall DesktopWallpaperHelpers::CreateDesktopWallpaperHWND(
        DesktopWallpaperHelpers *this,
        const struct Geometry::CRect *a2,
        HWND *a3)
{
  unsigned int Error; // ebx
  HWND Window; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  signed int v10; // eax
  unsigned int LastError; // edi
  const char *v12; // r9
  int X; // [rsp+20h] [rbp-79h]
  _QWORD v14[4]; // [rsp+60h] [rbp-39h] BYREF
  WNDCLASSEXW v15; // [rsp+80h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]
  int v17; // [rsp+108h] [rbp+6Fh] BYREF
  HWND v18; // [rsp+110h] [rbp+77h] BYREF

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)&v15.cbClsExtra = 0LL;
  memset(&v15.hIcon, 0, 32);
  v15.hIconSm = 0LL;
  v15.cbSize = 80;
  v15.style = 0x4000;
  v15.lpfnWndProc = DefWindowProcW;
  v15.hInstance = &_ImageBase;
  v15.lpszClassName = L"DesktopWallpaperManager";
  if ( RegisterClassExW(&v15) )
  {
    Error = 0;
    goto LABEL_3;
  }
  Error = ResultFromKnownLastError();
  if ( (int)(Error + 0x80000000) < 0 )
  {
LABEL_3:
    if ( Error != -2147023486 )
      goto LABEL_9;
    goto LABEL_4;
  }
  if ( Error != -2147023486 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20,
      (int)"pcshell\\private\\shell\\inc\\DesktopWallpaperHelpers.h",
      (const char *)Error);
    return Error;
  }
LABEL_4:
  if ( FindWindowW(L"DesktopWallpaperManager", 0LL) )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2B,
      (int)"pcshell\\private\\shell\\inc\\DesktopWallpaperHelpers.h",
      (const char *)0x8000FFFFLL,
      X);
LABEL_9:
  Window = CreateWindowExW(
             0x280080u,
             L"DesktopWallpaperManager",
             0LL,
             0x80880000,
             *(_DWORD *)this,
             *((_DWORD *)this + 1),
             *((_DWORD *)this + 2) - *(_DWORD *)this,
             *((_DWORD *)this + 3) - *((_DWORD *)this + 1),
             0LL,
             0LL,
             &_ImageBase,
             0LL);
  v18 = Window;
  if ( !Window )
  {
    v10 = ResultFromKnownLastError();
    LastError = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x36,
        (int)"pcshell\\private\\shell\\inc\\DesktopWallpaperHelpers.h",
        (const char *)(unsigned int)v10);
LABEL_14:
      wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>(&v18);
      return LastError;
    }
  }
  v17 = 1;
  v14[0] = 17LL;
  v14[1] = &v17;
  v14[2] = 4LL;
  if ( !(unsigned int)SetWindowCompositionAttribute(Window, v14, v8, v9) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x3D,
                  (unsigned int)"pcshell\\private\\shell\\inc\\DesktopWallpaperHelpers.h",
                  v12);
    goto LABEL_14;
  }
  ShowWindow(Window, 4);
  v18 = 0LL;
  *(_QWORD *)a2 = Window;
  wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>(&v18);
  return 0LL;
}
