/*
 * XREFs of ??$_Destroy_range@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@YAXPEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAU12@AEAV?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@0@@Z @ 0x18015A6D0
 * Callers:
 *     ?ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ @ 0x18015A23C (-ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ?_Change_array@?$vector@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@AEAAXQEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@_K1@Z @ 0x18015A4B0 (-_Change_array@-$vector@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V-$allocator@U.c)
 *     ??$_Uninitialized_move@PEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@YAPEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAU12@0PEAU12@AEAV?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@0@@Z @ 0x18015A544 (--$_Uninitialized_move@PEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V-$allocator.c)
 *     ??1CCaptureRenderTarget@@MEAA@XZ @ 0x18022010C (--1CCaptureRenderTarget@@MEAA@XZ.c)
 * Callees:
 *     ??1DXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAA@XZ @ 0x180225D38 (--1DXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAA@XZ.c)
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
