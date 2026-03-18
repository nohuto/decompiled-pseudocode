/*
 * XREFs of ?QueryInterface@CLinearGradientBrush@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180266380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLinearGradientBrush::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CMaskBrush *)(a1 - 72), a2, a3);
}
