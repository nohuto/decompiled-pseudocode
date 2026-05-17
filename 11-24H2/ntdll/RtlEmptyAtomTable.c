/*
 * XREFs of RtlEmptyAtomTable @ 0x1800ADAF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpLockAtomTable @ 0x1800AEA00 (RtlpLockAtomTable.c)
 *     RtlpFreeHandleForAtom @ 0x1800AEEC8 (RtlpFreeHandleForAtom.c)
 */

__int64 __fastcall RtlEmptyAtomTable(__int64 a1, char a2)
{
  unsigned int v5; // ebp
  __int64 *i; // r14
  __int64 *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rbx

  if ( !(unsigned __int8)RtlpLockAtomTable() )
    return 3221225485LL;
  v5 = 0;
  for ( i = (__int64 *)(a1 + 72); v5 < *(_DWORD *)(a1 + 64); ++v5 )
  {
    v7 = i++;
    while ( 1 )
    {
      v9 = *v7;
      if ( !*v7 )
        break;
      if ( a2 || (*(_BYTE *)(v9 + 14) & 1) == 0 )
      {
        v8 = *v7;
        *v7 = *(_QWORD *)v9;
        *(_QWORD *)v9 = 0LL;
        RtlpFreeHandleForAtom(a1, v8);
        RtlpSysVolFree(v9);
      }
      else
      {
        v7 = (__int64 *)*v7;
      }
    }
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
  return 0LL;
}
