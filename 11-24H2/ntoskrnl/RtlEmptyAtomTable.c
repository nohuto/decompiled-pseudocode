/*
 * XREFs of RtlEmptyAtomTable @ 0x140780930
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFreeAtom @ 0x14085AC78 (RtlpFreeAtom.c)
 *     RtlpLockAtomTable @ 0x140935D80 (RtlpLockAtomTable.c)
 *     RtlpUnlockAtomTable @ 0x140935DFC (RtlpUnlockAtomTable.c)
 *     RtlpFreeHandleForAtom @ 0x140989F28 (RtlpFreeHandleForAtom.c)
 */

__int64 __fastcall RtlEmptyAtomTable(__int64 a1, char a2)
{
  unsigned int v5; // ebp
  _QWORD *i; // r15
  _QWORD *v7; // rsi
  _QWORD *v8; // rdx
  _QWORD **v9; // r14
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rbx

  if ( !(unsigned __int8)RtlpLockAtomTable() )
    return 3221225485LL;
  v5 = 0;
  for ( i = (_QWORD *)(a1 + 32); v5 < *(_DWORD *)(a1 + 28); ++v5 )
  {
    v7 = i++;
    while ( 1 )
    {
      v12 = (_QWORD *)*v7;
      if ( !*v7 )
        break;
      if ( a2 || (*((_BYTE *)v12 + 38) & 1) == 0 )
      {
        v8 = (_QWORD *)*v7;
        *v7 = *v12;
        *v12 = 0LL;
        RtlpFreeHandleForAtom(a1, v8);
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
  RtlpUnlockAtomTable(a1);
  return 0LL;
}
