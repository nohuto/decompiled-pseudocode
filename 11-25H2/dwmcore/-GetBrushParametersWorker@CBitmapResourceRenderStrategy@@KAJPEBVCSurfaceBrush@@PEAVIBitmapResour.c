/*
 * XREFs of ?GetBrushParametersWorker@CBitmapResourceRenderStrategy@@KAJPEBVCSurfaceBrush@@PEAVIBitmapResource@@PEAULayoutData@CContent@@W4D2D1_INTERPOLATION_MODE@@PEAVCBrushDrawListGenerator@@@Z @ 0x1800DF098
 * Callers:
 *     ?GetBrushParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x18016E810 (-GetBrushParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGene.c)
 * Callees:
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800CCE00 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z @ 0x1800CCF70 (--_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x1800CE780 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800CF8B0 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x1800D0080 (--1CDrawListBitmap@@QEAA@XZ.c)
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

__int64 __fastcall CBitmapResourceRenderStrategy::GetBrushParametersWorker(
        const struct CSurfaceBrush *a1,
        struct IBitmapResource *a2,
        struct CContent::LayoutData *a3,
        unsigned int a4,
        struct CBrushDrawListGenerator *a5)
{
  struct CBrushDrawListGenerator *v5; // r14
  __int64 v10; // rax
  unsigned int v11; // ebx
  __int64 (__fastcall *v12)(CCachedVisualImage *, struct IBitmapRealization **); // rax
  unsigned int (__fastcall *v13)(CMILRefCountImpl *__hidden); // rax
  char v14; // si
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 (__fastcall *v17)(struct IBitmapRealization *, char *); // rax
  __int64 *Size; // rax
  float v19; // xmm8_4
  float v20; // xmm6_4
  __int64 v21; // rax
  __int64 v22; // rdi
  int v23; // esi
  CMILRefCountImpl *v24; // rcx
  void (*v25)(void); // rax
  struct IBitmapRealization *v26; // rcx
  __int128 v27; // xmm0
  CMultiPrimitiveDrawListBrush *v28; // rcx
  CDrawListPrimitive0 *(__fastcall *v29)(CDrawListPrimitive0 *, char); // rax
  __int128 v31; // [rsp+38h] [rbp-51h]
  CMILRefCountImpl *v32; // [rsp+48h] [rbp-41h] BYREF
  struct IBitmapRealization *v33; // [rsp+50h] [rbp-39h] BYREF
  char v34; // [rsp+58h] [rbp-31h]
  char v35; // [rsp+F0h] [rbp+67h] BYREF
  __int16 v36; // [rsp+F8h] [rbp+6Fh]

  v5 = a5;
  CBrushDrawListGenerator::Reset(a5);
  v10 = *(_QWORD *)a2;
  v11 = 0;
  v32 = 0LL;
  v34 = 0;
  v12 = *(__int64 (__fastcall **)(CCachedVisualImage *, struct IBitmapRealization **))(v10 + 64);
  v33 = 0LL;
  if ( v12 == CCompositionSurfaceBitmap::GetCurrentRenderingRealization )
  {
    CCompositionSurfaceBitmap::GetCurrentRenderingRealization(a2, &v33);
  }
  else if ( v12 == CCachedVisualImage::GetCurrentRenderingRealization )
  {
    CCachedVisualImage::GetCurrentRenderingRealization(a2, &v33);
  }
  else if ( v12 == CCachedImageProducer::GetCurrentRenderingRealization )
  {
    CCachedImageProducer::GetCurrentRenderingRealization(a2, &v33);
  }
  else
  {
    v12(a2, &v33);
  }
  v32 = a2;
  v13 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(*(_QWORD *)a2 + 8LL);
  if ( v13 == CMILRefCountImpl::AddReference )
    CMILRefCountImpl::AddReference(a2);
  else
    v13(a2);
  v14 = InterpolationMode::FromD2D1InterpolationMode(a4);
  v16 = 0LL;
  if ( v33 )
  {
    v17 = *(__int64 (__fastcall **)(struct IBitmapRealization *, char *))(*(_QWORD *)v33 + 32LL);
    if ( (char *)v17 == (char *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize )
    {
      Size = (__int64 *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize(v33, &v35);
    }
    else if ( (char *)v17 == (char *)CDxHandleBitmapRealization::GetSize )
    {
      Size = (__int64 *)CDxHandleBitmapRealization::GetSize(v33, &v35, v15);
    }
    else
    {
      Size = (__int64 *)v17(v33, &v35);
    }
    v16 = *Size;
  }
  v19 = 1.0 / (float)(int)v16;
  v20 = 1.0 / (float)SHIDWORD(v16);
  v21 = CThreadLocalObjectCache<CSurfaceDrawListBrush,CSurfaceDrawListBrush>::Alloc();
  v22 = v21;
  if ( v21 )
  {
    LOBYTE(v36) = v14;
    v23 = 1;
    HIBYTE(v36) = 1;
    *(_QWORD *)(v21 + 8) = 1065353216LL;
    *(_DWORD *)(v21 + 16) = 0;
    *(_QWORD *)(v21 + 20) = 1065353216LL;
    *(_DWORD *)(v21 + 28) = 0;
    *(_BYTE *)(v21 + 52) = 0;
    *(_QWORD *)v21 = &CSurfaceDrawListBrush::`vftable';
    v24 = v32;
    *(_QWORD *)(v21 + 56) = v32;
    if ( v24 )
    {
      v25 = *(void (**)(void))(*(_QWORD *)v24 + 8LL);
      if ( (char *)v25 == (char *)CMILRefCountImpl::AddReference )
        CMILRefCountImpl::AddReference(v24);
      else
        v25();
    }
    v26 = v33;
    *(_QWORD *)(v22 + 64) = v33;
    if ( v26 )
      (*(void (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)v26 + 8LL))(v26);
    *(_BYTE *)(v22 + 72) = v34;
    *(_WORD *)(v22 + 80) = v36;
    *(_BYTE *)(v22 + 82) = 1;
    *(float *)(v22 + 84) = v19;
    *(float *)(v22 + 100) = v20;
    *(float *)(v22 + 108) = 0.0 - (float)(v19 * 0.0);
    *(float *)(v22 + 112) = 0.0 - (float)(v20 * 0.0);
    *(_QWORD *)(v22 + 88) = 0LL;
    *(_DWORD *)(v22 + 96) = 0;
    *(_DWORD *)(v22 + 104) = 0;
    *(_DWORD *)(v22 + 116) = 1065353216;
    *(_DWORD *)(v22 + 144) = 1;
    *(_OWORD *)(v22 + 120) = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcInfinite;
    *(_BYTE *)(v22 + 52) = 1;
    v27 = *(_OWORD *)((char *)a3 + 24);
    *(_DWORD *)(v22 + 48) = 50529027;
    *(_OWORD *)(v22 + 32) = v27;
    *((float *)&v31 + 1) = v20 * *((float *)a3 + 7);
    *(float *)&v31 = v19 * *((float *)a3 + 6);
    *((_QWORD *)&v31 + 1) = __PAIR64__(v20 * *((float *)a3 + 9), v19 * *((float *)a3 + 8));
    *(_OWORD *)(v22 + 120) = v31;
    *(_OWORD *)(v22 + 8) = *(_OWORD *)a3;
    *(_QWORD *)(v22 + 24) = *((_QWORD *)a3 + 2);
    if ( *((_BYTE *)a1 + 200) )
    {
      *(_QWORD *)(v22 + 136) = _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 6), (__m128)*((unsigned int *)a3 + 7)).m128_u64[0];
      *(_BYTE *)(v22 + 147) = 1;
    }
    v28 = (CMultiPrimitiveDrawListBrush *)*((_QWORD *)v5 + 1);
    *((_QWORD *)v5 + 1) = v22;
    if ( v28 )
    {
      v29 = **(CDrawListPrimitive0 *(__fastcall ***)(CDrawListPrimitive0 *, char))v28;
      if ( v29 == CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
      {
        CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v28, 1);
      }
      else if ( v29 == CSurfaceDrawListBrush::`vector deleting destructor' )
      {
        CSurfaceDrawListBrush::`vector deleting destructor'(v28, 1);
      }
      else if ( v29 == CDrawListPrimitive0::`scalar deleting destructor' )
      {
        CDrawListPrimitive0::`scalar deleting destructor'(v28, 1);
      }
      else
      {
        v29(v28, 1);
      }
    }
    if ( *((_DWORD *)v5 + 10) > 1u )
      v23 = *((_DWORD *)v5 + 10);
    *((_DWORD *)v5 + 10) = v23;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1Fu, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x37Fu, 0LL);
    v11 = -2147024882;
  }
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v32);
  return v11;
}
