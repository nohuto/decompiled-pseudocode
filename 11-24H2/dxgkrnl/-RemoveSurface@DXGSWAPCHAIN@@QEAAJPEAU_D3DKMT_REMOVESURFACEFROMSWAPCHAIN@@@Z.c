/*
 * XREFs of ?RemoveSurface@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_REMOVESURFACEFROMSWAPCHAIN@@@Z @ 0x140200638
 * Callers:
 *     DxgkRemoveSurfaceFromSwapChain @ 0x140201F00 (DxgkRemoveSurfaceFromSwapChain.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1401FE624 (-DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x1402E52F0 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 *     ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x140423DEC (-DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_I.c)
 */

__int64 __fastcall DXGSWAPCHAIN::RemoveSurface(struct _KTHREAD **this, struct _D3DKMT_REMOVESURFACEFROMSWAPCHAIN *a2)
{
  __int64 BufferIdx; // r9
  unsigned int v6; // eax
  __int64 v7; // rax
  const wchar_t *v8; // r9
  bool v9; // dl
  struct _KTHREAD *v10; // r8
  char *v11; // rbx
  HANDLE hNtSurfaceHandle; // rdx
  DXGSWAPCHAIN *v13; // rcx
  HANDLE v14; // [rsp+20h] [rbp-38h]
  __int64 v15; // [rsp+28h] [rbp-30h]
  __int64 v16; // [rsp+30h] [rbp-28h]

  if ( this[3] != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2877;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_SwapChainLock.IsOwner()", 2877LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*((_DWORD *)this + 58) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2883;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"RemoveSurface is not allowed for sequential swapchains",
      2883LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225659LL;
  }
  BufferIdx = a2->BufferIdx;
  v6 = *((_DWORD *)this + 14);
  if ( (unsigned int)BufferIdx >= v6 )
  {
    WdLogSingleEntry2(2LL, (unsigned int)BufferIdx, v6);
    v7 = *((unsigned int *)this + 14);
    v8 = L"Surface index (0x%I64x) is outside of the range of the table size (0x%I64x)";
    WdLogGlobalForLineNumber = 2890;
LABEL_7:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v8, a2->BufferIdx, v7, 0LL, 0LL, 0LL);
LABEL_8:
    DXGSWAPCHAIN::MarkAbandoned((DXGSWAPCHAIN *)this, v9);
    return 3221225485LL;
  }
  v10 = this[8];
  v11 = (char *)v10 + 160 * BufferIdx;
  if ( !*((_DWORD *)v11 + 2) )
  {
    WdLogSingleEntry2(2LL, a2->BufferIdx, 0LL);
    v7 = *((int *)v11 + 2);
    v8 = L"Surface index (0x%I64x) is not in use by producer, current status (0x%I64x)";
    WdLogGlobalForLineNumber = 2899;
    goto LABEL_7;
  }
  hNtSurfaceHandle = a2->hNtSurfaceHandle;
  if ( *((HANDLE *)v11 + 12) != hNtSurfaceHandle )
  {
    WdLogSingleEntry3(2LL, hNtSurfaceHandle, *((_QWORD *)v10 + 12), BufferIdx);
    v16 = a2->BufferIdx;
    v15 = *((_QWORD *)this[8] + 12);
    v14 = a2->hNtSurfaceHandle;
    WdLogGlobalForLineNumber = 2907;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Surface handle (0x%I64x) provided by caller does not match the handle (0x%I64x) for that index (0x%I64x)",
      (__int64)v14,
      v15,
      v16,
      0LL,
      0LL);
    goto LABEL_8;
  }
  DXGSWAPCHAIN::DestroySurfacesResourcesLocal(this, 0LL, (char *)v10 + 160 * BufferIdx);
  if ( v11[112] )
  {
    *((_DWORD *)v11 + 2) = 2;
  }
  else
  {
    DXGSWAPCHAIN::DestroySurfacesResourcesGlobal(v13, (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)v11);
    memset(v11, 0, 0xA0uLL);
    --*((_DWORD *)this + 15);
  }
  return 0LL;
}
