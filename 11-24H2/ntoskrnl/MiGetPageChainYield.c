/*
 * XREFs of MiGetPageChainYield @ 0x1403CF100
 * Callers:
 *     MiGetPageChain @ 0x1402FCDC0 (MiGetPageChain.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x1402DA180 (KeShouldYieldProcessor.c)
 *     MiWorkingSetIsContended @ 0x1403D01B0 (MiWorkingSetIsContended.c)
 */

__int64 __fastcall MiGetPageChainYield(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdx

  v2 = 0;
  if ( a2 && ((a2 - 1) & *(_QWORD *)(a1 + 104)) != 0 || (*(_DWORD *)(a1 + 32) & 1) == 0 )
    return 0LL;
  v4 = (*(_DWORD *)(a1 + 28) >> 4) & 3;
  if ( (_DWORD)v4 != 2 && (unsigned int)MiWorkingSetIsContended(*(_QWORD *)(a1 + 8), v4) )
    return 1LL;
  LOBYTE(v2) = KeShouldYieldProcessor() != 0;
  return v2;
}
