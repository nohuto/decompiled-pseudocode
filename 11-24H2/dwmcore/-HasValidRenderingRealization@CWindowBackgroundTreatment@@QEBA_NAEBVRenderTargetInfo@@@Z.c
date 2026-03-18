/*
 * XREFs of ?HasValidRenderingRealization@CWindowBackgroundTreatment@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x1801C7FF0
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083CD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?IsValid@CRenderTargetBitmap@@UEBAJXZ @ 0x18001D570 (-IsValid@CRenderTargetBitmap@@UEBAJXZ.c)
 *     ?IsUsableOnTarget@CCachedRealization@CCachedImageProducer@@QEBA_NAEBVRenderTargetInfo@@_N@Z @ 0x1801C81A0 (-IsUsableOnTarget@CCachedRealization@CCachedImageProducer@@QEBA_NAEBVRenderTargetInfo@@_N@Z.c)
 *     ?HasValidSource@CWindowBackgroundTreatment@@QEBA_NXZ @ 0x1801C82F4 (-HasValidSource@CWindowBackgroundTreatment@@QEBA_NXZ.c)
 *     ?AttributesMatch@CCachedRealization@CCachedImageProducer@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x1801C8384 (-AttributesMatch@CCachedRealization@CCachedImageProducer@@QEBA_NAEBVRenderTargetInfo@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CWindowBackgroundTreatment::HasValidRenderingRealization(
        CWindowBackgroundTreatment *this,
        const struct RenderTargetInfo *a2)
{
  char v4; // di
  __int64 v5; // rcx
  CCachedImageProducer::CCachedRealization **v6; // rbx
  CCachedImageProducer::CCachedRealization **v7; // rbp
  char v8; // r14
  CRenderTargetBitmap *v9; // rcx
  __int64 (*v10)(void); // rax
  int IsValid; // eax

  v4 = 0;
  if ( CWindowBackgroundTreatment::HasValidSource(this) )
  {
    v5 = *((_QWORD *)this + 10);
    if ( v5 )
    {
      v6 = *(CCachedImageProducer::CCachedRealization ***)(v5 + 32);
      v7 = *(CCachedImageProducer::CCachedRealization ***)(v5 + 40);
      v8 = *((_BYTE *)g_pComposition + 6466);
      while ( v6 != v7 )
      {
        v9 = *(CRenderTargetBitmap **)*v6;
        v10 = *(__int64 (**)(void))(*(_QWORD *)v9 + 24LL);
        if ( (char *)v10 == (char *)CRenderTargetBitmap::IsValid )
          IsValid = CRenderTargetBitmap::IsValid(v9);
        else
          IsValid = v10();
        if ( IsValid >= 0
          && CCachedImageProducer::CCachedRealization::IsUsableOnTarget(*v6, a2, v8)
          && CCachedImageProducer::CCachedRealization::AttributesMatch(*v6, a2) )
        {
          if ( *v6 && *((_QWORD *)*v6 + 1) )
            return 1;
          return v4;
        }
        ++v6;
      }
    }
    else
    {
      return 1;
    }
  }
  return v4;
}
