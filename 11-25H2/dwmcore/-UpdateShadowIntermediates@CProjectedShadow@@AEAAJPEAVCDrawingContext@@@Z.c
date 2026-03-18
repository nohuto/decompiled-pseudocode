/*
 * XREFs of ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x18021EFEC
 * Callers:
 *     ?Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18011B150 (-Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ??4?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIBitmapResource@@@Z @ 0x180076BF0 (--4-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIBitmapResourc.c)
 *     ?reset@?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D07A8 (-reset@-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Inflate@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x180119D40 (-Inflate@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?at@?$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@@std@@QEBAAEBUVisualPropertyData@CProjectedShadowCaster@@AEBQEBVCVisualTree@@@Z @ 0x18011C2F8 (-at@-$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U-$less@PEBVCVisualTree@@.c)
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801A05AC (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?CreateFastShadowBitmap@ShadowHelpers@@YAJPEAVCDrawingContext@@@Z @ 0x1801DB000 (-CreateFastShadowBitmap@ShadowHelpers@@YAJPEAVCDrawingContext@@@Z.c)
 *     ?UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z @ 0x18029BA48 (-UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Create@CShadowMaskCachingBlurProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@PEAVCShadowMaskProducer@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAPEAVIBitmapResource@@PEAV5@@Z @ 0x1802E46CC (-Create@CShadowMaskCachingBlurProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@PEAVCShadowMas.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProjectedShadow::UpdateShadowIntermediates(
        CProjectedShadowCaster **this,
        struct CDrawingContext *a2)
{
  unsigned int v2; // ebx
  int FastShadowBitmap; // eax
  int updated; // eax
  __int64 *v8; // rax
  CProjectedShadowCaster *v9; // rcx
  float v10; // xmm2_4
  CMILRefCountImpl *v11; // r12
  __m128 *v12; // rsi
  CEffectIntermediateProducer **v13; // rcx
  int v14; // eax
  __m128 v15; // xmm1
  int ApproxBlur; // eax
  unsigned int v17; // [rsp+20h] [rbp-40h]
  __m128 v18; // [rsp+40h] [rbp-20h] BYREF
  const char *v19; // [rsp+50h] [rbp-10h] BYREF
  int v20; // [rsp+58h] [rbp-8h]
  __int64 v21; // [rsp+90h] [rbp+30h] BYREF

  v2 = 0;
  if ( *((_DWORD *)this + 63) == 1 )
  {
    if ( !ShadowHelpers::s_cpFastShadowBlur )
    {
      FastShadowBitmap = ShadowHelpers::CreateFastShadowBitmap(a2, a2);
      v2 = FastShadowBitmap;
      if ( FastShadowBitmap < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, FastShadowBitmap, 0x128u, 0LL);
    }
  }
  else if ( *((_DWORD *)this + 63) == 2 || *((_DWORD *)this + 63) == 3 || (unsigned int)(*((_DWORD *)this + 63) - 4) < 2 )
  {
    ApproxBlur = CProjectedShadow::GenerateApproxBlur((CProjectedShadow *)this, a2);
    v2 = ApproxBlur;
    if ( ApproxBlur < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ApproxBlur, 0x130u, 0LL);
  }
  else
  {
    if ( *((_QWORD *)this[10] + 12) > 1uLL )
      (*((void (__fastcall **)(CProjectedShadowCaster **, __int64, CProjectedShadowCaster **))*this + 10))(
        this,
        5LL,
        this);
    if ( !this[43] )
    {
      updated = CProjectedShadowCaster::UpdateMaskIntermediate(this[10], a2);
      v2 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, 0x141u, 0LL);
      }
      else
      {
        v21 = *((_QWORD *)a2 + 993);
        v8 = std::map<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData>::at(
               (__int64 *)this[10] + 11,
               &v21);
        v9 = this[10];
        v10 = *((float *)this + 24);
        v18.m128_u64[0] = 0LL;
        v11 = (CMILRefCountImpl *)v8[5];
        v18.m128_u64[1] = *(_QWORD *)(*((_QWORD *)v9 + 9) + 144LL);
        TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Inflate(v18.m128_f32, v10, v10);
        v12 = (__m128 *)(this + 44);
        v13 = this + 43;
        if ( v10 <= 0.0 )
        {
          wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::operator=(v13, v11);
          v15 = _mm_add_ps(v18, (__m128)_xmm);
          *v12 = v18;
          *v12 = v15;
        }
        else
        {
          wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::reset(v13);
          v17 = *((_DWORD *)this + 24);
          v19 = "DWM ProjectedShadow Blur";
          v20 = 24;
          v14 = CShadowMaskCachingBlurProducer::Create(
                  (unsigned int)&v19,
                  (_DWORD)a2,
                  (_DWORD)v11,
                  (unsigned int)&v18,
                  v17,
                  (__int64)(this + 43),
                  (__int64)(this + 44));
          v2 = v14;
          if ( v14 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x153u, 0LL);
        }
      }
    }
  }
  return v2;
}
