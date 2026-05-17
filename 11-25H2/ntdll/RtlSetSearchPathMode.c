/*
 * XREFs of RtlSetSearchPathMode @ 0x1800F4950
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlSetSearchPathMode(int a1)
{
  int v2; // eax
  bool v3; // zf
  int v4; // esi
  __int64 v5; // rdi
  __int64 v6; // r9

  if ( (a1 & 0xFFFE7FFE) != 0 )
    return 3221225485LL;
  v2 = a1 & 0x10000;
  if ( (a1 & 1) != 0 )
  {
    v3 = v2 == 0;
  }
  else
  {
    if ( !v2 )
      return 3221225485LL;
    v3 = (a1 & 0x8000) == 0;
  }
  if ( !v3 )
    return 3221225485LL;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&qword_1801D43B8);
  if ( (_bittest(&RtlpSearchPathMode, 0xFu) & ((a1 & 0x8000) == 0)) != 0 )
  {
    v4 = -1073741790;
  }
  else
  {
    RtlpSearchPathMode = a1;
    v4 = 0;
  }
  RtlReleaseSRWLockExclusive(&qword_1801D43B8);
  if ( v4 >= 0 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpCachedPathLock);
    v5 = RtlpSearchPath;
    RtlpSearchPath = 0LL;
    if ( v5 )
    {
      v3 = (*(_QWORD *)(v5 + 80))-- == 1LL;
      if ( !v3 )
        v5 = 0LL;
    }
    else
    {
      v5 = 0LL;
    }
    RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
    if ( v5 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5, v6);
  }
  return (unsigned int)v4;
}
