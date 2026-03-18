/*
 * XREFs of NtAddAtom @ 0x1407C12C0
 * Callers:
 *     <none>
 * Callees:
 *     NtAddAtomEx @ 0x140935520 (NtAddAtomEx.c)
 */

__int64 __fastcall NtAddAtom(void *a1, size_t a2)
{
  return NtAddAtomEx(a1, a2);
}
