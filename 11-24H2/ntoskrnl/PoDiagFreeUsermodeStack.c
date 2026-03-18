/*
 * XREFs of PoDiagFreeUsermodeStack @ 0x140A94BF8
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x1404A6E8C (ExCleanTimerResolutionRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PoDiagFreeUsermodeStack(void *a1)
{
  ExFreePoolWithTag(a1, 0x50455654u);
}
