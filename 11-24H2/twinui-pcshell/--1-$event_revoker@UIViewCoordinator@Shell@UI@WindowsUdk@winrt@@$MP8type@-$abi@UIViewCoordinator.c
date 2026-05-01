/*
 * XREFs of ??1?$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BHA@AA@impl@winrt@@QEAA@XZ @ 0x18036C070
 * Callers:
 *     ?Show@CActionCenterExperienceManager@@AEAAJXZ @ 0x18036FF20 (-Show@CActionCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??_9ISwitchItemController@@$BHA@AA @ 0x1802F6910 (--_9ISwitchItemController@@$BHA@AA.c)
 *     ?get@?$weak_ref@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEBA@XZ @ 0x1803721B0 (-get@-$weak_ref@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEBA@XZ.c)
 */

void __fastcall __1__event_revoker_UIViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BHA_AA_impl_winrt__QEAA_XZ(
        __int64 *a1)
{
  __int64 *v2; // rdi
  char v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 )
  {
    v2 = (__int64 *)winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IViewCoordinator>::get(a1, &v3);
    if ( *v2 )
       ISwitchItemController::`vcall'{112,{flat}}(*v2);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v2);
  }
  if ( *a1 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a1);
}
