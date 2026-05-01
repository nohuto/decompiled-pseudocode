/*
 * XREFs of ?get@?$weak_ref@UIUIElement@Xaml@UI@Windows@winrt@@@winrt@@QEBA@XZ @ 0x18011601C
 * Callers:
 *     ??4?$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BCAA@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x180114A4C (--4-$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIUIElement@Xaml@UI@Windows.c)
 *     ?v_DismissView@VirtualDesktopSwitcherHost@@MEAAXXZ @ 0x180114C30 (-v_DismissView@VirtualDesktopSwitcherHost@@MEAAXXZ.c)
 *     ?revoke@?$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BCBA@AA@impl@winrt@@QEAAXXZ @ 0x180115DF0 (-revoke@-$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIUIElement@Xaml@UI@Wi.c)
 *     ?OnControlLoaded@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@67@0@Z @ 0x1801160D0 (-OnControlLoaded@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@A.c)
 *     ??1?$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BCBA@AA@impl@winrt@@QEAA@XZ @ 0x18011B624 (--1-$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIUIElement@Xaml@UI@Windows.c)
 *     ?revoke@?$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BCAA@AA@impl@winrt@@QEAAXXZ @ 0x1802B0CD0 (-revoke@-$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIUIEleme_ea_1802B0CD0.c)
 *     ??4?$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BCBA@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x1802B86B4 (--4-$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIUIElement@Xa_ea_1802B86B4.c)
 *     ??1?$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BCAA@AA@impl@winrt@@QEAA@XZ @ 0x1802C97B4 (--1-$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIUIElement@Xa_ea_1802C97B4.c)
 *     ??1?$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BBHA@AA@impl@winrt@@QEAA@XZ @ 0x1806A9DA4 (--1-$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIUIElement@Xa_ea_1806A9DA4.c)
 *     ??1?$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BBIA@AA@impl@winrt@@QEAA@XZ @ 0x1806A9DE4 (--1-$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIUIElement@Xa_ea_1806A9DE4.c)
 *     ??1?$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BCFA@AA@impl@winrt@@QEAA@XZ @ 0x1806A9E24 (--1-$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIUIElement@Xa_ea_1806A9E24.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::weak_ref<winrt::Windows::UI::Xaml::IUIElement>::get(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( v2 )
  {
    v5 = 0LL;
    (*(void (__fastcall **)(__int64, void *, __int64 *))(*(_QWORD *)v2 + 24LL))(
      v2,
      &winrt::impl::guid_v<winrt::Windows::UI::Xaml::IUIElement>,
      &v5);
    *a2 = v5;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
