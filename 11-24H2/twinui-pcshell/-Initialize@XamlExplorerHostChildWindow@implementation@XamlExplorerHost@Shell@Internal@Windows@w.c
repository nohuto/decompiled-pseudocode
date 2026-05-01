/*
 * XREFs of ?Initialize@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXV?$optional@PEAUHWND__@@@std@@@Z @ 0x180052650
 * Callers:
 *     ??0XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@_KAEBUhstring@6@@Z @ 0x1800527D0 (--0XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEA.c)
 *     ??0XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@_K0AEBUhstring@6@@Z @ 0x18029F950 (--0XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windo_ea_18029F950.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??0DesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x1800524BC (--0DesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?Current@Window@Xaml@UI@Windows@winrt@@SA@XZ @ 0x1801E251C (-Current@Window@Xaml@UI@Windows@winrt@@SA@XZ.c)
 *     ??$as@UIWindowPrivate@Xaml@UI@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@5@$0A@@impl@winrt@@YA?AUIWindowPrivate@Xaml@UI@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18022213C (--$as@UIWindowPrivate@Xaml@UI@Windows@winrt@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@i.c)
 *     ??$as@UIDesktopWindowXamlSourceNative2@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIDesktopWindowXamlSourceNative2@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x180223254 (--$as@UIDesktopWindowXamlSourceNative2@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@w.c)
 *     ?TransparentBackground@?$consume_Windows_UI_Xaml_IWindowPrivate@UIWindowPrivate@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x18024A2C8 (-TransparentBackground@-$consume_Windows_UI_Xaml_IWindowPrivate@UIWindowPrivate@Xaml@UI@Windows@.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow::Initialize(
        __int64 a1,
        __int64 a2)
{
  __int64 *v4; // rax
  __int64 *v5; // rbx
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // r14
  unsigned int v10; // eax
  unsigned int v11; // eax
  _QWORD *v12; // rax
  __int64 v13; // [rsp+40h] [rbp-20h] BYREF
  int v14; // [rsp+48h] [rbp-18h] BYREF
  __int128 v15; // [rsp+50h] [rbp-10h]
  char v16; // [rsp+90h] [rbp+30h] BYREF
  char v17; // [rsp+98h] [rbp+38h] BYREF

  v4 = (__int64 *)winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource::DesktopWindowXamlSource((winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource *)&v16);
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)(a1 + 32), v4);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v16);
  winrt::impl::as<IDesktopWindowXamlSourceNative2,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v13,
    *(_QWORD *)(a1 + 32));
  v5 = (__int64 *)(a1 + 56);
  v6 = (_QWORD *)(a1 + 56);
  if ( (__int64 *)(a1 + 56) == &v13 )
  {
    v8 = v13;
  }
  else
  {
    if ( *v5 )
    {
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(a1 + 56));
      v6 = (_QWORD *)(a1 + 56);
    }
    v7 = v13;
    v8 = 0LL;
    v13 = 0LL;
    *v5 = v7;
  }
  v9 = (_QWORD *)(a1 + 56);
  if ( v8 )
  {
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v13);
    v9 = v6;
  }
  v14 = 0;
  v15 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*v5 + 24LL))(*v5, *(_QWORD *)(a1 + 80));
  winrt::check_hresult(&v16, v10, &v14);
  v14 = 0;
  v15 = 0LL;
  v11 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v9 + 32LL))(*v9, a1 + 64);
  winrt::check_hresult(&v16, v11, &v14);
  v12 = (_QWORD *)winrt::Windows::UI::Xaml::Window::Current();
  winrt::impl::as<winrt::Windows::UI::Xaml::IWindowPrivate,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v16,
    *v12);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v17);
  winrt::impl::consume_Windows_UI_Xaml_IWindowPrivate<winrt::Windows::UI::Xaml::IWindowPrivate>::TransparentBackground(&v16);
  if ( *(_BYTE *)(a2 + 8) )
    SetWindowPos(*(HWND *)(a1 + 64), *(HWND *)a2, 0, 0, 0, 0, 0x213u);
  ShowWindow(*(HWND *)(a1 + 64), 8);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v16);
}
