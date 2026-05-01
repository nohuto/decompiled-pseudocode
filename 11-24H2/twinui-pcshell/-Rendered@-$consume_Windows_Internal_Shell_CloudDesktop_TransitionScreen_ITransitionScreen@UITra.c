/*
 * XREFs of ?Rendered@?$consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UTransitionScreen@1CloudDesktop@Shell@Internal@Windows@winrt@@UTransitionScreenId@123456@@Foundation@Windows@3@@Z @ 0x180669838
 * Callers:
 *     ?ActivateProvider@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AUTransitionScreenId@TransitionScreen@CloudDesktop@3456@AEBU8893456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x1806682F0 (-ActivateProvider@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA-AUTran.c)
 *     ?ActivateProvider@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AUTransitionScreenId@TransitionScreen@CloudDesktop@3456@AEBU8893456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x18066B430 (-ActivateProvider@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA-AUTr.c)
 *     ?Activate@ProviderActivator@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBUTransitionScreen@7CloudDesktop@3456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x180670E38 (-Activate@ProviderActivator@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBUTransitionScre.c)
 * Callees:
 *     ??$from_com_ref@AEBUIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@@?$weak_ref@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@@winrt@@AEAAXAEBUIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@1@@Z @ 0x1801D5F5C (--$from_com_ref@AEBUIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@@-$weak_ref@UIDeskto.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall winrt::impl::consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::Rendered(
        void (__fastcall ****a1)(_QWORD, const wchar_t *, __int64 *),
        __int64 *a2,
        char a3,
        _QWORD *a4)
{
  void (__fastcall ***v6)(_QWORD, const wchar_t *, __int64 *); // rcx
  int v7; // eax
  __int64 v8; // rbx
  int v10; // [rsp+28h] [rbp-30h] BYREF
  __int128 v11; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF
  int v13; // [rsp+70h] [rbp+18h] BYREF

  LOBYTE(v13) = a3;
  v12 = 0LL;
  v6 = *a1;
  v10 = 0;
  v11 = 0LL;
  v7 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64 *))(*v6)[11])(v6, *a4, &v12);
  winrt::check_hresult(&v13, v7, (__int64)&v10);
  v8 = v12;
  *a2 = 0LL;
  winrt::weak_ref<winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSource>::from_com_ref<winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSource const &>(
    a2,
    a1);
  a2[1] = v8;
  return a2;
}
