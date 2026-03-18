/*
 * XREFs of ?Release@CDDisplaySwapChain@@WBAA@EAAKXZ @ 0x1802C8BC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplaySwapChain::Release(__int64 a1)
{
  return CConversionSwapChain::Release(a1 - 256);
}
