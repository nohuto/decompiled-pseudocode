/*
 * XREFs of ?Release@CConversionSwapChain@@UEAAKXZ @ 0x180235610
 * Callers:
 *     ?Release@CDDisplaySwapChain@@WBAA@EAAKXZ @ 0x1802C8BC0 (-Release@CDDisplaySwapChain@@WBAA@EAAKXZ.c)
 *     ?Release@CLegacySwapChain@@WBI@EAAKXZ @ 0x1802C8BE0 (-Release@CLegacySwapChain@@WBI@EAAKXZ.c)
 *     ?Release@CConversionSwapChain@@WCA@EAAKXZ @ 0x1802C8BF0 (-Release@CConversionSwapChain@@WCA@EAAKXZ.c)
 *     ?Release@CConversionSwapChain@@WCAA@EAAKXZ @ 0x1802D4A80 (-Release@CConversionSwapChain@@WCAA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CConversionSwapChain::Release(__int64 this)
{
  return CMILCOMBaseWeakRefSource<CMilObjectDeleter>::InternalRelease(this);
}
