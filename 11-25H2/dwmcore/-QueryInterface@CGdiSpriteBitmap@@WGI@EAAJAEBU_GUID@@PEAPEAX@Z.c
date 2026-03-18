/*
 * XREFs of ?QueryInterface@CGdiSpriteBitmap@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18029C530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGdiSpriteBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CMaskBrush *)(a1 - 104), a2, a3);
}
