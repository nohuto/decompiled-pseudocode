/*
 * XREFs of RtlpFlsHeapFree @ 0x140A0B8EC
 * Callers:
 *     RtlpFlsDataCleanup @ 0x140A0B6C8 (RtlpFlsDataCleanup.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpFlsHeapFree(void *a1)
{
  ExFreePoolWithTag(a1, 0x6B534C46u);
}
