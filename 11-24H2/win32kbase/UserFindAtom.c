/*
 * XREFs of UserFindAtom @ 0x1400BBB90
 * Callers:
 *     <none>
 * Callees:
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 */

__int64 __fastcall UserFindAtom(PWSTR AtomName)
{
  struct _RTL_ATOM_TABLE *v2; // rcx
  unsigned int v3; // eax
  USHORT Atom; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(struct _RTL_ATOM_TABLE **)(W32GetUserSessionState(AtomName) + 41440);
  Atom = 0;
  v3 = RtlLookupAtomInAtomTable(v2, AtomName, &Atom);
  if ( (int)(v3 + 0x80000000) >= 0 && v3 != -1073741772 )
    SetLastNtError(v3);
  return Atom;
}
