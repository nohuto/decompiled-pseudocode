/*
 * XREFs of ?FindExistingNamedInput@CBrushRenderingGraphBuilder@@AEBA_NAEBUGraphInputParameters@CBrushRenderingGraph@@PEAI@Z @ 0x1802170E8
 * Callers:
 *     ?AddNineGridBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCNineGridBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1802B7140 (-AddNineGridBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCNineGridBrush@@_NPEAPEAVCRenderingTechn.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBrushRenderingGraphBuilder::FindExistingNamedInput(
        CBrushRenderingGraphBuilder *this,
        const struct CBrushRenderingGraph::GraphInputParameters *a2,
        unsigned int *a3)
{
  __int64 v3; // r10
  unsigned int v5; // ecx
  __int64 v7; // r8
  __int64 v8; // rdx
  bool v9; // cf

  v3 = *(_QWORD *)this;
  v5 = 0;
  if ( *(_DWORD *)(v3 + 40) )
  {
    v7 = *(_QWORD *)a2;
    v8 = *(_QWORD *)(v3 + 16);
    do
    {
      if ( *(_QWORD *)v8 == v7
        && *(_QWORD *)(v8 + 8) == *((_QWORD *)a2 + 1)
        && *(_DWORD *)(v8 + 16) == *((_DWORD *)a2 + 4) )
      {
        break;
      }
      ++v5;
      v8 += 24LL;
    }
    while ( v5 < *(_DWORD *)(v3 + 40) );
  }
  v9 = v5 < *(_DWORD *)(v3 + 40);
  *a3 = v5;
  return v9;
}
