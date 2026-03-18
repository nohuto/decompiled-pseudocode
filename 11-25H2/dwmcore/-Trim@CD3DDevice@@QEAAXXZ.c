/*
 * XREFs of ?Trim@CD3DDevice@@QEAAXXZ @ 0x1801D8C2C
 * Callers:
 *     ?AdvanceFrame@CD3DDevice@@QEAAJXZ @ 0x180030658 (-AdvanceFrame@CD3DDevice@@QEAAJXZ.c)
 *     ?DestroyAllResources@CD3DDevice@@AEAAXXZ @ 0x1801D89A4 (-DestroyAllResources@CD3DDevice@@AEAAXXZ.c)
 *     ?CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@I_NPEAPEAVCLegacySwapChain@@@Z @ 0x18023598C (-CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AE.c)
 *     ?TrimAllDevices@CDeviceManager@@QEAAXXZ @ 0x180257C2C (-TrimAllDevices@CDeviceManager@@QEAAXXZ.c)
 *     ?CreateConversionSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVCLegacySwapChain@@@Z @ 0x1802C2624 (-CreateConversionSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?CreateLegacyStereoSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVCLegacyStereoSwapChain@@@Z @ 0x1802C326C (-CreateLegacyStereoSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatIn.c)
 *     ?SetSize@CCompSwapChain@@QEAAJAEBUD2D_SIZE_U@@I@Z @ 0x1802D14B8 (-SetSize@CCompSwapChain@@QEAAJAEBUD2D_SIZE_U@@I@Z.c)
 * Callees:
 *     ?DestroyReleasedResources@CD3DResourceManager@@QEAAXXZ @ 0x1801D8DBC (-DestroyReleasedResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?ReleaseCachedD2DTarget@CD2DContext@@IEAAXXZ @ 0x1801D9020 (-ReleaseCachedD2DTarget@CD2DContext@@IEAAXXZ.c)
 *     ?ReleaseRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ @ 0x1801D9120 (-ReleaseRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD3DDevice::Trim(CD3DDevice *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  CRenderTargetBitmapCache::ReleaseRenderTargetBitmaps((CD3DDevice *)((char *)this + 464));
  CD2DContext::ReleaseCachedD2DTarget((CD3DDevice *)((char *)this + 16));
  CD3DResourceManager::DestroyReleasedResources((CD3DDevice *)((char *)this + 1120));
  v2 = *((_QWORD *)this + 70);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 880LL))(v2);
  v3 = *((_QWORD *)this + 67);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 136LL))(v3);
  *((_BYTE *)this + 1500) = 0;
}
