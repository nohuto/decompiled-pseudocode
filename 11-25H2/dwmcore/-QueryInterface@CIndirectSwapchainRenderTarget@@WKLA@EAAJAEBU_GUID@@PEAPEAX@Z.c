/*
 * XREFs of ?QueryInterface@CIndirectSwapchainRenderTarget@@WKLA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180282C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CMaskBrush *)(a1 - 2736), a2, a3);
}
