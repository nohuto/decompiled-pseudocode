/*
 * XREFs of RtlDeregisterSecureMemoryCacheCallback @ 0x180145E20
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

char __fastcall RtlDeregisterSecureMemoryCacheCallback(void *a1)
{
  _UNKNOWN **i; // rbx
  _QWORD *v4; // rdx
  void **v5; // rax
  __int64 v6; // r9

  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpSecMemLock);
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
    v4 = *i;
    if ( *((_UNKNOWN ***)*i + 1) != i || (v5 = (void **)i[1], *v5 != i) )
      __fastfail(3u);
    *v5 = v4;
    v4[1] = v5;
    RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)i, v6);
  }
  else
  {
    RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
  }
  return 1;
}
