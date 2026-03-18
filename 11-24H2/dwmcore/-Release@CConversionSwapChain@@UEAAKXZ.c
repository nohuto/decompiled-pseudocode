/*
 * XREFs of ?Release@CConversionSwapChain@@UEAAKXZ @ 0x18022A140
 * Callers:
 *     ?Release@CDDisplaySwapChain@@WBAA@EAAKXZ @ 0x1802BF810 (-Release@CDDisplaySwapChain@@WBAA@EAAKXZ.c)
 *     ?Release@CLegacySwapChain@@WBI@EAAKXZ @ 0x1802BF830 (-Release@CLegacySwapChain@@WBI@EAAKXZ.c)
 *     ?Release@CConversionSwapChain@@WCA@EAAKXZ @ 0x1802BF840 (-Release@CConversionSwapChain@@WCA@EAAKXZ.c)
 *     ?Release@CConversionSwapChain@@WCAA@EAAKXZ @ 0x1802CB810 (-Release@CConversionSwapChain@@WCAA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CConversionSwapChain::Release(__int64 this, __int64 a2, __int64 a3)
{
  return CMILCOMBaseWeakRefSource<CMilObjectDeleter>::InternalRelease(this, a2, a3);
}
