/*
 * XREFs of ?xxxSwitchCursors@@YAXHH@Z @ 0x1C01AD308
 * Callers:
 *     ?OnPointerCursorOperation@@YAXXZ @ 0x1C0062D70 (-OnPointerCursorOperation@@YAXXZ.c)
 * Callees:
 *     TransitionCursorSuppressionState @ 0x1C001DAA0 (TransitionCursorSuppressionState.c)
 *     ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x1C00C2A00 (-HidePointer@CursorApiRouter@@QEAA_N_N@Z.c)
 *     ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ @ 0x1C01AD1B4 (-xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ.c)
 */

void __fastcall xxxSwitchCursors(int a1, int a2)
{
  CursorApiRouter *v3; // rcx
  Feedback *v4; // rcx
  CursorApiRouter *v5; // rcx

  Feedback::gfUsingPenCursors = a1;
  Feedback::gfUsingTouchCursors = a1 == 0;
  if ( a1 )
  {
    EtwTraceContactVisualizationInfo(1LL);
    v3 = (CursorApiRouter *)*(unsigned int *)UPDWORDPointer(8222LL);
    if ( a2 && (((unsigned __int8)v3 & 0x20) == 0 || Feedback::gfForceHidePenCursor) )
    {
      TransitionCursorSuppressionState(3u, 0);
    }
    else
    {
      CursorApiRouter::HidePointer(v3, 1u);
      Feedback::xxxReplaceMouseCursorsWithPenCursors(v4);
    }
  }
  else
  {
    EtwTraceContactVisualizationInfo(2LL);
    CursorApiRouter::HidePointer(v5, 1u);
  }
}
