/*
 * XREFs of ?QueryInterface@CConversionSwapChain@@WCAA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802CB7F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CConversionSwapChain::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CLegacySwapChain::QueryInterface((COverlaySwapChain *)(a1 - 512), a2, a3);
}
