/*
 * XREFs of WdiUpdateSem @ 0x14064A614
 * Callers:
 *     NtTraceControl @ 0x140A82250 (NtTraceControl.c)
 * Callees:
 *     WdipAccessCheck @ 0x14064A634 (WdipAccessCheck.c)
 *     WdipSemUpdate @ 0x1407A0668 (WdipSemUpdate.c)
 */

__int64 WdiUpdateSem()
{
  __int64 result; // rax

  result = WdipAccessCheck();
  if ( (int)result >= 0 )
    return WdipSemUpdate();
  return result;
}
