/*
 * XREFs of ViIrqlKeLeaveCriticalRegion_Entry @ 0x140B9F6A0
 * Callers:
 *     <none>
 * Callees:
 *     CarReportRuleViolationFromNt @ 0x140B8F914 (CarReportRuleViolationFromNt.c)
 *     ViIrqlLogCRStackTrace @ 0x140B9F6F8 (ViIrqlLogCRStackTrace.c)
 */

struct _KTHREAD *__fastcall ViIrqlKeLeaveCriticalRegion_Entry(__int64 *a1)
{
  struct _KTHREAD *result; // rax

  ViIrqlLogCRStackTrace();
  result = KeGetCurrentThread();
  if ( result->KernelApcDisable > 0 )
    return (struct _KTHREAD *)CarReportRuleViolationFromNt(196, 62LL, 0LL, 0LL, 0LL, 1u, *a1);
  return result;
}
