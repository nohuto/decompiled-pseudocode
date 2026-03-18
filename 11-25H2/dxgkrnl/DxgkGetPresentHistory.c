/*
 * XREFs of DxgkGetPresentHistory @ 0x1401E6040
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetPresentHistoryInternal @ 0x1402871A0 (DxgkGetPresentHistoryInternal.c)
 */

__int64 __fastcall DxgkGetPresentHistory(__int64 a1)
{
  return DxgkGetPresentHistoryInternal(a1, 1LL);
}
