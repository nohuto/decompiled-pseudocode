/*
 * XREFs of ?ConsumerCheckForSurfacesToFree@DXGSWAPCHAIN@@AEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@@Z @ 0x1401FE3F8
 * Callers:
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x140379498 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1401FE624 (-DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z.c)
 *     ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x140423DEC (-DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_I.c)
 */

__int64 __fastcall DXGSWAPCHAIN::ConsumerCheckForSurfacesToFree(
        struct _KTHREAD **this,
        struct _D3DKMT_RELEASESWAPCHAIN *a2)
{
  unsigned int bProducer; // ebp
  unsigned int v5; // edi
  struct _KTHREAD *v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // ecx
  __int64 v9; // r14
  char *v10; // r8
  DXGSWAPCHAIN *v11; // rcx
  unsigned int v12; // eax

  if ( this[3] != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4162;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_SwapChainLock.IsOwner()", 4162LL, 0LL, 0LL, 0LL, 0LL);
  }
  bProducer = a2[1].bProducer;
  v5 = 0;
  a2[1].bProducer = 0;
  while ( v5 < *((_DWORD *)this + 14) )
  {
    v6 = this[27];
    v7 = *((_QWORD *)v6 + 2);
    if ( v7 )
    {
      v8 = *((_DWORD *)v6 + 3);
      while ( v8 != *((_DWORD *)v6 + 2) )
      {
        if ( *(_DWORD *)(v7 + 4LL * v8) == v5 )
          goto LABEL_15;
        if ( ++v8 == *((_DWORD *)v6 + 1) )
          v8 = 0;
      }
    }
    v9 = 160LL * v5;
    v10 = (char *)this[8] + v9;
    if ( *((_DWORD *)v10 + 2) == 2 )
    {
      DXGSWAPCHAIN::DestroySurfacesResourcesLocal(this, 1LL, v10);
      DXGSWAPCHAIN::DestroySurfacesResourcesGlobal(v11, (struct _KTHREAD *)((char *)this[8] + v9));
      memset((char *)this[8] + v9, 0, 0xA0uLL);
      v12 = a2[1].bProducer;
      if ( v12 >= bProducer )
      {
        WdLogSingleEntry1(2LL, this);
        WdLogGlobalForLineNumber = 4190;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Caller only provided 0x%I64x entires in deferred free list, that was not enough. Swapchain 0x%I64x",
          (__int64)this,
          0LL,
          0LL,
          0LL,
          0LL);
        return 3221225625LL;
      }
      *((_DWORD *)a2[1].pMetaData + v12) = v5;
      ++a2[1].bProducer;
      --*((_DWORD *)this + 15);
    }
LABEL_15:
    ++v5;
  }
  return 0LL;
}
