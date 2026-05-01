/*
 * XREFs of ?ThreadProc@WindowsXamlManagerThread@@SAKPEAX@Z @ 0x1804576E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetMicrosoftResourceManager@?$consume_Windows_ApplicationModel_Resources_Core_Internal_ISystemResourceManagerStatics@UISystemResourceManagerStatics@Internal@Core@Resources@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800C5F68 (-GetMicrosoftResourceManager@-$consume_Windows_ApplicationModel_Resources_Core_Internal_ISystemR.c)
 *     ?Instance@WinUICohabitationFunctions@@SAPEAV1@XZ @ 0x180289D68 (-Instance@WinUICohabitationFunctions@@SAPEAV1@XZ.c)
 *     ?WinAppSDKCohabitation_RegisterWASDKThreadWrapper@WinUICohabitationFunctions@@QEBAXXZ @ 0x1802BFDD0 (-WinAppSDKCohabitation_RegisterWASDKThreadWrapper@WinUICohabitationFunctions@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?CreateOnCurrentThread@DispatcherQueueController@Dispatching@UI@Microsoft@winrt@@SA@XZ @ 0x18044F044 (-CreateOnCurrentThread@DispatcherQueueController@Dispatching@UI@Microsoft@winrt@@SA@XZ.c)
 *     ?InitializeForCurrentThread@WindowsXamlManager@Hosting@Xaml@UI@Microsoft@winrt@@SA@XZ @ 0x18044F3DC (-InitializeForCurrentThread@WindowsXamlManager@Hosting@Xaml@UI@Microsoft@winrt@@SA@XZ.c)
 *     ?RunEventLoop@?$consume_Microsoft_UI_Dispatching_IDispatcherQueue3@UDispatcherQueue@Dispatching@UI@Microsoft@winrt@@@impl@winrt@@QEBA@XZ @ 0x180457314 (-RunEventLoop@-$consume_Microsoft_UI_Dispatching_IDispatcherQueue3@UDispatcherQueue@Dispatching@.c)
 *     ?ShutdownQueue@?$consume_Microsoft_UI_Dispatching_IDispatcherQueueController2@UDispatcherQueueController@Dispatching@UI@Microsoft@winrt@@@impl@winrt@@QEBA@XZ @ 0x1804573D4 (-ShutdownQueue@-$consume_Microsoft_UI_Dispatching_IDispatcherQueueController2@UDispatcherQueueCo.c)
 *     ?init_apartment@winrt@@YAXW4apartment_type@1@@Z @ 0x1804578DC (-init_apartment@winrt@@YAXW4apartment_type@1@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WindowsXamlManagerThread::ThreadProc(PVOID Parameter)
{
  HMODULE *v1; // rax
  _QWORD *MicrosoftResourceManager; // rax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 (__fastcall ***v5)(_QWORD, void *, __int64 *); // [rsp+28h] [rbp-20h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h] BYREF

  winrt::init_apartment(Parameter);
  v1 = (HMODULE *)WinUICohabitationFunctions::Instance();
  WinUICohabitationFunctions::WinAppSDKCohabitation_RegisterWASDKThreadWrapper(v1);
  winrt::Microsoft::UI::Dispatching::DispatcherQueueController::CreateOnCurrentThread(&v5);
  winrt::Microsoft::UI::Xaml::Hosting::WindowsXamlManager::InitializeForCurrentThread(&v6);
  MicrosoftResourceManager = winrt::impl::consume_Windows_ApplicationModel_Resources_Core_Internal_ISystemResourceManagerStatics<winrt::Windows::ApplicationModel::Resources::Core::Internal::ISystemResourceManagerStatics>::GetMicrosoftResourceManager(
                               (__int64 *)&v5,
                               &v4);
  winrt::impl::consume_Microsoft_UI_Dispatching_IDispatcherQueue3<winrt::Microsoft::UI::Dispatching::DispatcherQueue>::RunEventLoop((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))MicrosoftResourceManager);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v4);
  winrt::impl::consume_Microsoft_UI_Dispatching_IDispatcherQueueController2<winrt::Microsoft::UI::Dispatching::DispatcherQueueController>::ShutdownQueue(&v5);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v6);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v5);
  return 0LL;
}
