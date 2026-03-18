/*
 * XREFs of ??$_Destroy_range@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@YAXPEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAU12@AEAV?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@0@@Z @ 0x18022C758
 * Callers:
 *     ??1CCaptureRenderTarget@@MEAA@XZ @ 0x1800BFAAC (--1CCaptureRenderTarget@@MEAA@XZ.c)
 *     ??$_Uninitialized_move@PEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@YAPEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAU12@0PEAU12@AEAV?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@0@@Z @ 0x1800FE858 (--$_Uninitialized_move@PEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V-$allocator.c)
 *     ?_Change_array@?$vector@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@AEAAXQEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@_K1@Z @ 0x1800FE8BC (-_Change_array@-$vector@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V-$allocator@U.c)
 *     ?ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ @ 0x180100414 (-ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ.c)
 * Callees:
 *     ??1DXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAA@XZ @ 0x180231994 (--1DXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair>>(
        CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *this,
        CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *a2)
{
  CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair::~DXGIResourceRenderTargetBitmapPair(v3);
      v3 = (CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *)((char *)v3 + 24);
    }
    while ( v3 != a2 );
  }
}
