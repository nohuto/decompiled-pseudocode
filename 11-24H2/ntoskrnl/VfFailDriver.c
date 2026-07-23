/*
 * XREFs of VfFailDriver @ 0x14060ECD0
 * Callers:
 *     <none>
 * Callees:
 *     CarReportRuleViolationFromNt @ 0x140B8F914 (CarReportRuleViolationFromNt.c)
 */

__int64 __fastcall VfFailDriver(ULONG a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 result; // rax

  result = a7;
  if ( a7 )
    result = *(_QWORD *)(a7 + 24);
  if ( ViDdiInitialized )
    return CarReportRuleViolationFromNt(a1, a2, 0LL, 0LL, 0LL, 30, result);
  return result;
}
