/*
 * XREFs of ViIoInitializeTimer_Entry @ 0x1406A4FC0
 * Callers:
 *     <none>
 * Callees:
 *     CarReportRuleViolationFromNt @ 0x140B8F914 (CarReportRuleViolationFromNt.c)
 */

__int64 __fastcall ViIoInitializeTimer_Entry(__int64 *a1)
{
  ULONG_PTR v1; // r8
  __int64 result; // rax

  v1 = a1[3];
  if ( *(_QWORD *)(v1 + 40) )
    return CarReportRuleViolationFromNt(0xC9u, 0xAuLL, v1, 0LL, 0LL, 4, *a1);
  return result;
}
