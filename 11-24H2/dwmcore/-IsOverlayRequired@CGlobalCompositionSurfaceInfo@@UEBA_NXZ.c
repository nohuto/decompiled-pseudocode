/*
 * XREFs of ?IsOverlayRequired@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x18005EB50
 * Callers:
 *     ?IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z @ 0x18005E9A0 (-IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z.c)
 * Callees:
 *     ?IsOverlayRequired@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x18005EBA0 (-IsOverlayRequired@CDxHandleBitmapRealization@@UEBA_NXZ.c)
 */

bool __fastcall CGlobalCompositionSurfaceInfo::IsOverlayRequired(CGlobalCompositionSurfaceInfo *this)
{
  CDxHandleBitmapRealization *v1; // rcx
  bool result; // al
  __int64 (*v3)(void); // rax

  v1 = (CDxHandleBitmapRealization *)*((_QWORD *)this + 26);
  result = 0;
  if ( v1 )
  {
    v3 = *(__int64 (**)(void))(*(_QWORD *)v1 + 152LL);
    if ( (char *)v3 == (char *)CDxHandleBitmapRealization::IsOverlayRequired )
      return CDxHandleBitmapRealization::IsOverlayRequired(v1);
    else
      return v3();
  }
  return result;
}
