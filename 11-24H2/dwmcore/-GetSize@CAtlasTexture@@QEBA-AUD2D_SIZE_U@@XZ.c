/*
 * XREFs of ?GetSize@CAtlasTexture@@QEBA?AUD2D_SIZE_U@@XZ @ 0x180200CC8
 * Callers:
 *     ?GetTransform@CAtlasBitmapResource@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802AC960 (-GetTransform@CAtlasBitmapResource@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_REC.c)
 * Callees:
 *     ?GetSize@CRenderTargetBitmap@@UEBA?AUD2D_SIZE_U@@XZ @ 0x1800FC530 (-GetSize@CRenderTargetBitmap@@UEBA-AUD2D_SIZE_U@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct D2D_SIZE_U __fastcall CAtlasTexture::GetSize(CAtlasTexture *this, _QWORD *a2)
{
  CRenderTargetBitmap *v3; // rcx
  void (*v4)(void); // rax

  v3 = (CRenderTargetBitmap *)(*((_QWORD *)this + 1) + 8LL);
  v4 = *(void (**)(void))(*(_QWORD *)v3 + 32LL);
  if ( (char *)v4 == (char *)CRenderTargetBitmap::GetSize )
    CRenderTargetBitmap::GetSize(v3, a2);
  else
    v4();
  return (struct D2D_SIZE_U)a2;
}
