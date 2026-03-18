/*
 * XREFs of ?GetNextRunningEffect@CCommonRenderingEffect@@UEAA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAVCRenderingEffect@@PEA_N@Z @ 0x1800D95B0
 * Callers:
 *     ?MatchEffectToHomogeneousLayer@CBatchOptimizer@@CA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@AEBUSharedStateLayer@@PEAVCRenderingEffect@@@Z @ 0x1800D8400 (-MatchEffectToHomogeneousLayer@CBatchOptimizer@@CA-AV-$com_ptr_t@VCRenderingEffect@@Uerr_returnc.c)
 *     ?GetCommonSuperset@CRenderingEffect@@SA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAV1@0@Z @ 0x1800D8530 (-GetCommonSuperset@CRenderingEffect@@SA-AV-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ??0?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180024674 (--0-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800DA5C0 (-InternalRelease@-$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ??0?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@Z @ 0x1801C36F0 (--0-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@.c)
 *     ??0CDrawListBitmap@@QEAA@XZ @ 0x1801D2130 (--0CDrawListBitmap@@QEAA@XZ.c)
 *     ??0SamplerMode@@QEAA@XZ @ 0x1801D8F60 (--0SamplerMode@@QEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1802467D8 (--0CThreadContext@@AEAA@XZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ @ 0x1802D6BB0 (-AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

volatile signed __int32 **__fastcall CCommonRenderingEffect::GetNextRunningEffect(
        volatile signed __int32 *a1,
        volatile signed __int32 **a2,
        volatile signed __int32 *a3,
        _BYTE *a4)
{
  volatile signed __int32 *v5; // rdi
  int v8; // esi
  __int64 (__fastcall *v9)(volatile signed __int32 *); // rax
  int v10; // ebp
  __int64 (__fastcall *v11)(volatile signed __int32 *); // rax
  unsigned int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int (__fastcall *v15)(CMILRefCountImpl *__hidden); // rax
  int v16; // et0
  int v18; // eax
  bool v19; // sf
  int v20; // et0
  volatile signed __int32 *v21; // r15
  LPVOID Value; // rsi
  int v23; // ecx
  HANDLE ProcessHeap; // rax
  const struct CDrawListBitmap *(__fastcall *v25)(CCommonRenderingEffect *__hidden, unsigned int); // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  const struct CDrawListBitmap *(__fastcall *v28)(CCommonRenderingEffect *__hidden, unsigned int); // rax
  __int64 v29; // r15
  __int64 v30; // r8
  CDrawListBitmap *v31; // rcx
  CMILRefCountImpl *v32; // rcx
  CEffectIntermediateProducer *v33; // r14
  void (*v34)(void); // rax
  __int64 (__fastcall *v35)(CEffectIntermediateProducer *); // rax
  volatile signed __int32 *v36; // rcx
  __int64 (__fastcall *v37)(_QWORD, _QWORD, _QWORD); // rdx
  __int64 v38; // r14
  unsigned int (__fastcall *v39)(CMILRefCountImpl *__hidden); // rax
  int v40; // et0
  __int64 v41; // r14
  CEffectIntermediateProducer *v42; // rsi
  CMILRefCountImpl *v43; // rcx
  unsigned int (__fastcall *v44)(CMILRefCountImpl *__hidden); // rax
  __int64 (__fastcall *v45)(CEffectIntermediateProducer *); // rax
  volatile signed __int32 *v46; // rcx
  __int64 v47; // rsi
  void (*v48)(void); // rax
  int v49; // et0
  CMILRefCountImpl *v50; // rcx
  bool (__fastcall *v51)(CCompositionSurfaceBitmap *__hidden); // rax
  char v52; // al
  bool v53; // al
  __int64 v54; // rcx
  bool v55; // al
  int v56; // et0
  __int64 v57; // r8
  CMILRefCountImpl *v58; // rcx
  bool (__fastcall *v59)(CCompositionSurfaceBitmap *__hidden); // rax
  char v60; // al
  CThreadContext *v61; // rax
  CThreadContext *v62; // rax
  CMILRefCountImpl *v63; // rcx
  unsigned int v64; // [rsp+20h] [rbp-68h]
  __int16 v65; // [rsp+30h] [rbp-58h]
  __int64 v66; // [rsp+38h] [rbp-50h]
  __int64 v67; // [rsp+40h] [rbp-48h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  char v69; // [rsp+90h] [rbp+8h]
  char v70; // [rsp+A0h] [rbp+18h]
  __int16 v71; // [rsp+A8h] [rbp+20h]

  *a4 = 0;
  v5 = a3;
  v8 = 65537;
  v9 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a3 + 64LL);
  if ( (char *)v9 == (char *)&CCommonRenderingEffect::GetEffectTypeWithAttributes )
  {
    v10 = 65537;
    if ( !*((_BYTE *)a3 + 70) )
      v10 = 1;
  }
  else
  {
    v10 = v9(a3);
  }
  v11 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 64LL);
  if ( (char *)v11 == (char *)&CCommonRenderingEffect::GetEffectTypeWithAttributes )
  {
    if ( !*((_BYTE *)a1 + 70) )
      v8 = 1;
  }
  else
  {
    v8 = v11(a1);
  }
  if ( v10 != v8 )
    goto LABEL_15;
  if ( v5 == a1 )
    goto LABEL_21;
  v66 = 0LL;
  v12 = 0;
  while ( v12 < 2 )
  {
    v13 = *(_QWORD *)&v5[6 * v12 + 6];
    if ( !*(_QWORD *)&a1[6 * v12 + 6] )
    {
      if ( v13 )
        *((_DWORD *)&v66 + v12) = 1;
      goto LABEL_26;
    }
    if ( v13 )
    {
      v14 = *(_QWORD *)&a1[6 * v12 + 4];
      if ( v14 )
      {
        if ( v14 != *(_QWORD *)&v5[6 * v12 + 4] || LOBYTE(a1[6 * v12 + 8]) != LOBYTE(v5[6 * v12 + 8]) )
          goto LABEL_15;
      }
      else if ( *(_QWORD *)&a1[6 * v12 + 6] != *(_QWORD *)&v5[6 * v12 + 6]
             || LOBYTE(a1[6 * v12 + 8]) != LOBYTE(v5[6 * v12 + 8]) )
      {
        goto LABEL_15;
      }
      v57 = 3LL * v12;
      if ( *((_BYTE *)a1 + v57 + 64) != *((_BYTE *)v5 + v57 + 64)
        || *((_BYTE *)a1 + v57 + 65) != *((_BYTE *)v5 + v57 + 65)
        || *((_BYTE *)a1 + v57 + 66) != *((_BYTE *)v5 + v57 + 66) )
      {
        goto LABEL_15;
      }
LABEL_26:
      ++v12;
    }
    else
    {
      *((_DWORD *)&v66 + v12++) = -1;
    }
  }
  if ( !*((_BYTE *)a1 + 70) )
  {
    if ( !v66 )
    {
      *a4 = 1;
      wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>(
        a2,
        a1);
      return a2;
    }
    goto LABEL_15;
  }
  v18 = HIDWORD(v66);
  v19 = (int)v66 < 0;
  if ( (int)v66 > 0 )
  {
LABEL_29:
    if ( v19 || v66 < 0 )
    {
      if ( !CCommonRegistryData::EnableCommonSuperSets )
      {
        wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>(
          a2,
          v5);
        return a2;
      }
      v19 = (int)v66 < 0;
      *a4 = 1;
      v21 = v5;
      if ( v19 )
        v21 = a1;
      if ( v18 >= 0 )
        a1 = v5;
      Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
      if ( !Value )
      {
        v61 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
        if ( !v61 || (v62 = CThreadContext::CThreadContext(v61), (Value = v62) == 0LL) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
          ModuleFailFastForHRESULT(-2147024882, retaddr);
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, v62);
      }
      v23 = *((_DWORD *)Value + 69);
      v5 = 0LL;
      if ( v23 )
      {
        v5 = (volatile signed __int32 *)*((_QWORD *)Value + 35);
        *((_QWORD *)Value + 35) = *(_QWORD *)v5;
        *((_DWORD *)Value + 69) = v23 - 1;
      }
      if ( !v5 )
      {
        ProcessHeap = GetProcessHeap();
        v5 = (volatile signed __int32 *)HeapAlloc(ProcessHeap, 0, 0x48uLL);
        if ( !v5 )
          ModuleFailFastForHRESULT(-2147024882, retaddr);
      }
      v65 = *(_WORD *)((char *)a1 + 67);
      v70 = *((_BYTE *)a1 + 69);
      v25 = *(const struct CDrawListBitmap *(__fastcall **)(CCommonRenderingEffect *__hidden, unsigned int))(*(_QWORD *)a1 + 16LL);
      if ( v25 == CCommonRenderingEffect::GetBitmap )
        v26 = (__int64)(a1 + 10);
      else
        v26 = (__int64)v25((CCommonRenderingEffect *)a1, 1u);
      v27 = *(_QWORD *)v21;
      v67 = v26;
      v71 = *((_WORD *)v21 + 32);
      v69 = *((_BYTE *)v21 + 66);
      v28 = *(const struct CDrawListBitmap *(__fastcall **)(CCommonRenderingEffect *__hidden, unsigned int))(v27 + 16);
      if ( v28 == CCommonRenderingEffect::GetBitmap )
        v29 = (__int64)(v21 + 4);
      else
        v29 = (__int64)v28((CCommonRenderingEffect *)v21, 0);
      CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>((__int64)v5);
      *(_QWORD *)v5 = &CCommonRenderingEffect::`vftable';
      if ( CDrawListBitmap::CDrawListBitmap == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      {
        v31 = (CDrawListBitmap *)(v5 + 10);
        *((_QWORD *)v5 + 5) = 0LL;
        *((_QWORD *)v5 + 6) = 0LL;
      }
      else
      {
        CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)(v5 + 4));
        v31 = (CDrawListBitmap *)(v5 + 10);
      }
      if ( CDrawListBitmap::CDrawListBitmap == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      {
        *((_QWORD *)v31 + 3) = 0LL;
        *((_QWORD *)v31 + 4) = 0LL;
      }
      else
      {
        CDrawListBitmap::CDrawListBitmap(v31);
      }
      if ( SamplerMode::SamplerMode == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      {
        *((_QWORD *)v5 + 11) = 0LL;
        *((_QWORD *)v5 + 12) = 0LL;
      }
      else
      {
        SamplerMode::SamplerMode((SamplerMode *)(v5 + 16));
      }
      if ( SamplerMode::SamplerMode == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      {
        *(_QWORD *)((char *)v5 + 91) = 0LL;
        *(_QWORD *)((char *)v5 + 99) = 0LL;
      }
      else
      {
        SamplerMode::SamplerMode((SamplerMode *)((char *)v5 + 67));
      }
      v32 = *(CMILRefCountImpl **)v29;
      v33 = (CEffectIntermediateProducer *)*((_QWORD *)v5 + 2);
      *((_QWORD *)v5 + 2) = *(_QWORD *)v29;
      if ( v32 )
      {
        v34 = *(void (**)(void))(*(_QWORD *)v32 + 8LL);
        if ( (char *)v34 == (char *)CMILRefCountImpl::AddReference )
          CMILRefCountImpl::AddReference(v32);
        else
          v34();
      }
      if ( v33 )
      {
        v35 = *(__int64 (__fastcall **)(CEffectIntermediateProducer *))(*(_QWORD *)v33 + 16LL);
        if ( v35 == CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease )
          CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease(v33);
        else
          v35(v33);
      }
      v36 = *(volatile signed __int32 **)(v29 + 8);
      v37 = CGDISectionBitmapRealization::AddRef;
      v38 = *((_QWORD *)v5 + 3);
      *((_QWORD *)v5 + 3) = v36;
      if ( v36 )
      {
        v39 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(*(_QWORD *)v36 + 8LL);
        if ( v39 == CMILRefCountImpl::AddReference )
        {
          v40 = _InterlockedAdd(v36, 1u);
          if ( (v40 < 0) ^ __OFSUB__(v39, CMILRefCountImpl::AddReference) | (v40 == 0) )
            wil::details::in1diag3::Log_Hr(
              (wil::details::in1diag3 *)retaddr,
              (void *)0x18,
              (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
              (const char *)0x8007029CLL,
              v64);
        }
        else if ( (char *)v39 == (char *)CGDISectionBitmapRealization::AddRef )
        {
          CGDISectionBitmapRealization::AddRef(v36, CGDISectionBitmapRealization::AddRef, v30);
        }
        else
        {
          ((void (__fastcall *)(volatile signed __int32 *, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD)))v39)(
            v36,
            CGDISectionBitmapRealization::AddRef);
        }
      }
      if ( v38 )
        (*(void (__fastcall **)(__int64, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD)))(*(_QWORD *)v38 + 16LL))(
          v38,
          v37);
      v41 = v67;
      *((_BYTE *)v5 + 32) = *(_BYTE *)(v29 + 16);
      v42 = (CEffectIntermediateProducer *)*((_QWORD *)v5 + 5);
      v43 = *(CMILRefCountImpl **)v41;
      *((_QWORD *)v5 + 5) = *(_QWORD *)v41;
      if ( v43 )
      {
        v44 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(*(_QWORD *)v43 + 8LL);
        if ( v44 == CMILRefCountImpl::AddReference )
          CMILRefCountImpl::AddReference(v43);
        else
          ((void (__fastcall *)(CMILRefCountImpl *, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD)))v44)(v43, v37);
      }
      if ( v42 )
      {
        v45 = *(__int64 (__fastcall **)(CEffectIntermediateProducer *))(*(_QWORD *)v42 + 16LL);
        if ( v45 == CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease )
          CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease(v42);
        else
          ((void (__fastcall *)(CEffectIntermediateProducer *, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD)))v45)(
            v42,
            v37);
      }
      v46 = *(volatile signed __int32 **)(v41 + 8);
      v47 = *((_QWORD *)v5 + 6);
      *((_QWORD *)v5 + 6) = v46;
      if ( v46 )
      {
        v48 = *(void (**)(void))(*(_QWORD *)v46 + 8LL);
        if ( (char *)v48 == (char *)CMILRefCountImpl::AddReference )
        {
          v49 = _InterlockedAdd(v46, 1u);
          if ( (v49 < 0) ^ __OFSUB__(v48, CMILRefCountImpl::AddReference) | (v49 == 0) )
            wil::details::in1diag3::Log_Hr(
              (wil::details::in1diag3 *)retaddr,
              (void *)0x18,
              (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
              (const char *)0x8007029CLL,
              v64);
        }
        else if ( (char *)v48 == (char *)CGDISectionBitmapRealization::AddRef )
        {
          CGDISectionBitmapRealization::AddRef(v46, CGDISectionBitmapRealization::AddRef, v30);
        }
        else
        {
          v48();
        }
      }
      if ( v47 )
        (*(void (__fastcall **)(__int64, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD)))(*(_QWORD *)v47 + 16LL))(
          v47,
          v37);
      *((_BYTE *)v5 + 56) = *(_BYTE *)(v41 + 16);
      *((_WORD *)v5 + 32) = v71;
      *((_BYTE *)v5 + 66) = v69;
      *(_WORD *)((char *)v5 + 67) = v65;
      *((_BYTE *)v5 + 69) = v70;
      v53 = 1;
      if ( *(_QWORD *)(v29 + 8) )
      {
        if ( !CCommonRegistryData::EnableCommonSuperSets
          || (v50 = *(CMILRefCountImpl **)v29) == 0LL
          || ((v51 = *(bool (__fastcall **)(CCompositionSurfaceBitmap *__hidden))(*(_QWORD *)v50 + 40LL),
               v51 != CCompositionSurfaceBitmap::IsWhitePixelInTopLeft)
            ? (v52 = ((__int64 (__fastcall *)(CMILRefCountImpl *, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD)))v51)(
                       v50,
                       v37))
            : (v52 = *((_BYTE *)v50 + 41)),
              !v52
           || (v54 = *(_QWORD *)(v29 + 8)) == 0
           || !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v54 + 64LL))(v54, 0LL)) )
        {
          v53 = 0;
        }
      }
      *((_BYTE *)v5 + 70) = v53;
      v55 = 1;
      if ( *(_QWORD *)(v41 + 8) )
      {
        if ( !CCommonRegistryData::EnableCommonSuperSets
          || (v58 = *(CMILRefCountImpl **)v41) == 0LL
          || ((v59 = *(bool (__fastcall **)(CCompositionSurfaceBitmap *__hidden))(*(_QWORD *)v58 + 40LL),
               v59 != CCompositionSurfaceBitmap::IsWhitePixelInTopLeft)
            ? (v60 = ((__int64 (__fastcall *)(CMILRefCountImpl *, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD)))v59)(
                       v58,
                       v37))
            : (v60 = *((_BYTE *)v58 + 41)),
              !v60) )
        {
          v55 = 0;
        }
      }
      *((_BYTE *)v5 + 70) &= v55;
      *a2 = v5;
      v15 = **(unsigned int (__fastcall ***)(CMILRefCountImpl *__hidden))v5;
      if ( v15 == CMILRefCountImpl::AddReference )
      {
        v56 = _InterlockedAdd(v5, 1u);
        if ( !((v56 < 0) ^ __OFSUB__(v15, CMILRefCountImpl::AddReference) | (v56 == 0)) )
          return a2;
        goto LABEL_23;
      }
LABEL_136:
      v63 = (CMILRefCountImpl *)v5;
      goto LABEL_137;
    }
    *a4 = 1;
LABEL_15:
    *a2 = v5;
    v15 = **(unsigned int (__fastcall ***)(CMILRefCountImpl *__hidden))v5;
    if ( v15 == CMILRefCountImpl::AddReference )
    {
      v16 = _InterlockedAdd(v5, 1u);
      if ( !((v16 < 0) ^ __OFSUB__(v15, CMILRefCountImpl::AddReference) | (v16 == 0)) )
        return a2;
LABEL_23:
      wil::details::in1diag3::Log_Hr(
        (wil::details::in1diag3 *)retaddr,
        (void *)0x18,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v64);
      return a2;
    }
    goto LABEL_136;
  }
  if ( SHIDWORD(v66) > 0 )
  {
    v19 = (int)v66 < 0;
    goto LABEL_29;
  }
LABEL_21:
  *a4 = 1;
  *a2 = a1;
  v15 = **(unsigned int (__fastcall ***)(CMILRefCountImpl *__hidden))a1;
  if ( v15 != CMILRefCountImpl::AddReference )
  {
    v63 = (CMILRefCountImpl *)a1;
LABEL_137:
    v15(v63);
    return a2;
  }
  v20 = _InterlockedAdd(a1, 1u);
  if ( (v20 < 0) ^ __OFSUB__(v15, CMILRefCountImpl::AddReference) | (v20 == 0) )
    goto LABEL_23;
  return a2;
}
