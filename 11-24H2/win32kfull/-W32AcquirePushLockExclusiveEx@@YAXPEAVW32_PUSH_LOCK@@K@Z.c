/*
 * XREFs of ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14002BCE8
 * Callers:
 *     ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x14002B398 (-HidePointer@CursorApiRouter@@QEAA_N_N@Z.c)
 *     ??$GreAcquirePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x14002B4A4 (--$GreAcquirePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x14002B4D0 (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     ?MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z @ 0x140093C68 (-MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z.c)
 *     ?DeBoost@CShellForegroundBoost@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1400F7674 (-DeBoost@CShellForegroundBoost@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?Boost@CShellForegroundBoost@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1400F77E4 (-Boost@CShellForegroundBoost@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1401105D4 (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x1401317DC (-SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z.c)
 *     ??$GrepAcquirePushLockCommon@$0A@$00P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z @ 0x1401525C4 (--$GrepAcquirePushLockCommon@$0A@$00P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z.c)
 *     ?ApplyForegroundPolicyConsole@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x140189324 (-ApplyForegroundPolicyConsole@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?DeBoostIfTime@CShellForegroundBoost@@QEAAX_J@Z @ 0x1401B96B0 (-DeBoostIfTime@CShellForegroundBoost@@QEAAX_J@Z.c)
 *     ?OnDaemonTimer@CForegroundLaunch@@QEAAXXZ @ 0x1401BCC88 (-OnDaemonTimer@CForegroundLaunch@@QEAAXXZ.c)
 *     ?OnDaemonTimerRateChanged@CForegroundLaunch@@QEAAX_N@Z @ 0x1401C2970 (-OnDaemonTimerRateChanged@CForegroundLaunch@@QEAAX_N@Z.c)
 *     ?ApplyForegroundPolicy@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1401D1314 (-ApplyForegroundPolicy@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?CancelForegroundActivate@CForegroundLaunch@@QEAAXXZ @ 0x1401D5AE8 (-CancelForegroundActivate@CForegroundLaunch@@QEAAXXZ.c)
 *     ?ProcessInkFeedbackCommand@InkProcessor@@QEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1401E2294 (-ProcessInkFeedbackCommand@InkProcessor@@QEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 *     ?CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ @ 0x1401F2EC4 (-CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ.c)
 *     ?Connect@CUserPlaySound@@AEAAJPEAX@Z @ 0x14020466C (-Connect@CUserPlaySound@@AEAAJPEAX@Z.c)
 *     ?Disconnect@CUserPlaySound@@AEAAJXZ @ 0x14020472C (-Disconnect@CUserPlaySound@@AEAAJXZ.c)
 *     ?OnFirstActivationAttempted@CForegroundLaunch@@QEAAXXZ @ 0x1402132DC (-OnFirstActivationAttempted@CForegroundLaunch@@QEAAXXZ.c)
 *     ?DeBoostAll@CShellForegroundBoost@@QEAAXXZ @ 0x14021EB84 (-DeBoostAll@CShellForegroundBoost@@QEAAXXZ.c)
 *     ?OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x14026BC78 (-OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?GetActivePpiPreference@CRotationMgr@@SA?AW4ORIENTATION_PREFERENCE@@PEAK@Z @ 0x1402701CC (-GetActivePpiPreference@CRotationMgr@@SA-AW4ORIENTATION_PREFERENCE@@PEAK@Z.c)
 *     ?IsActivePpi@CRotationMgr@@SA_NPEAUtagPROCESSINFO@@@Z @ 0x140270290 (-IsActivePpi@CRotationMgr@@SA_NPEAUtagPROCESSINFO@@@Z.c)
 *     ?PushForegroundPolicy@CForegroundLaunch@@QEAAXPEAU_EPROCESS@@UtagProcessLaunchPolicy@@@Z @ 0x14028CC84 (-PushForegroundPolicy@CForegroundLaunch@@QEAAXPEAU_EPROCESS@@UtagProcessLaunchPolicy@@@Z.c)
 *     ?PushForegroundPolicy_Old@CForegroundLaunch@@QEAAXPEAXPEAU_EPROCESS@@UtagProcessLaunchPolicy@@@Z @ 0x14028D0F8 (-PushForegroundPolicy_Old@CForegroundLaunch@@QEAAXPEAXPEAU_EPROCESS@@UtagProcessLaunchPolicy@@@Z.c)
 *     ?TryRecordParentPidLegacyPolicy@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x14028D554 (-TryRecordParentPidLegacyPolicy@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?StoreNewCursorShape@CursorApiRouter@@AEAAKPEAU_MIT_CURSOR_MANAGEMENT_SHAPEHEADER@@K@Z @ 0x1402DAF28 (-StoreNewCursorShape@CursorApiRouter@@AEAAKPEAU_MIT_CURSOR_MANAGEMENT_SHAPEHEADER@@K@Z.c)
 *     ?UserGetDwmCursorShape@CursorApiRouter@@QEAAKKREAXKREAK@Z @ 0x1402DB118 (-UserGetDwmCursorShape@CursorApiRouter@@QEAAKKREAXKREAK@Z.c)
 *     ??1InkProcessor@@AEAA@XZ @ 0x1402EA648 (--1InkProcessor@@AEAA@XZ.c)
 *     ?OnDeviceClosed@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1402EA77C (-OnDeviceClosed@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceOpened@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1402EA830 (-OnDeviceOpened@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceRemoved@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1402EA8E4 (-OnDeviceRemoved@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall W32AcquirePushLockExclusiveEx(struct W32_PUSH_LOCK *a1, unsigned int a2)
{
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1, a2);
}
