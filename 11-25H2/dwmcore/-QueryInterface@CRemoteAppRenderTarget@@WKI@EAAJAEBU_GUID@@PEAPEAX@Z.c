/*
 * XREFs of ?QueryInterface@CRemoteAppRenderTarget@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180282C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRemoteAppRenderTarget::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CMaskBrush *)(a1 - 168), a2, a3);
}
