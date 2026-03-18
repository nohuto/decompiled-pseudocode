/*
 * XREFs of ?RecycleLayer@CBatchOptimizer@@AEAAXH@Z @ 0x180188A30
 * Callers:
 *     ?DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z @ 0x180188864 (-DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CBatchOptimizer::RecycleLayer(CBatchOptimizer *this, int a2)
{
  int v2; // eax
  __int64 v3; // r8
  int v4; // r11d
  _DWORD *v5; // r9

  v2 = *((_DWORD *)this + 8) - 1;
  if ( a2 != v2 )
  {
    v3 = a2;
    v4 = *((_DWORD *)this + a2 + 12);
    v5 = (_DWORD *)((char *)this + 4 * a2 + 48);
    do
    {
      ++v3;
      *v5 = v5[1];
      ++v5;
    }
    while ( v3 != v2 );
    *((_DWORD *)this + v2 + 12) = v4;
  }
  --*((_DWORD *)this + 8);
}
