/*
 * XREFs of ?CanUseCVI@CVisualBitmap@@AEAA_NPEAVCDrawingContext@@@Z @ 0x1800F621C
 * Callers:
 *     ?Draw@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800F60E0 (-Draw@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?IsIn3DMode@CDrawingContext@@QEBA_NXZ @ 0x1800F627C (-IsIn3DMode@CDrawingContext@@QEBA_NXZ.c)
 *     ?EnsureCachedVisualImage@CVisualBitmap@@AEAAJXZ @ 0x1801E5DE0 (-EnsureCachedVisualImage@CVisualBitmap@@AEAAJXZ.c)
 */

char __fastcall CVisualBitmap::CanUseCVI(CVisualBitmap *this, struct CDrawingContext *a2)
{
  char v2; // bl
  CVisualBitmap *v3; // r8

  v2 = 0;
  v3 = this;
  if ( !*((_DWORD *)a2 + 61) || *((_DWORD *)a2 + 62) || *((_DWORD *)a2 + 63) || CDrawingContext::IsIn3DMode(a2) )
    return (int)CVisualBitmap::EnsureCachedVisualImage(v3) >= 0;
  return v2;
}
