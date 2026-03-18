/*
 * XREFs of ?IsDrawListCacheDirty@CCompositionDynamicTexture@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1802956E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CCompositionDynamicTexture::IsDrawListCacheDirty(
        CCompositionDynamicTexture *this,
        struct CDrawListCache *a2,
        struct CDrawingContext *a3,
        const struct D2D_SIZE_F *a4)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 9);
  if ( v4 )
    return (*(__int64 (__fastcall **)(__int64, struct CDrawListCache *, struct CDrawingContext *, const struct D2D_SIZE_F *))(*(_QWORD *)v4 + 240LL))(
             v4,
             a2,
             a3,
             a4);
  else
    return 0;
}
