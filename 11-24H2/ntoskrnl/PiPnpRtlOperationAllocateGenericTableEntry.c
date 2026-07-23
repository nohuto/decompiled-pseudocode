/*
 * XREFs of PiPnpRtlOperationAllocateGenericTableEntry @ 0x140A1B2D0
 * Callers:
 *     RtlInsertElementGenericTableAvl @ 0x1403E40F0 (RtlInsertElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x1403E48E0 (RtlInsertElementGenericTableFullAvl.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiPnpRtlOperationAllocateGenericTableEntry(_RTL_AVL_TABLE *a1, unsigned int a2)
{
  return ExAllocatePool2(0x100uLL, a2, 0x41706E50u);
}
