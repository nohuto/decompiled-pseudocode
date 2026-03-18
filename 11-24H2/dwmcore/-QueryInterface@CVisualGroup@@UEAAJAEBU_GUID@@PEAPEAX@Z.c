/*
 * XREFs of ?QueryInterface@CVisualGroup@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802129D0
 * Callers:
 *     ?QueryInterface@CLinearGradientBrush@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18025C000 (-QueryInterface@CLinearGradientBrush@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPrimitiveGroup@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180278050 (-QueryInterface@CPrimitiveGroup@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDDARenderTarget@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180278060 (-QueryInterface@CDDARenderTarget@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CRemoteRenderTarget@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180278070 (-QueryInterface@CRemoteRenderTarget@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLegacyRenderTarget@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180278080 (-QueryInterface@CLegacyRenderTarget@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CRemoteAppRenderTarget@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802780A0 (-QueryInterface@CRemoteAppRenderTarget@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CRemoteRenderTarget@@WLA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802780C0 (-QueryInterface@CRemoteRenderTarget@@WLA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CGenericInk@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802780E0 (-QueryInterface@CGenericInk@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CIndirectSwapchainRenderTarget@@WKLA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180278100 (-QueryInterface@CIndirectSwapchainRenderTarget@@WKLA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CGdiSpriteBitmap@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180291210 (-QueryInterface@CGdiSpriteBitmap@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CGdiSpriteBitmap@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180291220 (-QueryInterface@CGdiSpriteBitmap@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CVisualGroup::QueryInterface(CMaskBrush *this, const struct _GUID *a2, void **a3)
{
  return CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalQueryInterface(this, a2, a3);
}
