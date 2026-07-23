/*
 * XREFs of NtAddAtom @ 0x1407C1710
 * Callers:
 *     <none>
 * Callees:
 *     NtAddAtomEx @ 0x1408F4440 (NtAddAtomEx.c)
 */

NTSTATUS __cdecl NtAddAtom(PWSTR AtomName, ULONG Length, PRTL_ATOM Atom)
{
  return NtAddAtomEx(AtomName, Length, Atom, 0);
}
