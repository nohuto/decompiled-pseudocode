/*
 * XREFs of ?Initialize@CCachedImageProducer@@IEAAX$$QEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@Z @ 0x1800FDA40
 * Callers:
 *     ?Create@CShapeBitmapProducer@@SAJPEAVCShapeTree@@AEBUD2D_SIZE_F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2$$QEAV?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@PEAPEAV1@@Z @ 0x18006D6B4 (-Create@CShapeBitmapProducer@@SAJPEAVCShapeTree@@AEBUD2D_SIZE_F@@AEBV-$TMilRect_@MUD2D_RECT_F@@U.c)
 *     ?Create@CShadowBlurProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAPEAVIBitmapResource@@PEAV6@@Z @ 0x1801D9B90 (-Create@CShadowBlurProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrus.c)
 *     ?Create@CShadowMaskCachingBlurProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@PEAVCShadowMaskProducer@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAPEAVIBitmapResource@@PEAV5@@Z @ 0x1802DB42C (-Create@CShadowMaskCachingBlurProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@PEAVCShadowMas.c)
 *     ?Create@CShadowMaskProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@$$QEAVCShapePtr@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x1802DB5A4 (-Create@CShadowMaskProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrus.c)
 * Callees:
 *     ?GetSize@CRenderTargetBitmap@@UEBA?AUD2D_SIZE_U@@XZ @ 0x1800FC530 (-GetSize@CRenderTargetBitmap@@UEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?reserve_region@?$vector_facade@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@_K0@Z @ 0x1800FD288 (-reserve_region@-$vector_facade@V-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$defau.c)
 *     ??1?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@QEAA@XZ @ 0x1800FD434 (--1-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$default_delete@VCCachedRealization@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCachedImageProducer::Initialize(__int64 a1, _QWORD **a2)
{
  CRenderTargetBitmap *v4; // rcx
  __int64 (__fastcall *v5)(CRenderTargetBitmap *, __int64 **); // rax
  _QWORD *Size; // rax
  struct D2D_SIZE_U v7; // r8
  __int64 *v8; // rcx
  _QWORD *v9; // rbx
  __int64 v10; // rdx
  __int64 *v11; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v12; // [rsp+38h] [rbp+10h] BYREF

  v4 = (CRenderTargetBitmap *)(**a2 + 8LL);
  v5 = *(__int64 (__fastcall **)(CRenderTargetBitmap *, __int64 **))(*(_QWORD *)v4 + 32LL);
  if ( (char *)v5 == (char *)CRenderTargetBitmap::GetSize )
    Size = (_QWORD *)CRenderTargetBitmap::GetSize(v4, &v11);
  else
    Size = (_QWORD *)v5(v4, &v11);
  v8 = (__int64 *)(a1 + 32);
  *(_QWORD *)(a1 + 24) = *Size;
  v9 = *a2;
  *a2 = 0LL;
  v10 = (v8[1] - *v8) >> 3;
  v12 = 0LL;
  v11 = 0LL;
  *(_QWORD *)detail::vector_facade<std::unique_ptr<CCachedImageProducer::CCachedRealization>,detail::buffer_impl<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2,1,detail::liberal_expansion_policy>>::reserve_region(
               v8,
               v10,
               *(void **)&v7) = v9;
  std::unique_ptr<CCachedImageProducer::CCachedRealization>::~unique_ptr<CCachedImageProducer::CCachedRealization>(&v11);
  std::unique_ptr<CCachedImageProducer::CCachedRealization>::~unique_ptr<CCachedImageProducer::CCachedRealization>(&v12);
}
