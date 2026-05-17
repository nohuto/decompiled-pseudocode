/*
 * XREFs of RtlSetSearchPathMode @ 0x1800F2DE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall RtlSetSearchPathMode(int a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  int v4; // eax
  bool v5; // zf
  int v6; // esi
  volatile signed __int32 **v7; // rdx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rdi

  if ( (a1 & 0xFFFE7FFE) != 0 )
    return 3221225485LL;
  v4 = a1 & 0x10000;
  if ( (a1 & 1) != 0 )
  {
    v5 = v4 == 0;
  }
  else
  {
    if ( !v4 )
      return 3221225485LL;
    v5 = (a1 & 0x8000) == 0;
  }
  if ( !v5 )
    return 3221225485LL;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&qword_1801D2378, a2, a3);
  if ( (_bittest(&RtlpSearchPathMode, 0xFu) & ((a1 & 0x8000) == 0)) != 0 )
  {
    v6 = -1073741790;
  }
  else
  {
    RtlpSearchPathMode = a1;
    v6 = 0;
  }
  RtlReleaseSRWLockExclusive(&qword_1801D2378);
  if ( v6 >= 0 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpCachedPathLock, v7, v8);
    v9 = RtlpSearchPath;
    RtlpSearchPath = 0LL;
    if ( v9 )
    {
      v5 = (*(_QWORD *)(v9 + 80))-- == 1LL;
      if ( !v5 )
        v9 = 0LL;
    }
    else
    {
      v9 = 0LL;
    }
    RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
    if ( v9 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v9);
  }
  return (unsigned int)v6;
}
