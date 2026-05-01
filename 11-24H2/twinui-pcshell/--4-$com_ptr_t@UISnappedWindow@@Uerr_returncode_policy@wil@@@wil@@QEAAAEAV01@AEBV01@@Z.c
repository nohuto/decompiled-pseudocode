/*
 * XREFs of ??4?$com_ptr_t@UISnappedWindow@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x18028DEDC
 * Callers:
 *     ?GetRectForRegion@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@1@PEAUIImmersiveMonitor@@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@PEAUtagRECT@@PEAUSMART_FILL_OUTPUT@1@@Z @ 0x18008CA28 (-GetRectForRegion@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@1@PEAUIImmersiveMo.c)
 *     ??0GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@34@V?$com_ptr_t@UIApplicationFrameFactory@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180361C9C (--0GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA@PEAUIViewW.c)
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18041A090 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 *     ?GetCachedView@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@I@Z @ 0x18041E830 (-GetCachedView@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception.c)
 *     ?HandleForegroundWindow@WindowEventDispatcher@@AEAAXPEAUHWND__@@@Z @ 0x18041FE70 (-HandleForegroundWindow@WindowEventDispatcher@@AEAAXPEAUHWND__@@@Z.c)
 *     ?QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x180421704 (-QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet.c)
 *     ?RemoveCachedView@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@UAppViewId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180422FB4 (-RemoveCachedView@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_except.c)
 *     ?WindowWrapperFromFrameOrWindow@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@PEA_N@Z @ 0x180425A7C (-WindowWrapperFromFrameOrWindow@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInterna.c)
 *     ?WindowWrapperFromWindow@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@@Z @ 0x180425B3C (-WindowWrapperFromWindow@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInternal@@Uerr.c)
 *     ?QueuePendingActivation@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x180429504 (-QueuePendingActivation@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@PEAUIPrope.c)
 *     ?CreateThumbnailFactory@CAppThumbnailWindow@@IEAAJXZ @ 0x1804A70DC (-CreateThumbnailFactory@CAppThumbnailWindow@@IEAAJXZ.c)
 *     ?TryGetTopTwoApplicationViews@CAppThumbnailWindow@@AEAAXPEAPEAUIApplicationView@@0@Z @ 0x1804ABEAC (-TryGetTopTwoApplicationViews@CAppThumbnailWindow@@AEAAXPEAPEAUIApplicationView@@0@Z.c)
 *     ?DetermineFillWindow@SnapLayoutHelpers@@YAJW4SnapRegionAnchorLocations@1@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@P6A_NW4Edge@1@@ZP6A_N00PEAW441@@ZAEBUCRect@Geometry@@HPEAUFillCandidate@1@@Z @ 0x1805AA3AC (-DetermineFillWindow@SnapLayoutHelpers@@YAJW4SnapRegionAnchorLocations@1@AEBV-$CCoSimpleArray@V-.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::com_ptr_t<ISnappedWindow,wil::err_returncode_policy>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdi

  v3 = *a2;
  v4 = *a1;
  *a1 = *a2;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return a1;
}
