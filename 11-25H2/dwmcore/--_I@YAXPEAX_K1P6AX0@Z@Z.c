/*
 * XREFs of ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1801D7240
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x18012AB6C (-RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ @ 0x1801B2E30 (-CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ.c)
 *     ??1CD3DDevice@@MEAA@XZ @ 0x18022EA8C (--1CD3DDevice@@MEAA@XZ.c)
 *     ??1CExpressionManager@@EEAA@XZ @ 0x180297E2C (--1CExpressionManager@@EEAA@XZ.c)
 *     ??1CTableTransferEffect@@UEAA@XZ @ 0x1802B10DC (--1CTableTransferEffect@@UEAA@XZ.c)
 *     ??1CDummyRemotingSwapChain@@MEAA@XZ @ 0x1802CF978 (--1CDummyRemotingSwapChain@@MEAA@XZ.c)
 *     ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x1802DC5C8 (-ReleaseResources@CHolographicInteropTexture@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
