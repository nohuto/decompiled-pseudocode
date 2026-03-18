/*
 * XREFs of ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@AEAAJXZ @ 0x180129678
 * Callers:
 *     ?CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x180044C6C (-CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z.c)
 *     ?Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV?$span@PEAVIBitmapResource@@$0?0@gsl@@1AEBV?$span@PEAVCPrimitiveColor@@$0?0@4@PEAPEAV1@@Z @ 0x180045294 (-Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV-$span@PEAVI.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800CF8B0 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ??$?RVCDrawListBitmap@@$0A@@?$default_delete@$$BY0A@VCDrawListBitmap@@@std@@QEBAXPEAVCDrawListBitmap@@@Z @ 0x1800CFE68 (--$-RVCDrawListBitmap@@$0A@@-$default_delete@$$BY0A@VCDrawListBitmap@@@std@@QEBAXPEAVCDrawListBi.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x1800D0080 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x1800DEA78 (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ?GetCurrentRenderingRealization@CCachedVisualImage@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800DEB60 (-GetCurrentRenderingRealization@CCachedVisualImage@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18010FE80 (-InternalRelease@-$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x180129660 (--0CDirtyRegionAnnotation@@QEAA@XZ.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z @ 0x18016FEF0 (--4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1801B5020 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??A?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@_K@Z @ 0x1801D4478 (--A-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayCo.c)
 *     ??0CDrawListBitmap@@QEAA@XZ @ 0x1801DFEE0 (--0CDrawListBitmap@@QEAA@XZ.c)
 *     ?GetCurrentRenderingRealization@CCachedImageProducer@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1801ECEF0 (-GetCurrentRenderingRealization@CCachedImageProducer@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListGenerator::RealizeBitmaps(CPrimitiveGroupDrawListGenerator *this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rdi
  __int64 v4; // r14
  __int64 v5; // rbx
  bool v6; // cf
  SIZE_T v7; // rbx
  HANDLE ProcessHeap; // rax
  _QWORD *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // r15
  CDirtyRegionAnnotation *v12; // rbx
  __int64 v13; // rdx
  unsigned int v14; // r12d
  CCompositionSurfaceBitmap *v15; // rbx
  __int64 (__fastcall *v16)(CCachedVisualImage *, struct IBitmapRealization **); // r14
  CEffectIntermediateProducer *v17; // r14
  __int64 (__fastcall *v18)(CMILRefCountImpl *); // rax
  __int64 (__fastcall *v19)(CEffectIntermediateProducer *); // rax
  __int64 v20; // r14
  struct IBitmapRealization *v21; // rax
  CResource *v22; // rcx
  void (*v23)(void); // rax
  struct IBitmapRealization *v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // r14
  __int64 v28; // r15
  __int64 v29; // rax
  size_t v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rbx
  struct IBitmapResource **v36; // rax
  CDrawListBitmap *v37; // rax
  unsigned int v38; // [rsp+20h] [rbp-30h]
  struct IBitmapRealization *v39[2]; // [rsp+30h] [rbp-20h] BYREF
  char v40; // [rsp+40h] [rbp-10h]
  unsigned int v41; // [rsp+80h] [rbp+30h]

  v1 = *((unsigned int *)this + 8);
  v2 = 0LL;
  v41 = 0;
  if ( (_DWORD)v1 )
  {
    v4 = (unsigned int)v1;
    v5 = 24 * v1;
    if ( !is_mul_ok(v1, 0x18uLL) )
      v5 = -1LL;
    v6 = __CFADD__(v5, 8LL);
    v7 = v5 + 8;
    if ( v6 )
      v7 = -1LL;
    ProcessHeap = GetProcessHeap();
    v9 = HeapAlloc(ProcessHeap, 0, v7);
    if ( v9 )
    {
      v11 = v9 + 1;
      *v9 = v1;
      v12 = (CDirtyRegionAnnotation *)(v9 + 1);
      do
      {
        --v4;
        if ( CDrawListBitmap::CDrawListBitmap == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
          CDirtyRegionAnnotation::CDirtyRegionAnnotation(v12);
        else
          CDrawListBitmap::CDrawListBitmap(v12);
        v12 = (CDirtyRegionAnnotation *)((char *)v12 + 24);
      }
      while ( v4 );
    }
    else
    {
      v11 = 0LL;
    }
    v13 = *((_QWORD *)this + 10);
    *((_QWORD *)this + 10) = v11;
    if ( v13 )
      std::default_delete<CDrawListBitmap [0]>::operator()<CDrawListBitmap,0>(v10, v13);
    if ( !*((_QWORD *)this + 10) )
    {
      v38 = 227;
LABEL_33:
      v41 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, v38, 0LL);
      return v41;
    }
    v14 = 0;
    do
    {
      if ( (unsigned __int64)v14 >= *((_QWORD *)this + 4) )
      {
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      _mm_lfence();
      v15 = *(CCompositionSurfaceBitmap **)(*((_QWORD *)this + 5) + 8LL * v14);
      *(_OWORD *)v39 = 0LL;
      v40 = 0;
      v16 = *(__int64 (__fastcall **)(CCachedVisualImage *, struct IBitmapRealization **))(*(_QWORD *)v15 + 64LL);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v39[1]);
      if ( v16 == CCompositionSurfaceBitmap::GetCurrentRenderingRealization )
      {
        CCompositionSurfaceBitmap::GetCurrentRenderingRealization(v15, &v39[1]);
      }
      else if ( v16 == CCachedVisualImage::GetCurrentRenderingRealization )
      {
        CCachedVisualImage::GetCurrentRenderingRealization(v15, &v39[1]);
      }
      else if ( v16 == CCachedImageProducer::GetCurrentRenderingRealization )
      {
        CCachedImageProducer::GetCurrentRenderingRealization(v15, &v39[1]);
      }
      else
      {
        v16(v15, &v39[1]);
      }
      v17 = v39[0];
      v39[0] = v15;
      v18 = *(__int64 (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v15 + 8LL);
      if ( v18 == CMILRefCountImpl::AddReference )
        CMILRefCountImpl::AddReference(v15);
      else
        v18(v15);
      if ( v17 )
      {
        v19 = *(__int64 (__fastcall **)(CEffectIntermediateProducer *))(*(_QWORD *)v17 + 16LL);
        if ( v19 == CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease )
          CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease(v17);
        else
          v19(v17);
      }
      v20 = *((_QWORD *)this + 10);
      v21 = v39[0];
      v39[0] = 0LL;
      v22 = *(CResource **)(v20 + 24LL * v14);
      *(_QWORD *)(v20 + 24LL * v14) = v21;
      if ( v22 )
      {
        v23 = *(void (**)(void))(*(_QWORD *)v22 + 16LL);
        if ( (char *)v23 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
          CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v22);
        else
          v23();
      }
      v24 = v39[1];
      v39[1] = 0LL;
      v25 = *(_QWORD *)(v20 + 24LL * v14 + 8);
      *(_QWORD *)(v20 + 24LL * v14 + 8) = v24;
      if ( v25 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
      *(_BYTE *)(v20 + 24LL * v14 + 16) = v40;
      CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v39);
      ++v14;
    }
    while ( v14 < (unsigned int)v1 );
  }
  v26 = *((unsigned int *)this + 12);
  if ( !(_DWORD)v26 )
    return v41;
  v28 = *((unsigned int *)this + 12);
  v29 = 24 * v28;
  if ( !is_mul_ok(v26, 0x18uLL) )
    v29 = -1LL;
  v6 = __CFADD__(v29, 8LL);
  v30 = v29 + 8;
  if ( v6 )
    v30 = -1LL;
  v31 = MIDL_user_allocate(v30);
  if ( v31 )
  {
    v33 = v31 + 1;
    *v31 = v26;
    `vector constructor iterator'(v31 + 1, 0x18uLL, v26, (void *(*)(void *))CDrawListBitmap::CDrawListBitmap);
  }
  else
  {
    v33 = 0LL;
  }
  v34 = *((_QWORD *)this + 11);
  *((_QWORD *)this + 11) = v33;
  if ( v34 )
    std::default_delete<CDrawListBitmap [0]>::operator()<CDrawListBitmap,0>(v32, v34);
  if ( !*((_QWORD *)this + 11) )
  {
    v38 = 239;
    goto LABEL_33;
  }
  v35 = 0LL;
  do
  {
    v36 = (struct IBitmapResource **)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](
                                       (char *)this + 48,
                                       v2);
    v37 = CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)v39, *v36);
    CDrawListBitmap::operator=(v35 + *((_QWORD *)this + 11), v37);
    CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v39);
    ++v2;
    v35 += 24LL;
    --v28;
  }
  while ( v28 );
  return v41;
}
