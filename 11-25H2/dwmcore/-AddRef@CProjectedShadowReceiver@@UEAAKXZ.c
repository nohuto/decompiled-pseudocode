/*
 * XREFs of ?AddRef@CProjectedShadowReceiver@@UEAAKXZ @ 0x1801D7510
 * Callers:
 *     ?AddRef@CD3DDevice@@WBA@EAAKXZ @ 0x180260CD0 (-AddRef@CD3DDevice@@WBA@EAAKXZ.c)
 *     ?AddRef@CDDisplaySwapChain@@WBI@EAAKXZ @ 0x180260CE0 (-AddRef@CDDisplaySwapChain@@WBI@EAAKXZ.c)
 *     ?AddRef@CDDisplaySwapChain@@WCA@EAAKXZ @ 0x180260CF0 (-AddRef@CDDisplaySwapChain@@WCA@EAAKXZ.c)
 *     ?AddRef@CCompressedSourceBitmap@@WHI@EAAKXZ @ 0x180260D00 (-AddRef@CCompressedSourceBitmap@@WHI@EAAKXZ.c)
 *     ?AddRef@CSystemMemoryBitmap@@WIA@EAAKXZ @ 0x180261380 (-AddRef@CSystemMemoryBitmap@@WIA@EAAKXZ.c)
 *     ?AddRef@CDeviceTextureTarget@@WEI@EAAKXZ @ 0x180265700 (-AddRef@CDeviceTextureTarget@@WEI@EAAKXZ.c)
 *     ?AddRef@CCompositionSurfaceBitmap@@WFA@EAAKXZ @ 0x180280B20 (-AddRef@CCompositionSurfaceBitmap@@WFA@EAAKXZ.c)
 *     ?AddRef@CWICBitmapRealization@@WFI@EAAKXZ @ 0x180280B30 (-AddRef@CWICBitmapRealization@@WFI@EAAKXZ.c)
 *     ?AddRef@CDeviceTextureTarget@@WGA@EAAKXZ @ 0x180280B40 (-AddRef@CDeviceTextureTarget@@WGA@EAAKXZ.c)
 *     ?AddRef@CHolographicInteropTarget@@WKA@EAAKXZ @ 0x180280B50 (-AddRef@CHolographicInteropTarget@@WKA@EAAKXZ.c)
 *     ?AddRef@CLegacyRenderTarget@@WKI@EAAKXZ @ 0x180280B70 (-AddRef@CLegacyRenderTarget@@WKI@EAAKXZ.c)
 *     ?AddRef@CHolographicInteropTarget@@WLA@EAAKXZ @ 0x180280B90 (-AddRef@CHolographicInteropTarget@@WLA@EAAKXZ.c)
 *     ?AddRef@CGenericInk@@WJA@EAAKXZ @ 0x180280BB0 (-AddRef@CGenericInk@@WJA@EAAKXZ.c)
 *     ?AddRef@CIndirectSwapchainRenderTarget@@WKLA@EAAKXZ @ 0x180280BD0 (-AddRef@CIndirectSwapchainRenderTarget@@WKLA@EAAKXZ.c)
 *     ?AddRef@CGdiSpriteBitmap@@WGI@EAAKXZ @ 0x18029C4A0 (-AddRef@CGdiSpriteBitmap@@WGI@EAAKXZ.c)
 *     ?AddRef@CLegacyStereoSwapChain@@WBAA@EAAKXZ @ 0x1802C7C00 (-AddRef@CLegacyStereoSwapChain@@WBAA@EAAKXZ.c)
 *     ?AddRef@CConversionSwapChain@@WCAA@EAAKXZ @ 0x1802D4290 (-AddRef@CConversionSwapChain@@WCAA@EAAKXZ.c)
 *     ?AddRef@CDeviceTextureTarget@@WBAI@EAAKXZ @ 0x1802D69B0 (-AddRef@CDeviceTextureTarget@@WBAI@EAAKXZ.c)
 *     ?AddRef@CDeviceTextureTarget@@WPA@EAAKXZ @ 0x1802D69D0 (-AddRef@CDeviceTextureTarget@@WPA@EAAKXZ.c)
 *     ?AddRef@CDeviceTextureTarget@@WPI@EAAKXZ @ 0x1802D69F0 (-AddRef@CDeviceTextureTarget@@WPI@EAAKXZ.c)
 *     ?AddRef@CDxHandleBitmapRealization@@WBEI@EAAKXZ @ 0x1802DFE10 (-AddRef@CDxHandleBitmapRealization@@WBEI@EAAKXZ.c)
 *     ?AddRef@CDxHandleAdvancedDirectFlipBitmapRealization@@WBFA@EAAKXZ @ 0x1802DFE30 (-AddRef@CDxHandleAdvancedDirectFlipBitmapRealization@@WBFA@EAAKXZ.c)
 *     ?AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ @ 0x1802DFE50 (-AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ.c)
 *     ?AddRef@CDxHandleBitmapRealization@@WBFI@EAAKXZ @ 0x1802E0D00 (-AddRef@CDxHandleBitmapRealization@@WBFI@EAAKXZ.c)
 *     ?AddRef@CGDIBitmapRealization@@WBJA@EAAKXZ @ 0x1802E0D20 (-AddRef@CGDIBitmapRealization@@WBJA@EAAKXZ.c)
 *     ?AddRef@CStereoRenderTargetBitmap@@WII@EAAKXZ @ 0x1802E3B10 (-AddRef@CStereoRenderTargetBitmap@@WII@EAAKXZ.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
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
