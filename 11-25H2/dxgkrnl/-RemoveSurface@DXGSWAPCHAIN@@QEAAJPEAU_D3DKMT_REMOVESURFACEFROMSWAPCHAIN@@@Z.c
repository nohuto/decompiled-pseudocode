/*
 * XREFs of ?RemoveSurface@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_REMOVESURFACEFROMSWAPCHAIN@@@Z @ 0x1401F9F7C
 * Callers:
 *     DxgkRemoveSurfaceFromSwapChain @ 0x1401FB7F0 (DxgkRemoveSurfaceFromSwapChain.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline @ 0x140078ECC (Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?DestroySurfaceDeviceResources@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1401F7BD8 (-DestroySurfaceDeviceResources@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_I.c)
 *     ?DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1401F7EB8 (-DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x140309198 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 *     ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x140408434 (-DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_I.c)
 */

__int64 __fastcall DXGSWAPCHAIN::RemoveSurface(struct _KTHREAD **this, struct _D3DKMT_REMOVESURFACEFROMSWAPCHAIN *a2)
{
  __int64 BufferIdx; // r9
  unsigned int v6; // eax
  __int64 v7; // rax
  const wchar_t *v8; // r9
  bool v9; // dl
  struct _KTHREAD *v10; // r8
  __int64 v11; // rbx
  HANDLE hNtSurfaceHandle; // rdx
  DXGSWAPCHAIN *v13; // rcx
  HANDLE v14; // [rsp+20h] [rbp-38h]
  __int64 v15; // [rsp+28h] [rbp-30h]
  __int64 v16; // [rsp+30h] [rbp-28h]

  if ( this[3] != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2849;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_SwapChainLock.IsOwner()", 2849LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*((_DWORD *)this + 58) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2855;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"RemoveSurface is not allowed for sequential swapchains",
      2855LL,
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
    WdLogGlobalForLineNumber = 2862;
LABEL_7:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v8, a2->BufferIdx, v7, 0LL, 0LL, 0LL);
LABEL_8:
    DXGSWAPCHAIN::MarkAbandoned((DXGSWAPCHAIN *)this, v9);
    return 3221225485LL;
  }
  v10 = this[8];
  v11 = (__int64)v10 + 160 * BufferIdx;
  if ( !*(_DWORD *)(v11 + 8) )
  {
    WdLogSingleEntry2(2LL, a2->BufferIdx, 0LL);
    v7 = *(int *)(v11 + 8);
    v8 = L"Surface index (0x%I64x) is not in use by producer, current status (0x%I64x)";
    WdLogGlobalForLineNumber = 2871;
    goto LABEL_7;
  }
  hNtSurfaceHandle = a2->hNtSurfaceHandle;
  if ( *(HANDLE *)(v11 + 96) != hNtSurfaceHandle )
  {
    WdLogSingleEntry3(2LL, hNtSurfaceHandle, *((_QWORD *)v10 + 12), BufferIdx);
    v16 = a2->BufferIdx;
    v15 = *((_QWORD *)this[8] + 12);
    v14 = a2->hNtSurfaceHandle;
    WdLogGlobalForLineNumber = 2879;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
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
  if ( (unsigned int)Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline() )
    DXGSWAPCHAIN::DestroySurfaceDeviceResources((__int64)this, 0, v11);
  if ( *(_BYTE *)(v11 + 112) )
  {
    *(_DWORD *)(v11 + 8) = 2;
  }
  else
  {
    DXGSWAPCHAIN::DestroySurfacesResourcesGlobal(v13, (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)v11);
    memset((void *)v11, 0, 0xA0uLL);
    --*((_DWORD *)this + 15);
  }
  return 0LL;
}
