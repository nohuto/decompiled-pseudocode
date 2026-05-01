/*
 * XREFs of _lambda_28e2deb1c60008eafa8d487ea9ad6bb5_::operator() @ 0x1806AA4A8
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Xaml::UIElement_winrt::Windows::UI::Xaml::Input::ContextRequestedEventArgs___lambda_28e2deb1c60008eafa8d487ea9ad6bb5___::Invoke @ 0x1806AC410 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--UI--Xaml--UI.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x180040654 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180040900 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180041470 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x18004FA8C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180136988 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ??$from_cx@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@winrt@@@@YA?AUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@winrt@@PE$AAVObject@Platform@@@Z @ 0x1806A8FC8 (--$from_cx@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@winrt@@@@YA-AUIVirtual.c)
 *     ??$try_query@UIVirtualDesktopSwitcherHost@@@?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIVirtualDesktopSwitcherHost@@Uerr_failfast_policy@wil@@@1@XZ @ 0x1806A9244 (--$try_query@UIVirtualDesktopSwitcherHost@@@-$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wi.c)
 *     ?GetVirtualDesktopFromOriginalSource@__IVirtualDesktopBarElementPublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAUIVirtualDesktop@Multitasking@4Internal@Windows@@PE$AAVObject@Platform@@@Z @ 0x1806AC094 (-GetVirtualDesktopFromOriginalSource@__IVirtualDesktopBarElementPublicNonVirtuals@Switcher@Exper.c)
 *     ?OriginalSource@?$consume_Windows_UI_Xaml_IRoutedEventArgs@UContextRequestedEventArgs@Input@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1806AC820 (-OriginalSource@-$consume_Windows_UI_Xaml_IRoutedEventArgs@UContextRequestedEventArgs@Input@Xaml.c)
 *     ?StopPointerExitedTimer@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x1806AD64C (-StopPointerExitedTimer@VirtualDesktopSwitcherHost@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall lambda_28e2deb1c60008eafa8d487ea9ad6bb5_::operator()(
        struct IWeakReference **a1,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a2,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a3)
{
  unsigned __int64 v5; // rdi
  __int64 *v6; // rax
  void *v7; // r12
  __int64 VirtualDesktopFromOriginalSource; // rbx
  struct IUnknown *v9; // r14
  void *v10[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v11; // [rsp+30h] [rbp-20h]
  __int64 v12; // [rsp+38h] [rbp-18h] BYREF
  int v13; // [rsp+40h] [rbp-10h]
  __int64 v14; // [rsp+90h] [rbp+40h] BYREF
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v15; // [rsp+98h] [rbp+48h]
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v16; // [rsp+A0h] [rbp+50h]
  __int64 v17; // [rsp+A8h] [rbp+58h] BYREF

  v16 = a3;
  v15 = a2;
  wil::com_ptr_t<IWeakReference,wil::err_failfast_policy>::try_query<IVirtualDesktopSwitcherHost>(a1, v10);
  if ( v10[0] )
  {
    v5 = ((unsigned __int64)v10[0] - 8) & -(__int64)(v10[0] != 0LL);
    v12 = (v5 + 32) & -(__int64)(v5 != 0);
    v13 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v12, 1);
    *(_BYTE *)(v5 + 456) = 1;
    VirtualDesktopSwitcherHost::StopPointerExitedTimer((VirtualDesktopSwitcherHost *)v5);
    v6 = (__int64 *)winrt::impl::consume_Windows_UI_Xaml_IRoutedEventArgs<winrt::Windows::UI::Xaml::Input::ContextRequestedEventArgs>::OriginalSource(
                      a3,
                      &v17);
    v7 = (void *)__abi_winrt_ptr_ctor(*v6);
    v10[1] = v7;
    if ( v17 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v17);
    VirtualDesktopFromOriginalSource = WindowsInternal::ComposableShell::Experiences::Switcher::__IVirtualDesktopBarElementPublicNonVirtuals::GetVirtualDesktopFromOriginalSource(
                                         *(_QWORD *)(v5 + 168),
                                         v7);
    v11 = VirtualDesktopFromOriginalSource;
    v9 = (struct IUnknown *)__abi_winrt_ptr_ctor(VirtualDesktopFromOriginalSource);
    v11 = (__int64)v9;
    __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(VirtualDesktopFromOriginalSource);
    from_cx<winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>((winrt *)&v14, v9);
    if ( v14 )
      winrt::Windows::Foundation::IUnknown::operator=((__int64 *)(v5 + 504), &v14);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
    __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>((__int64)v9);
    __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>((__int64)v7);
    CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v12);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v10);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a2);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a3);
}
