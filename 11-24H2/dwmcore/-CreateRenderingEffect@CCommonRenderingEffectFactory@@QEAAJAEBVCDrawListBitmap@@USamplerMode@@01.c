/*
 * XREFs of ?CreateRenderingEffect@CCommonRenderingEffectFactory@@QEAAJAEBVCDrawListBitmap@@USamplerMode@@01PEAPEAVCRenderingEffect@@@Z @ 0x1800193F0
 * Callers:
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006FC50 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@IV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x18013BB14 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 *     ?AppendReconstructableEntry@CDrawListEntryBuilder@@AEAAJAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N2PEBUPrimitiveVertexAttributesDesc@@I@Z @ 0x18016E700 (-AppendReconstructableEntry@CDrawListEntryBuilder@@AEAAJAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N2PE.c)
 * Callees:
 *     ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x180019EB0 (--0CDirtyRegionAnnotation@@QEAA@XZ.c)
 *     ??0?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180024674 (--0-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCCommonRenderingEffect@@V1@@@SAPEAX_K@Z @ 0x1800D80D4 (-Alloc@-$CThreadLocalObjectCache@VCCommonRenderingEffect@@V1@@@SAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800DA5C0 (-InternalRelease@-$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ??0CDrawListBitmap@@QEAA@XZ @ 0x1801D2130 (--0CDrawListBitmap@@QEAA@XZ.c)
 *     ??0SamplerMode@@QEAA@XZ @ 0x1801D8F60 (--0SamplerMode@@QEAA@XZ.c)
 *     ?IsWhitePixelInTopLeft@CDrawListBitmap@@QEBA_NXZ @ 0x1801D8FC4 (-IsWhitePixelInTopLeft@CDrawListBitmap@@QEBA_NXZ.c)
 *     ?IsWhitePixelInTopLeft@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1801D9000 (-IsWhitePixelInTopLeft@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?CreateSolidColorRenderingEffect@CCommonRenderingEffectFactory@@AEAAJPEAPEAVCRenderingEffect@@@Z @ 0x1801F4F08 (-CreateSolidColorRenderingEffect@CCommonRenderingEffectFactory@@AEAAJPEAPEAVCRenderingEffect@@@Z.c)
 *     ?AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ @ 0x1802D6BB0 (-AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCommonRenderingEffectFactory::CreateRenderingEffect(
        CCommonRenderingEffectFactory *a1,
        __int64 a2,
        __int16 *a3,
        __int64 a4,
        __int16 *a5,
        struct CRenderingEffect **a6)
{
  char v6; // bl
  unsigned int v9; // ebp
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // r15
  CDirtyRegionAnnotation *v13; // rsi
  __int64 v14; // r14
  CDirtyRegionAnnotation *v15; // rsi
  __int64 v16; // r8
  CMILRefCountImpl *v17; // rcx
  CEffectIntermediateProducer *v18; // rsi
  void (*v19)(void); // rax
  __int64 (__fastcall *v20)(CEffectIntermediateProducer *); // rax
  CMILRefCountImpl *v21; // rcx
  __int64 (__fastcall *v22)(_QWORD, _QWORD, _QWORD); // rdx
  __int64 v23; // rsi
  unsigned int (__fastcall *v24)(CMILRefCountImpl *__hidden); // rax
  CEffectIntermediateProducer *v25; // rsi
  CMILRefCountImpl *v26; // rcx
  unsigned int (__fastcall *v27)(CMILRefCountImpl *__hidden); // rax
  __int64 (__fastcall *v28)(CEffectIntermediateProducer *); // rax
  CMILRefCountImpl *v29; // rcx
  __int64 v30; // rsi
  void (*v31)(void); // rax
  CCompositionSurfaceBitmap *v32; // rcx
  bool (__fastcall *v33)(CCompositionSurfaceBitmap *__hidden); // rax
  char IsWhitePixelInTopLeft; // al
  bool v35; // al
  __int64 v36; // rcx
  int SolidColorRenderingEffect; // eax
  __int16 v39; // [rsp+30h] [rbp-58h]
  __int16 v40; // [rsp+40h] [rbp-48h]
  char v41; // [rsp+90h] [rbp+8h]
  char v42; // [rsp+98h] [rbp+10h]

  v6 = 0;
  v9 = 0;
  if ( *(_QWORD *)(a2 + 8) || *(_QWORD *)(a4 + 8) )
  {
    v10 = CThreadLocalObjectCache<CCommonRenderingEffect,CCommonRenderingEffect>::Alloc();
    v11 = v10;
    if ( v10 )
    {
      v40 = *a5;
      v42 = *((_BYTE *)a5 + 2);
      v39 = *a3;
      v41 = *((_BYTE *)a3 + 2);
      CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>(v10);
      v12 = 2LL;
      *(_QWORD *)v11 = &CCommonRenderingEffect::`vftable';
      v13 = (CDirtyRegionAnnotation *)(v11 + 16);
      v14 = 2LL;
      do
      {
        --v14;
        if ( CDrawListBitmap::CDrawListBitmap == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
          CDirtyRegionAnnotation::CDirtyRegionAnnotation(v13);
        else
          CDrawListBitmap::CDrawListBitmap(v13);
        v13 = (CDirtyRegionAnnotation *)((char *)v13 + 24);
      }
      while ( v14 );
      v15 = (CDirtyRegionAnnotation *)(v11 + 64);
      do
      {
        --v12;
        if ( SamplerMode::SamplerMode == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
          CDirtyRegionAnnotation::CDirtyRegionAnnotation(v15);
        else
          SamplerMode::SamplerMode(v15);
        v15 = (CDirtyRegionAnnotation *)((char *)v15 + 3);
      }
      while ( v12 );
      v17 = *(CMILRefCountImpl **)a2;
      v18 = *(CEffectIntermediateProducer **)(v11 + 16);
      *(_QWORD *)(v11 + 16) = *(_QWORD *)a2;
      if ( v17 )
      {
        v19 = *(void (**)(void))(*(_QWORD *)v17 + 8LL);
        if ( (char *)v19 == (char *)CMILRefCountImpl::AddReference )
          CMILRefCountImpl::AddReference(v17);
        else
          v19();
      }
      if ( v18 )
      {
        v20 = *(__int64 (__fastcall **)(CEffectIntermediateProducer *))(*(_QWORD *)v18 + 16LL);
        if ( v20 == CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease )
          CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease(v18);
        else
          v20(v18);
      }
      v21 = *(CMILRefCountImpl **)(a2 + 8);
      v22 = CGDISectionBitmapRealization::AddRef;
      v23 = *(_QWORD *)(v11 + 24);
      *(_QWORD *)(v11 + 24) = v21;
      if ( v21 )
      {
        v24 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(*(_QWORD *)v21 + 8LL);
        if ( v24 == CMILRefCountImpl::AddReference )
        {
          CMILRefCountImpl::AddReference(v21);
        }
        else if ( (char *)v24 == (char *)CGDISectionBitmapRealization::AddRef )
        {
          CGDISectionBitmapRealization::AddRef(v21, CGDISectionBitmapRealization::AddRef, v16);
        }
        else
        {
          ((void (__fastcall *)(CMILRefCountImpl *, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD)))v24)(
            v21,
            CGDISectionBitmapRealization::AddRef);
        }
      }
      if ( v23 )
        (*(void (__fastcall **)(__int64, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD)))(*(_QWORD *)v23 + 16LL))(
          v23,
          v22);
      *(_BYTE *)(v11 + 32) = *(_BYTE *)(a2 + 16);
      v25 = *(CEffectIntermediateProducer **)(v11 + 40);
      v26 = *(CMILRefCountImpl **)a4;
      *(_QWORD *)(v11 + 40) = *(_QWORD *)a4;
      if ( v26 )
      {
        v27 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(*(_QWORD *)v26 + 8LL);
        if ( v27 == CMILRefCountImpl::AddReference )
          CMILRefCountImpl::AddReference(v26);
        else
          ((void (__fastcall *)(CMILRefCountImpl *, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD)))v27)(v26, v22);
      }
      if ( v25 )
      {
        v28 = *(__int64 (__fastcall **)(CEffectIntermediateProducer *))(*(_QWORD *)v25 + 16LL);
        if ( v28 == CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease )
          CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease(v25);
        else
          ((void (__fastcall *)(CEffectIntermediateProducer *, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD)))v28)(
            v25,
            v22);
      }
      v29 = *(CMILRefCountImpl **)(a4 + 8);
      v30 = *(_QWORD *)(v11 + 48);
      *(_QWORD *)(v11 + 48) = v29;
      if ( v29 )
      {
        v31 = *(void (**)(void))(*(_QWORD *)v29 + 8LL);
        if ( (char *)v31 == (char *)CMILRefCountImpl::AddReference )
        {
          CMILRefCountImpl::AddReference(v29);
        }
        else if ( (char *)v31 == (char *)CGDISectionBitmapRealization::AddRef )
        {
          CGDISectionBitmapRealization::AddRef(v29, CGDISectionBitmapRealization::AddRef, v16);
        }
        else
        {
          v31();
        }
      }
      if ( v30 )
        (*(void (__fastcall **)(__int64, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD)))(*(_QWORD *)v30 + 16LL))(
          v30,
          v22);
      *(_BYTE *)(v11 + 56) = *(_BYTE *)(a4 + 16);
      *(_WORD *)(v11 + 64) = v39;
      *(_BYTE *)(v11 + 66) = v41;
      *(_WORD *)(v11 + 67) = v40;
      *(_BYTE *)(v11 + 69) = v42;
      v35 = 1;
      if ( *(_QWORD *)(a2 + 8) )
      {
        if ( !CCommonRegistryData::EnableCommonSuperSets
          || (v32 = *(CCompositionSurfaceBitmap **)a2) == 0LL
          || ((v33 = *(bool (__fastcall **)(CCompositionSurfaceBitmap *__hidden))(*(_QWORD *)v32 + 40LL),
               v33 != CCompositionSurfaceBitmap::IsWhitePixelInTopLeft)
            ? (IsWhitePixelInTopLeft = ((__int64 (*)(void))v33)())
            : (IsWhitePixelInTopLeft = CCompositionSurfaceBitmap::IsWhitePixelInTopLeft(v32)),
              !IsWhitePixelInTopLeft
           || (v36 = *(_QWORD *)(a2 + 8)) == 0
           || !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v36 + 64LL))(v36, 0LL)) )
        {
          v35 = 0;
        }
      }
      *(_BYTE *)(v11 + 70) = v35;
      if ( !*(_QWORD *)(a4 + 8)
        || CCommonRegistryData::EnableCommonSuperSets && CDrawListBitmap::IsWhitePixelInTopLeft((CDrawListBitmap *)a4) )
      {
        v6 = 1;
      }
      *(_BYTE *)(v11 + 70) &= v6;
      (**(void (__fastcall ***)(__int64, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD)))v11)(v11, v22);
      *a6 = (struct CRenderingEffect *)v11;
    }
    else
    {
      v9 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2Cu, 0LL);
    }
  }
  else
  {
    SolidColorRenderingEffect = CCommonRenderingEffectFactory::CreateSolidColorRenderingEffect(a1, a6);
    v9 = SolidColorRenderingEffect;
    if ( SolidColorRenderingEffect < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SolidColorRenderingEffect, 0x32u, 0LL);
  }
  return v9;
}
