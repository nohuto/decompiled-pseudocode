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

NTSTATUS __cdecl RtlDestroyAtomTable(PVOID AtomTableHandle)
{
  unsigned int v3; // ebp
  _QWORD **i; // rsi
  _QWORD *v5; // rdi
  _QWORD *v6; // rcx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)AtomTableHandle + 1, 0xFFFFFFFF) == 1 )
  {
    if ( !RtlpLockAtomTable((__int64)AtomTableHandle) )
      return -1073741811;
    v3 = 0;
    for ( i = (_QWORD **)((char *)AtomTableHandle + 72); v3 < *((_DWORD *)AtomTableHandle + 16); ++v3 )
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
        RtlpSysVolFree(v6);
      }
    }
    *(_DWORD *)AtomTableHandle = 0;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)AtomTableHandle + 1);
    RtlDestroyHandleTable((PRTL_HANDLE_TABLE)((char *)AtomTableHandle + 16));
    memset_thunk_772440563353939046(AtomTableHandle, 0, 0x50uLL);
    RtlpSysVolFree(AtomTableHandle);
  }
  return 0;
}
