/*
 * XREFs of ?QueryInterface@CConversionSwapChain@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802C8BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CConversionSwapChain::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CLegacySwapChain::QueryInterface((COverlaySwapChain *)(a1 - 32), a2, a3);
}
