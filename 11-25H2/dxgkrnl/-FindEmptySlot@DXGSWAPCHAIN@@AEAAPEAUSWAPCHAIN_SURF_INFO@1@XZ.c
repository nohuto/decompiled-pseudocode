/*
 * XREFs of ?FindEmptySlot@DXGSWAPCHAIN@@AEAAPEAUSWAPCHAIN_SURF_INFO@1@XZ @ 0x140188DEC
 * Callers:
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVDXGDEVICE@@HPEAXPEAI@Z @ 0x1401F71E0 (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVDXGDEVICE@@HPEAXPEAI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *__fastcall DXGSWAPCHAIN::FindEmptySlot(struct _KTHREAD **this)
{
  __int64 i; // rdx
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *result; // rax

  if ( this[3] != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2927;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_SwapChainLock.IsOwner()", 2927LL, 0LL, 0LL, 0LL, 0LL);
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 14); i = (unsigned int)(i + 1) )
  {
    result = (struct _KTHREAD *)((char *)this[8] + 160 * i);
    if ( !*((_DWORD *)result + 2) )
      return result;
  }
  return 0LL;
}
