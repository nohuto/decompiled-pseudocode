/*
 * XREFs of ??B?$RedirectedFieldfsHooks@K@tagKERNELDESKTOPINFO@@QEBAKXZ @ 0x1C01AA30C
 * Callers:
 *     xxxDestroyWindow @ 0x1C00F2000 (xxxDestroyWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tagKERNELDESKTOPINFO::RedirectedFieldfsHooks<unsigned long>::operator unsigned long(__int64 a1)
{
  return *(unsigned int *)(*(_QWORD *)(a1 - 32) + 16LL);
}
