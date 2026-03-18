/*
 * XREFs of ?ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEAAJII@Z @ 0x180018AE4
 * Callers:
 *     _lambda_1081fb77a3a3c81cdcc31a57fa3e9375_::operator() @ 0x1801372F0 (_lambda_1081fb77a3a3c81cdcc31a57fa3e9375_--operator().c)
 *     std::_Func_impl_no_alloc__lambda_58a5580cd9801359333db2cf07d3cd96__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call @ 0x180138CF0 (std--_Func_impl_no_alloc__lambda_58a5580cd9801359333db2cf07d3cd96__long_CExternalEffectGraph--CG.c)
 * Callees:
 *     ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x180019EB0 (--0CDirtyRegionAnnotation@@QEAA@XZ.c)
 *     ??1EffectInput@@QEAA@XZ @ 0x18001BDD0 (--1EffectInput@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x18004FDB0 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180051E30 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18006BF94 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z @ 0x18006C184 (-Free@-$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEffectStage@@IPEAVCDrawListCache@@@Z @ 0x18006C70C (-UpdateDrawListCache@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEff.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800DA5C0 (-InternalRelease@-$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801100F0 (--1-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ @ 0x180110800 (-InternalRelease@-$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCDrawListCache@@V1@@@SAPEAX_K@Z @ 0x18013E808 (-Alloc@-$CThreadLocalObjectCache@VCDrawListCache@@V1@@@SAPEAX_K@Z.c)
 *     ??0EffectInput@@QEAA@XZ @ 0x1801E16A0 (--0EffectInput@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ @ 0x1802D6BB0 (-AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CExternalEffectGraph::CGraphRenderingContext::ExecuteShaders(
        CExternalEffectGraph::CGraphRenderingContext *this,
        int a2,
        unsigned int a3)
{
  __int64 v3; // rsi
  struct CDrawListCache *v4; // rbx
  int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rdx
  void *v10; // rcx
  unsigned int v11; // xmm1_4
  unsigned int v12; // r12d
  unsigned int v13; // xmm0_4
  __int64 v14; // rdi
  _DWORD *v15; // rax
  __int128 v16; // xmm1
  CEffectIntermediateProducer **v17; // rsi
  __int64 v18; // r15
  __int64 v19; // r8
  CEffectIntermediateProducer *v20; // r15
  __int64 v21; // rax
  CEffectIntermediateProducer *v22; // rcx
  void (*v23)(void); // rax
  __int64 (__fastcall *v24)(CEffectIntermediateProducer *); // rax
  CMILRefCountImpl *v25; // rcx
  CMILRefCountImpl *v26; // r15
  void (*v27)(void); // rax
  struct CDrawingContext *v28; // rdx
  CBrushRenderingGraph *v29; // rcx
  int updated; // eax
  int v31; // eax
  EffectInput *v32; // r15
  EffectInput *v33; // rbx
  EffectInput *v35; // rbx
  unsigned int v36; // [rsp+20h] [rbp-E0h]
  unsigned int v37; // [rsp+20h] [rbp-E0h]
  LPVOID lpMem; // [rsp+30h] [rbp-D0h] BYREF
  struct CGeometryOnlyDrawListBrush *v39[2]; // [rsp+38h] [rbp-C8h] BYREF
  char v40; // [rsp+48h] [rbp-B8h]
  struct CDrawListCache *v41; // [rsp+50h] [rbp-B0h] BYREF
  int v42; // [rsp+58h] [rbp-A8h]
  __int64 v43; // [rsp+60h] [rbp-A0h] BYREF
  CEffectIntermediateProducer *v44; // [rsp+68h] [rbp-98h] BYREF
  CMILRefCountImpl *v45; // [rsp+70h] [rbp-90h]
  char v46; // [rsp+78h] [rbp-88h]
  __int128 v47; // [rsp+80h] [rbp-80h]
  int v48; // [rsp+90h] [rbp-70h]
  char v49; // [rsp+94h] [rbp-6Ch]
  char v50; // [rsp+95h] [rbp-6Bh]
  __int128 v51; // [rsp+98h] [rbp-68h]
  __int128 v52; // [rsp+A8h] [rbp-58h]
  __int128 v53; // [rsp+B8h] [rbp-48h]
  __int128 v54; // [rsp+C8h] [rbp-38h]
  char v55; // [rsp+228h] [rbp+128h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+178h]

  LODWORD(v3) = 0;
  v42 = a2;
  v4 = 0LL;
  v39[0] = 0LL;
  v41 = 0LL;
  v7 = 0;
  v8 = CThreadLocalObjectCache<CDrawListCache,CDrawListCache>::Alloc();
  if ( v8 )
  {
    *(_DWORD *)(v8 + 8) = 0;
    *(_QWORD *)v8 = &CDrawListCache::`vftable';
    v9 = 0LL;
    if ( g_pComposition )
      v9 = *((_QWORD *)g_pComposition + 111);
    *(_QWORD *)(v8 + 16) = v9;
    *(_QWORD *)(v8 + 24) = 0LL;
    v4 = (struct CDrawListCache *)v8;
    *(_QWORD *)(v8 + 32) = 0LL;
    *(_QWORD *)(v8 + 40) = 2LL;
    *(_QWORD *)(v8 + 72) = 0LL;
    *(_WORD *)(v8 + 84) = 0;
    *(_BYTE *)(v8 + 86) = 1;
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v8 + 8));
    v41 = 0LL;
    Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v41);
    v39[0] = 0LL;
    v41 = v4;
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x24u, 0LL);
  }
  Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(v39);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC9,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\externaleffectgraph.cpp",
      (const char *)(unsigned int)v7,
      v36);
  }
  else
  {
    lpMem = 0LL;
    v39[0] = (struct CGeometryOnlyDrawListBrush *)&lpMem;
    v39[1] = 0LL;
    v40 = 1;
    v7 = CGeometryOnlyDrawListBrush::Create(&v39[1]);
    if ( v40 )
    {
      v10 = *(void **)v39[0];
      *(_QWORD *)v39[0] = v39[1];
      if ( v10 )
        CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(v10);
    }
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCC,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\externaleffectgraph.cpp",
        (const char *)(unsigned int)v7,
        v36);
      if ( lpMem )
        CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(lpMem);
    }
    else
    {
      v11 = *((_DWORD *)this + 10);
      v12 = 0;
      v13 = *((_DWORD *)this + 11);
      v14 = 4LL;
      v15 = lpMem;
      v39[0] = 0LL;
      v39[1] = (struct CGeometryOnlyDrawListBrush *)__PAIR64__(v13, v11);
      v16 = *(_OWORD *)v39;
      *((_BYTE *)lpMem + 52) = 1;
      v15[12] = 0;
      *((_OWORD *)v15 + 2) = v16;
      while ( v12 < a3 )
      {
        v43 = 0LL;
        v17 = &v44;
        v18 = 4LL;
        do
        {
          --v18;
          if ( EffectInput::EffectInput == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
            CDirtyRegionAnnotation::CDirtyRegionAnnotation((CDirtyRegionAnnotation *)v17);
          else
            EffectInput::EffectInput((EffectInput *)v17);
          v17 += 14;
        }
        while ( v18 );
        v20 = v44;
        LODWORD(v43) = v12 + v42;
        v21 = *((unsigned int *)this + 8);
        HIDWORD(v43) = 1;
        v3 = *((_QWORD *)this + 6) + 112 * v21;
        v22 = *(CEffectIntermediateProducer **)v3;
        v44 = v22;
        if ( v22 )
        {
          v23 = *(void (**)(void))(*(_QWORD *)v22 + 8LL);
          if ( (char *)v23 == (char *)CMILRefCountImpl::AddReference )
            CMILRefCountImpl::AddReference(v22);
          else
            v23();
        }
        if ( v20 )
        {
          v24 = *(__int64 (__fastcall **)(CEffectIntermediateProducer *))(*(_QWORD *)v20 + 16LL);
          if ( v24 == CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease )
            CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease(v20);
          else
            v24(v20);
        }
        v25 = *(CMILRefCountImpl **)(v3 + 8);
        v26 = v45;
        v45 = v25;
        if ( v25 )
        {
          v27 = *(void (**)(void))(*(_QWORD *)v25 + 8LL);
          if ( (char *)v27 == (char *)CMILRefCountImpl::AddReference )
          {
            CMILRefCountImpl::AddReference(v25);
          }
          else if ( (char *)v27 == (char *)CGDISectionBitmapRealization::AddRef )
          {
            CGDISectionBitmapRealization::AddRef(v25, CGDISectionBitmapRealization::AddRef, v19);
          }
          else
          {
            v27();
          }
        }
        if ( v26 )
          (*(void (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v26 + 16LL))(v26);
        v28 = *(struct CDrawingContext **)this;
        v29 = (CBrushRenderingGraph *)*((_QWORD *)this + 2);
        v46 = *(_BYTE *)(v3 + 16);
        v47 = *(_OWORD *)(v3 + 24);
        v48 = *(_DWORD *)(v3 + 40);
        v49 = *(_BYTE *)(v3 + 44);
        v50 = *(_BYTE *)(v3 + 45);
        v51 = *(_OWORD *)(v3 + 48);
        v52 = *(_OWORD *)(v3 + 64);
        v53 = *(_OWORD *)(v3 + 80);
        v54 = *(_OWORD *)(v3 + 96);
        v51 = *(_OWORD *)(v3 + 48);
        updated = CBrushRenderingGraph::UpdateDrawListCache(
                    v29,
                    v28,
                    (const struct CDrawListBrush *)lpMem,
                    (struct EffectStage *)&v43,
                    0,
                    v4);
        LODWORD(v3) = updated;
        if ( updated < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xDD,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\externaleffectgraph.cpp",
            (const char *)(unsigned int)updated,
            v37);
          v35 = (EffectInput *)&v55;
          do
          {
            v35 = (EffectInput *)((char *)v35 - 112);
            EffectInput::~EffectInput(v35);
            --v14;
          }
          while ( v14 );
          break;
        }
        v31 = CDrawListCache::Render(v4, *(_QWORD *)this, &CMILMatrix::Identity);
        LODWORD(v3) = v31;
        if ( v31 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xE5,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\externaleffectgraph.cpp",
            (const char *)(unsigned int)v31,
            11);
          v33 = (EffectInput *)&v55;
          do
          {
            v33 = (EffectInput *)((char *)v33 - 112);
            EffectInput::~EffectInput(v33);
            --v14;
          }
          while ( v14 );
          break;
        }
        *(_DWORD *)(112LL * *((unsigned int *)this + 9) + *((_QWORD *)this + 6) + 40) |= *((_DWORD *)v4 + 18) & 0x278;
        CDrawListCache::Invalidate(v4);
        v3 = 4LL;
        v32 = (EffectInput *)&v55;
        do
        {
          v32 = (EffectInput *)((char *)v32 - 112);
          EffectInput::~EffectInput(v32);
          --v3;
        }
        while ( v3 );
        ++v12;
      }
      if ( lpMem )
        CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(lpMem);
      v7 = v3;
    }
  }
  wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>(&v41);
  return (unsigned int)v7;
}
