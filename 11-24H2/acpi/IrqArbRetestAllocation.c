/*
 * XREFs of IrqArbRetestAllocation @ 0x1400A9E40
 * Callers:
 *     <none>
 * Callees:
 *     ArbRetestAllocation @ 0x1400ABC40 (ArbRetestAllocation.c)
 *     IrqArbpPrepareForTestOrConflict @ 0x1400B1B88 (IrqArbpPrepareForTestOrConflict.c)
 */

__int64 __fastcall IrqArbRetestAllocation(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  result = IrqArbpPrepareForTestOrConflict(a1, *a2);
  if ( (int)result >= 0 )
    return ArbRetestAllocation(a1, a2);
  return result;
}
