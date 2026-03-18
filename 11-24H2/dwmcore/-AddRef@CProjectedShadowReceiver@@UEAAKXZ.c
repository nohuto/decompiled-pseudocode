/*
 * XREFs of ?AddRef@CProjectedShadowReceiver@@UEAAKXZ @ 0x1801C8830
 * Callers:
 *     ?AddRef@CD3DDevice@@WBA@EAAKXZ @ 0x1802556A0 (-AddRef@CD3DDevice@@WBA@EAAKXZ.c)
 *     ?AddRef@CDDisplaySwapChain@@WBI@EAAKXZ @ 0x1802556B0 (-AddRef@CDDisplaySwapChain@@WBI@EAAKXZ.c)
 *     ?AddRef@CDDisplaySwapChain@@WCA@EAAKXZ @ 0x1802556C0 (-AddRef@CDDisplaySwapChain@@WCA@EAAKXZ.c)
 *     ?AddRef@CCompressedSourceBitmap@@WHI@EAAKXZ @ 0x1802556D0 (-AddRef@CCompressedSourceBitmap@@WHI@EAAKXZ.c)
 *     ?AddRef@CSystemMemoryBitmap@@WIA@EAAKXZ @ 0x180255D50 (-AddRef@CSystemMemoryBitmap@@WIA@EAAKXZ.c)
 *     ?AddRef@CDeviceTextureTarget@@WEI@EAAKXZ @ 0x18025A780 (-AddRef@CDeviceTextureTarget@@WEI@EAAKXZ.c)
 *     ?AddRef@CCompositionSurfaceBitmap@@WFA@EAAKXZ @ 0x1802760A0 (-AddRef@CCompositionSurfaceBitmap@@WFA@EAAKXZ.c)
 *     ?AddRef@CWICBitmapRealization@@WFI@EAAKXZ @ 0x1802760C0 (-AddRef@CWICBitmapRealization@@WFI@EAAKXZ.c)
 *     ?AddRef@CDeviceTextureTarget@@WGA@EAAKXZ @ 0x1802760D0 (-AddRef@CDeviceTextureTarget@@WGA@EAAKXZ.c)
 *     ?AddRef@CHolographicInteropTarget@@WKA@EAAKXZ @ 0x1802760E0 (-AddRef@CHolographicInteropTarget@@WKA@EAAKXZ.c)
 *     ?AddRef@CLegacyRenderTarget@@WKI@EAAKXZ @ 0x180276100 (-AddRef@CLegacyRenderTarget@@WKI@EAAKXZ.c)
 *     ?AddRef@CHolographicInteropTarget@@WLA@EAAKXZ @ 0x180276120 (-AddRef@CHolographicInteropTarget@@WLA@EAAKXZ.c)
 *     ?AddRef@CGenericInk@@WJA@EAAKXZ @ 0x180276140 (-AddRef@CGenericInk@@WJA@EAAKXZ.c)
 *     ?AddRef@CIndirectSwapchainRenderTarget@@WKLA@EAAKXZ @ 0x180276160 (-AddRef@CIndirectSwapchainRenderTarget@@WKLA@EAAKXZ.c)
 *     ?AddRef@CGdiSpriteBitmap@@WGI@EAAKXZ @ 0x180291180 (-AddRef@CGdiSpriteBitmap@@WGI@EAAKXZ.c)
 *     ?AddRef@CLegacyStereoSwapChain@@WBAA@EAAKXZ @ 0x1802BE870 (-AddRef@CLegacyStereoSwapChain@@WBAA@EAAKXZ.c)
 *     ?AddRef@CConversionSwapChain@@WCAA@EAAKXZ @ 0x1802CB020 (-AddRef@CConversionSwapChain@@WCAA@EAAKXZ.c)
 *     ?AddRef@CDeviceTextureTarget@@WBAI@EAAKXZ @ 0x1802CD740 (-AddRef@CDeviceTextureTarget@@WBAI@EAAKXZ.c)
 *     ?AddRef@CDeviceTextureTarget@@WPA@EAAKXZ @ 0x1802CD760 (-AddRef@CDeviceTextureTarget@@WPA@EAAKXZ.c)
 *     ?AddRef@CDeviceTextureTarget@@WPI@EAAKXZ @ 0x1802CD780 (-AddRef@CDeviceTextureTarget@@WPI@EAAKXZ.c)
 *     ?AddRef@CDxHandleBitmapRealization@@WBEI@EAAKXZ @ 0x1802D6B70 (-AddRef@CDxHandleBitmapRealization@@WBEI@EAAKXZ.c)
 *     ?AddRef@CDxHandleAdvancedDirectFlipBitmapRealization@@WBFA@EAAKXZ @ 0x1802D6B90 (-AddRef@CDxHandleAdvancedDirectFlipBitmapRealization@@WBFA@EAAKXZ.c)
 *     ?AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ @ 0x1802D6BB0 (-AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ.c)
 *     ?AddRef@CDxHandleBitmapRealization@@WBFI@EAAKXZ @ 0x1802D7A60 (-AddRef@CDxHandleBitmapRealization@@WBFI@EAAKXZ.c)
 *     ?AddRef@CGDIBitmapRealization@@WBJA@EAAKXZ @ 0x1802D7A80 (-AddRef@CGDIBitmapRealization@@WBJA@EAAKXZ.c)
 *     ?AddRef@CStereoRenderTargetBitmap@@WII@EAAKXZ @ 0x1802DA870 (-AddRef@CStereoRenderTargetBitmap@@WII@EAAKXZ.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CProjectedShadowReceiver::AddRef(CProjectedShadowReceiver *this)
{
  signed __int32 v1; // ebx
  char v2; // cc
  unsigned __int32 v3; // ebx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 2, 1u);
  v2 = (v1 + 1 < 0) ^ __OFADD__(1, v1) | (v1 == -1);
  v3 = v1 + 1;
  if ( v2 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x18,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v5);
  return v3;
}
