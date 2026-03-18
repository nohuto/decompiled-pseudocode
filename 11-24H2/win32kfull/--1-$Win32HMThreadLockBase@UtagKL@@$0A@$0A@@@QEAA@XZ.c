/*
 * XREFs of ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x14009D218
 * Callers:
 *     ?xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x14002E080 (-xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagACCELTABLE@@@@QEAA@XZ @ 0x14009D200 (--1-$Win32HMThreadLockAlways@UtagACCELTABLE@@@@QEAA@XZ.c)
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x140133ED4 (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCur.c)
 *     xxxCsDdeInitialize @ 0x14015F1B4 (xxxCsDdeInitialize.c)
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 *     ??1Win32HMThreadLockAlwaysMenuNoModify@@QEAA@XZ @ 0x1401B1700 (--1Win32HMThreadLockAlwaysMenuNoModify@@QEAA@XZ.c)
 *     NtUserSetSystemMenu @ 0x1402178B0 (NtUserSetSystemMenu.c)
 *     CheckFullScreen @ 0x14022E334 (CheckFullScreen.c)
 *     ?xxxApplyGlobalInputSettings@@YAXH@Z @ 0x140238488 (-xxxApplyGlobalInputSettings@@YAXH@Z.c)
 *     xxxDDETrackPostHook @ 0x14024E980 (xxxDDETrackPostHook.c)
 *     NtUserHiliteMenuItem @ 0x140298630 (NtUserHiliteMenuItem.c)
 *     ?xxxInterceptMinimizeOnMigrate@WindowActions@@YAXPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@PEAK@Z @ 0x1402CF4B8 (-xxxInterceptMinimizeOnMigrate@WindowActions@@YAXPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@P.c)
 *     ?xxxResolveArrangePosition@@YA_NPEAUtagWND@@PEBVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z @ 0x1402D1294 (-xxxResolveArrangePosition@@YA_NPEAUtagWND@@PEBVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z.c)
 *     xxxDoScrollMenu @ 0x1402E6618 (xxxDoScrollMenu.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 */

__int64 __fastcall Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(
        _QWORD *BugCheckParameter3,
        __int64 a2)
{
  struct tagTHREADINFO *v3; // rax

  v3 = PtiCurrent((__int64)BugCheckParameter3, a2);
  return Win32HM_UnlockFromThread<0>((ULONG_PTR)v3, BugCheckParameter3);
}
