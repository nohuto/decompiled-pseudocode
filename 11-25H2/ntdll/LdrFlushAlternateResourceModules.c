/*
 * XREFs of LdrFlushAlternateResourceModules @ 0x180110920
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x180163760 (NtUnmapViewOfSection.c)
 */

char LdrFlushAlternateResourceModules()
{
  unsigned int i; // ebx
  char *v1; // rdi
  __int64 v2; // rdx
  void *v3; // rdx
  void *v4; // rcx

  RtlAcquireSRWLockExclusive(&MuiCacheSWRLock);
  if ( AlternateResourceModuleCount )
  {
    for ( i = 0; i < AlternateResourceModuleCount; ++i )
    {
      v1 = (char *)AlternateResourceModules + 64 * (unsigned __int64)i;
      v2 = *((_QWORD *)v1 + 4);
      if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        v3 = (void *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
        if ( *((_DWORD *)v1 + 14) == -1073741799 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
        else
          NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v3);
        *((_QWORD *)v1 + 4) = 0LL;
        v4 = (void *)*((_QWORD *)v1 + 5);
        if ( v4 )
        {
          NtClose(v4);
          *((_QWORD *)v1 + 5) = 0LL;
        }
      }
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, AlternateResourceModules);
    AlternateResourceModules = 0LL;
    AlternateResourceModuleCount = 0;
    AltResMemBlockCount = 0;
  }
  RtlReleaseSRWLockExclusive(&MuiCacheSWRLock);
  return 1;
}
