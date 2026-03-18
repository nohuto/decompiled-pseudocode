/*
 * XREFs of ?ProduceRealizationInternal@CShadowBlurProducer@@AEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18011AD84
 * Callers:
 *     ?Create@CShadowBlurProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAPEAVIBitmapResource@@PEAV6@@Z @ 0x1801DB0CC (-Create@CShadowBlurProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrus.c)
 *     ?ProduceRealization@CShadowBlurProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x180259FA0 (-ProduceRealization@CShadowBlurProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCa.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ?GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEAVIBitmapRealization@@PEBUD2D_SIZE_F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAPEAVIRenderTargetBitmap@@PEAV6@@Z @ 0x180072534 (-GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEAVIBitmapRe.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_F@@AEBU4@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180118F44 (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_.c)
 *     ?IsInitialRender@CCachedImageProducer@@IEBA_NXZ @ 0x18011B004 (-IsInitialRender@CCachedImageProducer@@IEBA_NXZ.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180147AD0 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShadowBlurProducer::ProduceRealizationInternal(
        __int64 a1,
        struct CDrawingContext *a2,
        _QWORD *a3,
        _OWORD *a4)
{
  unsigned __int64 *v8; // r12
  struct CShape **v9; // rbx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rbx
  int BlurIntermediate; // eax
  unsigned int v14; // edi
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __m128 v18; // xmm1
  __m128 v19; // xmm0
  __int64 v20; // [rsp+20h] [rbp-49h]
  __int64 v21; // [rsp+50h] [rbp-19h] BYREF
  __int64 v22; // [rsp+58h] [rbp-11h] BYREF
  unsigned __int64 v23; // [rsp+60h] [rbp-9h] BYREF
  __int128 v24; // [rsp+68h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v21 = 0LL;
  v23 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( !CCachedImageProducer::IsInitialRender((CCachedImageProducer *)a1) )
  {
    v8 = &v23;
    v18 = 0LL;
    v19 = 0LL;
    v18.m128_f32[0] = (float)(int)*(_QWORD *)(a1 + 24);
    v19.m128_f32[0] = (float)(int)HIDWORD(*(_QWORD *)(a1 + 24));
    v18.m128_u64[0] = _mm_unpacklo_ps(v18, v19).m128_u64[0];
    v19.m128_i32[0] = *(_DWORD *)(a1 + 120);
    v23 = v18.m128_u64[0];
    if ( v19.m128_f32[0] == 0.0 )
      v9 = (struct CShape **)&v23;
  }
  v22 = 0LL;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v22);
  v20 = *(_QWORD *)(a1 + 96);
  v24 = DirectX::g_XMZero;
  v10 = ShadowHelpers::GenerateMaskIntermediate(
          (struct CResourceTag *)(a1 + 72),
          (__int64)a2,
          v9,
          (unsigned int *)(a1 + 88),
          v20,
          0LL,
          0,
          (unsigned int *)&v24,
          &v22);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2AE,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\shadowhelpers.cpp",
      (const char *)(unsigned int)v10);
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    return v11;
  }
  else
  {
    if ( *(float *)(a1 + 120) == 0.0 )
    {
      v12 = 0LL;
      v21 = v22;
      if ( a4 )
        *a4 = *(_OWORD *)(a1 + 104);
    }
    else
    {
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v21);
      v12 = v22;
      BlurIntermediate = ShadowHelpers::GenerateBlurIntermediate(
                           (struct CResourceTag *)(a1 + 72),
                           a2,
                           (struct IBitmapRealization *)((v22 + 8) & -(__int64)(v22 != 0)),
                           v8,
                           (__int128 *)(a1 + 104),
                           *(_DWORD *)(a1 + 120),
                           (__int64)&v21,
                           a4);
      v14 = BlurIntermediate;
      if ( BlurIntermediate < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2BA,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\shadowhelpers.cpp",
          (const char *)(unsigned int)BlurIntermediate);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v22);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v21);
        return v14;
      }
    }
    v15 = operator new(8uLL);
    if ( v15 )
    {
      v16 = v21;
      v21 = 0LL;
      *v15 = v16;
    }
    *a3 = v15;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    return 0LL;
  }
}
