/*
 * XREFs of RtlpFlsHeapFree @ 0x140A0AB2C
 * Callers:
 *     RtlpFlsDataCleanup @ 0x140A0A908 (RtlpFlsDataCleanup.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpFlsHeapFree(void *a1)
{
  ExFreePoolWithTag(a1, 0x6B534C46u);
}
