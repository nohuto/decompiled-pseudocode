/*
 * XREFs of ??1?$event_revoker@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BGA@AA@impl@winrt@@QEAA@XZ @ 0x18004E020
 * Callers:
 *     ??4?$event_revoker@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BGA@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x18004DFC8 (--4-$event_revoker@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi@UIDi.c)
 *     ?RegisterForEvents@TaskViewFrame@@AEAAXXZ @ 0x180115058 (-RegisterForEvents@TaskViewFrame@@AEAAXXZ.c)
 *     CToastCenterExperienceManager::RegisterForDisplayMonitorInfoChangedAsync$_ResumeCoro$1 @ 0x180241960 (CToastCenterExperienceManager--RegisterForDisplayMonitorInfoChangedAsync$_ResumeCoro$1.c)
 *     ??1CControlCenterExperienceManager@@UEAA@XZ @ 0x180373430 (--1CControlCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CToastCenterExperienceManager@@UEAA@XZ @ 0x180383424 (--1CToastCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CStartExperienceManager@@UEAA@XZ @ 0x18038ED34 (--1CStartExperienceManager@@UEAA@XZ.c)
 *     CStartExperienceManager::CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1 @ 0x18038F6D0 (CStartExperienceManager--CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1.c)
 *     ??1TaskViewFrame@@UEAA@XZ @ 0x1806BA1A4 (--1TaskViewFrame@@UEAA@XZ.c)
 *     _CControlCenterExperienceManager::CControlCenterExperienceManager_::_1_::dtor$4 @ 0x1806D37E6 (_CControlCenterExperienceManager--CControlCenterExperienceManager_--_1_--dtor$4.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$25 @ 0x1806E552B (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$25.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?get@?$weak_ref@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@winrt@@QEBA@XZ @ 0x180227578 (-get@-$weak_ref@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@winrt@@QEBA@XZ.c)
 *     ??_9IPropertyValue@Foundation@Windows@@$BGA@AA @ 0x1802F68D0 (--_9IPropertyValue@Foundation@Windows@@$BGA@AA.c)
 */

void __fastcall __1__event_revoker_UIDisplayMonitorInfoCollection_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIDisplayMonitorInfoCollection_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BGA_AA_impl_winrt__QEAA_XZ(
        __int64 *a1)
{
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v2; // rdi
  char v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 )
  {
    v2 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>::get(
                                                                                               a1,
                                                                                               &v3);
    if ( *(_QWORD *)v2 )
       Windows::Foundation::IPropertyValue::`vcall'{96,{flat}}(*(_QWORD *)v2, a1[1]);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(v2);
  }
  if ( *a1 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a1);
}
