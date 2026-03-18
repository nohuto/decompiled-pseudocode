/*
 * XREFs of ?IsNoAlphaFormOf@@YAHW4DXGI_FORMAT@@0@Z @ 0x18021552C
 * Callers:
 *     ?IsEqualPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@0@Z @ 0x180023878 (-IsEqualPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@0@Z.c)
 *     ?Append_Convert@ScanPipelineBuilder@@QEAAJAEBUPixelFormatInfo@@0W4Subpipe@1@@Z @ 0x1802DD548 (-Append_Convert@ScanPipelineBuilder@@QEAAJAEBUPixelFormatInfo@@0W4Subpipe@1@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsNoAlphaFormOf(enum DXGI_FORMAT a1, enum DXGI_FORMAT a2)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( a1 == DXGI_FORMAT_B8G8R8X8_UNORM )
    return a2 == DXGI_FORMAT_B8G8R8A8_UNORM;
  return result;
}
