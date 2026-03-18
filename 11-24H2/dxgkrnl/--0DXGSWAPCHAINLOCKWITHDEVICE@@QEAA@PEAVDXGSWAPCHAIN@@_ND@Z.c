/*
 * XREFs of ??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z @ 0x140394554
 * Callers:
 *     DxgkAddSurfaceToSwapChain @ 0x140200EC0 (DxgkAddSurfaceToSwapChain.c)
 *     DxgkCreateSwapChain @ 0x140201340 (DxgkCreateSwapChain.c)
 *     DxgkGetSwapChainSurfacePhysicalAddress @ 0x140201D00 (DxgkGetSwapChainSurfacePhysicalAddress.c)
 *     DxgkRemoveSurfaceFromSwapChain @ 0x140201F00 (DxgkRemoveSurfaceFromSwapChain.c)
 *     DxgkUnOrderedPresentSwapChain @ 0x140202220 (DxgkUnOrderedPresentSwapChain.c)
 *     DxgkAcquireSwapChain @ 0x1404241F0 (DxgkAcquireSwapChain.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

DXGSWAPCHAINLOCKWITHDEVICE *__fastcall DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE(
        DXGSWAPCHAINLOCKWITHDEVICE *this,
        struct DXGSWAPCHAIN *a2,
        char a3,
        char a4)
{
  DXGSWAPCHAINLOCKWITHDEVICE *result; // rax

  *(_BYTE *)this = a4;
  *((_QWORD *)this + 1) = a2;
  *((_BYTE *)this + 16) = a3;
  *((_QWORD *)this + 3) = a2;
  *((_BYTE *)this + 32) = 0;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 637;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_pMutex != NULL", 637LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 3) + 24LL) == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 644;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 644LL, 0LL, 0LL, 0LL, 0LL);
  }
  *((_DWORD *)this + 10) = 0;
  result = this;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_BYTE *)this + 80) = 0;
  *((_QWORD *)this + 11) = 0LL;
  return result;
}
