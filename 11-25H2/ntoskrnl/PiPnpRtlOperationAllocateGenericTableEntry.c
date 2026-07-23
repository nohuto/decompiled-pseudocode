/*
 * XREFs of PiPnpRtlOperationAllocateGenericTableEntry @ 0x140A1D5A0
 * Callers:
 *     RtlInsertElementGenericTableAvl @ 0x1403EA890 (RtlInsertElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x1403EB080 (RtlInsertElementGenericTableFullAvl.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiPnpRtlOperationAllocateGenericTableEntry(_RTL_AVL_TABLE *a1)
{
  return ExAllocatePool2(0x100uLL);
}
