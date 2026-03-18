/*
 * XREFs of PoDiagFreeUsermodeStack @ 0x140A90AB8
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x1404A6260 (ExCleanTimerResolutionRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PoDiagFreeUsermodeStack(void *a1)
{
  ExFreePoolWithTag(a1, 0x50455654u);
}
