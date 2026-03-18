/*
 * XREFs of NtAddAtom @ 0x1407B1AF0
 * Callers:
 *     <none>
 * Callees:
 *     NtAddAtomEx @ 0x14091E290 (NtAddAtomEx.c)
 */

__int64 __fastcall NtAddAtom(void *a1, size_t a2)
{
  return NtAddAtomEx(a1, a2);
}
