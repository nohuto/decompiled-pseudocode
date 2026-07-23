/*
 * XREFs of RtlDeregisterSecureMemoryCacheCallback @ 0x180145E20
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

NTSTATUS __cdecl RtlDeregisterSecureMemoryCacheCallback(PRTL_SECURE_MEMORY_CACHE_CALLBACK Callback)
{
  PRTL_SECURE_MEMORY_CACHE_CALLBACK *i; // rbx
  PRTL_SECURE_MEMORY_CACHE_CALLBACK v4; // rdx
  PVOID *v5; // rax
  NTSTATUS result; // eax

  RtlAcquireSRWLockExclusive(&RtlpSecMemLock);
  for ( i = (PRTL_SECURE_MEMORY_CACHE_CALLBACK *)RtlpSecMemListHead; ; i = (PRTL_SECURE_MEMORY_CACHE_CALLBACK *)*i )
  {
    if ( i == (PRTL_SECURE_MEMORY_CACHE_CALLBACK *)&RtlpSecMemListHead )
    {
      RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
      LOBYTE(result) = 0;
      return result;
    }
    if ( i[3] == Callback )
      break;
  }
  if ( (*((_DWORD *)i + 4))-- == 1 )
  {
    v4 = *i;
    if ( *((PRTL_SECURE_MEMORY_CACHE_CALLBACK **)*i + 1) != i || (v5 = (PVOID *)i[1], *v5 != i) )
      __fastfail(3u);
    *v5 = v4;
    *((_QWORD *)v4 + 1) = v5;
    RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
    result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, i);
  }
  else
  {
    RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
  }
  LOBYTE(result) = 1;
  return result;
}
