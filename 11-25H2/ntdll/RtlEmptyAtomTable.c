/*
 * XREFs of RtlEmptyAtomTable @ 0x1800671D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     RtlpLockAtomTable @ 0x1800682F0 (RtlpLockAtomTable.c)
 *     RtlpFreeHandleForAtom @ 0x1800687B8 (RtlpFreeHandleForAtom.c)
 */

NTSTATUS __cdecl RtlEmptyAtomTable(PVOID AtomTableHandle, BOOLEAN IncludePinnedAtoms)
{
  unsigned int v5; // ebp
  char *i; // r14
  _BYTE **v7; // rsi
  _BYTE *v8; // rdx
  _BYTE *v9; // rbx

  if ( !(unsigned __int8)RtlpLockAtomTable() )
    return -1073741811;
  v5 = 0;
  for ( i = (char *)AtomTableHandle + 72; v5 < *((_DWORD *)AtomTableHandle + 16); ++v5 )
  {
    v7 = (_BYTE **)i;
    i += 8;
    while ( 1 )
    {
      v9 = *v7;
      if ( !*v7 )
        break;
      if ( IncludePinnedAtoms || (v9[14] & 1) == 0 )
      {
        v8 = *v7;
        *v7 = *(_BYTE **)v9;
        *(_QWORD *)v9 = 0LL;
        RtlpFreeHandleForAtom(AtomTableHandle, v8);
        RtlpSysVolFree(v9);
      }
      else
      {
        v7 = (_BYTE **)*v7;
      }
    }
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)AtomTableHandle + 1);
  return 0;
}
