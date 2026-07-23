/*
 * XREFs of VfMiscObfReferenceObject_Exit @ 0x140BA0620
 * Callers:
 *     <none>
 * Callees:
 *     CarReportRuleViolationFromNt @ 0x140B8F914 (CarReportRuleViolationFromNt.c)
 */

__int64 __fastcall VfMiscObfReferenceObject_Exit(__int64 *a1)
{
  __int64 result; // rax

  if ( a1[2] == 1 )
    return CarReportRuleViolationFromNt(196, 63LL, a1[1], 1uLL, 0LL, 0xBu, *a1);
  return result;
}
