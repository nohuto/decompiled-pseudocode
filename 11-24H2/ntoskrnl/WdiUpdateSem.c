/*
 * XREFs of WdiUpdateSem @ 0x14064C054
 * Callers:
 *     NtTraceControl @ 0x140834A80 (NtTraceControl.c)
 * Callees:
 *     WdipAccessCheck @ 0x14064C074 (WdipAccessCheck.c)
 *     WdipSemUpdate @ 0x1407A0558 (WdipSemUpdate.c)
 */

__int64 WdiUpdateSem()
{
  __int64 result; // rax

  result = WdipAccessCheck();
  if ( (int)result >= 0 )
    return WdipSemUpdate();
  return result;
}
