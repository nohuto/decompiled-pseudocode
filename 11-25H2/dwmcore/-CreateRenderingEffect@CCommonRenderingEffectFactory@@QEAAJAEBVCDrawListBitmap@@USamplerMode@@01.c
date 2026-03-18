/*
 * XREFs of ?CreateRenderingEffect@CCommonRenderingEffectFactory@@QEAAJAEBVCDrawListBitmap@@USamplerMode@@01PEAPEAVCRenderingEffect@@@Z @ 0x180128BA0
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@IV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x18000F914 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 *     ?AppendReconstructableEntry@CDrawListEntryBuilder@@AEAAJAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N2PEBUPrimitiveVertexAttributesDesc@@I@Z @ 0x180047920 (-AppendReconstructableEntry@CDrawListEntryBuilder@@AEAAJAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N2PE.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180080B20 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 * Callees:
 *     ??0?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180042D70 (--0-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCCommonRenderingEffect@@V1@@@SAPEAX_K@Z @ 0x18010D994 (-Alloc@-$CThreadLocalObjectCache@VCCommonRenderingEffect@@V1@@@SAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18010FE80 (-InternalRelease@-$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x180129660 (--0CDirtyRegionAnnotation@@QEAA@XZ.c)
 *     ??0CDrawListBitmap@@QEAA@XZ @ 0x1801DFEE0 (--0CDrawListBitmap@@QEAA@XZ.c)
 *     ??0SamplerMode@@QEAA@XZ @ 0x1801E4F50 (--0SamplerMode@@QEAA@XZ.c)
 *     ?IsWhitePixelInTopLeft@CDrawListBitmap@@QEBA_NXZ @ 0x1801E4FB4 (-IsWhitePixelInTopLeft@CDrawListBitmap@@QEBA_NXZ.c)
 *     ?IsWhitePixelInTopLeft@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1801E4FF0 (-IsWhitePixelInTopLeft@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?CreateSolidColorRenderingEffect@CCommonRenderingEffectFactory@@AEAAJPEAPEAVCRenderingEffect@@@Z @ 0x1802019B8 (-CreateSolidColorRenderingEffect@CCommonRenderingEffectFactory@@AEAAJPEAPEAVCRenderingEffect@@@Z.c)
 *     ?AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ @ 0x1802DFE50 (-AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  _QWORD *v10; // rax
  _QWORD *v11; // rdi
  __int64 v12; // r15
  CDirtyRegionAnnotation *v13; // rsi
  __int64 v14; // r14
  CDirtyRegionAnnotation *v15; // rsi
  CMILRefCountImpl *v16; // rcx
  CEffectIntermediateProducer *v17; // rsi
  void (*v18)(void); // rax
  __int64 (__fastcall *v19)(CEffectIntermediateProducer *); // rax
  CMILRefCountImpl *v20; // rcx
  __int64 (__fastcall *v21)(_QWORD); // rdx
  __int64 v22; // rsi
  __int64 (__fastcall *v23)(CMILRefCountImpl *); // rax
  CEffectIntermediateProducer *v24; // rsi
  CMILRefCountImpl *v25; // rcx
  __int64 (__fastcall *v26)(CMILRefCountImpl *); // rax
  __int64 (__fastcall *v27)(CEffectIntermediateProducer *); // rax
  CMILRefCountImpl *v28; // rcx
  __int64 v29; // rsi
  void (*v30)(void); // rax
  CCompositionSurfaceBitmap *v31; // rcx
  bool (__fastcall *v32)(CCompositionSurfaceBitmap *__hidden); // rax
  char IsWhitePixelInTopLeft; // al
  bool v34; // al
  __int64 v35; // rcx
  int SolidColorRenderingEffect; // eax
  __int16 v38; // [rsp+30h] [rbp-58h]
  __int16 v39; // [rsp+40h] [rbp-48h]
  char v40; // [rsp+90h] [rbp+8h]
  char v41; // [rsp+98h] [rbp+10h]

  v6 = 0;
  v9 = 0;
  if ( *(_QWORD *)(a2 + 8) || *(_QWORD *)(a4 + 8) )
  {
    v10 = CThreadLocalObjectCache<CCommonRenderingEffect,CCommonRenderingEffect>::Alloc();
    v11 = v10;
    if ( v10 )
    {
      v39 = *a5;
      v41 = *((_BYTE *)a5 + 2);
      v38 = *a3;
      v40 = *((_BYTE *)a3 + 2);
      CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>((__int64)v10);
      v12 = 2LL;
      *v11 = &CCommonRenderingEffect::`vftable';
      v13 = (CDirtyRegionAnnotation *)(v11 + 2);
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
      v15 = (CDirtyRegionAnnotation *)(v11 + 8);
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
      v16 = *(CMILRefCountImpl **)a2;
      v17 = (CEffectIntermediateProducer *)v11[2];
      v11[2] = *(_QWORD *)a2;
      if ( v16 )
      {
        v18 = *(void (**)(void))(*(_QWORD *)v16 + 8LL);
        if ( (char *)v18 == (char *)CMILRefCountImpl::AddReference )
          CMILRefCountImpl::AddReference(v16);
        else
          v18();
      }
      if ( v17 )
      {
        v19 = *(__int64 (__fastcall **)(CEffectIntermediateProducer *))(*(_QWORD *)v17 + 16LL);
        if ( v19 == CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease )
          CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease(v17);
        else
          v19(v17);
      }
      v20 = *(CMILRefCountImpl **)(a2 + 8);
      v21 = CGDISectionBitmapRealization::AddRef;
      v22 = v11[3];
      v11[3] = v20;
      if ( v20 )
      {
        v23 = *(__int64 (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v20 + 8LL);
        if ( v23 == CMILRefCountImpl::AddReference )
        {
          CMILRefCountImpl::AddReference(v20);
        }
        else if ( (char *)v23 == (char *)CGDISectionBitmapRealization::AddRef )
        {
          CGDISectionBitmapRealization::AddRef(v20);
        }
        else
        {
          ((void (__fastcall *)(CMILRefCountImpl *, __int64 (__fastcall *)(_QWORD)))v23)(
            v20,
            CGDISectionBitmapRealization::AddRef);
        }
      }
      if ( v22 )
        (*(void (__fastcall **)(__int64, __int64 (__fastcall *)(_QWORD)))(*(_QWORD *)v22 + 16LL))(v22, v21);
      *((_BYTE *)v11 + 32) = *(_BYTE *)(a2 + 16);
      v24 = (CEffectIntermediateProducer *)v11[5];
      v25 = *(CMILRefCountImpl **)a4;
      v11[5] = *(_QWORD *)a4;
      if ( v25 )
      {
        v26 = *(__int64 (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v25 + 8LL);
        if ( v26 == CMILRefCountImpl::AddReference )
          CMILRefCountImpl::AddReference(v25);
        else
          ((void (__fastcall *)(CMILRefCountImpl *, __int64 (__fastcall *)(_QWORD)))v26)(v25, v21);
      }
      if ( v24 )
      {
        v27 = *(__int64 (__fastcall **)(CEffectIntermediateProducer *))(*(_QWORD *)v24 + 16LL);
        if ( v27 == CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease )
          CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease(v24);
        else
          ((void (__fastcall *)(CEffectIntermediateProducer *, __int64 (__fastcall *)(_QWORD)))v27)(v24, v21);
      }
      v28 = *(CMILRefCountImpl **)(a4 + 8);
      v29 = v11[6];
      v11[6] = v28;
      if ( v28 )
      {
        v30 = *(void (**)(void))(*(_QWORD *)v28 + 8LL);
        if ( (char *)v30 == (char *)CMILRefCountImpl::AddReference )
        {
          CMILRefCountImpl::AddReference(v28);
        }
        else if ( (char *)v30 == (char *)CGDISectionBitmapRealization::AddRef )
        {
          CGDISectionBitmapRealization::AddRef(v28);
        }
        else
        {
          v30();
        }
      }
      if ( v29 )
        (*(void (__fastcall **)(__int64, __int64 (__fastcall *)(_QWORD)))(*(_QWORD *)v29 + 16LL))(v29, v21);
      *((_BYTE *)v11 + 56) = *(_BYTE *)(a4 + 16);
      *((_WORD *)v11 + 32) = v38;
      *((_BYTE *)v11 + 66) = v40;
      *(_WORD *)((char *)v11 + 67) = v39;
      *((_BYTE *)v11 + 69) = v41;
      v34 = 1;
      if ( *(_QWORD *)(a2 + 8) )
      {
        if ( !CCommonRegistryData::EnableCommonSuperSets
          || (v31 = *(CCompositionSurfaceBitmap **)a2) == 0LL
          || ((v32 = *(bool (__fastcall **)(CCompositionSurfaceBitmap *__hidden))(*(_QWORD *)v31 + 40LL),
               v32 != CCompositionSurfaceBitmap::IsWhitePixelInTopLeft)
            ? (IsWhitePixelInTopLeft = ((__int64 (*)(void))v32)())
            : (IsWhitePixelInTopLeft = CCompositionSurfaceBitmap::IsWhitePixelInTopLeft(v31)),
              !IsWhitePixelInTopLeft
           || (v35 = *(_QWORD *)(a2 + 8)) == 0
           || !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v35 + 64LL))(v35, 0LL)) )
        {
          v34 = 0;
        }
      }
      *((_BYTE *)v11 + 70) = v34;
      if ( !*(_QWORD *)(a4 + 8)
        || CCommonRegistryData::EnableCommonSuperSets && CDrawListBitmap::IsWhitePixelInTopLeft((CDrawListBitmap *)a4) )
      {
        v6 = 1;
      }
      *((_BYTE *)v11 + 70) &= v6;
      (*(void (__fastcall **)(_QWORD *, __int64 (__fastcall *)(_QWORD)))*v11)(v11, v21);
      *a6 = (struct CRenderingEffect *)v11;
    }
    else
    {
      v9 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x2Cu, 0LL);
    }
  }
  else
  {
    SolidColorRenderingEffect = CCommonRenderingEffectFactory::CreateSolidColorRenderingEffect(a1, a6);
    v9 = SolidColorRenderingEffect;
    if ( SolidColorRenderingEffect < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, SolidColorRenderingEffect, 0x32u, 0LL);
  }
  return v9;
}
