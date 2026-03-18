/*
 * XREFs of UserDeleteAtomFromAtomTable @ 0x1400BBC40
 * Callers:
 *     RealInternalRemoveProp @ 0x1400416F0 (RealInternalRemoveProp.c)
 *     UserDeleteAtom @ 0x1400BBC00 (UserDeleteAtom.c)
 *     DeleteStringPropertyAtoms @ 0x140168CA0 (DeleteStringPropertyAtoms.c)
 * Callees:
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 */

__int64 __fastcall UserDeleteAtomFromAtomTable(PRTL_ATOM_TABLE AtomTable, RTL_ATOM a2)
{
  __int64 v4; // rcx
  NTSTATUS v5; // eax

  if ( a2 >= *(_WORD *)(W32GetUserSessionState(AtomTable) + 41384)
    && a2 <= *(_WORD *)(W32GetUserSessionState(v4) + 41386) )
  {
    return 0LL;
  }
  v5 = RtlDeleteAtomFromAtomTable(AtomTable, a2);
  if ( v5 >= 0 )
    return 0LL;
  SetLastNtError((unsigned int)v5);
  return a2;
}
