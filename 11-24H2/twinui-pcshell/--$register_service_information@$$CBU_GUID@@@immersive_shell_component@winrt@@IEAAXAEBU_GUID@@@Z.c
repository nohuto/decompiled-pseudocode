/*
 * XREFs of ??$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z @ 0x18014A910
 * Callers:
 *     ??0ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@QEAA@XZ @ 0x180149148 (--0ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180149308 (--0InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0?$module_count_wrapper@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@QEAA@XZ @ 0x180149F90 (--0-$module_count_wrapper@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@@d.c)
 *     ??0FocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18014A258 (--0FocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0DashboardManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18021A1B4 (--0DashboardManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180283DBC (--0MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1802933BC (--0WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0?$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@details@wil@@QEAA@XZ @ 0x18029A70C (--0-$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Int.c)
 *     ??0PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1802A4DEC (--0PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QEAA@XZ @ 0x18032CB54 (--0GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QEAA.c)
 *     ??0PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1803F0D00 (--0PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0GamingPosturePositioner@@QEAA@XZ @ 0x1804F8838 (--0GamingPosturePositioner@@QEAA@XZ.c)
 *     ??0?$module_count_wrapper@UDashboardTaskbarButtonSettingsManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@QEAA@XZ @ 0x1805DDBB4 (--0-$module_count_wrapper@UDashboardTaskbarButtonSettingsManager@implementation@Shell@Internal@W.c)
 *     ??0NPSMDesktopShellComponent@@QEAA@XZ @ 0x18060ED04 (--0NPSMDesktopShellComponent@@QEAA@XZ.c)
 *     ??0AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180610F78 (--0AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180618D08 (--0DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0CopilotHotkeyManager@@QEAA@XZ @ 0x180621870 (--0CopilotHotkeyManager@@QEAA@XZ.c)
 *     ??0RdpShellExtensionHost@@QEAA@XZ @ 0x1806735F0 (--0RdpShellExtensionHost@@QEAA@XZ.c)
 * Callees:
 *     ??$_Insert_counted_range@PEBUservice_description@immersive_shell_component@winrt@@@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@@1@PEBUservice_description@immersive_shell_component@winrt@@_K@Z @ 0x18014ABC0 (--$_Insert_counted_range@PEBUservice_description@immersive_shell_component@winrt@@@-$vector@User.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1802D4CD0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::immersive_shell_component::register_service_information<_GUID const>(
        RTL_SRWLOCK *a1,
        __int128 *a2)
{
  RTL_SRWLOCK *v3; // rdi
  __int128 v4; // [rsp+28h] [rbp-30h] BYREF
  __int64 v5; // [rsp+38h] [rbp-20h]
  int v6; // [rsp+40h] [rbp-18h]
  int v7; // [rsp+44h] [rbp-14h]

  v4 = *a2;
  v5 = 0LL;
  v6 = 0;
  v7 = 0;
  v3 = a1 + 10;
  AcquireSRWLockExclusive(a1 + 10);
  std::vector<winrt::immersive_shell_component::service_description>::_Insert_counted_range<winrt::immersive_shell_component::service_description const *>(
    &a1[6],
    a1[7].Ptr,
    &v4,
    1LL);
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  `eh vector destructor iterator'(
    &v4,
    0x20uLL,
    1uLL,
    (void (*)(void *))winrt::immersive_shell_component::service_description::~service_description);
}
