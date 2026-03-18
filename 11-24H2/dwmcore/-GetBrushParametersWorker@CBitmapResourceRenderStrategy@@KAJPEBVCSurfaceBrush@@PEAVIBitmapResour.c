/*
 * XREFs of ?GetBrushParametersWorker@CBitmapResourceRenderStrategy@@KAJPEBVCSurfaceBrush@@PEAVIBitmapResource@@PEAULayoutData@CContent@@W4D2D1_INTERPOLATION_MODE@@PEAVCBrushDrawListGenerator@@@Z @ 0x18004BDEC
 * Callers:
 *     ?GetBrushParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x18006EA40 (-GetBrushParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGene.c)
 * Callees:
 *     ?GetCurrentRenderingRealization@CCachedVisualImage@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x18004B8A0 (-GetCurrentRenderingRealization@CCachedVisualImage@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x18004CE50 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18004D620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18009EDD0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z @ 0x18009EF40 (--_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x1800A0750 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAXPEAX@Z @ 0x1800BA33C (-Free@-$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAXPEAX@Z.c)
 *     ??1CSurfaceDrawListBrush@@UEAA@XZ @ 0x1800BA42C (--1CSurfaceDrawListBrush@@UEAA@XZ.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAPEAX_K@Z @ 0x1800BA54C (-Alloc@-$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAPEAX_K@Z.c)
 *     ??0CSurfaceDrawListBrush@@IEAA@AEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@_N@Z @ 0x1800BA7D0 (--0CSurfaceDrawListBrush@@IEAA@AEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@_N@Z.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x1800BA8D0 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800DA5C0 (-InternalRelease@-$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ??_GCDrawListPrimitive0@@UEAAPEAXI@Z @ 0x18016AD30 (--_GCDrawListPrimitive0@@UEAAPEAXI@Z.c)
 *     ?GetCurrentRenderingRealization@CCachedImageProducer@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1801E3350 (-GetCurrentRenderingRealization@CCachedImageProducer@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?GetSize@CDxHandleBitmapRealization@@WBAA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D7EA0 (-GetSize@CDxHandleBitmapRealization@@WBAA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D97E0 (-GetSize@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBitmapResourceRenderStrategy::GetBrushParametersWorker(
        const struct CSurfaceBrush *a1,
        struct IBitmapResource *a2,
        struct CContent::LayoutData *a3,
        unsigned int a4,
        struct CBrushDrawListGenerator *a5)
{
  struct CBrushDrawListGenerator *v5; // rsi
  __int64 v10; // rax
  __int64 (__fastcall *v11)(CCachedVisualImage *, struct IBitmapRealization **); // rax
  unsigned int (__fastcall *v12)(CMILRefCountImpl *__hidden); // rax
  char v13; // al
  __int64 v14; // rdx
  char v15; // bl
  __int64 (__fastcall *v16)(struct IBitmapRealization *, char *); // rax
  __int64 *Size; // rax
  float v18; // xmm7_4
  float v19; // xmm6_4
  __int64 v20; // rax
  int v21; // ebx
  __int64 v22; // rax
  CSurfaceDrawListBrush *v23; // rdi
  __int128 v24; // xmm0
  CMultiPrimitiveDrawListBrush *v25; // rcx
  void *(__fastcall *v26)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax
  unsigned int v27; // ebx
  __int128 v29; // [rsp+40h] [rbp-49h]
  CEffectIntermediateProducer *v30; // [rsp+50h] [rbp-39h] BYREF
  struct IBitmapRealization *v31; // [rsp+58h] [rbp-31h] BYREF
  char v32; // [rsp+60h] [rbp-29h]
  float v33[20]; // [rsp+68h] [rbp-21h] BYREF
  char v34; // [rsp+F0h] [rbp+67h] BYREF
  char v35; // [rsp+F8h] [rbp+6Fh] BYREF
  __int16 v36; // [rsp+F9h] [rbp+70h]

  v5 = a5;
  CBrushDrawListGenerator::Reset(a5);
  v10 = *(_QWORD *)a2;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0;
  v11 = *(__int64 (__fastcall **)(CCachedVisualImage *, struct IBitmapRealization **))(v10 + 64);
  if ( v11 == CCompositionSurfaceBitmap::GetCurrentRenderingRealization )
  {
    CCompositionSurfaceBitmap::GetCurrentRenderingRealization(a2, &v31);
  }
  else if ( v11 == CCachedVisualImage::GetCurrentRenderingRealization )
  {
    CCachedVisualImage::GetCurrentRenderingRealization(a2, &v31);
  }
  else if ( v11 == CCachedImageProducer::GetCurrentRenderingRealization )
  {
    CCachedImageProducer::GetCurrentRenderingRealization(a2, &v31);
  }
  else
  {
    v11(a2, &v31);
  }
  v30 = a2;
  v12 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(*(_QWORD *)a2 + 8LL);
  if ( v12 == CMILRefCountImpl::AddReference )
    CMILRefCountImpl::AddReference(a2);
  else
    v12(a2);
  v13 = InterpolationMode::FromD2D1InterpolationMode(a4);
  v14 = 0LL;
  v15 = v13;
  if ( v31 )
  {
    v16 = *(__int64 (__fastcall **)(struct IBitmapRealization *, char *))(*(_QWORD *)v31 + 32LL);
    if ( (char *)v16 == (char *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize )
    {
      Size = (__int64 *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize(v31, &v34);
    }
    else if ( (char *)v16 == (char *)CDxHandleBitmapRealization::GetSize )
    {
      Size = (__int64 *)CDxHandleBitmapRealization::GetSize(v31, &v34);
    }
    else
    {
      Size = (__int64 *)v16(v31, &v34);
    }
    v14 = *Size;
  }
  v33[1] = 0.0;
  v33[2] = 0.0;
  v33[3] = 0.0;
  v33[5] = 0.0;
  v33[8] = 1.0;
  v18 = 1.0 / (float)(int)v14;
  v33[0] = v18;
  v19 = 1.0 / (float)SHIDWORD(v14);
  v33[4] = v19;
  v33[6] = 0.0 - (float)(v18 * 0.0);
  v33[7] = 0.0 - (float)(v19 * 0.0);
  v20 = CThreadLocalObjectCache<CSurfaceDrawListBrush,CSurfaceDrawListBrush>::Alloc();
  if ( v20 )
  {
    v35 = v15;
    v21 = 1;
    v36 = 257;
    v22 = CSurfaceDrawListBrush::CSurfaceDrawListBrush(v20, &v30, &v35, v33, 1);
    v23 = (CSurfaceDrawListBrush *)v22;
    if ( v22 )
    {
      *(_BYTE *)(v22 + 52) = 1;
      v24 = *(_OWORD *)((char *)a3 + 24);
      *(_DWORD *)(v22 + 48) = 50529027;
      *(_OWORD *)(v22 + 32) = v24;
      *((float *)&v29 + 1) = v19 * *((float *)a3 + 7);
      *(float *)&v29 = v18 * *((float *)a3 + 6);
      *((_QWORD *)&v29 + 1) = __PAIR64__(v19 * *((float *)a3 + 9), v18 * *((float *)a3 + 8));
      *(_OWORD *)(v22 + 120) = v29;
      *(_OWORD *)(v22 + 8) = *(_OWORD *)a3;
      *(_QWORD *)(v22 + 24) = *((_QWORD *)a3 + 2);
      if ( *((_BYTE *)a1 + 200) )
      {
        *(_QWORD *)(v22 + 136) = _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 6), (__m128)*((unsigned int *)a3 + 7)).m128_u64[0];
        *(_BYTE *)(v22 + 147) = 1;
      }
      v25 = (CMultiPrimitiveDrawListBrush *)*((_QWORD *)v5 + 1);
      *((_QWORD *)v5 + 1) = v22;
      if ( v25 )
      {
        v26 = **(void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int))v25;
        if ( v26 == CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
        {
          CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v25, 1u);
        }
        else if ( v26 == CSurfaceDrawListBrush::`vector deleting destructor' )
        {
          CSurfaceDrawListBrush::`vector deleting destructor'(v25, 1u);
        }
        else if ( v26 == CDrawListPrimitive0::`scalar deleting destructor' )
        {
          CDrawListPrimitive0::`scalar deleting destructor'(v25, 1u);
        }
        else
        {
          v26(v25, 1u);
        }
      }
      if ( *((_DWORD *)v5 + 10) > 1u )
        v21 = *((_DWORD *)v5 + 10);
      *((_DWORD *)v5 + 10) = v21;
      v27 = 0;
      goto LABEL_25;
    }
  }
  else
  {
    v23 = 0LL;
  }
  v27 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1Fu, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x37Fu, 0LL);
  if ( v23 )
  {
    CSurfaceDrawListBrush::~CSurfaceDrawListBrush(v23);
    CThreadLocalObjectCache<CSurfaceDrawListBrush,CSurfaceDrawListBrush>::Free(v23);
  }
LABEL_25:
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v30);
  return v27;
}
