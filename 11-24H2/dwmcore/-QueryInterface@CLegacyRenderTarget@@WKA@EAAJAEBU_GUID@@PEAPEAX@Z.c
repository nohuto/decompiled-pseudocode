/*
 * XREFs of ?QueryInterface@CLegacyRenderTarget@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180278080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyRenderTarget::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CMaskBrush *)(a1 - 160), a2, a3);
}
