/*
 * XREFs of ?Release@CDDisplaySwapChain@@WBAA@EAAKXZ @ 0x1802BF810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplaySwapChain::Release(__int64 a1, __int64 a2, __int64 a3)
{
  return CConversionSwapChain::Release(a1 - 256, a2, a3);
}
