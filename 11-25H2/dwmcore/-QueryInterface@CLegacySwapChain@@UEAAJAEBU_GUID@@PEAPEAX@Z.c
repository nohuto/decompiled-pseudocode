/*
 * XREFs of ?QueryInterface@CLegacySwapChain@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180221BD0
 * Callers:
 *     ?QueryInterface@CDDisplaySwapChain@@WBAA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802C8B80 (-QueryInterface@CDDisplaySwapChain@@WBAA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CConversionSwapChain@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802C8BA0 (-QueryInterface@CConversionSwapChain@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CConversionSwapChain@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802C8BB0 (-QueryInterface@CConversionSwapChain@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CConversionSwapChain@@WCAA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802D4A60 (-QueryInterface@CConversionSwapChain@@WCAA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CLegacySwapChain::QueryInterface(COverlaySwapChain *this, const struct _GUID *a2, void **a3)
{
  return CMILCOMBaseWeakRefSource<CMilObjectDeleter>::InternalQueryInterface(this, a2, a3);
}
