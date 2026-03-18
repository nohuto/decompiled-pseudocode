/*
 * XREFs of ?UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x18007DABC
 * Callers:
 *     ?UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180119DE8 (-UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?IsRectangularShadow@ShadowIntermediates@CDropShadow@@QEBA_NXZ @ 0x18007DE80 (-IsRectangularShadow@ShadowIntermediates@CDropShadow@@QEBA_NXZ.c)
 *     ?IsOfType@CNineGridBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18007DEF0 (-IsOfType@CNineGridBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsInfinite@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180099680 (-IsInfinite@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800A6F50 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?reset@?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D07A8 (-reset@-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18010A060 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ??4?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x18010FFB0 (--4-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?CreateFastShadowBitmap@ShadowHelpers@@YAJPEAVCDrawingContext@@@Z @ 0x1801DB000 (-CreateFastShadowBitmap@ShadowHelpers@@YAJPEAVCDrawingContext@@@Z.c)
 *     ?Create@CShadowBlurProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAPEAVIBitmapResource@@PEAV6@@Z @ 0x1801DB0CC (-Create@CShadowBlurProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrus.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDropShadow::ShadowIntermediates::UpdateIntermediates(
        CDropShadow::ShadowIntermediates *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        float a4)
{
  bool IsRectangularShadow; // al
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm4_4
  float v12; // xmm3_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  __int64 *v15; // rsi
  __int64 v16; // r15
  struct CDrawingContext *v17; // rdx
  __int64 v18; // rcx
  float v19; // xmm6_4
  __int64 (__fastcall *v20)(__int64, __int64); // rax
  unsigned int v22; // edi
  const struct D2D_RECT_F *v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdi
  int v27; // eax
  int FastShadowBitmap; // eax
  float v29[8]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v30; // [rsp+B0h] [rbp+30h] BYREF

  *((_WORD *)this + 34) = 0;
  v30 = (__int64)*a3;
  IsRectangularShadow = CDropShadow::ShadowIntermediates::IsRectangularShadow(this);
  v9 = *(float *)&v30;
  if ( IsRectangularShadow )
  {
    if ( *(float *)&v30 > (float)(a4 + a4) )
    {
      *(float *)&v30 = a4 + a4;
      v9 = a4 + a4;
      *((_BYTE *)this + 68) = 1;
    }
    v10 = *((float *)&v30 + 1);
    if ( *((float *)&v30 + 1) > (float)(a4 + a4) )
    {
      *((float *)&v30 + 1) = a4 + a4;
      v10 = a4 + a4;
      *((_BYTE *)this + 69) = 1;
    }
  }
  else
  {
    v10 = *((float *)&v30 + 1);
  }
  if ( (float)(a4 - 3.4028235e38) >= 0.0 )
    v11 = FLOAT_N3_4028235e38;
  else
    v11 = 0.0 - a4;
  v12 = 0.0 - a4;
  v29[0] = v11;
  if ( (float)(a4 - 3.4028235e38) >= 0.0 )
    v12 = FLOAT_N3_4028235e38;
  v29[1] = v12;
  if ( (float)(3.4028235e38 - a4) <= v9 )
  {
    v29[2] = FLOAT_3_4028235e38;
    v13 = FLOAT_3_4028235e38;
  }
  else
  {
    v13 = v9 + a4;
    v29[2] = v13;
  }
  if ( (float)(3.4028235e38 - a4) <= v10 )
  {
    v29[3] = FLOAT_3_4028235e38;
    v14 = FLOAT_3_4028235e38;
  }
  else
  {
    v14 = v10 + a4;
    v29[3] = v14;
  }
  v15 = (__int64 *)((char *)this + 56);
  if ( *((_QWORD *)this + 7) )
  {
    v24 = (const struct D2D_RECT_F *)((char *)this + 8);
    if ( (v11 != *((float *)this + 2)
       || v12 != *((float *)this + 3)
       || v13 != *((float *)this + 4)
       || v14 != *((float *)this + 5))
      && (v13 > v11 && v14 > v12 || !IsEmpty(v24))
      && ((v11 > -3.4028235e38 || v13 < 3.4028235e38) && (v12 > -3.4028235e38 || v14 < 3.4028235e38)
       || !(unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsInfinite(v24)) )
    {
      wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::reset((char *)this + 56);
    }
  }
  v16 = *v15;
  *(_OWORD *)((char *)this + 8) = *(_OWORD *)v29;
  if ( CDropShadow::ShadowIntermediates::IsRectangularShadow(this) && (float)(fminf(a3->width, a3->height) * 0.5) >= a4 )
  {
    if ( !ShadowHelpers::s_cpFastShadowBlur )
    {
      FastShadowBitmap = ShadowHelpers::CreateFastShadowBitmap(a2, v17);
      v22 = FastShadowBitmap;
      if ( FastShadowBitmap < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, FastShadowBitmap, 0x308u, 0LL);
        return v22;
      }
    }
    wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::operator=(
      (char *)this + 56,
      &ShadowHelpers::s_cpFastShadowBlur);
    *(_OWORD *)((char *)this + 24) = ShadowHelpers::s_rcFastShadowBlur;
  }
  else if ( !*v15 )
  {
    v25 = *((_QWORD *)this + 6);
    if ( !v25 || (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 64LL))(v25, 22LL) )
      v26 = *((_QWORD *)g_pComposition + 91);
    else
      v26 = *((_QWORD *)this + 6);
    wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::reset((char *)this + 56);
    LODWORD(v29[2]) = 19;
    *(_QWORD *)v29 = "DWM DropShadow Blur";
    v27 = CShadowBlurProducer::Create(
            (unsigned int)v29,
            (_DWORD)a2,
            (unsigned int)&v30,
            v26,
            (__int64)this + 8,
            LODWORD(a4),
            (__int64)this + 56,
            (__int64)this + 24);
    v22 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x31Du, 0LL);
      return v22;
    }
  }
  v18 = *((_QWORD *)this + 6);
  v19 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  if ( v18 )
  {
    v20 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 64LL);
    if ( v20 == CNineGridBrush::IsOfType ? CNineGridBrush::IsOfType(v18, 22LL) : (unsigned __int8)v20(v18, 22LL) )
      v19 = *(float *)(*((_QWORD *)this + 6) + 116LL);
  }
  if ( v16 != *v15 || *((float *)this + 16) != v19 )
  {
    *((float *)this + 16) = v19;
    *(_QWORD *)this = GetCurrentFrameId();
  }
  return 0;
}
