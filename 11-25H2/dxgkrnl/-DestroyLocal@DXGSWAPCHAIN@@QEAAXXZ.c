/*
 * XREFs of ?DestroyLocal@DXGSWAPCHAIN@@QEAAXXZ @ 0x1401F7B4C
 * Callers:
 *     ?SwapChainObCloseProcedure@@YAXPEAU_EPROCESS@@PEAX_K2@Z @ 0x1401FA1E0 (-SwapChainObCloseProcedure@@YAXPEAU_EPROCESS@@PEAX_K2@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1401F816C (-DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x140309198 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 */

void __fastcall DXGSWAPCHAIN::DestroyLocal(DXGSWAPCHAIN *this)
{
  __int64 v2; // rcx
  bool v3; // dl
  __int64 CurrentProcess; // rdi
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v5, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v5);
  CurrentProcess = PsGetCurrentProcess(v2);
  if ( *((_QWORD *)this + 14) == CurrentProcess )
  {
    DXGSWAPCHAIN::MarkAbandoned(this, v3);
    DXGSWAPCHAIN::DestroySwapchainLocalClient(this, (DXGSWAPCHAIN *)((char *)this + 96));
  }
  if ( *((_QWORD *)this + 20) == CurrentProcess )
  {
    DXGSWAPCHAIN::MarkAbandoned(this, v3);
    DXGSWAPCHAIN::DestroySwapchainLocalClient(this, (DXGSWAPCHAIN *)((char *)this + 144));
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v5);
}
