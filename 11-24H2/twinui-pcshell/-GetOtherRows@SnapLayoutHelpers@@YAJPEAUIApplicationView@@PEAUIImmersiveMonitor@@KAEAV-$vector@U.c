/*
 * XREFs of ?GetOtherRows@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@KAEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x1805AB85C
 * Callers:
 *     ?TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAPPING_MODE@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x1802338D0 (-TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIAppli.c)
 * Callees:
 *     ?GetOtherRects@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@KAEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x1805AB614 (-GetOtherRects@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAXPEAUIApplicationView@@PEAUIIm.c)
 */

__int64 __fastcall SnapLayoutHelpers::GetOtherRows(__int64 *a1, SnapRectHelpers *a2, __int64 a3, _QWORD *a4)
{
  const char *v4; // r9
  __int64 result; // rax
  void **v6; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = &SnapLayoutHelpers::RowSmartFillSolver::`vftable';
  try
  {
    SnapLayoutHelpers::SpanningSmartFillSolverBase::GetOtherRects((__int64)&v6, a1, a2, (__int64)a4, a4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xA18,
                           (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
                           v4);
  }
  return result;
}
