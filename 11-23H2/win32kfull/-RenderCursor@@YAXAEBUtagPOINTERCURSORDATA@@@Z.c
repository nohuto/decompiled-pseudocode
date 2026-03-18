/*
 * XREFs of ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C014F5DC
 * Callers:
 *     ?OnPointerCursorOperation@@YAXXZ @ 0x1C0062D70 (-OnPointerCursorOperation@@YAXXZ.c)
 * Callees:
 *     ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z @ 0x1C001CF84 (-MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z.c)
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C001D69C (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     TransitionCursorSuppressionState @ 0x1C001DAA0 (TransitionCursorSuppressionState.c)
 *     ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x1C00C2A00 (-HidePointer@CursorApiRouter@@QEAA_N_N@Z.c)
 */

void __fastcall RenderCursor(const struct tagPOINTERCURSORDATA *a1)
{
  int v1; // edi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  CursorApiRouter *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9

  v1 = 0;
  if ( !Feedback::gfInRange )
  {
    EnterCrit(1LL, 0LL);
    if ( gCursorSuppressionState != 3 && (Feedback::gfUsingPenCursors || !Feedback::gfUsingTouchCursors) )
      v1 = 1;
    if ( ((gCursorSuppressionState - 1) & 0xFFFFFFFB) != 0 )
      TransitionCursorSuppressionState(2u, 0);
    UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
    Feedback::gfInRange = 1;
  }
  CursorApiRouter::MovePointer(a1, *(HDEV *)(gpDispInfo + 40LL), *((_DWORD *)a1 + 1), *((_DWORD *)a1 + 2));
  CCursorSizes::zzzUpdateGlobalCursorSize(gpCursorSizes, (const struct tagPOINT *)((char *)a1 + 4), 0);
  if ( v1 )
  {
    EnterCrit(1LL, 0LL);
    if ( ((gCursorSuppressionState - 1) & 0xFFFFFFFB) != 0 )
      TransitionCursorSuppressionState(8u, 0);
    CursorApiRouter::HidePointer(v7, 0);
    UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  }
  if ( (*(_DWORD *)a1 & 2) == 0 )
  {
    EnterCrit(1LL, 0LL);
    if ( (Feedback::gfUsingPenCursors || Feedback::gfUsingTouchCursors)
      && ((gCursorSuppressionState - 1) & 0xFFFFFFFB) != 0 )
    {
      TransitionCursorSuppressionState(2u, 0);
    }
    UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
    Feedback::gfInRange = 0;
  }
}
