/*
 * XREFs of PoDiagFreeUsermodeStack @ 0x140A913A8
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x1404A17F8 (ExCleanTimerResolutionRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PoDiagFreeUsermodeStack(void *a1)
{
  ExFreePoolWithTag(a1, 0x50455654u);
}
