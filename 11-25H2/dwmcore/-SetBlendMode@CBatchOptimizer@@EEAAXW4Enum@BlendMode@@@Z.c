/*
 * XREFs of ?SetBlendMode@CBatchOptimizer@@EEAAXW4Enum@BlendMode@@@Z @ 0x1801E5300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CBatchOptimizer::SetBlendMode(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 24) = a2;
}
