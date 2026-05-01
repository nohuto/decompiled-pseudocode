/*
 * XREFs of ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1802BB350
 * Callers:
 *     ??1InteractionRecord@SnapInteraction@@QEAA@XZ @ 0x1801A9EAC (--1InteractionRecord@SnapInteraction@@QEAA@XZ.c)
 *     ?GetAppThatWasDeleted@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$optional@Uhstring@winrt@@@std@@PEAUHKEY__@@PEBG@Z @ 0x1801BBE8C (-GetAppThatWasDeleted@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$op.c)
 *     ?CommitInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801F4108 (-CommitInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV-$unique_any_t@V-$unique_storage@.c)
 *     ?value@?$optional@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@@std@@QEGAAAEAW4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@XZ @ 0x180207E38 (-value@-$optional@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@w.c)
 *     std::optional__anonymous_namespace_::DashboardExtensionVersion_::value @ 0x180210A00 (std--optional__anonymous_namespace_--DashboardExtensionVersion_--value.c)
 *     ?value@?$optional@I@std@@QEGAAAEAIXZ @ 0x18021E950 (-value@-$optional@I@std@@QEGAAAEAIXZ.c)
 *     ?RegistryWatcherCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXW4RegistryChangeKind@wil@@PEAUHKEY__@@PEBGAEAV?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@8@@Z @ 0x180284768 (-RegistryWatcherCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXW4R.c)
 *     ?value@?$optional@Uhstring@winrt@@@std@@QEGAAAEAUhstring@winrt@@XZ @ 0x1802BB330 (-value@-$optional@Uhstring@winrt@@@std@@QEGAAAEAUhstring@winrt@@XZ.c)
 *     ?value@?$optional@_N@std@@QEGAAAEA_NXZ @ 0x1802CECD4 (-value@-$optional@_N@std@@QEGAAAEA_NXZ.c)
 *     ?ApplyPendingValues@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x1803620B0 (-ApplyPendingValues@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt.c)
 *     ?OnPrimaryViewSystemLevelShowRequested@TabTipAdapter@KeyboardHosting@@QEAAJPEA_NAEBUhstring@winrt@@V?$optional@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@std@@@Z @ 0x18047EB04 (-OnPrimaryViewSystemLevelShowRequested@TabTipAdapter@KeyboardHosting@@QEAAJPEA_NAEBUhstring@winr.c)
 *     ?ProcessAllRdpShellExtensions@RdpShellExtensionHost@@IEAAJXZ @ 0x180673EBC (-ProcessAllRdpShellExtensions@RdpShellExtensionHost@@IEAAJXZ.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 */

void __noreturn std::_Throw_bad_optional_access(void)
{
  void **pExceptionObject; // [rsp+20h] [rbp-28h] BYREF
  __int128 v1; // [rsp+28h] [rbp-20h]

  pExceptionObject = &std::bad_optional_access::`vftable';
  v1 = 0LL;
  throw (std::bad_optional_access *)&pExceptionObject;
}
