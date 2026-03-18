/*
 * XREFs of ?Release@CAtlasedRectsMesh@@UEAAKXZ @ 0x18020F240
 * Callers:
 *     ?Release@CInteraction@@WEI@EAAKXZ @ 0x18025C010 (-Release@CInteraction@@WEI@EAAKXZ.c)
 *     ?Release@COffScreenRenderTarget@@WFA@EAAKXZ @ 0x180278120 (-Release@COffScreenRenderTarget@@WFA@EAAKXZ.c)
 *     ?Release@CDDisplayRenderTarget@@WFI@EAAKXZ @ 0x180278130 (-Release@CDDisplayRenderTarget@@WFI@EAAKXZ.c)
 *     ?Release@COffScreenRenderTarget@@WGA@EAAKXZ @ 0x180278140 (-Release@COffScreenRenderTarget@@WGA@EAAKXZ.c)
 *     ?Release@CLegacyRenderTarget@@WKA@EAAKXZ @ 0x180278150 (-Release@CLegacyRenderTarget@@WKA@EAAKXZ.c)
 *     ?Release@CLegacyRenderTarget@@WKI@EAAKXZ @ 0x180278170 (-Release@CLegacyRenderTarget@@WKI@EAAKXZ.c)
 *     ?Release@CRemoteRenderTarget@@WLA@EAAKXZ @ 0x180278190 (-Release@CRemoteRenderTarget@@WLA@EAAKXZ.c)
 *     ?Release@CGenericInk@@WJA@EAAKXZ @ 0x1802781B0 (-Release@CGenericInk@@WJA@EAAKXZ.c)
 *     ?Release@CIndirectSwapchainRenderTarget@@WKLA@EAAKXZ @ 0x1802781D0 (-Release@CIndirectSwapchainRenderTarget@@WKLA@EAAKXZ.c)
 *     ?Release@CMaskBrush@@WGI@EAAKXZ @ 0x180291230 (-Release@CMaskBrush@@WGI@EAAKXZ.c)
 *     ?Release@CGdiSpriteBitmap@@WHI@EAAKXZ @ 0x180291240 (-Release@CGdiSpriteBitmap@@WHI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CAtlasedRectsMesh::Release(CCachedVisualImage *this, __int64 a2, __int64 a3)
{
  return CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(this, a2, a3);
}
