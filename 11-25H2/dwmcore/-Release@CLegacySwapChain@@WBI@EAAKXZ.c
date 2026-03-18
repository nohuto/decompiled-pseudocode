/*
 * XREFs of ?Release@CLegacySwapChain@@WBI@EAAKXZ @ 0x1802C8BE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacySwapChain::Release(__int64 a1)
{
  return CConversionSwapChain::Release(a1 - 24);
}
