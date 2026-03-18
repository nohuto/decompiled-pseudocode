/*
 * XREFs of ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x1C005E8D8
 * Callers:
 *     _anonymous_namespace_::xxxNormalizeRect @ 0x1C005C7C8 (_anonymous_namespace_--xxxNormalizeRect.c)
 *     EditionTransformIvTouchInput @ 0x1C01CB120 (EditionTransformIvTouchInput.c)
 *     EditionTransformPointForIvSpatialInput @ 0x1C01CB200 (EditionTransformPointForIvSpatialInput.c)
 *     ?HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUtagCHECKPOINT@@PEAK@Z @ 0x1C01E9368 (-HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUtagCHECKPOINT@@PEAK@Z.c)
 *     ?UpdateDragRectForSizingAway@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@1@Z @ 0x1C01EA628 (-UpdateDragRectForSizingAway@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@1@Z.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C01EBD4C (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     ?NotifyPosAndStateApplied@ShellWindowPos@@YAXPEBUtagWND@@W4TRACKED_WINDOW_STATE@@AEBUtagRECT@@K@Z @ 0x1C021CAD8 (-NotifyPosAndStateApplied@ShellWindowPos@@YAXPEBUtagWND@@W4TRACKED_WINDOW_STATE@@AEBUtagRECT@@K@.c)
 *     ?xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@@2GU4@PEAUtagMONITOR@@PEAU4@PEAW4State@AdvancedWindowPos@@PEAK@Z @ 0x1C021DA48 (-xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@.c)
 *     _anonymous_namespace_::GetArrangedOptions @ 0x1C023AE08 (_anonymous_namespace_--GetArrangedOptions.c)
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x1C023C82C (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 *     ?xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1C023D090 (-xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     WindowMargins::_anonymous_namespace_::GetWindowMargins @ 0x1C005F890 (WindowMargins--_anonymous_namespace_--GetWindowMargins.c)
 */

struct tagRECT *__fastcall WindowMargins::ReduceRect(
        struct tagRECT *this,
        struct tagRECT *__return_ptr retstr,
        const struct tagWND *a3,
        const struct tagRECT *a4)
{
  __int64 WindowMargins; // rax
  int v7; // edx
  struct tagRECT *result; // rax

  WindowMargins = WindowMargins::_anonymous_namespace_::GetWindowMargins(retstr, (unsigned int)a4);
  this->left = *(_DWORD *)a3 + (__int16)WindowMargins;
  v7 = *((_DWORD *)a3 + 2) - SWORD1(WindowMargins);
  this->top = *((_DWORD *)a3 + 1) + SWORD2(WindowMargins);
  this->bottom = *((_DWORD *)a3 + 3) - SHIWORD(WindowMargins);
  result = this;
  this->right = v7;
  return result;
}
