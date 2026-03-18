/*
 * XREFs of ??4?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisual@@@Z @ 0x1801AC95C
 * Callers:
 *     ?ProcessSetCoordinateSpace@CCompositionDistantLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONDISTANTLIGHT_SETCOORDINATESPACE@@@Z @ 0x1800C020C (-ProcessSetCoordinateSpace@CCompositionDistantLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMP.c)
 *     ?ProcessSetCoordinateSpace@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSPOTLIGHT_SETCOORDINATESPACE@@@Z @ 0x1800C047C (-ProcessSetCoordinateSpace@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSI.c)
 *     ?SetVisualTree@CRenderTarget@@IEAAXPEAVCVisualTree@@@Z @ 0x1800C1BCC (-SetVisualTree@CRenderTarget@@IEAAXPEAVCVisualTree@@@Z.c)
 *     ??0VisualCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@AEBUWICRect@@W4DXGI_FORMAT@@_KPEAX6@Z @ 0x1801AC624 (--0VisualCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTr.c)
 *     ?SetReferenceVisual@CCaptureRenderTarget@@QEAAXPEAVCVisual@@@Z @ 0x1801F93C0 (-SetReferenceVisual@CCaptureRenderTarget@@QEAAXPEAVCVisual@@@Z.c)
 *     ?SetTargetVisual@CCaptureRenderTarget@@QEAAXPEAVCVisual@@@Z @ 0x1801F9540 (-SetTargetVisual@CCaptureRenderTarget@@QEAAXPEAVCVisual@@@Z.c)
 *     ?Initialize@CDesktopTree@@MEAAJXZ @ 0x1802963E0 (-Initialize@CDesktopTree@@MEAAJXZ.c)
 *     ?ProcessSetCoordinateSpace@CCompositionPointLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONPOINTLIGHT_SETCOORDINATESPACE@@@Z @ 0x1802A247C (-ProcessSetCoordinateSpace@CCompositionPointLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOS.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800AC9A0 (-InternalRelease@-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?Release@CDeviceTextureTarget@@WBAA@EAAKXZ @ 0x1802D6FB0 (-Release@CDeviceTextureTarget@@WBAA@EAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct CMILPoolResource **__fastcall wil::com_ptr_t<CVisual,wil::err_returncode_policy>::operator=(
        struct CMILPoolResource **a1,
        struct CMILPoolResource *a2)
{
  struct CMILPoolResource *v2; // rbx
  __int64 (__fastcall *v4)(CResource *); // rax

  v2 = *a1;
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct CMILPoolResource *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v2 )
  {
    v4 = *(__int64 (__fastcall **)(CResource *))(*(_QWORD *)v2 + 16LL);
    if ( v4 == CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease )
    {
      CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease(v2);
    }
    else if ( (char *)v4 == (char *)CDeviceTextureTarget::Release )
    {
      CDeviceTextureTarget::Release(v2);
    }
    else if ( v4 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
    {
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v2);
    }
    else
    {
      v4(v2);
    }
  }
  return a1;
}
