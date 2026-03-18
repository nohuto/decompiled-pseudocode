/*
 * XREFs of ?Initialize@CEffectIntermediateProducer@@QEAAXPEAVIBitmapRealization@@@Z @ 0x1800FD04C
 * Callers:
 *     ?RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCDrawingContext@@AEBUIntermediateConfigurationInputs@1@AEBV?$span@$$CBUEffectInput@@$0?0@gsl@@AEBV?$span@UEffectInput@@$0?0@6@@Z @ 0x180018180 (-RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCD.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x18001B3BC (-RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseT@UIUnknown@@U1@VCMilObjectDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D3950 (-InternalQueryInterface@-$CMILCOMBaseT@UIUnknown@@U1@VCMilObjectDeleter@@@@IEAAJAEBU_GUID@@PEAPE.c)
 *     ?GetSize@CRenderTargetBitmap@@UEBA?AUD2D_SIZE_U@@XZ @ 0x1800FC530 (-GetSize@CRenderTargetBitmap@@UEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?reserve_region@?$vector_facade@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@_K0@Z @ 0x1800FD288 (-reserve_region@-$vector_facade@V-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$defau.c)
 *     ??1?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@QEAA@XZ @ 0x1800FD434 (--1-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$default_delete@VCCachedRealization@.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18010BE90 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CEffectIntermediateProducer::Initialize(
        CEffectIntermediateProducer *this,
        __int64 (__fastcall ***a2)(CGDISectionBitmapRealization *this, const struct _GUID *a2, void **a3))
{
  __int64 (__fastcall **v2)(CGDISectionBitmapRealization *, const struct _GUID *, void **); // rax
  __int64 (__fastcall *v5)(CGDISectionBitmapRealization *, const struct _GUID *, void **); // rdi
  int v6; // eax
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  void *v9; // rcx
  CRenderTargetBitmap *v10; // rcx
  __int64 (__fastcall *v11)(CRenderTargetBitmap *, __int64 *); // rax
  __int64 *Size; // rax
  __int64 v13; // rax
  void *retaddr; // [rsp+38h] [rbp+18h]
  void *v15; // [rsp+48h] [rbp+28h] BYREF
  __int64 v16; // [rsp+50h] [rbp+30h] BYREF
  __int64 v17; // [rsp+58h] [rbp+38h] BYREF

  v2 = *a2;
  v15 = 0LL;
  v5 = *v2;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v15);
  if ( v5 == CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>::InternalQueryInterface )
    v6 = CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>::InternalQueryInterface(
           (CGDISectionBitmapRealization *)a2,
           &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3,
           &v15);
  else
    v6 = v5((CGDISectionBitmapRealization *)a2, &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3, &v15);
  if ( v6 < 0 )
    ModuleFailFastForHRESULT(v6, retaddr);
  v7 = operator new(8uLL);
  v8 = v7;
  if ( v7 )
  {
    v9 = v15;
    v15 = 0LL;
    *v7 = v9;
  }
  else
  {
    v8 = 0LL;
  }
  v10 = (CRenderTargetBitmap *)(*v8 + 8LL);
  v11 = *(__int64 (__fastcall **)(CRenderTargetBitmap *, __int64 *))(*(_QWORD *)v10 + 32LL);
  if ( (char *)v11 == (char *)CRenderTargetBitmap::GetSize )
    Size = (__int64 *)CRenderTargetBitmap::GetSize(v10, &v16);
  else
    Size = (__int64 *)v11(v10, &v16);
  v13 = *Size;
  v17 = 0LL;
  v16 = 0LL;
  *((_QWORD *)this + 3) = v13;
  *(_QWORD *)detail::vector_facade<std::unique_ptr<CCachedImageProducer::CCachedRealization>,detail::buffer_impl<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2,1,detail::liberal_expansion_policy>>::reserve_region(
               (char *)this + 32,
               (__int64)(*((_QWORD *)this + 5) - *((_QWORD *)this + 4)) >> 3) = v8;
  std::unique_ptr<CCachedImageProducer::CCachedRealization>::~unique_ptr<CCachedImageProducer::CCachedRealization>(&v16);
  std::unique_ptr<CCachedImageProducer::CCachedRealization>::~unique_ptr<CCachedImageProducer::CCachedRealization>(&v17);
  if ( v15 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v15 + 16LL))(v15);
}
