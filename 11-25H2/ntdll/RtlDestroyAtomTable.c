/*
 * XREFs of RtlDestroyAtomTable @ 0x1801174F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     RtlpLockAtomTable @ 0x1800682F0 (RtlpLockAtomTable.c)
 *     RtlDestroyHandleTable @ 0x180113A60 (RtlDestroyHandleTable.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlDestroyAtomTable(char *a1)
{
  unsigned int v3; // ebp
  _QWORD **i; // rsi
  _QWORD *v5; // rdi
  _QWORD *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 1, 0xFFFFFFFF) == 1 )
  {
    if ( !RtlpLockAtomTable((__int64)a1) )
      return 3221225485LL;
    v3 = 0;
    for ( i = (_QWORD **)(a1 + 72); v3 < *((_DWORD *)a1 + 16); ++v3 )
    {
      v5 = *i;
      *i++ = 0LL;
      while ( 1 )
      {
        v6 = v5;
        if ( !v5 )
          break;
        v5 = (_QWORD *)*v5;
        *v6 = 0LL;
        RtlpSysVolFree((__int64)v6);
      }
    }
    *(_DWORD *)a1 = 0;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1 + 1);
    RtlDestroyHandleTable((__int64)(a1 + 16), v7, v8, v9);
    memset_thunk_772440563353939046(a1, 0, 0x50uLL);
    RtlpSysVolFree((__int64)a1);
  }
  return 0LL;
}
