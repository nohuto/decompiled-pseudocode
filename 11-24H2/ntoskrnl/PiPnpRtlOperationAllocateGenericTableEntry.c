/*
 * XREFs of PiPnpRtlOperationAllocateGenericTableEntry @ 0x140A26850
 * Callers:
 *     RtlInsertElementGenericTableAvl @ 0x1403F03D0 (RtlInsertElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x1403F0BC0 (RtlInsertElementGenericTableFullAvl.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiPnpRtlOperationAllocateGenericTableEntry(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePool2(0x100uLL);
}
