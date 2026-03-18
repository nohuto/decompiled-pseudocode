/*
 * XREFs of ACPIVectorDisable2 @ 0x140069870
 * Callers:
 *     <none>
 * Callees:
 *     ACPIVectorDisable @ 0x140019AD0 (ACPIVectorDisable.c)
 */

__int64 __fastcall ACPIVectorDisable2(__int64 a1, unsigned int *a2)
{
  return ACPIVectorDisable(*(_QWORD *)(a1 + 768), a2);
}
