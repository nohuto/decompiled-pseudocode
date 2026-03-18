/*
 * XREFs of IrqArbpPrepareForTestOrConflict @ 0x1400B1B88
 * Callers:
 *     IrqArbRetestAllocation @ 0x1400A9E40 (IrqArbRetestAllocation.c)
 *     IrqArbpQueryConflictIsa @ 0x1400AA46C (IrqArbpQueryConflictIsa.c)
 *     IrqArbTestAllocation @ 0x1400B1980 (IrqArbTestAllocation.c)
 * Callees:
 *     IrqArbpUnreferenceArbitrationList @ 0x1400B170C (IrqArbpUnreferenceArbitrationList.c)
 *     IcCopyData @ 0x1400B1A64 (IcCopyData.c)
 *     IcUpdateControllers @ 0x1400B1BF8 (IcUpdateControllers.c)
 *     ProcessorCopyData @ 0x1400B22E8 (ProcessorCopyData.c)
 *     LinkNodeClearPossibleData @ 0x1400B265C (LinkNodeClearPossibleData.c)
 *     ProcessorpClearData @ 0x1400B2694 (ProcessorpClearData.c)
 *     IcClearPossibleData @ 0x1400B27A4 (IcClearPossibleData.c)
 *     LinkNodeCopyData @ 0x1400C0240 (LinkNodeCopyData.c)
 */

__int64 __fastcall IrqArbpPrepareForTestOrConflict(__int64 a1, _QWORD **a2)
{
  __int64 result; // rax

  ProcessorpClearData(1LL);
  IcClearPossibleData();
  IcUpdateControllers();
  LinkNodeClearPossibleData();
  result = ProcessorCopyData(1LL);
  if ( (int)result >= 0 )
  {
    result = IcCopyData(1);
    if ( (int)result >= 0 )
    {
      result = LinkNodeCopyData(1LL);
      if ( (int)result >= 0 )
        return IrqArbpUnreferenceArbitrationList(a1, a2);
    }
  }
  return result;
}
