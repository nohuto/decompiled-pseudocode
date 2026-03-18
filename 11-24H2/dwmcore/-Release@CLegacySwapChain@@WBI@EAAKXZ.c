/*
 * XREFs of ?Release@CLegacySwapChain@@WBI@EAAKXZ @ 0x1802BF830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacySwapChain::Release(__int64 a1, __int64 a2, __int64 a3)
{
  return CConversionSwapChain::Release(a1 - 24, a2, a3);
}
