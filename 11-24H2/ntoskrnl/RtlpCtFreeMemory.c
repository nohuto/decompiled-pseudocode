/*
 * XREFs of RtlpCtFreeMemory @ 0x14078712C
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405ED4D0 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpCtFreeMemory(void *a1)
{
  ExFreePoolWithTag(a1, 0x67744364u);
}
