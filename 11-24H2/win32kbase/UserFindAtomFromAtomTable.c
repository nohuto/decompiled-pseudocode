/*
 * XREFs of UserFindAtomFromAtomTable @ 0x1400BBB40
 * Callers:
 *     <none>
 * Callees:
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 */

__int64 __fastcall UserFindAtomFromAtomTable(struct _RTL_ATOM_TABLE *a1, WCHAR *a2)
{
  unsigned int v2; // eax
  USHORT Atom; // [rsp+40h] [rbp+18h] BYREF

  Atom = 0;
  v2 = RtlLookupAtomInAtomTable(a1, a2, &Atom);
  if ( (int)(v2 + 0x80000000) >= 0 && v2 != -1073741772 )
    SetLastNtError(v2);
  return Atom;
}
