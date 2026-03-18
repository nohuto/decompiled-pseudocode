/*
 * XREFs of PiPnpRtlOperationFreeGenericTableEntry @ 0x140A2EEF0
 * Callers:
 *     RtlDeleteElementGenericTableAvl @ 0x1403F0610 (RtlDeleteElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvlEx @ 0x1403F0930 (RtlDeleteElementGenericTableAvlEx.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpRtlOperationFreeGenericTableEntry(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0x41706E50u);
}
