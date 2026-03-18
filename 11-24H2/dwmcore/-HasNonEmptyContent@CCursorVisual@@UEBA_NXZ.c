/*
 * XREFs of ?HasNonEmptyContent@CCursorVisual@@UEBA_NXZ @ 0x1802906B0
 * Callers:
 *     <none>
 * Callees:
 *     ?HasNonEmptyContent@CVisual@@UEBA_NXZ @ 0x18004EA00 (-HasNonEmptyContent@CVisual@@UEBA_NXZ.c)
 *     ?HasVisibleShape@CCursorState@@QEBA_NXZ @ 0x1802B2FE8 (-HasVisibleShape@CCursorState@@QEBA_NXZ.c)
 */

char __fastcall CCursorVisual::HasNonEmptyContent(CCursorState **this)
{
  CVisual *v1; // rdx
  char v2; // bl
  CCursorState *v3; // rcx

  v1 = (CVisual *)this;
  v2 = 0;
  v3 = this[88];
  if ( v3 && CCursorState::HasVisibleShape(v3) || CVisual::HasNonEmptyContent(v1) )
    return 1;
  return v2;
}
