/*
 * XREFs of ACPIVectorClear2 @ 0x140069640
 * Callers:
 *     <none>
 * Callees:
 *     ACPIVectorClear @ 0x140069600 (ACPIVectorClear.c)
 */

__int64 __fastcall ACPIVectorClear2(__int64 a1, unsigned int *a2)
{
  return ACPIVectorClear(*(_QWORD *)(a1 + 768), a2);
}
