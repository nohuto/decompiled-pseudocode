/*
 * XREFs of ?GetStride@CBitmapLock@@WBA@EAAJPEAI@Z @ 0x1802615E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapLock::GetStride(__int64 a1, unsigned int *a2)
{
  return CBitmapLock::GetStride((CBitmapLock *)(a1 - 16), a2);
}
