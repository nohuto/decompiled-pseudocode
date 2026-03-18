/*
 * XREFs of RtlpFlsHeapFree @ 0x140A08628
 * Callers:
 *     RtlpFlsDataCleanup @ 0x140A08404 (RtlpFlsDataCleanup.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpFlsHeapFree(void *a1)
{
  ExFreePoolWithTag(a1, 0x6B534C46u);
}
