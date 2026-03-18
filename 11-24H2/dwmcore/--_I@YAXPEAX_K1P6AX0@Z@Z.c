/*
 * XREFs of ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1801C7BD0
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x18001B3BC (-RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ @ 0x1801BE5E0 (-CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ.c)
 *     ??1CD3DDevice@@MEAA@XZ @ 0x1802232EC (--1CD3DDevice@@MEAA@XZ.c)
 *     ??1CExpressionManager@@EEAA@XZ @ 0x18028C9BC (--1CExpressionManager@@EEAA@XZ.c)
 *     ??1CTableTransferEffect@@UEAA@XZ @ 0x1802A75AC (--1CTableTransferEffect@@UEAA@XZ.c)
 *     ??1CDummyRemotingSwapChain@@MEAA@XZ @ 0x1802C66F8 (--1CDummyRemotingSwapChain@@MEAA@XZ.c)
 *     ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x1802D3328 (-ReleaseResources@CHolographicInteropTexture@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall `vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  __int64 v5; // rdi
  char *v7; // rbx

  if ( a3 )
  {
    v5 = a3;
    v7 = &a1[a3 * a2];
    do
    {
      v7 -= a2;
      a4(v7);
      --v5;
    }
    while ( v5 );
  }
}
