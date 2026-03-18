/*
 * XREFs of ?CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x1800DA040
 * Callers:
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180148B80 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 *     ?AppendCpuClipAntialiasEntry@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@_NPEA_N@Z @ 0x1801999F0 (-AppendCpuClipAntialiasEntry@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexA.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ??0?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180024674 (--0-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCCommonRenderingEffect@@V1@@@SAPEAX_K@Z @ 0x1800D80D4 (-Alloc@-$CThreadLocalObjectCache@VCCommonRenderingEffect@@V1@@@SAPEAX_K@Z.c)
 *     ??0CCommonRenderingEffect@@QEAA@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@@Z @ 0x1800D9D70 (--0CCommonRenderingEffect@@QEAA@V-$span@PEBVCDrawListBrush@@$0-0@gsl@@@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800DA5C0 (-InternalRelease@-$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ??0CDrawListBitmap@@QEAA@XZ @ 0x1801D2130 (--0CDrawListBitmap@@QEAA@XZ.c)
 *     ??0SamplerMode@@QEAA@XZ @ 0x1801D8F60 (--0SamplerMode@@QEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1802467D8 (--0CThreadContext@@AEAA@XZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ @ 0x1802D6BB0 (-AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCommonRenderingEffectFactory::CreateRenderingEffect(__int64 a1, __int128 *a2, _QWORD *a3)
{
  unsigned int v3; // edi
  _QWORD *v4; // r14
  unsigned int v6; // r13d
  _DWORD *Value; // rbp
  int v8; // ecx
  char *v9; // rsi
  HANDLE ProcessHeap; // rax
  __int128 v11; // xmm6
  CDrawListBitmap *v12; // rcx
  SamplerMode *v13; // rcx
  unsigned __int64 v14; // rax
  unsigned int v15; // r12d
  unsigned int (__fastcall *v16)(CMILRefCountImpl *__hidden); // rdx
  __int64 (__fastcall *v17)(CEffectIntermediateProducer *); // r8
  __int64 v18; // rbp
  CMILRefCountImpl *v19; // rcx
  CEffectIntermediateProducer *v20; // r14
  unsigned int (__fastcall *v21)(CMILRefCountImpl *__hidden); // rax
  __int64 (__fastcall *v22)(CEffectIntermediateProducer *); // rax
  volatile signed __int32 *v23; // rcx
  __int64 v24; // r14
  unsigned int (__fastcall *v25)(CMILRefCountImpl *__hidden); // rax
  int v26; // et0
  bool (__fastcall *v27)(CCompositionSurfaceBitmap *__hidden); // rax
  bool v29; // al
  void (__fastcall ***v31)(_QWORD); // rax
  _QWORD *v32; // rax
  __int64 v33; // rbx
  CThreadContext *v34; // rax
  CThreadContext *v35; // rax
  unsigned int v36; // [rsp+20h] [rbp-58h]
  __int128 v37; // [rsp+30h] [rbp-48h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]

  v3 = 0;
  v4 = a3;
  v6 = 0;
  if ( *(_QWORD *)a2 )
  {
    Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( !Value )
    {
      v34 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
      if ( !v34 || (v35 = CThreadContext::CThreadContext(v34), (Value = v35) == 0LL) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
        ModuleFailFastForHRESULT(-2147024882, retaddr);
      }
      TlsSetValue(CThreadContext::s_dwTlsIndex, v35);
    }
    v8 = Value[69];
    v9 = 0LL;
    if ( v8 )
    {
      v9 = (char *)*((_QWORD *)Value + 35);
      *((_QWORD *)Value + 35) = *(_QWORD *)v9;
      Value[69] = v8 - 1;
    }
    if ( !v9 )
    {
      ProcessHeap = GetProcessHeap();
      v9 = (char *)HeapAlloc(ProcessHeap, 0, 0x48uLL);
      if ( !v9 )
      {
        v6 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x43u, 0LL);
        return v6;
      }
    }
    v11 = *a2;
    v37 = *a2;
    CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>((__int64)v9);
    *(_QWORD *)v9 = &CCommonRenderingEffect::`vftable';
    if ( CDrawListBitmap::CDrawListBitmap == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
    {
      v12 = (CDrawListBitmap *)(v9 + 40);
      *((_QWORD *)v9 + 5) = 0LL;
      *((_QWORD *)v9 + 6) = 0LL;
    }
    else
    {
      CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)(v9 + 16));
      v12 = (CDrawListBitmap *)(v9 + 40);
    }
    if ( CDrawListBitmap::CDrawListBitmap == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
    {
      *((_QWORD *)v12 + 3) = 0LL;
      *((_QWORD *)v12 + 4) = 0LL;
    }
    else
    {
      CDrawListBitmap::CDrawListBitmap(v12);
    }
    if ( SamplerMode::SamplerMode == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
    {
      *((_QWORD *)v9 + 11) = 0LL;
      *((_QWORD *)v9 + 12) = 0LL;
    }
    else
    {
      SamplerMode::SamplerMode((SamplerMode *)(v9 + 64));
    }
    v13 = (SamplerMode *)(v9 + 67);
    if ( SamplerMode::SamplerMode == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
    {
      *(_QWORD *)(v9 + 91) = 0LL;
      *(_QWORD *)(v9 + 99) = 0LL;
    }
    else
    {
      SamplerMode::SamplerMode(v13);
    }
    v14 = v11;
    v9[70] = 1;
    if ( (unsigned __int64)v11 >= 2 )
    {
      v15 = 2;
    }
    else
    {
      v15 = v11;
      if ( !(_DWORD)v11 )
      {
LABEL_46:
        (**(void (__fastcall ***)(LPVOID))v9)(v9);
        *v4 = v9;
        return v6;
      }
    }
    v16 = CMILRefCountImpl::AddReference;
    v17 = CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease;
    while ( 1 )
    {
      if ( v3 >= v14 )
      {
        ((void (__fastcall *)(SamplerMode *, unsigned int (__fastcall *)(CMILRefCountImpl *__hidden), __int64 (__fastcall *)(CEffectIntermediateProducer *)))`gsl::details::get_terminate_handler'::`2'::handler)(
          v13,
          CMILRefCountImpl::AddReference,
          CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease);
        __debugbreak();
      }
      _mm_lfence();
      v18 = *(_QWORD *)(*((_QWORD *)&v37 + 1) + 8LL * v3);
      if ( v18 )
      {
        v19 = *(CMILRefCountImpl **)(v18 + 56);
        v20 = *(CEffectIntermediateProducer **)&v9[24 * v3 + 16];
        *(_QWORD *)&v9[24 * v3 + 16] = v19;
        if ( v19 )
        {
          v21 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(*(_QWORD *)v19 + 8LL);
          if ( v21 == CMILRefCountImpl::AddReference )
            CMILRefCountImpl::AddReference(v19);
          else
            ((void (__fastcall *)(CMILRefCountImpl *, unsigned int (__fastcall *)(CMILRefCountImpl *__hidden), __int64 (__fastcall *)(CEffectIntermediateProducer *)))v21)(
              v19,
              CMILRefCountImpl::AddReference,
              CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease);
          v17 = CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease;
        }
        if ( v20 )
        {
          v22 = *(__int64 (__fastcall **)(CEffectIntermediateProducer *))(*(_QWORD *)v20 + 16LL);
          if ( v22 == CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease )
            CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease(v20);
          else
            ((void (__fastcall *)(CEffectIntermediateProducer *, unsigned int (__fastcall *)(CMILRefCountImpl *__hidden), __int64 (__fastcall *)(CEffectIntermediateProducer *)))v22)(
              v20,
              v16,
              CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease);
        }
        v23 = *(volatile signed __int32 **)(v18 + 64);
        v24 = *(_QWORD *)&v9[24 * v3 + 24];
        *(_QWORD *)&v9[24 * v3 + 24] = v23;
        if ( v23 )
        {
          v16 = CMILRefCountImpl::AddReference;
          v25 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(*(_QWORD *)v23 + 8LL);
          if ( v25 == CMILRefCountImpl::AddReference )
          {
            v26 = _InterlockedAdd(v23, 1u);
            if ( (v26 < 0) ^ __OFSUB__(v25, CMILRefCountImpl::AddReference) | (v26 == 0) )
              wil::details::in1diag3::Log_Hr(
                (wil::details::in1diag3 *)retaddr,
                (void *)0x18,
                (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
                (const char *)0x8007029CLL,
                v36);
          }
          else if ( (char *)v25 == (char *)CGDISectionBitmapRealization::AddRef )
          {
            CGDISectionBitmapRealization::AddRef(v23, CGDISectionBitmapRealization::AddRef, v17);
          }
          else
          {
            ((void (__fastcall *)(volatile signed __int32 *, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), __int64 (__fastcall *)(CEffectIntermediateProducer *)))v25)(
              v23,
              CGDISectionBitmapRealization::AddRef,
              v17);
          }
        }
        if ( v24 )
          (*(void (__fastcall **)(__int64, unsigned int (__fastcall *)(CMILRefCountImpl *__hidden), __int64 (__fastcall *)(CEffectIntermediateProducer *)))(*(_QWORD *)v24 + 16LL))(
            v24,
            v16,
            v17);
        v13 = (SamplerMode *)&v9[2 * v3];
        v9[24 * v3 + 32] = *(_BYTE *)(v18 + 72);
        *(_WORD *)((char *)v13 + v3 + 64) = *(_WORD *)(v18 + 80);
        *((_BYTE *)v13 + v3 + 66) = *(_BYTE *)(v18 + 82);
        v29 = 0;
        if ( CCommonRegistryData::EnableCommonSuperSets )
        {
          v13 = *(SamplerMode **)&v9[24 * v3 + 16];
          if ( v13 )
          {
            v27 = *(bool (__fastcall **)(CCompositionSurfaceBitmap *__hidden))(*(_QWORD *)v13 + 40LL);
            if ( v27 == CCompositionSurfaceBitmap::IsWhitePixelInTopLeft
               ? *((_BYTE *)v13 + 41)
               : ((__int64 (__fastcall *)(SamplerMode *, bool (__fastcall *)(CCompositionSurfaceBitmap *__hidden), __int64 (__fastcall *)(CEffectIntermediateProducer *)))v27)(
                   v13,
                   CCompositionSurfaceBitmap::IsWhitePixelInTopLeft,
                   v17) )
            {
              if ( v3 == 1
                || (v13 = *(SamplerMode **)&v9[24 * v3 + 24]) != 0LL
                && (*(unsigned __int8 (__fastcall **)(SamplerMode *, _QWORD, __int64 (__fastcall *)(CEffectIntermediateProducer *)))(*(_QWORD *)v13 + 64LL))(
                     v13,
                     0LL,
                     v17) )
              {
                v29 = 1;
              }
            }
          }
        }
        v9[70] &= v29;
        v16 = CMILRefCountImpl::AddReference;
        v17 = CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease;
      }
      if ( ++v3 >= v15 )
        break;
      v14 = v37;
    }
    v4 = a3;
    goto LABEL_46;
  }
  v31 = (void (__fastcall ***)(_QWORD))CCommonRenderingEffectFactory::s_cpSolidColorEffect;
  if ( CCommonRenderingEffectFactory::s_cpSolidColorEffect )
    goto LABEL_59;
  v32 = CThreadLocalObjectCache<CCommonRenderingEffect,CCommonRenderingEffect>::Alloc();
  if ( v32 )
  {
    v37 = 0uLL;
    v31 = (void (__fastcall ***)(_QWORD))CCommonRenderingEffect::CCommonRenderingEffect(
                                           (__int64)v32,
                                           (unsigned __int64 *)&v37);
    v33 = CCommonRenderingEffectFactory::s_cpSolidColorEffect;
    CCommonRenderingEffectFactory::s_cpSolidColorEffect = (__int64)v31;
    if ( v31 )
    {
      (**v31)(v31);
      v31 = (void (__fastcall ***)(_QWORD))CCommonRenderingEffectFactory::s_cpSolidColorEffect;
    }
  }
  else
  {
    v33 = CCommonRenderingEffectFactory::s_cpSolidColorEffect;
    v31 = 0LL;
    CCommonRenderingEffectFactory::s_cpSolidColorEffect = 0LL;
  }
  if ( v33 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 8LL))(v33);
    v31 = (void (__fastcall ***)(_QWORD))CCommonRenderingEffectFactory::s_cpSolidColorEffect;
  }
  if ( v31 )
  {
LABEL_59:
    *v4 = v31;
    (**(void (__fastcall ***)(__int64))CCommonRenderingEffectFactory::s_cpSolidColorEffect)(CCommonRenderingEffectFactory::s_cpSolidColorEffect);
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x59u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x49u, 0LL);
  }
  return v6;
}
