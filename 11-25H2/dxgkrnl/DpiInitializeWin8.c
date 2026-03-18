/*
 * XREFs of DpiInitializeWin8 @ 0x14007C670
 * Callers:
 *     <none>
 * Callees:
 *     DpiInitializeInternal @ 0x14007C598 (DpiInitializeInternal.c)
 */

__int64 __fastcall DpiInitializeWin8(void *a1, const UNICODE_STRING *a2, _QWORD *a3)
{
  return DpiInitializeInternal(a1, a2, a3, 1);
}
