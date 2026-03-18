/*
 * XREFs of IrqArbTestAllocation @ 0x1400B1980
 * Callers:
 *     <none>
 * Callees:
 *     IrqArbpPrepareForTestOrConflict @ 0x1400B1B88 (IrqArbpPrepareForTestOrConflict.c)
 *     ArbTestAllocation @ 0x1400BD880 (ArbTestAllocation.c)
 */

__int64 __fastcall IrqArbTestAllocation(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  result = IrqArbpPrepareForTestOrConflict(a1, *a2);
  if ( (int)result >= 0 )
    return ArbTestAllocation(a1, a2);
  return result;
}
