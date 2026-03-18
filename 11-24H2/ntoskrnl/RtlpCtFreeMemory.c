/*
 * XREFs of RtlpCtFreeMemory @ 0x1407871FC
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405EFEF0 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpCtFreeMemory(void *a1)
{
  ExFreePoolWithTag(a1, 0x67744364u);
}
