/*
 * XREFs of ?IsVisualInAncestorList@CBackdropVisualImage@@QEBA_NPEBVCVisual@@AEBVCVisualTreePath@@@Z @ 0x180197FB0
 * Callers:
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BA220 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E9350 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CBackdropVisualImage::IsVisualInAncestorList(
        CBackdropVisualImage *this,
        const struct CVisual *a2,
        const struct CVisualTreePath *a3)
{
  __int64 v3; // r9
  __int64 v4; // rbx
  _QWORD *v7; // rcx
  __int64 v8; // rdx

  v3 = *((_QWORD *)this + 276);
  v4 = *((_QWORD *)this + 277);
  while ( 1 )
  {
    if ( v3 == v4 )
      return 0;
    if ( a2 == *(const struct CVisual **)v3 )
    {
      v7 = *(_QWORD **)(v3 + 8);
      if ( *((_QWORD *)a3 + 1) - *(_QWORD *)a3 == *(_QWORD *)(v3 + 16) - (_QWORD)v7 )
        break;
    }
LABEL_4:
    v3 += 64LL;
  }
  v8 = *(_QWORD *)a3 - (_QWORD)v7;
  while ( (_QWORD *)((char *)v7 + v8) != *((_QWORD **)a3 + 1) )
  {
    if ( *(_QWORD *)((char *)v7 + v8) != *v7 || *(_QWORD *)((char *)v7 + v8 + 8) != v7[1] )
      goto LABEL_4;
    v7 += 2;
  }
  return 1;
}
