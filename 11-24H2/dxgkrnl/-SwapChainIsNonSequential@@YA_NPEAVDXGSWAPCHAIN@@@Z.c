/*
 * XREFs of ?SwapChainIsNonSequential@@YA_NPEAVDXGSWAPCHAIN@@@Z @ 0x1403C90B4
 * Callers:
 *     ?CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z @ 0x14005DD8C (-CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z.c)
 * Callees:
 *     ?IsNonSequential@DXGSWAPCHAIN@@QEBA_NXZ @ 0x1400793EC (-IsNonSequential@DXGSWAPCHAIN@@QEBA_NXZ.c)
 */

bool __fastcall SwapChainIsNonSequential(struct DXGSWAPCHAIN *a1)
{
  return DXGSWAPCHAIN::IsNonSequential(a1);
}
