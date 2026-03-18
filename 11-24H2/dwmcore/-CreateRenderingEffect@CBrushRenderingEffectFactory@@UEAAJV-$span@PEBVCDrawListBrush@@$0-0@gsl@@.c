/*
 * XREFs of ?CreateRenderingEffect@CBrushRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x1800197C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCBrushRenderingEffect@@@Z @ 0x180017FBC (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCBrushRenderingEffect@@@Z.c)
 *     ?IsOfType@CSurfaceDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z @ 0x180018170 (-IsOfType@CSurfaceDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z.c)
 *     ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x180019EB0 (--0CDirtyRegionAnnotation@@QEAA@XZ.c)
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ??0?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180024674 (--0-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsBoundless@CSurfaceDrawListBrush@@QEBA_NXZ @ 0x1800B9434 (-IsBoundless@CSurfaceDrawListBrush@@QEBA_NXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800DA5C0 (-InternalRelease@-$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ??0CDrawListBitmap@@QEAA@XZ @ 0x1801D2130 (--0CDrawListBitmap@@QEAA@XZ.c)
 *     ??0SamplerMode@@QEAA@XZ @ 0x1801D8F60 (--0SamplerMode@@QEAA@XZ.c)
 *     ?AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ @ 0x1802D6BB0 (-AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ.c)
 *     ?GetSize@CDxHandleBitmapRealization@@WBAA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D7EA0 (-GetSize@CDxHandleBitmapRealization@@WBAA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D97E0 (-GetSize@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrushRenderingEffectFactory::CreateRenderingEffect(
        struct CBrushRenderingEffect *a1,
        __m128i *a2,
        _QWORD *a3)
{
  unsigned int v5; // r12d
  struct CObjectCache *ObjectCache; // rax
  _QWORD *v7; // rbx
  int v8; // r10d
  __m128i v9; // xmm6
  char *v10; // rax
  _QWORD *v11; // rsi
  CDirtyRegionAnnotation *v12; // rdi
  __int64 v13; // rbp
  _QWORD *v14; // r13
  __int64 v15; // rbp
  CDirtyRegionAnnotation *v16; // rdi
  _QWORD *v17; // rax
  _BYTE *v18; // r14
  char *v19; // rbp
  unsigned __int64 v20; // rcx
  CMILRefCountImpl **v21; // r15
  __int64 v22; // rdi
  bool (__fastcall *v23)(__int64, int); // rax
  __int64 v24; // rcx
  bool v25; // al
  __int64 v26; // r8
  CMILRefCountImpl *v27; // rcx
  CEffectIntermediateProducer *v28; // rsi
  void (*v29)(void); // rax
  __int64 (__fastcall *v30)(CEffectIntermediateProducer *); // rax
  CMILRefCountImpl *v31; // rcx
  CMILRefCountImpl *v32; // rsi
  void (*v33)(void); // rax
  __int128 v34; // xmm0
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 (__fastcall *v37)(__int64, char *); // rax
  __int64 *Size; // rax
  __m128 v39; // xmm3
  __m128 v40; // xmm2
  unsigned int v42; // xmm1_4
  char v43[8]; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v44; // [rsp+38h] [rbp-80h]
  __int64 v45; // [rsp+40h] [rbp-78h]
  unsigned __int64 v46; // [rsp+50h] [rbp-68h]
  __int128 v47; // [rsp+60h] [rbp-58h]
  char *v49; // [rsp+D8h] [rbp+20h]
  signed __int64 v50; // [rsp+D8h] [rbp+20h]

  v5 = 0;
  ObjectCache = CThreadContext::GetObjectCache(a1);
  v7 = 0LL;
  v8 = *((_DWORD *)ObjectCache + 1);
  if ( v8 )
  {
    v7 = (_QWORD *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *v7;
    *((_DWORD *)ObjectCache + 1) = v8 - 1;
  }
  if ( v7 || (v7 = MIDL_user_allocate(0x110uLL)) != 0LL )
  {
    v9 = *a2;
    v10 = (char *)a1 + 16;
    v11 = (_QWORD *)*((_QWORD *)a1 + 1);
    v49 = v10;
    CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>(v7);
    *v7 = &CBrushRenderingEffect::`vftable';
    v12 = (CDirtyRegionAnnotation *)(v7 + 3);
    v7[2] = 0LL;
    v13 = 4LL;
    do
    {
      --v13;
      if ( CDrawListBitmap::CDrawListBitmap == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
        CDirtyRegionAnnotation::CDirtyRegionAnnotation(v12);
      else
        CDrawListBitmap::CDrawListBitmap(v12);
      v12 = (CDirtyRegionAnnotation *)((char *)v12 + 24);
    }
    while ( v13 );
    v14 = v7 + 15;
    v15 = 4LL;
    v16 = (CDirtyRegionAnnotation *)(v7 + 15);
    do
    {
      --v15;
      if ( SamplerMode::SamplerMode == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
        CDirtyRegionAnnotation::CDirtyRegionAnnotation(v16);
      else
        SamplerMode::SamplerMode(v16);
      v16 = (CDirtyRegionAnnotation *)((char *)v16 + 3);
    }
    while ( v15 );
    if ( (_QWORD *)v7[2] != v11 )
    {
      if ( v11 )
        (**(void (__fastcall ***)(_QWORD))*v11)(*v11);
      v17 = (_QWORD *)v7[2];
      v7[2] = v11;
      if ( v17 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v17 + 8LL))(*v17);
    }
    v46 = v9.m128i_i64[0];
    if ( v9.m128i_i64[0] )
    {
      v50 = v49 - (char *)v7;
      v18 = (char *)v7 + 260;
      v19 = (char *)v7 + 132;
      v20 = _mm_srli_si128(v9, 8).m128i_u64[0];
      v21 = (CMILRefCountImpl **)(v7 + 4);
      v44 = v20;
      v45 = -260LL - (_QWORD)v7;
      do
      {
        v22 = *(_QWORD *)v20;
        v23 = *(bool (__fastcall **)(__int64, int))(**(_QWORD **)v20 + 8LL);
        v24 = *(_QWORD *)v20;
        if ( v23 == CSurfaceDrawListBrush::IsOfType )
          v25 = CSurfaceDrawListBrush::IsOfType(v24, 2);
        else
          v25 = v23(v24, 2);
        if ( v25 )
        {
          v27 = *(CMILRefCountImpl **)(v22 + 56);
          v28 = *(v21 - 1);
          *(v21 - 1) = v27;
          if ( v27 )
          {
            v29 = *(void (**)(void))(*(_QWORD *)v27 + 8LL);
            if ( (char *)v29 == (char *)CMILRefCountImpl::AddReference )
              CMILRefCountImpl::AddReference(v27);
            else
              v29();
          }
          if ( v28 )
          {
            v30 = *(__int64 (__fastcall **)(CEffectIntermediateProducer *))(*(_QWORD *)v28 + 16LL);
            if ( v30 == CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease )
              CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease(v28);
            else
              v30(v28);
          }
          v31 = *(CMILRefCountImpl **)(v22 + 64);
          v32 = *v21;
          *v21 = v31;
          if ( v31 )
          {
            v33 = *(void (**)(void))(*(_QWORD *)v31 + 8LL);
            if ( (char *)v33 == (char *)CMILRefCountImpl::AddReference )
            {
              CMILRefCountImpl::AddReference(v31);
            }
            else if ( (char *)v33 == (char *)CGDISectionBitmapRealization::AddRef )
            {
              CGDISectionBitmapRealization::AddRef(v31, CGDISectionBitmapRealization::AddRef, v26);
            }
            else
            {
              v33();
            }
          }
          if ( v32 )
            (*(void (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v32 + 16LL))(v32);
          *((_BYTE *)v21 + 8) = *(_BYTE *)(v22 + 72);
          *(_WORD *)v14 = *(_WORD *)(v22 + 80);
          *((_BYTE *)v14 + 2) = *(_BYTE *)(v22 + 82);
          v18[4] = *(_BYTE *)(v22 + 145);
          if ( (unsigned __int64)&v18[v45] >= 4 )
          {
            ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
            __debugbreak();
          }
          *v18 = v18[v50 - 260];
          if ( !*(_BYTE *)(v22 + 145)
            && (*(_BYTE *)(v22 + 52) || CSurfaceDrawListBrush::IsBoundless((CSurfaceDrawListBrush *)v22)) )
          {
            v34 = 0LL;
          }
          else
          {
            v34 = *(_OWORD *)(v22 + 120);
          }
          *(_OWORD *)v19 = v34;
          v35 = *(_QWORD *)(v22 + 64);
          v36 = 0LL;
          if ( v35 )
          {
            v37 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v35 + 32LL);
            if ( (char *)v37 == (char *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize )
            {
              Size = (__int64 *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize(
                                  v35,
                                  v43);
            }
            else if ( (char *)v37 == (char *)CDxHandleBitmapRealization::GetSize )
            {
              Size = (__int64 *)CDxHandleBitmapRealization::GetSize(v35, v43);
            }
            else
            {
              Size = (__int64 *)v37(v35, v43);
            }
            v36 = *Size;
          }
          v39 = 0LL;
          v40 = 0LL;
          v39.m128_f32[0] = (float)(int)v36;
          v40.m128_f32[0] = (float)SHIDWORD(v36);
          *((_QWORD *)v19 + 2) = _mm_unpacklo_ps(v39, v40).m128_u64[0];
          *((float *)v19 + 6) = 1.0 / (float)(int)v36;
          *((float *)v19 + 7) = 1.0 / (float)SHIDWORD(v36);
        }
        else
        {
          HIDWORD(v47) = *(_DWORD *)(v22 + 68);
          *(float *)&v42 = *((float *)&v47 + 3) * *(float *)(v22 + 60);
          *(float *)&v47 = *((float *)&v47 + 3) * *(float *)(v22 + 56);
          *(_QWORD *)((char *)&v47 + 4) = __PAIR64__(*((float *)&v47 + 3) * *(float *)(v22 + 64), v42);
          *(_OWORD *)v19 = v47;
        }
        ++v18;
        v20 = v44 + 8;
        v44 += 8LL;
        v14 = (_QWORD *)((char *)v14 + 3);
        v21 += 3;
        v19 += 32;
      }
      while ( (unsigned __int64)&v18[v45] < v46 );
    }
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v7 + 1));
    *a3 = v7;
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x4Au, 0LL);
  }
  return v5;
}
