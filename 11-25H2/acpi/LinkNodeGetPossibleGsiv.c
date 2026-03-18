/*
 * XREFs of LinkNodeGetPossibleGsiv @ 0x1400A8EAC
 * Callers:
 *     IrqArbAddAllocation @ 0x1400A9380 (IrqArbAddAllocation.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1400B170C (IrqArbpUnreferenceArbitrationList.c)
 *     IrqArbpFindSuitableRangePci @ 0x1400BF404 (IrqArbpFindSuitableRangePci.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LinkNodeGetPossibleGsiv(__int64 a1, _DWORD *a2)
{
  if ( !*(_DWORD *)(a1 + 28) )
    return 3221226021LL;
  if ( a2 )
    *a2 = *(_DWORD *)(a1 + 36);
  return 0LL;
}
