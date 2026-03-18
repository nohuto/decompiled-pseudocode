/*
 * XREFs of ?QueryInterface@CDDisplaySwapChain@@WBAA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802C8B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplaySwapChain::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CLegacySwapChain::QueryInterface((COverlaySwapChain *)(a1 - 256), a2, a3);
}
