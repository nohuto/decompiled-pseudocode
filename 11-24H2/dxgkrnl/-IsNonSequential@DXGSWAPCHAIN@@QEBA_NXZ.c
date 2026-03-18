/*
 * XREFs of ?IsNonSequential@DXGSWAPCHAIN@@QEBA_NXZ @ 0x1400793EC
 * Callers:
 *     ?PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAVBLTENTRY@@@Z @ 0x1402E3F08 (-PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT.c)
 *     ?SwapChainIsNonSequential@@YA_NPEAVDXGSWAPCHAIN@@@Z @ 0x1403C90B4 (-SwapChainIsNonSequential@@YA_NPEAVDXGSWAPCHAIN@@@Z.c)
 *     DxgkOpenSwapChain @ 0x1403DDD30 (DxgkOpenSwapChain.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGSWAPCHAIN::IsNonSequential(DXGSWAPCHAIN *this)
{
  return *((_DWORD *)this + 58) != 0;
}
