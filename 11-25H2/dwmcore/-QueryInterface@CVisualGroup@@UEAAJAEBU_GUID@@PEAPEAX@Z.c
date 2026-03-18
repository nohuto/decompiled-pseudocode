/*
 * XREFs of ?QueryInterface@CVisualGroup@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18021DE10
 * Callers:
 *     ?QueryInterface@CLinearGradientBrush@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180266380 (-QueryInterface@CLinearGradientBrush@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPrimitiveGroup@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180282BE0 (-QueryInterface@CPrimitiveGroup@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDDARenderTarget@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180282BF0 (-QueryInterface@CDDARenderTarget@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CRemoteRenderTarget@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180282C00 (-QueryInterface@CRemoteRenderTarget@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLegacyRenderTarget@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180282C10 (-QueryInterface@CLegacyRenderTarget@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CRemoteAppRenderTarget@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180282C30 (-QueryInterface@CRemoteAppRenderTarget@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CRemoteRenderTarget@@WLA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180282C50 (-QueryInterface@CRemoteRenderTarget@@WLA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CGenericInk@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180282C70 (-QueryInterface@CGenericInk@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CIndirectSwapchainRenderTarget@@WKLA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180282C90 (-QueryInterface@CIndirectSwapchainRenderTarget@@WKLA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CGdiSpriteBitmap@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18029C530 (-QueryInterface@CGdiSpriteBitmap@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CGdiSpriteBitmap@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18029C540 (-QueryInterface@CGdiSpriteBitmap@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CVisualGroup::QueryInterface(CMaskBrush *this, const struct _GUID *a2, void **a3)
{
  return CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalQueryInterface(this, a2, a3);
}
