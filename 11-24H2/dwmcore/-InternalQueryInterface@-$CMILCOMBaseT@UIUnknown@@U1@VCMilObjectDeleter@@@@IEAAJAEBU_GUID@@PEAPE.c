/*
 * XREFs of ?InternalQueryInterface@?$CMILCOMBaseT@UIUnknown@@U1@VCMilObjectDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D3950
 * Callers:
 *     ?GetDirtyRegion@CCompositionSurfaceBitmap@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x1800D29C0 (-GetDirtyRegion@CCompositionSurfaceBitmap@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z.c)
 *     ??$query_to@VISwapChainRealization@@@?$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAVISwapChainRealization@@@Z @ 0x1800D391C (--$query_to@VISwapChainRealization@@@-$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil.c)
 *     ?Initialize@CEffectIntermediateProducer@@QEAAXPEAVIBitmapRealization@@@Z @ 0x1800FD04C (-Initialize@CEffectIntermediateProducer@@QEAAXPEAVIBitmapRealization@@@Z.c)
 *     ??$QueryInterface@VIAdvancedDirectFlipBitmapRealization@@@ISwapChainRealization@@QEAAJPEAPEAVIAdvancedDirectFlipBitmapRealization@@@Z @ 0x1801F1EEC (--$QueryInterface@VIAdvancedDirectFlipBitmapRealization@@@ISwapChainRealization@@QEAAJPEAPEAVIAd.c)
 *     ?IsAdvancedDirectFlipCompatible@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x1801FB0C0 (-IsAdvancedDirectFlipCompatible@CGlobalCompositionSurfaceInfo@@UEBA_NXZ.c)
 *     ??$QueryInterface@VIOverlayPlaneResource@@@IUnknown@@QEAAJPEAPEAVIOverlayPlaneResource@@@Z @ 0x1802015AC (--$QueryInterface@VIOverlayPlaneResource@@@IUnknown@@QEAAJPEAPEAVIOverlayPlaneResource@@@Z.c)
 *     ?QueryInterface@CHolographicFrameProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802123B0 (-QueryInterface@CHolographicFrameProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180242F58 (-DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV-$TMilRect_@HUtagRECT@@UD2D_POINT.c)
 *     ?QueryInterface@CHolographicExclusivePresentData@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802D6A70 (-QueryInterface@CHolographicExclusivePresentData@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?HrFindInterface@CDxHandleBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D3A50 (-HrFindInterface@CDxHandleBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CGDISectionBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801DE430 (-HrFindInterface@CGDISectionBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CRenderTargetBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801EE330 (-HrFindInterface@CRenderTargetBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>::InternalQueryInterface(
        CGDISectionBitmapRealization *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v5; // rax
  __int64 (__fastcall *v6)(CDxHandleBitmapRealization *__hidden, const struct _GUID *, void **); // rax
  int Interface; // eax
  unsigned int v8; // edi
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a3 )
    return 2147942487LL;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( v5 )
  {
    v6 = *(__int64 (__fastcall **)(CDxHandleBitmapRealization *__hidden, const struct _GUID *, void **))(*(_QWORD *)this + 40LL);
    if ( v6 == CDxHandleBitmapRealization::HrFindInterface )
    {
      Interface = CDxHandleBitmapRealization::HrFindInterface(this, a2, a3);
    }
    else if ( v6 == CGDISectionBitmapRealization::HrFindInterface )
    {
      Interface = CGDISectionBitmapRealization::HrFindInterface(this, a2, a3);
    }
    else if ( v6 == CRenderTargetBitmap::HrFindInterface )
    {
      Interface = CRenderTargetBitmap::HrFindInterface(this, a2, a3);
    }
    else
    {
      Interface = ((__int64 (__fastcall *)(CGDISectionBitmapRealization *))v6)(this);
    }
    v8 = Interface;
    if ( Interface < 0 )
    {
      *a3 = 0LL;
      return v8;
    }
  }
  else
  {
    *a3 = this;
    v8 = 0;
  }
  if ( _InterlockedAdd((volatile signed __int32 *)this + 2, 1u) > 0 )
    return v8;
  wil::details::in1diag3::Log_Hr(
    retaddr,
    (void *)0x18,
    (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
    (const char *)0x8007029CLL,
    v10);
  return v8;
}
