/*
 * XREFs of NtAddAtom @ 0x1407B1AF0
 * Callers:
 *     <none>
 * Callees:
 *     NtAddAtomEx @ 0x14091E290 (NtAddAtomEx.c)
 */

NTSTATUS __cdecl NtAddAtom(PWSTR AtomName, ULONG Length, PRTL_ATOM Atom)
{
  return NtAddAtomEx(AtomName, Length, Atom, 0);
}
