/*
 * XREFs of PiPnpRtlOperationFreeGenericTableEntry @ 0x140A23930
 * Callers:
 *     RtlDeleteElementGenericTableAvl @ 0x1403E4330 (RtlDeleteElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvlEx @ 0x1403E4650 (RtlDeleteElementGenericTableAvlEx.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpRtlOperationFreeGenericTableEntry(_RTL_AVL_TABLE *a1, PVOID a2)
{
  ExFreePoolWithTag(a2, 0x41706E50u);
}
