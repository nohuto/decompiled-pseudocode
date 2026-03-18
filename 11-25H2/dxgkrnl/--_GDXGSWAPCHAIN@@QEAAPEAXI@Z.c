/*
 * XREFs of ??_GDXGSWAPCHAIN@@QEAAPEAXI@Z @ 0x140078DEC
 * Callers:
 *     DxgkCreateSwapChain @ 0x1401FAC90 (DxgkCreateSwapChain.c)
 *     ?SwapChainObDeleteProcedure@@YAXPEAX@Z @ 0x1403F74B0 (-SwapChainObDeleteProcedure@@YAXPEAX@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1DXGSWAPCHAIN@@QEAA@XZ @ 0x1401F695C (--1DXGSWAPCHAIN@@QEAA@XZ.c)
 */

DXGSWAPCHAIN *__fastcall DXGSWAPCHAIN::`scalar deleting destructor'(DXGSWAPCHAIN *this)
{
  DXGSWAPCHAIN::~DXGSWAPCHAIN(this);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
