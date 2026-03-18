/*
 * XREFs of IrqArbpLookupIsaOverrideByGsiv @ 0x1400C05C0
 * Callers:
 *     IrqArbAddAllocation @ 0x1400A9380 (IrqArbAddAllocation.c)
 *     IrqArbIrqFromGsiv @ 0x1400A9D8C (IrqArbIrqFromGsiv.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1400AA210 (IrqArbpFindSuitableRangeIsa.c)
 * Callees:
 *     <none>
 */

char __fastcall IrqArbpLookupIsaOverrideByGsiv(int a1, _DWORD *a2)
{
  __int64 i; // r8

  for ( i = 0LL; (unsigned int)i < 0x10; i = (unsigned int)(i + 1) )
  {
    if ( *((_DWORD *)&IsaVectorOverrides + 2 * i) == a1 )
    {
      *a2 = i;
      return 1;
    }
  }
  return 0;
}
