/*
 * XREFs of ?ProduceRealizationInternal@CShadowBlurProducer@@AEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D9D7C
 * Callers:
 *     ?Create@CShadowBlurProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAPEAVIBitmapResource@@PEAV6@@Z @ 0x1801D9B90 (-Create@CShadowBlurProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrus.c)
 *     ?ProduceRealization@CShadowBlurProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x18024EAD0 (-ProduceRealization@CShadowBlurProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCa.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ?GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEAVIBitmapRealization@@PEBUD2D_SIZE_F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAPEAVIRenderTargetBitmap@@PEAV6@@Z @ 0x1800484C4 (-GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEAVIBitmapRe.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18010BE90 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_F@@AEBU4@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801D9FFC (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_.c)
 *     ?IsInitialRender@CCachedImageProducer@@IEBA_NXZ @ 0x1801DA4AC (-IsInitialRender@CCachedImageProducer@@IEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShadowBlurProducer::ProduceRealizationInternal(
        __int64 a1,
        struct CDrawingContext *a2,
        _QWORD *a3,
        _OWORD *a4)
{
  unsigned __int64 *v8; // r12
  unsigned __int64 *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int v15; // ebx
  CGlobalDrawingContext *v16; // rbx
  int BlurIntermediate; // eax
  unsigned int v18; // edi
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __m128 v22; // xmm1
  __m128 v23; // xmm0
  __int64 v24; // [rsp+20h] [rbp-49h]
  char v25; // [rsp+30h] [rbp-39h]
  __int64 v26; // [rsp+50h] [rbp-19h] BYREF
  CGlobalDrawingContext *v27; // [rsp+58h] [rbp-11h] BYREF
  unsigned __int64 v28; // [rsp+60h] [rbp-9h] BYREF
  __int128 v29; // [rsp+68h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v26 = 0LL;
  v28 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( !CCachedImageProducer::IsInitialRender((CCachedImageProducer *)a1) )
  {
    v8 = &v28;
    v22 = 0LL;
    v23 = 0LL;
    v22.m128_f32[0] = (float)(int)*(_QWORD *)(a1 + 24);
    v23.m128_f32[0] = (float)(int)HIDWORD(*(_QWORD *)(a1 + 24));
    v22.m128_u64[0] = _mm_unpacklo_ps(v22, v23).m128_u64[0];
    v23.m128_i32[0] = *(_DWORD *)(a1 + 120);
    v28 = v22.m128_u64[0];
    if ( v23.m128_f32[0] == 0.0 )
      v9 = &v28;
  }
  v27 = 0LL;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v27, v10, v11);
  v25 = 0;
  v24 = *(_QWORD *)(a1 + 96);
  v29 = DirectX::g_XMZero;
  v12 = ShadowHelpers::GenerateMaskIntermediate(a1 + 72, a2, v9, a1 + 88, v24, 0LL, v25, &v29, &v27);
  v15 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2AE,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\shadowhelpers.cpp",
      (const char *)(unsigned int)v12);
    if ( v27 )
      (*(void (__fastcall **)(CGlobalDrawingContext *))(*(_QWORD *)v27 + 16LL))(v27);
    return v15;
  }
  else
  {
    if ( *(float *)(a1 + 120) == 0.0 )
    {
      v16 = 0LL;
      v26 = (__int64)v27;
      if ( a4 )
        *a4 = *(_OWORD *)(a1 + 104);
    }
    else
    {
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((CGlobalDrawingContext **)&v26, v13, v14);
      v16 = v27;
      BlurIntermediate = ShadowHelpers::GenerateBlurIntermediate(
                           (struct CResourceTag *)(a1 + 72),
                           a2,
                           (struct IBitmapRealization *)(((unsigned __int64)v27 + 8) & -(__int64)(v27 != 0LL)),
                           v8,
                           (__int128 *)(a1 + 104),
                           *(_DWORD *)(a1 + 120),
                           (__int64)&v26,
                           a4);
      v18 = BlurIntermediate;
      if ( BlurIntermediate < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2BA,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\shadowhelpers.cpp",
          (const char *)(unsigned int)BlurIntermediate);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v27);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v26);
        return v18;
      }
    }
    v19 = operator new(8uLL);
    if ( v19 )
    {
      v20 = v26;
      v26 = 0LL;
      *v19 = v20;
    }
    *a3 = v19;
    if ( v16 )
      (*(void (__fastcall **)(CGlobalDrawingContext *))(*(_QWORD *)v16 + 16LL))(v16);
    if ( v26 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    return 0LL;
  }
}
