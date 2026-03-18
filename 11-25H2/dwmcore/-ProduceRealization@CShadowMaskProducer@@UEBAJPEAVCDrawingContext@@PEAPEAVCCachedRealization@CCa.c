/*
 * XREFs of ?ProduceRealization@CShadowMaskProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x1802E4AF0
 * Callers:
 *     ?Create@CShadowMaskProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@$$QEAVCShapePtr@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x1802E4844 (-Create@CShadowMaskProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrus.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@QEAA@XZ @ 0x1800DD334 (--1-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$default_delete@VCCachedRealization@.c)
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_F@@AEBU4@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180118F44 (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_.c)
 *     ?IsInitialRender@CCachedImageProducer@@IEBA_NXZ @ 0x18011B004 (-IsInitialRender@CCachedImageProducer@@IEBA_NXZ.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180147AD0 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MakeStandardCachedRealization@CCachedImageProducer@@KA?AV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@$$QEAV?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180205FB0 (-MakeStandardCachedRealization@CCachedImageProducer@@KA-AV-$unique_ptr@VCCachedRealization@CCach.c)
 */

__int64 __fastcall CShadowMaskProducer::ProduceRealization(
        CShadowMaskProducer *this,
        struct CDrawingContext *a2,
        struct CCachedImageProducer::CCachedRealization **a3)
{
  struct CShape **v6; // rdi
  __m128 v7; // xmm1
  __m128 v8; // xmm0
  int v9; // eax
  unsigned int v10; // ebx
  struct CCachedImageProducer::CCachedRealization **StandardCachedRealization; // rax
  struct CCachedImageProducer::CCachedRealization *v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  CGlobalDrawingContext *v15; // [rsp+70h] [rbp+8h] BYREF
  __int64 *v16; // [rsp+88h] [rbp+20h] BYREF

  v16 = 0LL;
  v6 = 0LL;
  if ( !CCachedImageProducer::IsInitialRender(this) )
  {
    v6 = (struct CShape **)&v16;
    v7 = 0LL;
    v8 = 0LL;
    v7.m128_f32[0] = (float)(int)*((_QWORD *)this + 3);
    v8.m128_f32[0] = (float)(int)HIDWORD(*((_QWORD *)this + 3));
    v16 = (__int64 *)_mm_unpacklo_ps(v7, v8).m128_u64[0];
  }
  v15 = 0LL;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v15);
  v9 = ShadowHelpers::GenerateMaskIntermediate(
         (CShadowMaskProducer *)((char *)this + 72),
         (__int64)a2,
         v6,
         (unsigned int *)this + 22,
         *((_QWORD *)this + 12),
         *((struct CShape **)this + 13),
         *((_BYTE *)this + 136),
         (unsigned int *)this + 30,
         &v15);
  v10 = v9;
  if ( v9 >= 0 )
  {
    StandardCachedRealization = (struct CCachedImageProducer::CCachedRealization **)CCachedImageProducer::MakeStandardCachedRealization(
                                                                                      &v16,
                                                                                      (__int64 *)&v15);
    v12 = *StandardCachedRealization;
    *StandardCachedRealization = 0LL;
    *a3 = v12;
    std::unique_ptr<CCachedImageProducer::CCachedRealization>::~unique_ptr<CCachedImageProducer::CCachedRealization>(&v16);
    v10 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E7,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\shadowhelpers.cpp",
      (const char *)(unsigned int)v9);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v15);
  return v10;
}
