/*
 * XREFs of ?HasVisibleCursor@CWindowNode@@UEBA_NXZ @ 0x180277170
 * Callers:
 *     ?IsLegacyInvertedCursor@CWindowNode@@UEBA_NXZ @ 0x1802773A0 (-IsLegacyInvertedCursor@CWindowNode@@UEBA_NXZ.c)
 * Callees:
 *     ?HasNonEmptyContent@CWindowNode@@UEBA_NXZ @ 0x180049B40 (-HasNonEmptyContent@CWindowNode@@UEBA_NXZ.c)
 */

bool __fastcall CWindowNode::HasVisibleCursor(CWindowNode *this)
{
  char v1; // bl

  v1 = 0;
  if ( *((_BYTE *)this + 754) )
    return CWindowNode::HasNonEmptyContent(this);
  return v1;
}
