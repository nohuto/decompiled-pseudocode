/*
 * XREFs of ?DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1401FE870
 * Callers:
 *     ?DestroyLocal@DXGSWAPCHAIN@@QEAAXXZ @ 0x1401FE598 (-DestroyLocal@DXGSWAPCHAIN@@QEAAXXZ.c)
 *     ?OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX_NH@Z @ 0x1401FFBD8 (-OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX_NH@Z.c)
 *     ?OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHHH@Z @ 0x1402002AC (-OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHHH@Z.c)
 * Callees:
 *     ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x140423DEC (-DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_I.c)
 */

void __fastcall DXGSWAPCHAIN::DestroySwapchainLocalClient(
        DXGSWAPCHAIN *this,
        struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *a2)
{
  void *v4; // rcx
  __int64 i; // rsi

  v4 = (void *)*((_QWORD *)a2 + 4);
  if ( v4 )
  {
    ObfDereferenceObject(v4);
    *((_QWORD *)a2 + 4) = 0LL;
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 14); i = (unsigned int)(i + 1) )
    DXGSWAPCHAIN::DestroySurfacesResourcesLocal(this, *((unsigned int *)a2 + 7), *((_QWORD *)this + 8) + 160 * i);
  *((_QWORD *)a2 + 2) = 0LL;
}
