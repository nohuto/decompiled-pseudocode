/*
 * XREFs of ?ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEAAJII@Z @ 0x180128294
 * Callers:
 *     _lambda_1081fb77a3a3c81cdcc31a57fa3e9375_::operator() @ 0x18007E120 (_lambda_1081fb77a3a3c81cdcc31a57fa3e9375_--operator().c)
 *     std::_Func_impl_no_alloc__lambda_58a5580cd9801359333db2cf07d3cd96__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call @ 0x1801269A0 (std--_Func_impl_no_alloc__lambda_58a5580cd9801359333db2cf07d3cd96__long_CExternalEffectGraph--CG.c)
 * Callees:
 *     ?Alloc@?$CThreadLocalObjectCache@VCDrawListCache@@V1@@@SAPEAX_K@Z @ 0x180012608 (-Alloc@-$CThreadLocalObjectCache@VCDrawListCache@@V1@@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x1800D2800 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x1800D4880 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18010FE80 (-InternalRelease@-$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z @ 0x180126B64 (-Free@-$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x180126F18 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEffectStage@@IPEAVCDrawListCache@@@Z @ 0x18012707C (-UpdateDrawListCache@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEff.c)
 *     ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x180129660 (--0CDirtyRegionAnnotation@@QEAA@XZ.c)
 *     ??1EffectInput@@QEAA@XZ @ 0x18012B580 (--1EffectInput@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18014BD30 (--1-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ @ 0x18014C440 (-InternalRelease@-$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0EffectInput@@QEAA@XZ @ 0x1801EB4C0 (--0EffectInput@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ @ 0x1802DFE50 (-AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CExternalEffectGraph::CGraphRenderingContext::ExecuteShaders(
        CExternalEffectGraph::CGraphRenderingContext *this,
        int a2,
        unsigned int a3)
{
  __int64 v3; // rsi
  struct CDrawListCache *v4; // rbx
  int v7; // edi
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  unsigned int v18; // xmm1_4
  unsigned int v19; // r12d
  unsigned int v20; // xmm0_4
  __int64 v21; // rdi
  _DWORD *v22; // rax
  __int128 v23; // xmm1
  CEffectIntermediateProducer **v24; // rsi
  __int64 v25; // r15
  CEffectIntermediateProducer *v26; // r15
  __int64 v27; // rax
  CEffectIntermediateProducer *v28; // rcx
  __int64 (__fastcall *v29)(CMILRefCountImpl *); // rax
  __int64 (__fastcall *v30)(CEffectIntermediateProducer *); // rax
  CMILRefCountImpl *v31; // rcx
  CMILRefCountImpl *v32; // r15
  __int64 (__fastcall *v33)(CMILRefCountImpl *); // rax
  struct CDrawingContext *v34; // rdx
  CBrushRenderingGraph *v35; // rcx
  int updated; // eax
  int v37; // eax
  EffectInput *v38; // r15
  EffectInput *v39; // rbx
  EffectInput *v41; // rbx
  LPVOID lpMem; // [rsp+30h] [rbp-D0h] BYREF
  struct CGeometryOnlyDrawListBrush *v43[2]; // [rsp+38h] [rbp-C8h] BYREF
  char v44; // [rsp+48h] [rbp-B8h]
  struct CDrawListCache *v45; // [rsp+50h] [rbp-B0h] BYREF
  int v46; // [rsp+58h] [rbp-A8h]
  __int64 v47; // [rsp+60h] [rbp-A0h] BYREF
  CEffectIntermediateProducer *v48; // [rsp+68h] [rbp-98h] BYREF
  CMILRefCountImpl *v49; // [rsp+70h] [rbp-90h]
  char v50; // [rsp+78h] [rbp-88h]
  __int128 v51; // [rsp+80h] [rbp-80h]
  int v52; // [rsp+90h] [rbp-70h]
  char v53; // [rsp+94h] [rbp-6Ch]
  char v54; // [rsp+95h] [rbp-6Bh]
  __int128 v55; // [rsp+98h] [rbp-68h]
  __int128 v56; // [rsp+A8h] [rbp-58h]
  __int128 v57; // [rsp+B8h] [rbp-48h]
  __int128 v58; // [rsp+C8h] [rbp-38h]
  char v59; // [rsp+228h] [rbp+128h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+178h]

  LODWORD(v3) = 0;
  v46 = a2;
  v4 = 0LL;
  v43[0] = 0LL;
  v45 = 0LL;
  v7 = 0;
  v8 = CThreadLocalObjectCache<CDrawListCache,CDrawListCache>::Alloc();
  if ( v8 )
  {
    *((_DWORD *)v8 + 2) = 0;
    *v8 = &CDrawListCache::`vftable';
    v9 = 0LL;
    if ( g_pComposition )
      v9 = *((_QWORD *)g_pComposition + 111);
    v8[2] = v9;
    v8[3] = 0LL;
    v4 = (struct CDrawListCache *)v8;
    v8[4] = 0LL;
    v8[5] = 2LL;
    v8[9] = 0LL;
    *((_WORD *)v8 + 42) = 0;
    *((_BYTE *)v8 + 86) = 1;
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v8 + 1));
    v45 = 0LL;
    Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v45, v10, v11, v12);
    v43[0] = 0LL;
    v45 = v4;
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x24u, 0LL);
  }
  Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(v43, v13, v14, v15);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC9,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\externaleffectgraph.cpp",
      (const char *)(unsigned int)v7);
  }
  else
  {
    lpMem = 0LL;
    v43[0] = (struct CGeometryOnlyDrawListBrush *)&lpMem;
    v43[1] = 0LL;
    v44 = 1;
    v7 = CGeometryOnlyDrawListBrush::Create(&v43[1], v16);
    if ( v44 )
    {
      v17 = *(_QWORD **)v43[0];
      *(_QWORD *)v43[0] = v43[1];
      if ( v17 )
        CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(v17);
    }
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCC,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\externaleffectgraph.cpp",
        (const char *)(unsigned int)v7);
      if ( lpMem )
        CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(lpMem);
    }
    else
    {
      v18 = *((_DWORD *)this + 10);
      v19 = 0;
      v20 = *((_DWORD *)this + 11);
      v21 = 4LL;
      v22 = lpMem;
      v43[0] = 0LL;
      v43[1] = (struct CGeometryOnlyDrawListBrush *)__PAIR64__(v20, v18);
      v23 = *(_OWORD *)v43;
      *((_BYTE *)lpMem + 52) = 1;
      v22[12] = 0;
      *((_OWORD *)v22 + 2) = v23;
      while ( v19 < a3 )
      {
        v47 = 0LL;
        v24 = &v48;
        v25 = 4LL;
        do
        {
          --v25;
          if ( EffectInput::EffectInput == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
            CDirtyRegionAnnotation::CDirtyRegionAnnotation((CDirtyRegionAnnotation *)v24);
          else
            EffectInput::EffectInput((EffectInput *)v24);
          v24 += 14;
        }
        while ( v25 );
        v26 = v48;
        LODWORD(v47) = v19 + v46;
        v27 = *((unsigned int *)this + 8);
        HIDWORD(v47) = 1;
        v3 = *((_QWORD *)this + 6) + 112 * v27;
        v28 = *(CEffectIntermediateProducer **)v3;
        v48 = v28;
        if ( v28 )
        {
          v29 = *(__int64 (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v28 + 8LL);
          if ( v29 == CMILRefCountImpl::AddReference )
            CMILRefCountImpl::AddReference(v28);
          else
            v29(v28);
        }
        if ( v26 )
        {
          v30 = *(__int64 (__fastcall **)(CEffectIntermediateProducer *))(*(_QWORD *)v26 + 16LL);
          if ( v30 == CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease )
            CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease(v26);
          else
            v30(v26);
        }
        v31 = *(CMILRefCountImpl **)(v3 + 8);
        v32 = v49;
        v49 = v31;
        if ( v31 )
        {
          v33 = *(__int64 (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v31 + 8LL);
          if ( v33 == CMILRefCountImpl::AddReference )
          {
            CMILRefCountImpl::AddReference(v31);
          }
          else if ( (char *)v33 == (char *)CGDISectionBitmapRealization::AddRef )
          {
            CGDISectionBitmapRealization::AddRef(v31);
          }
          else
          {
            v33(v31);
          }
        }
        if ( v32 )
          (*(void (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v32 + 16LL))(v32);
        v34 = *(struct CDrawingContext **)this;
        v35 = (CBrushRenderingGraph *)*((_QWORD *)this + 2);
        v50 = *(_BYTE *)(v3 + 16);
        v51 = *(_OWORD *)(v3 + 24);
        v52 = *(_DWORD *)(v3 + 40);
        v53 = *(_BYTE *)(v3 + 44);
        v54 = *(_BYTE *)(v3 + 45);
        v55 = *(_OWORD *)(v3 + 48);
        v56 = *(_OWORD *)(v3 + 64);
        v57 = *(_OWORD *)(v3 + 80);
        v58 = *(_OWORD *)(v3 + 96);
        v55 = *(_OWORD *)(v3 + 48);
        updated = CBrushRenderingGraph::UpdateDrawListCache(
                    v35,
                    v34,
                    (const struct CDrawListBrush *)lpMem,
                    (struct EffectStage *)&v47,
                    0,
                    v4);
        LODWORD(v3) = updated;
        if ( updated < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xDD,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\externaleffectgraph.cpp",
            (const char *)(unsigned int)updated);
          v41 = (EffectInput *)&v59;
          do
          {
            v41 = (EffectInput *)((char *)v41 - 112);
            EffectInput::~EffectInput(v41);
            --v21;
          }
          while ( v21 );
          break;
        }
        v37 = CDrawListCache::Render((__int64)v4, *(CDrawingContext **)this, (CMILMatrix *)&CMILMatrix::Identity, 1.0);
        LODWORD(v3) = v37;
        if ( v37 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xE5,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\externaleffectgraph.cpp",
            (const char *)(unsigned int)v37);
          v39 = (EffectInput *)&v59;
          do
          {
            v39 = (EffectInput *)((char *)v39 - 112);
            EffectInput::~EffectInput(v39);
            --v21;
          }
          while ( v21 );
          break;
        }
        *(_DWORD *)(112LL * *((unsigned int *)this + 9) + *((_QWORD *)this + 6) + 40) |= *((_DWORD *)v4 + 18) & 0x278;
        CDrawListCache::Invalidate(v4);
        v3 = 4LL;
        v38 = (EffectInput *)&v59;
        do
        {
          v38 = (EffectInput *)((char *)v38 - 112);
          EffectInput::~EffectInput(v38);
          --v3;
        }
        while ( v3 );
        ++v19;
      }
      if ( lpMem )
        CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(lpMem);
      v7 = v3;
    }
  }
  wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>(&v45);
  return (unsigned int)v7;
}
