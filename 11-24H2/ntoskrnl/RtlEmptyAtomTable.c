/*
 * XREFs of RtlEmptyAtomTable @ 0x140780860
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFreeAtom @ 0x140856F58 (RtlpFreeAtom.c)
 *     RtlpLockAtomTable @ 0x1408F4C90 (RtlpLockAtomTable.c)
 *     RtlpUnlockAtomTable @ 0x1408F4D0C (RtlpUnlockAtomTable.c)
 *     RtlpFreeHandleForAtom @ 0x140A34188 (RtlpFreeHandleForAtom.c)
 */

NTSTATUS __cdecl RtlEmptyAtomTable(PVOID AtomTableHandle, BOOLEAN IncludePinnedAtoms)
{
  unsigned int v5; // ebp
  char *i; // r15
  _QWORD *v7; // rsi
  _QWORD *v8; // rdx
  _QWORD **v9; // r14
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rbx

  if ( !(unsigned __int8)RtlpLockAtomTable() )
    return -1073741811;
  v5 = 0;
  for ( i = (char *)AtomTableHandle + 32; v5 < *((_DWORD *)AtomTableHandle + 7); ++v5 )
  {
    v7 = i;
    i += 8;
    while ( 1 )
    {
      v12 = (_QWORD *)*v7;
      if ( !*v7 )
        break;
      if ( IncludePinnedAtoms || (*((_BYTE *)v12 + 38) & 1) == 0 )
      {
        v8 = (_QWORD *)*v7;
        *v7 = *v12;
        *v12 = 0LL;
        RtlpFreeHandleForAtom(AtomTableHandle, v8);
        v9 = (_QWORD **)(v12 + 2);
        while ( 1 )
        {
          v10 = *v9;
          if ( *v9 == v9 )
            break;
          if ( (_QWORD **)v10[1] != v9 || (v11 = (_QWORD *)*v10, *(_QWORD **)(*v10 + 8LL) != v10) )
            __fastfail(3u);
          *v9 = v11;
          v11[1] = v9;
          RtlpFreeAtom(v10);
        }
        RtlpFreeAtom(v12);
      }
      else
      {
        v7 = (_QWORD *)*v7;
      }
    }
  }
  RtlpUnlockAtomTable(AtomTableHandle);
  return 0;
}
