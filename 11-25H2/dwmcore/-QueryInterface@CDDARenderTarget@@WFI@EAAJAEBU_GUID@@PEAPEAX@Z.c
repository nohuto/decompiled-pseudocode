/*
 * XREFs of ?QueryInterface@CDDARenderTarget@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180282BF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDARenderTarget::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CMaskBrush *)(a1 - 88), a2, a3);
}
