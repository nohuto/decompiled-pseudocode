/*
 * XREFs of ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x14014E984
 * Callers:
 *     ?ShouldRestoreWindowToState@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x14014BC38 (-ShouldRestoreWindowToState@CRecalcState@@QEBA_NPEBUtagWND@@@Z.c)
 *     ??0CRecalcState@@AEAA@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x14014E360 (--0CRecalcState@@AEAA@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z.c)
 *     ?GetRestoreRect@CRecalcState@@SA?AUtagRECT@@PEBUtagWND@@@Z @ 0x14014E7C0 (-GetRestoreRect@CRecalcState@@SA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x140205E28 (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x140222848 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x140223790 (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x140249264 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14024AF80 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxRestore@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1402C7288 (-xxxRestore@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z.c)
 *     ?xxxInterceptMigrateWindow@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV4@W4MigrateWindowOptions@@PEAK@Z @ 0x1402CEA84 (-xxxInterceptMigrateWindow@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@P.c)
 *     ?LogApplyWindowActionEnd@AdvancedWindowPos@@YAXPEAUtagWND@@W4ApplyWindowActionResult@1@@Z @ 0x1402D2E88 (-LogApplyWindowActionEnd@AdvancedWindowPos@@YAXPEAUtagWND@@W4ApplyWindowActionResult@1@@Z.c)
 *     ?LogApplyWindowActionStart@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D3128 (-LogApplyWindowActionStart@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@.c)
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D5DB4 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 * Callees:
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x14014EAE0 (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 */

__int64 __fastcall AdvancedWindowPos::GetWindowState(const struct tagWND *a1)
{
  char v1; // dl
  __int64 result; // rax

  v1 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
  if ( (v1 & 0x20) != 0 )
    return 2LL;
  result = 1LL;
  if ( (v1 & 1) == 0 )
    return IsArranged(a1) ? 3 : 0;
  return result;
}
