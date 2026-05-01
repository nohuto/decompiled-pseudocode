/*
 * XREFs of ?PointerEntered@?$consume_Windows_UI_Xaml_IUIElement@UIUIElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBUPointerEventHandler@Input@Xaml@UI@Windows@3@@Z @ 0x1805C0EA0
 * Callers:
 *     ?OnControlLoaded@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@67@0@Z @ 0x1801160D0 (-OnControlLoaded@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@A.c)
 * Callees:
 *     ??0?$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BCAA@AA@impl@winrt@@QEAA@AEBUIUIElement@Xaml@UI@Windows@2@Uevent_token@2@@Z @ 0x1801F92EC (--0-$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIUIElement@Xaml@UI@Windows.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall winrt::impl::consume_Windows_UI_Xaml_IUIElement<winrt::Windows::UI::Xaml::IUIElement>::PointerEntered(
        void (__fastcall ****a1)(_QWORD, const wchar_t *, __int64 *),
        __int64 *a2,
        char a3,
        __int64 *a4)
{
  void (__fastcall ***v5)(_QWORD, const wchar_t *, __int64 *); // rcx
  __int64 v7; // rdx
  int v8; // eax
  int v10; // [rsp+28h] [rbp-20h] BYREF
  __int128 v11; // [rsp+30h] [rbp-18h]
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF
  int v13; // [rsp+60h] [rbp+18h] BYREF

  LOBYTE(v13) = a3;
  v12 = 0LL;
  v5 = *a1;
  v7 = *a4;
  v10 = 0;
  v11 = 0LL;
  v8 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64 *))(*v5)[63])(v5, v7, &v12);
  winrt::check_hresult(&v13, v8, (__int64)&v10);
  __0__event_revoker_UIUIElement_Xaml_UI_Windows_winrt___MP8type___abi_UIUIElement_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BCAA_AA_impl_winrt__QEAA_AEBUIUIElement_Xaml_UI_Windows_2_Uevent_token_2__Z(
    a2,
    a1,
    v12);
  return a2;
}
