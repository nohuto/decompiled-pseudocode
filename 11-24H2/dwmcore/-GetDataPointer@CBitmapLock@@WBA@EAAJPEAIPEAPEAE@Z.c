/*
 * XREFs of ?GetDataPointer@CBitmapLock@@WBA@EAAJPEAIPEAPEAE@Z @ 0x180255F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapLock::GetDataPointer(__int64 a1, unsigned int *a2, unsigned __int8 **a3)
{
  return CBitmapLock::GetDataPointer((CBitmapLock *)(a1 - 16), a2, a3);
}
