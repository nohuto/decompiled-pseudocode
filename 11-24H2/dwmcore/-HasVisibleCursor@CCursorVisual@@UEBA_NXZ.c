/*
 * XREFs of ?HasVisibleCursor@CCursorVisual@@UEBA_NXZ @ 0x1802906F0
 * Callers:
 *     ?RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1802908E0 (-RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?HasVisibleShape@CCursorState@@QEBA_NXZ @ 0x1802B2FE8 (-HasVisibleShape@CCursorState@@QEBA_NXZ.c)
 */

char __fastcall CCursorVisual::HasVisibleCursor(CCursorVisual *this)
{
  char v1; // dl
  CCursorState *v2; // rcx
  __int64 v3; // r8

  v1 = 0;
  v2 = (CCursorState *)*((_QWORD *)this + 88);
  if ( v2 && CCursorState::HasVisibleShape(v2) && (*(_BYTE *)(v3 + 106) & 0x40) != 0 )
    return 1;
  return v1;
}
