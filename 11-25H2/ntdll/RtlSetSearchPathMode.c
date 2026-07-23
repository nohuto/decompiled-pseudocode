/*
 * XREFs of RtlSetSearchPathMode @ 0x1800F4950
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

NTSTATUS __cdecl RtlSetSearchPathMode(ULONG Flags)
{
  ULONG v2; // eax
  bool v3; // zf
  NTSTATUS v4; // esi
  _QWORD *v5; // rdi

  if ( (Flags & 0xFFFE7FFE) != 0 )
    return -1073741811;
  v2 = Flags & 0x10000;
  if ( (Flags & 1) != 0 )
  {
    v3 = v2 == 0;
  }
  else
  {
    if ( !v2 )
      return -1073741811;
    v3 = (Flags & 0x8000) == 0;
  }
  if ( !v3 )
    return -1073741811;
  RtlAcquireSRWLockExclusive(&stru_1801D43B8);
  if ( (_bittest(&RtlpSearchPathMode, 0xFu) & ((Flags & 0x8000) == 0)) != 0 )
  {
    v4 = -1073741790;
  }
  else
  {
    RtlpSearchPathMode = Flags;
    v4 = 0;
  }
  RtlReleaseSRWLockExclusive(&stru_1801D43B8);
  if ( v4 >= 0 )
  {
    RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
    v5 = (_QWORD *)RtlpSearchPath;
    RtlpSearchPath = 0LL;
    if ( v5 )
    {
      v3 = v5[10]-- == 1LL;
      if ( !v3 )
        v5 = 0LL;
    }
    else
    {
      v5 = 0LL;
    }
    RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
    if ( v5 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  }
  return v4;
}
