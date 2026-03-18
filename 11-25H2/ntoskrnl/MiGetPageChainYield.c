/*
 * XREFs of MiGetPageChainYield @ 0x14045F44C
 * Callers:
 *     MiGetPageChain @ 0x140241940 (MiGetPageChain.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 *     MiWorkingSetIsContended @ 0x140338960 (MiWorkingSetIsContended.c)
 */

__int64 __fastcall MiGetPageChainYield(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v4; // edx

  v2 = 0;
  if ( a2 && ((a2 - 1) & *(_QWORD *)(a1 + 104)) != 0 || (*(_DWORD *)(a1 + 32) & 1) == 0 )
    return 0LL;
  v4 = (*(_DWORD *)(a1 + 28) >> 4) & 3;
  if ( v4 != 2 && (unsigned int)MiWorkingSetIsContended(*(_QWORD *)(a1 + 8), v4) )
    return 1LL;
  LOBYTE(v2) = KeShouldYieldProcessor() != 0;
  return v2;
}
