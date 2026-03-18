/*
 * XREFs of ?IsNonSequential@DXGSWAPCHAIN@@QEBA_NXZ @ 0x140078EB8
 * Callers:
 *     ?PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAVBLTENTRY@@@Z @ 0x14030766C (-PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT.c)
 *     ?CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z @ 0x14030881C (-CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z.c)
 *     DxgkOpenSwapChain @ 0x1403E6330 (DxgkOpenSwapChain.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGSWAPCHAIN::IsNonSequential(DXGSWAPCHAIN *this)
{
  return *((_DWORD *)this + 58) != 0;
}
