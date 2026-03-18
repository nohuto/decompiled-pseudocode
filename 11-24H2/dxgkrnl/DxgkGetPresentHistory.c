/*
 * XREFs of DxgkGetPresentHistory @ 0x1401EB770
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetPresentHistoryInternal @ 0x140293760 (DxgkGetPresentHistoryInternal.c)
 */

__int64 __fastcall DxgkGetPresentHistory(__int64 a1)
{
  return DxgkGetPresentHistoryInternal(a1, 1LL);
}
