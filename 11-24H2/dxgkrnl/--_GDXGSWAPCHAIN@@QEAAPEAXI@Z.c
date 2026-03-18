/*
 * XREFs of ??_GDXGSWAPCHAIN@@QEAAPEAXI@Z @ 0x140079320
 * Callers:
 *     DxgkCreateSwapChain @ 0x140201340 (DxgkCreateSwapChain.c)
 *     ?SwapChainObDeleteProcedure@@YAXPEAX@Z @ 0x1403F12A0 (-SwapChainObDeleteProcedure@@YAXPEAX@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1DXGSWAPCHAIN@@QEAA@XZ @ 0x1401FD2AC (--1DXGSWAPCHAIN@@QEAA@XZ.c)
 */

DXGSWAPCHAIN *__fastcall DXGSWAPCHAIN::`scalar deleting destructor'(DXGSWAPCHAIN *this)
{
  DXGSWAPCHAIN::~DXGSWAPCHAIN(this);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
