/*
 * XREFs of ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18033BE5C
 * Callers:
 *     ?PrecreateStartMenuConfigRegKey@StartDocked@@YAXXZ @ 0x180064B8C (-PrecreateStartMenuConfigRegKey@StartDocked@@YAXXZ.c)
 *     ?StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z @ 0x1800B9260 (-StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z.c)
 *     ?CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z @ 0x1800BC950 (-CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z.c)
 *     ?CheckForRemovedStartupApp@StartupRegKeyNotification@@UEAAXXZ @ 0x1800BCF10 (-CheckForRemovedStartupApp@StartupRegKeyNotification@@UEAAXXZ.c)
 *     ?CheckForRemovedStartupApp@StartupFolderNotification@@UEAAXXZ @ 0x1800BE900 (-CheckForRemovedStartupApp@StartupFolderNotification@@UEAAXXZ.c)
 *     ?StartMonitor@StartupAppMonitor@@QEAAXXZ @ 0x1800F0B10 (-StartMonitor@StartupAppMonitor@@QEAAXXZ.c)
 *     ??0StartupNotification@@QEAA@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800F1480 (--0StartupNotification@@QEAA@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@Z.c)
 *     ??0StartupRegKeyNotification@@QEAA@PEAUHKEY__@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4StartupAppLocation@@1@Z @ 0x1801E1E00 (--0StartupRegKeyNotification@@QEAA@PEAUHKEY__@@V-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 *     ?CheckForNewStartupAppAdded@StartupRegKeyNotification@@UEAAX_N@Z @ 0x1801EEFA0 (-CheckForNewStartupAppAdded@StartupRegKeyNotification@@UEAAX_N@Z.c)
 *     ?TryGetString@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHKEY__@@PEBG1@Z @ 0x180212F34 (-TryGetString@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAUHKEY__@@PEB.c)
 *     ?SetLastAppBackupListenerStartTimeForStateCapture@implementation@Shell@Internal@Windows@winrt@@YAXXZ @ 0x180215674 (-SetLastAppBackupListenerStartTimeForStateCapture@implementation@Shell@Internal@Windows@winrt@@Y.c)
 *     ?HasGamingAppCapability@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SA_NAEBUhstring@7@@Z @ 0x18033AF14 (-HasGamingAppCapability@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Inte.c)
 *     ?LoadQuirksForApp@LegacyWindowWrapper@@AEAAJXZ @ 0x180431C38 (-LoadQuirksForApp@LegacyWindowWrapper@@AEAAJXZ.c)
 *     ?LoadQuirksForApp@LegacyUwpWindowWrapper@@AEAAJXZ @ 0x180437A18 (-LoadQuirksForApp@LegacyUwpWindowWrapper@@AEAAJXZ.c)
 *     ?GetDragDropExtensionClsId@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAA?AU_GUID@@XZ @ 0x180579A1C (-GetDragDropExtensionClsId@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Int.c)
 *     ?RefreshRegKeyHandle@StartupRegKeyNotification@@QEAAXXZ @ 0x180586180 (-RefreshRegKeyHandle@StartupRegKeyNotification@@QEAAXXZ.c)
 *     ?TryEnsurePackageRegistered@ProtocolLauncher@Utils@@AEAAXXZ @ 0x1805F9358 (-TryEnsurePackageRegistered@ProtocolLauncher@Utils@@AEAAXXZ.c)
 *     ?RegisterCompatJsonWriteTimeRegistryWatcher@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18061506C (-RegisterCompatJsonWriteTimeRegistryWatcher@AppBackupListener@implementation@Shell@Internal@Wind.c)
 * Callees:
 *     ??$ReportFailure_Win32@$0A@@details@wil@@YAJPEAXIPEBD110K@Z @ 0x180339200 (--$ReportFailure_Win32@$0A@@details@wil@@YAJPEAXIPEBD110K@Z.c)
 */

void __fastcall __noreturn wil::details::in1diag3::_Throw_Win32(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4,
        unsigned int a5)
{
  int v5; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Win32<0>((__int64)this, a2, a3, (__int64)a4, v5, retaddr, (int)a4);
}
