/*
 * XREFs of RtlDestroyAtomTable @ 0x180114540
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpLockAtomTable @ 0x1800AEA00 (RtlpLockAtomTable.c)
 *     RtlDestroyHandleTable @ 0x180110BF0 (RtlDestroyHandleTable.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlDestroyAtomTable(char *a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  unsigned int v5; // ebp
  _QWORD **i; // rsi
  _QWORD *v7; // rdi
  _QWORD *v8; // rcx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 1, 0xFFFFFFFF) == 1 )
  {
    if ( !RtlpLockAtomTable((__int64)a1, a2, a3) )
      return 3221225485LL;
    v5 = 0;
    for ( i = (_QWORD **)(a1 + 72); v5 < *((_DWORD *)a1 + 16); ++v5 )
    {
      v7 = *i;
      *i++ = 0LL;
      while ( 1 )
      {
        v8 = v7;
        if ( !v7 )
          break;
        v7 = (_QWORD *)*v7;
        *v8 = 0LL;
        RtlpSysVolFree((__int64)v8);
      }
    }
    *(_DWORD *)a1 = 0;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1 + 1);
    RtlDestroyHandleTable((__int64)(a1 + 16));
    memset_thunk_772440563353939046(a1, 0, 0x50uLL);
    RtlpSysVolFree((__int64)a1);
  }
  return 0LL;
}
