/*
 * XREFs of ?Release@CBitmapLock@@WBA@EAAKXZ @ 0x180255FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapLock::Release(__int64 a1)
{
  return CBitmapLock::Release((CBitmapLock *)(a1 - 16));
}
