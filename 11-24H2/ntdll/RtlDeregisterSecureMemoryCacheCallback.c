/*
 * XREFs of RtlDeregisterSecureMemoryCacheCallback @ 0x1801448B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 */

char __fastcall RtlDeregisterSecureMemoryCacheCallback(void *a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  _UNKNOWN **i; // rbx
  _QWORD *v6; // rdx
  void **v7; // rax

  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpSecMemLock, a2, a3);
  for ( i = (_UNKNOWN **)RtlpSecMemListHead; ; i = (_UNKNOWN **)*i )
  {
    if ( i == &RtlpSecMemListHead )
    {
      RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
      return 0;
    }
    if ( i[3] == a1 )
      break;
  }
  if ( (*((_DWORD *)i + 4))-- == 1 )
  {
    v6 = *i;
    if ( *((_UNKNOWN ***)*i + 1) != i || (v7 = (void **)i[1], *v7 != i) )
      __fastfail(3u);
    *v7 = v6;
    v6[1] = v7;
    RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)i);
  }
  else
  {
    RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
  }
  return 1;
}
