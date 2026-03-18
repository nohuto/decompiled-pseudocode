/*
 * XREFs of ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1801AAAD0
 * Callers:
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@AEAAJXZ @ 0x180019EC8 (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@AEAAJXZ.c)
 *     ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x180258AAC (-BuildFromRectFs@CShape@@SAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNot.c)
 *     ??0CTableTransferEffect@@IEAA@PEAVCComposition@@@Z @ 0x1802A7518 (--0CTableTransferEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Create@CDummyRemotingSwapChain@@KAJPEAUIDXGIOutputDWM@@PEAPEAVILegacyRemotingSwapChain@@@Z @ 0x1802C6918 (-Create@CDummyRemotingSwapChain@@KAJPEAUIDXGIOutputDWM@@PEAPEAVILegacyRemotingSwapChain@@@Z.c)
 *     ?Present@CCompSwapChain@@QEAAJII@Z @ 0x1802C7EE0 (-Present@CCompSwapChain@@QEAAJII@Z.c)
 *     ?EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDevice@@W4DXGI_FORMAT@@@Z @ 0x1802D2904 (-EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDevice@@W4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall `vector constructor iterator'(
        char *a1,
        __int64 a2,
        __int64 a3,
        CDirtyRegionAnnotation *(__fastcall *a4)(CDirtyRegionAnnotation *this))
{
  _QWORD *v5; // rbx
  __int64 v6; // rdi

  if ( a3 )
  {
    v5 = a1 + 32;
    v6 = a3;
    do
    {
      --v6;
      if ( a4 == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      {
        *(v5 - 1) = 0LL;
        *v5 = 0LL;
      }
      else
      {
        a4((CDirtyRegionAnnotation *)(v5 - 4));
      }
      v5 = (_QWORD *)((char *)v5 + a2);
    }
    while ( v6 );
  }
}
