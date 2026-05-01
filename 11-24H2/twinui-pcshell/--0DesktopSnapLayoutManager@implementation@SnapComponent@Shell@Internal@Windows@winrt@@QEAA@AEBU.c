/*
 * XREFs of ??0DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA@AEBUDisplayRegion@WindowManagement@UI@56@@Z @ 0x1805B8568
 * Callers:
 *     ??$create_and_initialize@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEBUDisplayRegion@WindowManagement@UI@67@@impl@winrt@@YAPEAUDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@1@AEBUDisplayRegion@WindowManagement@UI@71@@Z @ 0x1805B7AB8 (--$create_and_initialize@UDesktopSnapLayoutManager@implementation@SnapComponent@She_ea_1805B7AB8.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??4?$com_ptr@UIMultitaskingViewVisibilityNotification@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800CFA10 (--4-$com_ptr@UIMultitaskingViewVisibilityNotification@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ??$create_instance@UIServiceProvider@@@winrt@@YA?A_PAEBUguid@0@IPEAX@Z @ 0x180210C8C (--$create_instance@UIServiceProvider@@@winrt@@YA-A_PAEBUguid@0@IPEAX@Z.c)
 *     ??$capture@UImmersiveShellThreadDispatcher@SnapComponent@Shell@Internal@Windows@winrt@@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAUIServiceProvider@@AEBUguid@6@@winrt@@YA?AUImmersiveShellThreadDispatcher@SnapComponent@Shell@Internal@Windows@0@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z$$QEAPEAUIServiceProvider@@AEBUguid@0@@Z @ 0x180272EB0 (--$capture@UImmersiveShellThreadDispatcher@SnapComponent@Shell@Internal@Windows@winrt@@A6AJPEAUI.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?WorkAreaOffset@?$consume_Windows_UI_WindowManagement_IDisplayRegion@UIDisplayRegion@WindowManagement@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18036E4BC (-WorkAreaOffset@-$consume_Windows_UI_WindowManagement_IDisplayRegion@UIDisplayRegion@WindowManag.c)
 *     ??0?$producers_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@V?$tuple@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@USnapLayoutManagerExtension@PlatformExtensions@3456@@std@@@impl@winrt@@QEAA@XZ @ 0x1805B8470 (--0-$producers_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Window.c)
 *     ??0?$root_implements_composable_inner@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@$00@impl@winrt@@QEAA@XZ @ 0x1805B84C4 (--0-$root_implements_composable_inner@UDesktopSnapLayoutManager@implementation@SnapComponent@She.c)
 *     ?WorkAreaSize@?$consume_Windows_UI_WindowManagement_IDisplayRegion@UIDisplayRegion@WindowManagement@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1805BA848 (-WorkAreaSize@-$consume_Windows_UI_WindowManagement_IDisplayRegion@UIDisplayRegion@WindowManagem.c)
 */

// Hidden C++ exception states: #wind=5
winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager *__fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::DesktopSnapLayoutManager(
        winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager *this,
        const struct winrt::Windows::UI::WindowManagement::DisplayRegion *a2)
{
  __int64 *v4; // rax
  __int64 *v5; // rax
  int *v6; // rbx
  _DWORD *v7; // rax
  int v8; // xmm0_4
  int v9; // xmm1_4
  int v10; // xmm2_4
  __int64 v12; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v13[2]; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v14[8]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v15; // [rsp+40h] [rbp-20h] BYREF
  GUID v16; // [rsp+48h] [rbp-18h] BYREF

  v13[1] = this;
  winrt::impl::producers_base<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,std::tuple<winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension>>::producers_base<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,std::tuple<winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension>>();
  *((_QWORD *)this + 1) = 0LL;
  winrt::impl::root_implements_composable_inner<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,1>::root_implements_composable_inner<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,1>();
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *((_QWORD *)this + 4) = 1LL;
  *(_QWORD *)this = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager>::`vftable';
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = *(_QWORD *)a2;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)this + 8);
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 30) = 1;
  v16 = CLSID_ImmersiveShell;
  v4 = (__int64 *)winrt::create_instance<IServiceProvider>((__int64)&v12, (int)&v16);
  winrt::com_ptr<IMultitaskingViewVisibilityNotification>::operator=((__int64 *)this + 7, v4);
  if ( v12 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v12);
  v12 = *((_QWORD *)this + 7);
  v5 = winrt::capture<winrt::Windows::Internal::Shell::SnapComponent::ImmersiveShellThreadDispatcher,long (&)(IUnknown *,_GUID const &,_GUID const &,void * *),IServiceProvider *,winrt::guid const &>(
         v13,
         (__int64 (__fastcall *)(__int64, __int64, __int128 *, __int64 *))IUnknown_QueryService,
         &v12,
         (__int64)&winrt::impl::guid_v<winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcher>);
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 11, v5);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v13);
  v6 = (int *)winrt::impl::consume_Windows_UI_WindowManagement_IDisplayRegion<winrt::Windows::UI::WindowManagement::IDisplayRegion>::WorkAreaSize(
                a2,
                v14);
  v7 = winrt::impl::consume_Windows_UI_WindowManagement_IDisplayRegion<winrt::Windows::UI::WindowManagement::IDisplayRegion>::WorkAreaOffset(
         (__int64 *)a2,
         &v15);
  v8 = v7[1];
  v9 = *v6;
  v10 = v6[1];
  *((_DWORD *)this + 18) = *v7;
  *((_DWORD *)this + 19) = v8;
  *((_DWORD *)this + 20) = v9;
  *((_DWORD *)this + 21) = v10;
  return this;
}
