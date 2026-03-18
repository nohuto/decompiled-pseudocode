/*
 * XREFs of ?GetNextRunningEffect@CCommonRenderingEffect@@UEAA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAVCRenderingEffect@@PEA_N@Z @ 0x18010EE70
 * Callers:
 *     ?MatchEffectToHomogeneousLayer@CBatchOptimizer@@CA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@AEBUSharedStateLayer@@PEAVCRenderingEffect@@@Z @ 0x18010DCC0 (-MatchEffectToHomogeneousLayer@CBatchOptimizer@@CA-AV-$com_ptr_t@VCRenderingEffect@@Uerr_returnc.c)
 *     ?GetCommonSuperset@CRenderingEffect@@SA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAV1@0@Z @ 0x18010DDF0 (-GetCommonSuperset@CRenderingEffect@@SA-AV-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@.c)
 * Callees:
 *     ??0?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180042D70 (--0-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18010FE80 (-InternalRelease@-$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ??0?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@Z @ 0x1801D6770 (--0-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@.c)
 *     ??0CDrawListBitmap@@QEAA@XZ @ 0x1801DFEE0 (--0CDrawListBitmap@@QEAA@XZ.c)
 *     ??0SamplerMode@@QEAA@XZ @ 0x1801E4F50 (--0SamplerMode@@QEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180251704 (--0CThreadContext@@AEAA@XZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ @ 0x1802DFE50 (-AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  const struct CDrawListBitmap *(__fastcall *v25)(CCommonRenderingEffect *, unsigned int); // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  const struct CDrawListBitmap *(__fastcall *v28)(CCommonRenderingEffect *, unsigned int); // rax
  __int64 v29; // r15
  CDrawListBitmap *v30; // rcx
  CMILRefCountImpl *v31; // rcx
  CEffectIntermediateProducer *v32; // r14
  void (*v33)(void); // rax
  __int64 (__fastcall *v34)(CEffectIntermediateProducer *); // rax
  volatile signed __int32 *v35; // rcx
  __int64 (__fastcall *v36)(_QWORD); // rdx
  __int64 v37; // r14
  unsigned int (__fastcall *v38)(CMILRefCountImpl *__hidden); // rax
  int v39; // et0
  __int64 v40; // r14
  CEffectIntermediateProducer *v41; // rsi
  CMILRefCountImpl *v42; // rcx
  unsigned int (__fastcall *v43)(CMILRefCountImpl *__hidden); // rax
  __int64 (__fastcall *v44)(CEffectIntermediateProducer *); // rax
  volatile signed __int32 *v45; // rcx
  __int64 v46; // rsi
  void (*v47)(void); // rax
  int v48; // et0
  CMILRefCountImpl *v49; // rcx
  bool (__fastcall *v50)(CCompositionSurfaceBitmap *__hidden); // rax
  char v51; // al
  bool v52; // al
  __int64 v53; // rcx
  bool v54; // al
  int v55; // et0
  __int64 v56; // r8
  CMILRefCountImpl *v57; // rcx
  bool (__fastcall *v58)(CCompositionSurfaceBitmap *__hidden); // rax
  char v59; // al
  CThreadContext *v60; // rax
  CThreadContext *v61; // rax
  CMILRefCountImpl *v62; // rcx
  unsigned int v63; // [rsp+20h] [rbp-68h]
  __int16 v64; // [rsp+30h] [rbp-58h]
  __int64 v65; // [rsp+38h] [rbp-50h]
  __int64 v66; // [rsp+40h] [rbp-48h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  char v68; // [rsp+90h] [rbp+8h]
  char v69; // [rsp+A0h] [rbp+18h]
  __int16 v70; // [rsp+A8h] [rbp+20h]

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
  v65 = 0LL;
  v12 = 0;
  while ( v12 < 2 )
  {
    v13 = *(_QWORD *)&v5[6 * v12 + 6];
    if ( !*(_QWORD *)&a1[6 * v12 + 6] )
    {
      if ( v13 )
        *((_DWORD *)&v65 + v12) = 1;
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
      v56 = 3LL * v12;
      if ( *((_BYTE *)a1 + v56 + 64) != *((_BYTE *)v5 + v56 + 64)
        || *((_BYTE *)a1 + v56 + 65) != *((_BYTE *)v5 + v56 + 65)
        || *((_BYTE *)a1 + v56 + 66) != *((_BYTE *)v5 + v56 + 66) )
      {
        goto LABEL_15;
      }
LABEL_26:
      ++v12;
    }
    else
    {
      *((_DWORD *)&v65 + v12++) = -1;
    }
  }
  if ( !*((_BYTE *)a1 + 70) )
  {
    if ( !v65 )
    {
      *a4 = 1;
      wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>(
        a2,
        a1);
      return a2;
    }
    goto LABEL_15;
  }
  v18 = HIDWORD(v65);
  v19 = (int)v65 < 0;
  if ( (int)v65 > 0 )
  {
LABEL_29:
    if ( v19 || v65 < 0 )
    {
      if ( !CCommonRegistryData::EnableCommonSuperSets )
      {
        wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>(
          a2,
          v5);
        return a2;
      }
      v19 = (int)v65 < 0;
      *a4 = 1;
      v21 = v5;
      if ( v19 )
        v21 = a1;
      if ( v18 >= 0 )
        a1 = v5;
      Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
      if ( !Value )
      {
        v60 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
        if ( !v60 || (v61 = CThreadContext::CThreadContext(v60), (Value = v61) == 0LL) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
          ModuleFailFastForHRESULT(-2147024882, retaddr);
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, v61);
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
      v64 = *(_WORD *)((char *)a1 + 67);
      v69 = *((_BYTE *)a1 + 69);
      v25 = *(const struct CDrawListBitmap *(__fastcall **)(CCommonRenderingEffect *, unsigned int))(*(_QWORD *)a1 + 16LL);
      if ( v25 == CCommonRenderingEffect::GetBitmap )
        v26 = (__int64)(a1 + 10);
      else
        v26 = (__int64)v25((CCommonRenderingEffect *)a1, 1u);
      v27 = *(_QWORD *)v21;
      v66 = v26;
      v70 = *((_WORD *)v21 + 32);
      v68 = *((_BYTE *)v21 + 66);
      v28 = *(const struct CDrawListBitmap *(__fastcall **)(CCommonRenderingEffect *, unsigned int))(v27 + 16);
      if ( v28 == CCommonRenderingEffect::GetBitmap )
        v29 = (__int64)(v21 + 4);
      else
        v29 = (__int64)v28((CCommonRenderingEffect *)v21, 0);
      CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>((__int64)v5);
      *(_QWORD *)v5 = &CCommonRenderingEffect::`vftable';
      if ( CDrawListBitmap::CDrawListBitmap == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      {
        v30 = (CDrawListBitmap *)(v5 + 10);
        *((_QWORD *)v5 + 5) = 0LL;
        *((_QWORD *)v5 + 6) = 0LL;
      }
      else
      {
        CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)(v5 + 4));
        v30 = (CDrawListBitmap *)(v5 + 10);
      }
      if ( CDrawListBitmap::CDrawListBitmap == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      {
        *((_QWORD *)v30 + 3) = 0LL;
        *((_QWORD *)v30 + 4) = 0LL;
      }
      else
      {
        CDrawListBitmap::CDrawListBitmap(v30);
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
      v31 = *(CMILRefCountImpl **)v29;
      v32 = (CEffectIntermediateProducer *)*((_QWORD *)v5 + 2);
      *((_QWORD *)v5 + 2) = *(_QWORD *)v29;
      if ( v31 )
      {
        v33 = *(void (**)(void))(*(_QWORD *)v31 + 8LL);
        if ( (char *)v33 == (char *)CMILRefCountImpl::AddReference )
          CMILRefCountImpl::AddReference(v31);
        else
          v33();
      }
      if ( v32 )
      {
        v34 = *(__int64 (__fastcall **)(CEffectIntermediateProducer *))(*(_QWORD *)v32 + 16LL);
        if ( v34 == CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease )
          CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease(v32);
        else
          v34(v32);
      }
      v35 = *(volatile signed __int32 **)(v29 + 8);
      v36 = CGDISectionBitmapRealization::AddRef;
      v37 = *((_QWORD *)v5 + 3);
      *((_QWORD *)v5 + 3) = v35;
      if ( v35 )
      {
        v38 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(*(_QWORD *)v35 + 8LL);
        if ( v38 == CMILRefCountImpl::AddReference )
        {
          v39 = _InterlockedAdd(v35, 1u);
          if ( (v39 < 0) ^ __OFSUB__(v38, CMILRefCountImpl::AddReference) | (v39 == 0) )
            wil::details::in1diag3::Log_Hr(
              (wil::details::in1diag3 *)retaddr,
              (void *)0x18,
              (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
              (const char *)0x8007029CLL,
              v63);
        }
        else if ( (char *)v38 == (char *)CGDISectionBitmapRealization::AddRef )
        {
          CGDISectionBitmapRealization::AddRef(v35);
        }
        else
        {
          ((void (__fastcall *)(volatile signed __int32 *, __int64 (__fastcall *)(_QWORD)))v38)(
            v35,
            CGDISectionBitmapRealization::AddRef);
        }
      }
      if ( v37 )
        (*(void (__fastcall **)(__int64, __int64 (__fastcall *)(_QWORD)))(*(_QWORD *)v37 + 16LL))(v37, v36);
      v40 = v66;
      *((_BYTE *)v5 + 32) = *(_BYTE *)(v29 + 16);
      v41 = (CEffectIntermediateProducer *)*((_QWORD *)v5 + 5);
      v42 = *(CMILRefCountImpl **)v40;
      *((_QWORD *)v5 + 5) = *(_QWORD *)v40;
      if ( v42 )
      {
        v43 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(*(_QWORD *)v42 + 8LL);
        if ( v43 == CMILRefCountImpl::AddReference )
          CMILRefCountImpl::AddReference(v42);
        else
          ((void (__fastcall *)(CMILRefCountImpl *, __int64 (__fastcall *)(_QWORD)))v43)(v42, v36);
      }
      if ( v41 )
      {
        v44 = *(__int64 (__fastcall **)(CEffectIntermediateProducer *))(*(_QWORD *)v41 + 16LL);
        if ( v44 == CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease )
          CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease(v41);
        else
          ((void (__fastcall *)(CEffectIntermediateProducer *, __int64 (__fastcall *)(_QWORD)))v44)(v41, v36);
      }
      v45 = *(volatile signed __int32 **)(v40 + 8);
      v46 = *((_QWORD *)v5 + 6);
      *((_QWORD *)v5 + 6) = v45;
      if ( v45 )
      {
        v47 = *(void (**)(void))(*(_QWORD *)v45 + 8LL);
        if ( (char *)v47 == (char *)CMILRefCountImpl::AddReference )
        {
          v48 = _InterlockedAdd(v45, 1u);
          if ( (v48 < 0) ^ __OFSUB__(v47, CMILRefCountImpl::AddReference) | (v48 == 0) )
            wil::details::in1diag3::Log_Hr(
              (wil::details::in1diag3 *)retaddr,
              (void *)0x18,
              (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
              (const char *)0x8007029CLL,
              v63);
        }
        else if ( (char *)v47 == (char *)CGDISectionBitmapRealization::AddRef )
        {
          CGDISectionBitmapRealization::AddRef(v45);
        }
        else
        {
          v47();
        }
      }
      if ( v46 )
        (*(void (__fastcall **)(__int64, __int64 (__fastcall *)(_QWORD)))(*(_QWORD *)v46 + 16LL))(v46, v36);
      *((_BYTE *)v5 + 56) = *(_BYTE *)(v40 + 16);
      *((_WORD *)v5 + 32) = v70;
      *((_BYTE *)v5 + 66) = v68;
      *(_WORD *)((char *)v5 + 67) = v64;
      *((_BYTE *)v5 + 69) = v69;
      v52 = 1;
      if ( *(_QWORD *)(v29 + 8) )
      {
        if ( !CCommonRegistryData::EnableCommonSuperSets
          || (v49 = *(CMILRefCountImpl **)v29) == 0LL
          || ((v50 = *(bool (__fastcall **)(CCompositionSurfaceBitmap *__hidden))(*(_QWORD *)v49 + 40LL),
               v50 != CCompositionSurfaceBitmap::IsWhitePixelInTopLeft)
            ? (v51 = ((__int64 (__fastcall *)(CMILRefCountImpl *, __int64 (__fastcall *)(_QWORD)))v50)(v49, v36))
            : (v51 = *((_BYTE *)v49 + 41)),
              !v51
           || (v53 = *(_QWORD *)(v29 + 8)) == 0
           || !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v53 + 64LL))(v53, 0LL)) )
        {
          v52 = 0;
        }
      }
      *((_BYTE *)v5 + 70) = v52;
      v54 = 1;
      if ( *(_QWORD *)(v40 + 8) )
      {
        if ( !CCommonRegistryData::EnableCommonSuperSets
          || (v57 = *(CMILRefCountImpl **)v40) == 0LL
          || ((v58 = *(bool (__fastcall **)(CCompositionSurfaceBitmap *__hidden))(*(_QWORD *)v57 + 40LL),
               v58 != CCompositionSurfaceBitmap::IsWhitePixelInTopLeft)
            ? (v59 = ((__int64 (__fastcall *)(CMILRefCountImpl *, __int64 (__fastcall *)(_QWORD)))v58)(v57, v36))
            : (v59 = *((_BYTE *)v57 + 41)),
              !v59) )
        {
          v54 = 0;
        }
      }
      *((_BYTE *)v5 + 70) &= v54;
      *a2 = v5;
      v15 = **(unsigned int (__fastcall ***)(CMILRefCountImpl *__hidden))v5;
      if ( v15 == CMILRefCountImpl::AddReference )
      {
        v55 = _InterlockedAdd(v5, 1u);
        if ( !((v55 < 0) ^ __OFSUB__(v15, CMILRefCountImpl::AddReference) | (v55 == 0)) )
          return a2;
        goto LABEL_23;
      }
LABEL_136:
      v62 = (CMILRefCountImpl *)v5;
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
        v63);
      return a2;
    }
    goto LABEL_136;
  }
  if ( SHIDWORD(v65) > 0 )
  {
    v19 = (int)v65 < 0;
    goto LABEL_29;
  }
LABEL_21:
  *a4 = 1;
  *a2 = a1;
  v15 = **(unsigned int (__fastcall ***)(CMILRefCountImpl *__hidden))a1;
  if ( v15 != CMILRefCountImpl::AddReference )
  {
    v62 = (CMILRefCountImpl *)a1;
LABEL_137:
    v15(v62);
    return a2;
  }
  v20 = _InterlockedAdd(a1, 1u);
  if ( (v20 < 0) ^ __OFSUB__(v15, CMILRefCountImpl::AddReference) | (v20 == 0) )
    goto LABEL_23;
  return a2;
}
