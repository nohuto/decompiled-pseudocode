/*
 * XREFs of ??1?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004DC30
 * Callers:
 *     ?HasNonEmptyContent@CWindowNode@@UEBA_NXZ @ 0x180049B40 (-HasNonEmptyContent@CWindowNode@@UEBA_NXZ.c)
 *     ?IsOpaque@CBitmapRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@@Z @ 0x18004BD40 (-IsOpaque@CBitmapRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@@Z.c)
 *     ?GetBrushParameters@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x18004C190 (-GetBrushParameters@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@.c)
 *     ?DoesImageOcclude@COcclusionContext@@AEAA_NPEAUIUnknown@@_N@Z @ 0x18004C7F0 (-DoesImageOcclude@COcclusionContext@@AEAA_NPEAUIUnknown@@_N@Z.c)
 *     ?HasNonEmptyContent@CSpriteVisual@@UEBA_NXZ @ 0x18004C8A0 (-HasNonEmptyContent@CSpriteVisual@@UEBA_NXZ.c)
 *     ?IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x18004D750 (-IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsReadyToDraw@CNineGridBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x18004D9E0 (-IsReadyToDraw@CNineGridBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x18004DB30 (-IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsEmptyDrawing@CBrush@@UEBA_NXZ @ 0x18004E680 (-IsEmptyDrawing@CBrush@@UEBA_NXZ.c)
 *     ?HasNonEmptyContent@CVisual@@UEBA_NXZ @ 0x18004EA00 (-HasNonEmptyContent@CVisual@@UEBA_NXZ.c)
 *     ??1ShadowIntermediates@CDropShadow@@QEAA@XZ @ 0x18018AD88 (--1ShadowIntermediates@CDropShadow@@QEAA@XZ.c)
 *     ??1CProjectedShadow@@MEAA@XZ @ 0x1801D709C (--1CProjectedShadow@@MEAA@XZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180259E9C (--1CComposition@@MEAA@XZ.c)
 *     ??1CComposeTop@@QEAA@XZ @ 0x1802750A0 (--1CComposeTop@@QEAA@XZ.c)
 *     ShadowHelpers::_dynamic_atexit_destructor_for__s_cpFastShadowBlur__ @ 0x1802DFBC0 (ShadowHelpers--_dynamic_atexit_destructor_for__s_cpFastShadowBlur__.c)
 *     _dynamic_atexit_destructor_for__CProjectedShadow::s_cpHalfBlurAsset__ @ 0x1802DFBE0 (_dynamic_atexit_destructor_for__CProjectedShadow--s_cpHalfBlurAsset__.c)
 *     _dynamic_atexit_destructor_for__CProjectedShadow::s_cp1xBlurAsset__ @ 0x1802DFC80 (_dynamic_atexit_destructor_for__CProjectedShadow--s_cp1xBlurAsset__.c)
 *     _dynamic_atexit_destructor_for__CProjectedShadow::s_cp2xBlurAsset__ @ 0x1802DFD40 (_dynamic_atexit_destructor_for__CProjectedShadow--s_cp2xBlurAsset__.c)
 * Callees:
 *     ?RemoveReference@CMILRefCountImpl@@IEAAKXZ @ 0x18004C5F0 (-RemoveReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??$?9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@0@$$T@Z @ 0x18004E2E4 (--$-9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@UIDXGISwapChainD.c)
 *     ??0?$com_ptr_t@VCMILCOMWeakRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCMILCOMWeakRef@@@Z @ 0x18004E4C0 (--0-$com_ptr_t@VCMILCOMWeakRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCMILCOMWeakRef@@@Z.c)
 *     ??1?$com_ptr_t@VCMILCOMWeakRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004E504 (--1-$com_ptr_t@VCMILCOMWeakRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIUnknownWeakRefSource@@VCResourceDeleter@@@@IEAAKXZ @ 0x18004E540 (-InternalRelease@-$CMILRefCountBaseT@VIUnknownWeakRefSource@@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::~com_ptr_t<IBitmapResource,wil::err_returncode_policy>(
        CCachedVisualImage **a1)
{
  CCachedVisualImage *v1; // rbx
  __int64 (__fastcall *v2)(CCachedVisualImage *); // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *(__int64 (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)v1 + 16LL);
    if ( v2 == CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease )
    {
      if ( !(unsigned int)CMILRefCountImpl::RemoveReference((CCachedVisualImage *)((char *)v1 + 8)) )
      {
        CMILRefCountImpl::AddReference((CCachedVisualImage *)((char *)v1 + 8));
        (*(void (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)v1 + 80LL))(v1);
        if ( !(unsigned int)CMILRefCountImpl::RemoveReference((CCachedVisualImage *)((char *)v1 + 8)) )
        {
          CMILRefCountImpl::RemoveReference((CCachedVisualImage *)((char *)v1 + 8));
          CMilObjectDeleter::Delete<IBitmapResource>(v1);
        }
      }
    }
    else if ( v2 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
    {
      wil::com_ptr_t<CMILCOMWeakRef,wil::err_returncode_policy>::com_ptr_t<CMILCOMWeakRef,wil::err_returncode_policy>(
        &v3,
        *((_QWORD *)v1 + 2));
      if ( (unsigned __int8)wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>(&v3, 0LL) )
        EnterCriticalSection((LPCRITICAL_SECTION)(v3 + 16));
      CMILRefCountBaseT<IUnknownWeakRefSource,CResourceDeleter>::InternalRelease(v1);
      if ( (unsigned __int8)wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>(&v3, 0LL) )
        LeaveCriticalSection((LPCRITICAL_SECTION)(v3 + 16));
      wil::com_ptr_t<CMILCOMWeakRef,wil::err_returncode_policy>::~com_ptr_t<CMILCOMWeakRef,wil::err_returncode_policy>(&v3);
    }
    else
    {
      v2(v1);
    }
  }
}
