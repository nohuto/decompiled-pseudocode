/*
 * XREFs of ?HasVisibleCursor@CWindowNode@@UEBA_NXZ @ 0x18024C4B0
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800B8E40 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?HasNonEmptyContent@CWindowNode@@UEBA_NXZ @ 0x180130500 (-HasNonEmptyContent@CWindowNode@@UEBA_NXZ.c)
 */

bool __fastcall CWindowNode::HasVisibleCursor(CWindowNode *this)
{
  char v1; // bl

  v1 = 0;
  if ( *((_BYTE *)this + 746) )
    return CWindowNode::HasNonEmptyContent(this);
  return v1;
}
