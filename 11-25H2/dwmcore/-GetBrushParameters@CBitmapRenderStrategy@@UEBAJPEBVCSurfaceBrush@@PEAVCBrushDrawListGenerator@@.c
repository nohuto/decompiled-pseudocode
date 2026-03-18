/*
 * XREFs of ?GetBrushParameters@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x1800CEB80
 * Callers:
 *     ?GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180010310 (-GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180128740 (-GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180129940 (-GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18012A1A4 (-GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 * Callees:
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x180015130 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800CCE00 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z @ 0x1800CCF70 (--_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x1800CE780 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CF0A0 (-InternalQueryInterface@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800CF8B0 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x1800D0080 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800D0690 (--1-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetCurrentRenderingRealization@CCachedVisualImage@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800DEB60 (-GetCurrentRenderingRealization@CCachedVisualImage@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ??_GCDrawListPrimitive0@@UEAAPEAXI@Z @ 0x1800DECF0 (--_GCDrawListPrimitive0@@UEAAPEAXI@Z.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAPEAX_K@Z @ 0x1800E0A0C (-Alloc@-$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAPEAX_K@Z.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x1800E0B30 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18010FE80 (-InternalRelease@-$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?GetCurrentRenderingRealization@CCachedImageProducer@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1801ECEF0 (-GetCurrentRenderingRealization@CCachedImageProducer@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?GetSize@CDxHandleBitmapRealization@@WBAA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802E1140 (-GetSize@CDxHandleBitmapRealization@@WBAA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802E2A80 (-GetSize@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBitmapRenderStrategy::GetBrushParameters(
        CBitmapRenderStrategy *this,
        const struct CSurfaceBrush *a2,
        struct CBrushDrawListGenerator *a3)
{
  CMaskBrush *v3; // rcx
  __int64 (__fastcall **v6)(CMaskBrush *); // rax
  __int64 (__fastcall *v7)(CMaskBrush *); // rax
  int v8; // eax
  int v9; // esi
  unsigned int v10; // esi
  CCompositionSurfaceBitmap *v11; // rbx
  __int64 v12; // rax
  __int64 (__fastcall *v13)(CCachedVisualImage *__hidden, struct IBitmapRealization **); // rax
  unsigned int (__fastcall *v14)(CMILRefCountImpl *__hidden); // rax
  char v15; // di
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 (__fastcall *v18)(struct IBitmapRealization *, char *); // rax
  __int64 *Size; // rax
  float v20; // xmm8_4
  float v21; // xmm7_4
  __int64 v22; // rax
  __int64 v23; // rbx
  int v24; // edi
  CMILRefCountImpl *v25; // rcx
  void (*v26)(void); // rax
  struct IBitmapRealization *v27; // rcx
  __m128 v28; // xmm2
  __m128 v29; // xmm3
  __int64 v30; // xmm1_8
  CMultiPrimitiveDrawListBrush *v31; // rcx
  CSurfaceDrawListBrush *(__fastcall *v32)(CSurfaceDrawListBrush *, char); // rax
  __int128 v34; // [rsp+38h] [rbp-69h]
  CMILRefCountImpl *v35; // [rsp+48h] [rbp-59h] BYREF
  struct IBitmapRealization *v36; // [rsp+50h] [rbp-51h] BYREF
  char v37; // [rsp+58h] [rbp-49h]
  _OWORD v38[6]; // [rsp+60h] [rbp-41h] BYREF
  CCompositionSurfaceBitmap *v39; // [rsp+110h] [rbp+6Fh] BYREF
  __int64 v40; // [rsp+118h] [rbp+77h] BYREF
  char v41; // [rsp+120h] [rbp+7Fh] BYREF

  v3 = (CMaskBrush *)*((_QWORD *)a2 + 16);
  v39 = 0LL;
  v6 = *(__int64 (__fastcall ***)(CMaskBrush *))v3;
  v40 = 0LL;
  v7 = *v6;
  if ( v7 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalQueryInterface )
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalQueryInterface(v3);
  else
    ((void (__fastcall *)(CMaskBrush *, GUID *, CCompositionSurfaceBitmap **))v7)(
      v3,
      &GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c,
      &v39);
  wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::~com_ptr_t<IBitmapResource,wil::err_returncode_policy>(&v40);
  memset(v38, 0, 40);
  v8 = CSurfaceBrush::ComputeLayout(
         a2,
         (const struct D2D_SIZE_F *)((char *)a3 + 44),
         (struct CContent::LayoutData *)v38,
         0LL);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x431u, 0LL);
  }
  else
  {
    v10 = *((_DWORD *)a2 + 31);
    v11 = v39;
    CBrushDrawListGenerator::Reset(a3);
    v12 = *(_QWORD *)v11;
    v35 = 0LL;
    v37 = 0;
    v36 = 0LL;
    v13 = *(__int64 (__fastcall **)(CCachedVisualImage *__hidden, struct IBitmapRealization **))(v12 + 64);
    if ( v13 == CCompositionSurfaceBitmap::GetCurrentRenderingRealization )
    {
      CCompositionSurfaceBitmap::GetCurrentRenderingRealization(v11, &v36);
    }
    else if ( v13 == CCachedVisualImage::GetCurrentRenderingRealization )
    {
      CCachedVisualImage::GetCurrentRenderingRealization(v11, &v36);
    }
    else if ( v13 == CCachedImageProducer::GetCurrentRenderingRealization )
    {
      CCachedImageProducer::GetCurrentRenderingRealization(v11, &v36);
    }
    else
    {
      v13(v11, &v36);
    }
    v35 = v11;
    v14 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(*(_QWORD *)v11 + 8LL);
    if ( v14 == CMILRefCountImpl::AddReference )
      CMILRefCountImpl::AddReference(v11);
    else
      v14(v11);
    v15 = InterpolationMode::FromD2D1InterpolationMode(v10);
    v17 = 0LL;
    if ( v36 )
    {
      v18 = *(__int64 (__fastcall **)(struct IBitmapRealization *, char *))(*(_QWORD *)v36 + 32LL);
      if ( (char *)v18 == (char *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize )
      {
        Size = (__int64 *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize(
                            v36,
                            &v41);
      }
      else if ( (char *)v18 == (char *)CDxHandleBitmapRealization::GetSize )
      {
        Size = (__int64 *)CDxHandleBitmapRealization::GetSize(v36, &v41, v16);
      }
      else
      {
        Size = (__int64 *)v18(v36, &v41);
      }
      v17 = *Size;
    }
    v20 = 1.0 / (float)(int)v17;
    v21 = 1.0 / (float)SHIDWORD(v17);
    v22 = CThreadLocalObjectCache<CSurfaceDrawListBrush,CSurfaceDrawListBrush>::Alloc();
    v23 = v22;
    if ( v22 )
    {
      LOBYTE(v40) = v15;
      v24 = 1;
      BYTE1(v40) = 1;
      *(_QWORD *)(v22 + 8) = 1065353216LL;
      *(_DWORD *)(v22 + 16) = 0;
      *(_QWORD *)(v22 + 20) = 1065353216LL;
      *(_DWORD *)(v22 + 28) = 0;
      *(_BYTE *)(v22 + 52) = 0;
      *(_QWORD *)v22 = &CSurfaceDrawListBrush::`vftable';
      v25 = v35;
      *(_QWORD *)(v22 + 56) = v35;
      if ( v25 )
      {
        v26 = *(void (**)(void))(*(_QWORD *)v25 + 8LL);
        if ( (char *)v26 == (char *)CMILRefCountImpl::AddReference )
          CMILRefCountImpl::AddReference(v25);
        else
          v26();
      }
      v27 = v36;
      *(_QWORD *)(v23 + 64) = v36;
      if ( v27 )
        (*(void (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)v27 + 8LL))(v27);
      v28 = *(__m128 *)((char *)&v38[1] + 8);
      *(_BYTE *)(v23 + 72) = v37;
      *(_WORD *)(v23 + 80) = v40;
      *(_BYTE *)(v23 + 82) = 1;
      *(_QWORD *)(v23 + 88) = 0LL;
      *(float *)(v23 + 84) = v20;
      *(float *)(v23 + 100) = v21;
      *(float *)&v34 = v28.m128_f32[0] * v20;
      *(float *)(v23 + 108) = 0.0 - (float)(v20 * 0.0);
      *(float *)(v23 + 112) = 0.0 - (float)(v21 * 0.0);
      *(_DWORD *)(v23 + 96) = 0;
      *(_DWORD *)(v23 + 104) = 0;
      *(_DWORD *)(v23 + 116) = 1065353216;
      *(_DWORD *)(v23 + 144) = 1;
      v29 = _mm_shuffle_ps(v28, v28, 85);
      *(_BYTE *)(v23 + 52) = 1;
      *(_DWORD *)(v23 + 48) = 50529027;
      *((float *)&v34 + 1) = v29.m128_f32[0] * v21;
      *((float *)&v34 + 2) = _mm_shuffle_ps(v28, v28, 170).m128_f32[0] * v20;
      *(__m128 *)(v23 + 32) = v28;
      *((float *)&v34 + 3) = _mm_shuffle_ps(v28, v28, 255).m128_f32[0] * v21;
      *(_OWORD *)(v23 + 120) = v34;
      v9 = 0;
      v30 = *(_QWORD *)&v38[1];
      *(_OWORD *)(v23 + 8) = v38[0];
      *(_QWORD *)(v23 + 24) = v30;
      if ( *((_BYTE *)a2 + 200) )
      {
        *(_BYTE *)(v23 + 147) = 1;
        *(_QWORD *)(v23 + 136) = _mm_unpacklo_ps(v28, v29).m128_u64[0];
      }
      v31 = (CMultiPrimitiveDrawListBrush *)*((_QWORD *)a3 + 1);
      *((_QWORD *)a3 + 1) = v23;
      if ( v31 )
      {
        v32 = **(CSurfaceDrawListBrush *(__fastcall ***)(CSurfaceDrawListBrush *, char))v31;
        if ( v32 == CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
        {
          CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v31, 1);
        }
        else if ( v32 == CSurfaceDrawListBrush::`vector deleting destructor' )
        {
          CSurfaceDrawListBrush::`vector deleting destructor'(v31, 1);
        }
        else if ( (char *)v32 == (char *)CDrawListPrimitive0::`scalar deleting destructor' )
        {
          CDrawListPrimitive0::`scalar deleting destructor'(v31, 1u);
        }
        else
        {
          v32(v31, 1);
        }
      }
      if ( *((_DWORD *)a3 + 10) > 1u )
        v24 = *((_DWORD *)a3 + 10);
      *((_DWORD *)a3 + 10) = v24;
    }
    else
    {
      v9 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1Fu, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x37Fu, 0LL);
    }
    CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v35);
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x433u, 0LL);
  }
  wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::~com_ptr_t<IBitmapResource,wil::err_returncode_policy>(&v39);
  return (unsigned int)v9;
}
