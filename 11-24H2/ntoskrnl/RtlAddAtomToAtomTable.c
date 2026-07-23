/*
 * XREFs of RtlAddAtomToAtomTable @ 0x140A52240
 * Callers:
 *     <none>
 * Callees:
 *     RtlAddAtomToAtomTableEx @ 0x1404242E0 (RtlAddAtomToAtomTableEx.c)
 */

NTSTATUS __cdecl RtlAddAtomToAtomTable(PVOID AtomTableHandle, PWSTR AtomName, PRTL_ATOM Atom)
{
  return RtlAddAtomToAtomTableEx((__int64)AtomTableHandle, AtomName, Atom, 0);
}
