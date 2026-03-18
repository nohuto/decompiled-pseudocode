/*
 * XREFs of ?Execute@ShellHangDetection@@YAXXZ @ 0x140269CA0
 * Callers:
 *     ?xxxReportWindowHotKey@@YAXPEBUtagHOTKEY@@PEAUtagWND@@W4ReportHotKeyHint@@@Z @ 0x1402895C8 (-xxxReportWindowHotKey@@YAXPEBUtagHOTKEY@@PEAUtagWND@@W4ReportHotKeyHint@@@Z.c)
 *     ?_OnStateTransition@Edgy@@YAQEAXAEAUtagEDGY_DATA@@W4tagEDGY_STATE@@AEBUtagARC_DATA@1@@Z @ 0x1402A4B50 (-_OnStateTransition@Edgy@@YAQEAXAEAUtagEDGY_DATA@@W4tagEDGY_STATE@@AEBUtagARC_DATA@1@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z @ 0x140148A70 (-IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z.c)
 *     ShellHangDetection::_anonymous_namespace_::ReportHungShellToWer @ 0x140269D10 (ShellHangDetection--_anonymous_namespace_--ReportHungShellToWer.c)
 */

void __fastcall ShellHangDetection::Execute(ShellHangDetection *this, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rdi
  const struct tagTHREADINFO *v4; // rbx
  __int64 v5; // rbx

  v3 = *((_QWORD *)PtiCurrent((__int64)this, a2) + 62);
  v4 = *(const struct tagTHREADINFO **)(v3 + 288);
  if ( v4 && IsThreadHung(*(const struct tagTHREADINFO **)(v3 + 288), v2)
    || (v5 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 184LL)) != 0
    && (v4 = *(const struct tagTHREADINFO **)(v5 + 16)) != 0LL
    && IsThreadHung(v4, v2) )
  {
    ShellHangDetection::_anonymous_namespace_::ReportHungShellToWer(v4);
  }
}
