/*
 * XREFs of ?QueryInterface@CRemoteRenderTarget@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180278070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRemoteRenderTarget::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CMaskBrush *)(a1 - 96), a2, a3);
}
