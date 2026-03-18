/*
 * XREFs of ?Release@CAtlasedRectsMesh@@UEAAKXZ @ 0x18021ADB0
 * Callers:
 *     ?Release@CInteraction@@WEI@EAAKXZ @ 0x180266390 (-Release@CInteraction@@WEI@EAAKXZ.c)
 *     ?Release@COffScreenRenderTarget@@WFA@EAAKXZ @ 0x180282CB0 (-Release@COffScreenRenderTarget@@WFA@EAAKXZ.c)
 *     ?Release@CDDisplayRenderTarget@@WFI@EAAKXZ @ 0x180282CC0 (-Release@CDDisplayRenderTarget@@WFI@EAAKXZ.c)
 *     ?Release@COffScreenRenderTarget@@WGA@EAAKXZ @ 0x180282CD0 (-Release@COffScreenRenderTarget@@WGA@EAAKXZ.c)
 *     ?Release@CLegacyRenderTarget@@WKA@EAAKXZ @ 0x180282CE0 (-Release@CLegacyRenderTarget@@WKA@EAAKXZ.c)
 *     ?Release@CLegacyRenderTarget@@WKI@EAAKXZ @ 0x180282D00 (-Release@CLegacyRenderTarget@@WKI@EAAKXZ.c)
 *     ?Release@CRemoteRenderTarget@@WLA@EAAKXZ @ 0x180282D20 (-Release@CRemoteRenderTarget@@WLA@EAAKXZ.c)
 *     ?Release@CGenericInk@@WJA@EAAKXZ @ 0x180282D40 (-Release@CGenericInk@@WJA@EAAKXZ.c)
 *     ?Release@CIndirectSwapchainRenderTarget@@WKLA@EAAKXZ @ 0x180282D60 (-Release@CIndirectSwapchainRenderTarget@@WKLA@EAAKXZ.c)
 *     ?Release@CMaskBrush@@WGI@EAAKXZ @ 0x18029C550 (-Release@CMaskBrush@@WGI@EAAKXZ.c)
 *     ?Release@CGdiSpriteBitmap@@WHI@EAAKXZ @ 0x18029C560 (-Release@CGdiSpriteBitmap@@WHI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CAtlasedRectsMesh::Release(CAtlasedRectsMesh *this)
{
  return CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(this);
}
