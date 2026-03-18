/*
 * XREFs of ??0?$com_ptr_t@VCShadowMaskProducer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCShadowMaskProducer@@@Z @ 0x1802286DC
 * Callers:
 *     ?ProcessDeviceLost@CDeviceManager@@IEAAXXZ @ 0x1800319C0 (-ProcessDeviceLost@CDeviceManager@@IEAAXXZ.c)
 *     ??0COverlaySwapChain@@IEAA@PEAVCD3DDevice@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@AEBVRefreshRateInfo@@IIU_LUID@@@Z @ 0x1802475FC (--0COverlaySwapChain@@IEAA@PEAVCD3DDevice@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@AEBVRefres.c)
 *     ??0CComputeScribbleFramebuffer@@AEAA@PEAVCD3DDevice@@PEAUID3D12Resource@@I@Z @ 0x180293A88 (--0CComputeScribbleFramebuffer@@AEAA@PEAVCD3DDevice@@PEAUID3D12Resource@@I@Z.c)
 *     ?EnqueueSetEvent@CVisualCapture@@IEAAJXZ @ 0x1802B2240 (-EnqueueSetEvent@CVisualCapture@@IEAAJXZ.c)
 *     ??$_Emplace_reallocate@AEAPEAVCD3DDevice@@@?$vector@V?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAPEAVCD3DDevice@@@Z @ 0x1802C0F18 (--$_Emplace_reallocate@AEAPEAVCD3DDevice@@@-$vector@V-$com_ptr_t@VCD3DDevice@@Uerr_returncode_po.c)
 *     ?Create@CDummyRemotingSwapChain@@KAJPEAUIDXGIOutputDWM@@PEAPEAVILegacyRemotingSwapChain@@@Z @ 0x1802CFB98 (-Create@CDummyRemotingSwapChain@@KAJPEAUIDXGIOutputDWM@@PEAPEAVILegacyRemotingSwapChain@@@Z.c)
 *     ??0CCompSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChain1@@I$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@I@Z @ 0x1802D0738 (--0CCompSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChain1@@I$$QEAV-$unique_any_t@V-$unique_sto.c)
 *     ??0CLegacyRemotingSwapChain@@IEAA@PEAVCD3DDevice@@AEBU_UNSIGNED_RATIO@@PEAVIRenderTargetBitmap@@PEAXPEAUHINSTANCE__@@@Z @ 0x1802D4C34 (--0CLegacyRemotingSwapChain@@IEAA@PEAVCD3DDevice@@AEBU_UNSIGNED_RATIO@@PEAVIRenderTargetBitmap@@.c)
 *     ??0CShadowMaskCachingBlurProducer@@AEAA@AEBVCResourceTag@@PEAVCShadowMaskProducer@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1802E4598 (--0CShadowMaskCachingBlurProducer@@AEAA@AEBVCResourceTag@@PEAVCShadowMaskProducer@@AEBV-$TMilRec.c)
 *     ?Create@CShadowMaskProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@$$QEAVCShapePtr@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x1802E4844 (-Create@CShadowMaskProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrus.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

_QWORD *__fastcall wil::com_ptr_t<CShadowMaskProducer,wil::err_returncode_policy>::com_ptr_t<CShadowMaskProducer,wil::err_returncode_policy>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a2 + 8));
  return a1;
}
