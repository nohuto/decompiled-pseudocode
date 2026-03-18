/*
 * XREFs of ?GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x140040C7C
 * Callers:
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAIH@Z @ 0x1401FD758 (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAIH@Z.c)
 *     ?GetClientSurfacePhysicalAddress@DXGSWAPCHAIN@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1401FE8E0 (-GetClientSurfacePhysicalAddress@DXGSWAPCHAIN@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x140379498 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGSWAPCHAIN::GetClientSurfaceInfo(
        DXGSWAPCHAIN *this,
        struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *a2,
        unsigned int a3,
        struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO **a4,
        struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO **a5)
{
  __int64 v6; // rbx
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v9; // rdx
  __int64 v10; // rcx

  v6 = a3;
  if ( a3 >= *((_DWORD *)this + 14) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 460;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"SurfaceIdx < m_SurfaceTableSize",
      460LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v9 = (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)(*((_QWORD *)this + 8) + 160 * v6);
  v10 = 3LL * *((int *)a2 + 7);
  *a4 = v9;
  *a5 = (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)((char *)v9 + 16 * v10 + 64);
}
