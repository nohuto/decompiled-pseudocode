/*
 * XREFs of ??0CCommonRenderingEffect@@QEAA@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@@Z @ 0x1800D9D70
 * Callers:
 *     ?CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x1800DA040 (-CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@.c)
 *     ?CreateSolidColorRenderingEffect@CCommonRenderingEffectFactory@@AEAAJPEAPEAVCRenderingEffect@@@Z @ 0x1801F4F08 (-CreateSolidColorRenderingEffect@CCommonRenderingEffectFactory@@AEAAJPEAPEAVCRenderingEffect@@@Z.c)
 *     ?CreateRenderingEffect@CProjectedShadowRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x1802149D0 (-CreateRenderingEffect@CProjectedShadowRenderingEffectFactory@@UEAAJV-$span@PEBVCDrawListBrush@@.c)
 * Callees:
 *     ??0?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180024674 (--0-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800DA5C0 (-InternalRelease@-$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ??0CDrawListBitmap@@QEAA@XZ @ 0x1801D2130 (--0CDrawListBitmap@@QEAA@XZ.c)
 *     ??0SamplerMode@@QEAA@XZ @ 0x1801D8F60 (--0SamplerMode@@QEAA@XZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ @ 0x1802D6BB0 (-AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCommonRenderingEffect::CCommonRenderingEffect(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rbx
  CDrawListBitmap *v5; // rcx
  SamplerMode *v6; // rcx
  unsigned __int64 v7; // rax
  unsigned int v8; // r13d
  unsigned int (__fastcall *v9)(CMILRefCountImpl *__hidden); // rdx
  __int64 (__fastcall *v10)(CEffectIntermediateProducer *); // r8
  __int64 v11; // rbp
  CMILRefCountImpl *v12; // rcx
  CEffectIntermediateProducer *v13; // r15
  unsigned int (__fastcall *v14)(CMILRefCountImpl *__hidden); // rax
  __int64 (__fastcall *v15)(CEffectIntermediateProducer *); // rax
  volatile signed __int32 *v16; // rcx
  __int64 v17; // r15
  unsigned int (__fastcall *v18)(CMILRefCountImpl *__hidden); // rax
  int v19; // et0
  bool (__fastcall *v20)(CCompositionSurfaceBitmap *__hidden); // rax
  bool v22; // al
  int v24; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>(a1);
  v4 = 0LL;
  *(_QWORD *)a1 = &CCommonRenderingEffect::`vftable';
  if ( CDrawListBitmap::CDrawListBitmap == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
  {
    v5 = (CDrawListBitmap *)(a1 + 40);
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  else
  {
    CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)(a1 + 16));
    v5 = (CDrawListBitmap *)(a1 + 40);
  }
  if ( CDrawListBitmap::CDrawListBitmap == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
  {
    *((_QWORD *)v5 + 3) = 0LL;
    *((_QWORD *)v5 + 4) = 0LL;
  }
  else
  {
    CDrawListBitmap::CDrawListBitmap(v5);
  }
  if ( SamplerMode::SamplerMode == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
  {
    *(_QWORD *)(a1 + 88) = 0LL;
    *(_QWORD *)(a1 + 96) = 0LL;
  }
  else
  {
    SamplerMode::SamplerMode((SamplerMode *)(a1 + 64));
  }
  v6 = (SamplerMode *)(a1 + 67);
  if ( SamplerMode::SamplerMode == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
  {
    *(_QWORD *)(a1 + 91) = 0LL;
    *(_QWORD *)(a1 + 99) = 0LL;
  }
  else
  {
    SamplerMode::SamplerMode(v6);
  }
  v7 = *a2;
  *(_BYTE *)(a1 + 70) = 1;
  if ( v7 >= 2 )
  {
    v8 = 2;
  }
  else
  {
    v8 = v7;
    if ( !(_DWORD)v7 )
      return a1;
  }
  v9 = CMILRefCountImpl::AddReference;
  v10 = CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease;
  do
  {
    if ( (unsigned int)v4 >= v7 )
    {
      ((void (__fastcall *)(SamplerMode *, unsigned int (__fastcall *)(CMILRefCountImpl *__hidden), __int64 (__fastcall *)(CEffectIntermediateProducer *)))`gsl::details::get_terminate_handler'::`2'::handler)(
        v6,
        CMILRefCountImpl::AddReference,
        CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease);
      __debugbreak();
    }
    _mm_lfence();
    v11 = *(_QWORD *)(a2[1] + 8 * v4);
    if ( v11 )
    {
      v12 = *(CMILRefCountImpl **)(v11 + 56);
      v13 = *(CEffectIntermediateProducer **)(a1 + 24 * v4 + 16);
      *(_QWORD *)(a1 + 24 * v4 + 16) = v12;
      if ( v12 )
      {
        v14 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(*(_QWORD *)v12 + 8LL);
        if ( v14 == CMILRefCountImpl::AddReference )
          CMILRefCountImpl::AddReference(v12);
        else
          ((void (__fastcall *)(CMILRefCountImpl *, unsigned int (__fastcall *)(CMILRefCountImpl *__hidden), __int64 (__fastcall *)(CEffectIntermediateProducer *)))v14)(
            v12,
            CMILRefCountImpl::AddReference,
            CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease);
        v10 = CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease;
      }
      if ( v13 )
      {
        v15 = *(__int64 (__fastcall **)(CEffectIntermediateProducer *))(*(_QWORD *)v13 + 16LL);
        if ( v15 == CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease )
          CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease(v13);
        else
          ((void (__fastcall *)(CEffectIntermediateProducer *, unsigned int (__fastcall *)(CMILRefCountImpl *__hidden), __int64 (__fastcall *)(CEffectIntermediateProducer *)))v15)(
            v13,
            v9,
            CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease);
      }
      v16 = *(volatile signed __int32 **)(v11 + 64);
      v17 = *(_QWORD *)(a1 + 24 * v4 + 24);
      *(_QWORD *)(a1 + 24 * v4 + 24) = v16;
      if ( v16 )
      {
        v9 = CMILRefCountImpl::AddReference;
        v18 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(*(_QWORD *)v16 + 8LL);
        if ( v18 == CMILRefCountImpl::AddReference )
        {
          v19 = _InterlockedAdd(v16, 1u);
          if ( (v19 < 0) ^ __OFSUB__(v18, CMILRefCountImpl::AddReference) | (v19 == 0) )
            wil::details::in1diag3::Log_Hr(
              retaddr,
              (void *)0x18,
              (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
              (const char *)0x8007029CLL,
              v24);
        }
        else if ( (char *)v18 == (char *)CGDISectionBitmapRealization::AddRef )
        {
          CGDISectionBitmapRealization::AddRef(v16, CGDISectionBitmapRealization::AddRef, v10);
        }
        else
        {
          ((void (__fastcall *)(volatile signed __int32 *, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), __int64 (__fastcall *)(CEffectIntermediateProducer *)))v18)(
            v16,
            CGDISectionBitmapRealization::AddRef,
            v10);
        }
      }
      if ( v17 )
        (*(void (__fastcall **)(__int64, unsigned int (__fastcall *)(CMILRefCountImpl *__hidden), __int64 (__fastcall *)(CEffectIntermediateProducer *)))(*(_QWORD *)v17 + 16LL))(
          v17,
          v9,
          v10);
      v6 = (SamplerMode *)(a1 + 2 * v4);
      *(_BYTE *)(a1 + 24 * v4 + 32) = *(_BYTE *)(v11 + 72);
      *(_WORD *)((char *)v6 + v4 + 64) = *(_WORD *)(v11 + 80);
      *((_BYTE *)v6 + v4 + 66) = *(_BYTE *)(v11 + 82);
      v22 = 0;
      if ( CCommonRegistryData::EnableCommonSuperSets )
      {
        v6 = *(SamplerMode **)(a1 + 24 * v4 + 16);
        if ( v6 )
        {
          v20 = *(bool (__fastcall **)(CCompositionSurfaceBitmap *__hidden))(*(_QWORD *)v6 + 40LL);
          if ( v20 == CCompositionSurfaceBitmap::IsWhitePixelInTopLeft
             ? *((_BYTE *)v6 + 41)
             : ((__int64 (__fastcall *)(SamplerMode *, bool (__fastcall *)(CCompositionSurfaceBitmap *__hidden), __int64 (__fastcall *)(CEffectIntermediateProducer *)))v20)(
                 v6,
                 CCompositionSurfaceBitmap::IsWhitePixelInTopLeft,
                 v10) )
          {
            if ( (_DWORD)v4 == 1
              || (v6 = *(SamplerMode **)(a1 + 24 * v4 + 24)) != 0LL
              && (*(unsigned __int8 (__fastcall **)(SamplerMode *, _QWORD, __int64 (__fastcall *)(CEffectIntermediateProducer *)))(*(_QWORD *)v6 + 64LL))(
                   v6,
                   0LL,
                   v10) )
            {
              v22 = 1;
            }
          }
        }
      }
      *(_BYTE *)(a1 + 70) &= v22;
      v9 = CMILRefCountImpl::AddReference;
      v10 = CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease;
    }
    v7 = *a2;
    v4 = (unsigned int)(v4 + 1);
  }
  while ( (unsigned int)v4 < v8 );
  return a1;
}
