/*
 * XREFs of ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x1800B4020
 * Callers:
 *     ?BoostPriority@CSingleViewShellExperience@@QEAAXW4PriorityBoostReason@1@@Z @ 0x18003CE18 (-BoostPriority@CSingleViewShellExperience@@QEAAXW4PriorityBoostReason@1@@Z.c)
 *     ??1TabletModePositioner@@UEAA@XZ @ 0x180077754 (--1TabletModePositioner@@UEAA@XZ.c)
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x1800862E0 (--1CSingleViewShellExperience@@QEAA@XZ.c)
 *     ?UnboostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800AD8DC (-UnboostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?CancelStartTelemetryTimeout@XamlLauncherState@@AEAAX_N@Z @ 0x1800B3840 (-CancelStartTelemetryTimeout@XamlLauncherState@@AEAAX_N@Z.c)
 *     ?Launch@CToastCenterExperienceManager@@AEAAJXZ @ 0x1800B39F0 (-Launch@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800B3FB8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ??1XamlLauncherState@@UEAA@XZ @ 0x180145470 (--1XamlLauncherState@@UEAA@XZ.c)
 *     ?BeginStartTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x1801BE4DC (-BeginStartTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 *     ??1CJumpViewExperienceManager@@UEAA@XZ @ 0x1802167AC (--1CJumpViewExperienceManager@@UEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180219B94 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$D.c)
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x1802A1B4C (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 *     ??1EnabledStateManager@details@wil@@QEAA@XZ @ 0x1802CD42C (--1EnabledStateManager@details@wil@@QEAA@XZ.c)
 *     ?ProcessShutdown@EnabledStateManager@details@wil@@QEAAXXZ @ 0x1802DCBD8 (-ProcessShutdown@EnabledStateManager@details@wil@@QEAAXXZ.c)
 *     ??1CActionCenterExperienceManager@@UEAA@XZ @ 0x18036C0F8 (--1CActionCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CControlCenterExperienceManager@@UEAA@XZ @ 0x180373430 (--1CControlCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CortanaSharedExperienceManager@@UEAA@XZ @ 0x180379F40 (--1CortanaSharedExperienceManager@@UEAA@XZ.c)
 *     ??1CToastCenterExperienceManager@@UEAA@XZ @ 0x180383424 (--1CToastCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CPeopleBarFlyoutExperienceManager@@UEAA@XZ @ 0x180387AF8 (--1CPeopleBarFlyoutExperienceManager@@UEAA@XZ.c)
 *     ??1SearchAppExperienceManager@@UEAA@XZ @ 0x1803AA8E0 (--1SearchAppExperienceManager@@UEAA@XZ.c)
 *     ??1UndockedSearchAppExperienceManager@@UEAA@XZ @ 0x1803B5988 (--1UndockedSearchAppExperienceManager@@UEAA@XZ.c)
 *     ??1PriorityBoostHelper@@UEAA@XZ @ 0x1803C6AB8 (--1PriorityBoostHelper@@UEAA@XZ.c)
 *     ??1MeetNowExperienceManager@@UEAA@XZ @ 0x1803C7CC8 (--1MeetNowExperienceManager@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(PTP_TIMER pti)
{
  SetThreadpoolTimer(pti, 0LL, 0, 0);
  WaitForThreadpoolTimerCallbacks(pti, 1);
  CloseThreadpoolTimer(pti);
}
