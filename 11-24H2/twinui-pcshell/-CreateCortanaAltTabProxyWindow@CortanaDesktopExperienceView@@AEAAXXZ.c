/*
 * XREFs of ?CreateCortanaAltTabProxyWindow@CortanaDesktopExperienceView@@AEAAXXZ @ 0x1803D8804
 * Callers:
 *     ?SetExplicitDimissEnabled@CortanaDesktopExperienceView@@AEAAXE@Z @ 0x1803DD4CC (-SetExplicitDimissEnabled@CortanaDesktopExperienceView@@AEAAXE@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18004A9BC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHWND__@@@Z @ 0x1800C6CD8 (-reset@-$unique_storage@U-$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1-DestroyWindow@@YAH0@ZU-$in.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801068A4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x18017F364 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ?GetHwnd@CortanaDesktopExperienceView@@AEAAPEAUHWND__@@XZ @ 0x1803D9578 (-GetHwnd@CortanaDesktopExperienceView@@AEAAPEAUHWND__@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CortanaDesktopExperienceView::CreateCortanaAltTabProxyWindow(HWND *this)
{
  HWND lpParam; // r14
  void **v3; // rdi
  HRESULT v4; // ebx
  HWND Window; // rax
  HWND v6; // rax
  WNDCLASSEXW v7; // [rsp+60h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  void *ppv; // [rsp+E0h] [rbp+67h] BYREF
  LPCWSTR lpWindowName; // [rsp+E8h] [rbp+6Fh] BYREF

  lpParam = CortanaDesktopExperienceView::GetHwnd((CortanaDesktopExperienceView *)this);
  v7.cbSize = 80;
  memset_0(&v7.style, 0, 0x4CuLL);
  v7.style = 512;
  v7.lpfnWndProc = (WNDPROC)CortanaDesktopExperienceView::s_CortanaAltTabProxyWndProc;
  v7.hInstance = &_ImageBase;
  v7.lpszClassName = L"Shell_CortanaProxy";
  v7.cbWndExtra = 8;
  RegisterClassExW(&v7);
  lpWindowName = 0LL;
  v3 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put((void **)&lpWindowName);
  *v3 = 0LL;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
  v4 = SHCreateItemInKnownFolder(
         &FOLDERID_AppsFolder,
         0x4100u,
         L"Microsoft.Windows.Cortana_cw5n1h2txyewy!CortanaUI",
         &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
         &ppv);
  if ( v4 >= 0 )
    v4 = (*(__int64 (__fastcall **)(void *, _QWORD, void **))(*(_QWORD *)ppv + 40LL))(ppv, 0LL, v3);
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB3F,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v4);
  Window = CreateWindowExW(
             0,
             v7.lpszClassName,
             lpWindowName,
             0x8000000u,
             0x80000000,
             0x80000000,
             0x80000000,
             0x80000000,
             0LL,
             0LL,
             &_ImageBase,
             lpParam);
  wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::reset(
    this + 35,
    Window);
  v6 = CreateWindowExW(
         0x200000u,
         v7.lpszClassName,
         lpWindowName,
         0x80000000,
         0x80000000,
         0x80000000,
         0x80000000,
         0x80000000,
         this[35],
         0LL,
         &_ImageBase,
         lpParam);
  wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::reset(
    this + 34,
    v6);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&lpWindowName);
}
