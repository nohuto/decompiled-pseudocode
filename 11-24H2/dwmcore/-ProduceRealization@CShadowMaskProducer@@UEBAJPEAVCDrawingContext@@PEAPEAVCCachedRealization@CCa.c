/*
 * XREFs of ?ProduceRealization@CShadowMaskProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x1802DB850
 * Callers:
 *     ?Create@CShadowMaskProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@$$QEAVCShapePtr@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x1802DB5A4 (-Create@CShadowMaskProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrus.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@QEAA@XZ @ 0x1800FD434 (--1-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$default_delete@VCCachedRealization@.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18010BE90 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_F@@AEBU4@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801D9FFC (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_.c)
 *     ?IsInitialRender@CCachedImageProducer@@IEBA_NXZ @ 0x1801DA4AC (-IsInitialRender@CCachedImageProducer@@IEBA_NXZ.c)
 *     ?MakeStandardCachedRealization@CCachedImageProducer@@KA?AV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@$$QEAV?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1801FA370 (-MakeStandardCachedRealization@CCachedImageProducer@@KA-AV-$unique_ptr@VCCachedRealization@CCach.c)
 */

__int64 __fastcall CShadowMaskProducer::ProduceRealization(
        CShadowMaskProducer *this,
        struct CDrawingContext *a2,
        struct CCachedImageProducer::CCachedRealization **a3)
{
  struct CShape **v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __m128 v9; // xmm1
  __m128 v10; // xmm0
  int v11; // eax
  unsigned int v12; // ebx
  struct CCachedImageProducer::CCachedRealization **StandardCachedRealization; // rax
  struct CCachedImageProducer::CCachedRealization *v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  CGlobalDrawingContext *v17; // [rsp+70h] [rbp+8h] BYREF
  __int64 *v18; // [rsp+88h] [rbp+20h] BYREF

  v18 = 0LL;
  v6 = 0LL;
  if ( !CCachedImageProducer::IsInitialRender(this) )
  {
    v6 = (struct CShape **)&v18;
    v7 = (unsigned int)*((_QWORD *)this + 3);
    v9 = 0LL;
    v10 = 0LL;
    v9.m128_f32[0] = (float)(int)v7;
    v10.m128_f32[0] = (float)(int)HIDWORD(*((_QWORD *)this + 3));
    v18 = (__int64 *)_mm_unpacklo_ps(v9, v10).m128_u64[0];
  }
  v17 = 0LL;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v17, v7, v8);
  v11 = ShadowHelpers::GenerateMaskIntermediate(
          (CShadowMaskProducer *)((char *)this + 72),
          (__int64)a2,
          v6,
          (unsigned int *)this + 22,
          *((_QWORD *)this + 12),
          *((struct CShape **)this + 13),
          *((_BYTE *)this + 136),
          (unsigned int *)this + 30,
          &v17);
  v12 = v11;
  if ( v11 >= 0 )
  {
    StandardCachedRealization = (struct CCachedImageProducer::CCachedRealization **)CCachedImageProducer::MakeStandardCachedRealization(
                                                                                      &v18,
                                                                                      (__int64 *)&v17);
    v14 = *StandardCachedRealization;
    *StandardCachedRealization = 0LL;
    *a3 = v14;
    std::unique_ptr<CCachedImageProducer::CCachedRealization>::~unique_ptr<CCachedImageProducer::CCachedRealization>(&v18);
    v12 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E7,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\shadowhelpers.cpp",
      (const char *)(unsigned int)v11);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
  return v12;
}
