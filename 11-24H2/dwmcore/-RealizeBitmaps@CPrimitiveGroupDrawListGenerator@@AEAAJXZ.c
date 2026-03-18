/*
 * XREFs of ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@AEAAJXZ @ 0x180019EC8
 * Callers:
 *     ?CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x1801712DC (-CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z.c)
 *     ?Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV?$span@PEAVIBitmapResource@@$0?0@gsl@@1AEBV?$span@PEAVCPrimitiveColor@@$0?0@4@PEAPEAV1@@Z @ 0x180171904 (-Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV-$span@PEAVI.c)
 * Callees:
 *     ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x180019EB0 (--0CDirtyRegionAnnotation@@QEAA@XZ.c)
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetCurrentRenderingRealization@CCachedVisualImage@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x18004B8A0 (-GetCurrentRenderingRealization@CCachedVisualImage@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x18004BC04 (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x18004CE50 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ??$?RVCDrawListBitmap@@$0A@@?$default_delete@$$BY0A@VCDrawListBitmap@@@std@@QEBAXPEAVCDrawListBitmap@@@Z @ 0x18004D408 (--$-RVCDrawListBitmap@@$0A@@-$default_delete@$$BY0A@VCDrawListBitmap@@@std@@QEBAXPEAVCDrawListBi.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18004D620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800DA5C0 (-InternalRelease@-$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z @ 0x1800FDB08 (--4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??A?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@_K@Z @ 0x1801647B8 (--A-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayCo.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1801AAAD0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0CDrawListBitmap@@QEAA@XZ @ 0x1801D2130 (--0CDrawListBitmap@@QEAA@XZ.c)
 *     ?GetCurrentRenderingRealization@CCachedImageProducer@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1801E3350 (-GetCurrentRenderingRealization@CCachedImageProducer@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  _QWORD *v10; // r15
  CDirtyRegionAnnotation *v11; // rbx
  __int64 v12; // rdx
  unsigned int v13; // r12d
  CCompositionSurfaceBitmap *v14; // rbx
  __int64 (__fastcall *v15)(CCachedVisualImage *__hidden, struct IBitmapRealization **); // r14
  CEffectIntermediateProducer *v16; // r14
  unsigned int (__fastcall *v17)(CMILRefCountImpl *__hidden); // rax
  __int64 (__fastcall *v18)(CEffectIntermediateProducer *); // rax
  __int64 v19; // r14
  struct IBitmapRealization *v20; // rax
  CCachedVisualImage *v21; // rcx
  void (*v22)(void); // rax
  struct IBitmapRealization *v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // r14
  __int64 v27; // r15
  __int64 v28; // rax
  size_t v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rbx
  struct IBitmapResource **v34; // rax
  CDrawListBitmap *v35; // rax
  unsigned int v36; // [rsp+20h] [rbp-30h]
  struct IBitmapRealization *v37[2]; // [rsp+30h] [rbp-20h] BYREF
  char v38; // [rsp+40h] [rbp-10h]
  unsigned int v39; // [rsp+80h] [rbp+30h]

  v1 = *((unsigned int *)this + 8);
  v2 = 0LL;
  v39 = 0;
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
      v10 = v9 + 1;
      *v9 = v1;
      v11 = (CDirtyRegionAnnotation *)(v9 + 1);
      do
      {
        --v4;
        if ( CDrawListBitmap::CDrawListBitmap == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
          CDirtyRegionAnnotation::CDirtyRegionAnnotation(v11);
        else
          CDrawListBitmap::CDrawListBitmap(v11);
        v11 = (CDirtyRegionAnnotation *)((char *)v11 + 24);
      }
      while ( v4 );
    }
    else
    {
      v10 = 0LL;
    }
    v12 = *((_QWORD *)this + 10);
    *((_QWORD *)this + 10) = v10;
    if ( v12 )
      std::default_delete<CDrawListBitmap [0]>::operator()<CDrawListBitmap,0>();
    if ( !*((_QWORD *)this + 10) )
    {
      v36 = 227;
LABEL_33:
      v39 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, v36, 0LL);
      return v39;
    }
    v13 = 0;
    do
    {
      if ( (unsigned __int64)v13 >= *((_QWORD *)this + 4) )
      {
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      _mm_lfence();
      v14 = *(CCompositionSurfaceBitmap **)(*((_QWORD *)this + 5) + 8LL * v13);
      *(_OWORD *)v37 = 0LL;
      v38 = 0;
      v15 = *(__int64 (__fastcall **)(CCachedVisualImage *__hidden, struct IBitmapRealization **))(*(_QWORD *)v14 + 64LL);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v37[1]);
      if ( v15 == CCompositionSurfaceBitmap::GetCurrentRenderingRealization )
      {
        CCompositionSurfaceBitmap::GetCurrentRenderingRealization(v14, &v37[1]);
      }
      else if ( v15 == CCachedVisualImage::GetCurrentRenderingRealization )
      {
        CCachedVisualImage::GetCurrentRenderingRealization(v14, &v37[1]);
      }
      else if ( v15 == CCachedImageProducer::GetCurrentRenderingRealization )
      {
        CCachedImageProducer::GetCurrentRenderingRealization(v14, &v37[1]);
      }
      else
      {
        v15(v14, &v37[1]);
      }
      v16 = v37[0];
      v37[0] = v14;
      v17 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(*(_QWORD *)v14 + 8LL);
      if ( v17 == CMILRefCountImpl::AddReference )
        CMILRefCountImpl::AddReference(v14);
      else
        v17(v14);
      if ( v16 )
      {
        v18 = *(__int64 (__fastcall **)(CEffectIntermediateProducer *))(*(_QWORD *)v16 + 16LL);
        if ( v18 == CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease )
          CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease(v16);
        else
          v18(v16);
      }
      v19 = *((_QWORD *)this + 10);
      v20 = v37[0];
      v37[0] = 0LL;
      v21 = *(CCachedVisualImage **)(v19 + 24LL * v13);
      *(_QWORD *)(v19 + 24LL * v13) = v20;
      if ( v21 )
      {
        v22 = *(void (**)(void))(*(_QWORD *)v21 + 16LL);
        if ( (char *)v22 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
          CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v21);
        else
          v22();
      }
      v23 = v37[1];
      v37[1] = 0LL;
      v24 = *(_QWORD *)(v19 + 24LL * v13 + 8);
      *(_QWORD *)(v19 + 24LL * v13 + 8) = v23;
      if ( v24 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      *(_BYTE *)(v19 + 24LL * v13 + 16) = v38;
      CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v37);
      ++v13;
    }
    while ( v13 < (unsigned int)v1 );
  }
  v25 = *((unsigned int *)this + 12);
  if ( !(_DWORD)v25 )
    return v39;
  v27 = *((unsigned int *)this + 12);
  v28 = 24 * v27;
  if ( !is_mul_ok(v25, 0x18uLL) )
    v28 = -1LL;
  v6 = __CFADD__(v28, 8LL);
  v29 = v28 + 8;
  if ( v6 )
    v29 = -1LL;
  v30 = MIDL_user_allocate(v29);
  if ( v30 )
  {
    v31 = v30 + 1;
    *v30 = v25;
    `vector constructor iterator'(v30 + 1, 0x18uLL, v25, (void *(*)(void *))CDrawListBitmap::CDrawListBitmap);
  }
  else
  {
    v31 = 0LL;
  }
  v32 = *((_QWORD *)this + 11);
  *((_QWORD *)this + 11) = v31;
  if ( v32 )
    std::default_delete<CDrawListBitmap [0]>::operator()<CDrawListBitmap,0>();
  if ( !*((_QWORD *)this + 11) )
  {
    v36 = 239;
    goto LABEL_33;
  }
  v33 = 0LL;
  do
  {
    v34 = (struct IBitmapResource **)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](
                                       (char *)this + 48,
                                       v2);
    v35 = CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)v37, *v34);
    CDrawListBitmap::operator=(v33 + *((_QWORD *)this + 11), v35);
    CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v37);
    ++v2;
    v33 += 24LL;
    --v27;
  }
  while ( v27 );
  return v39;
}
