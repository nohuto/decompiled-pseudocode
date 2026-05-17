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
  __int64 v0; // r9
  unsigned int i; // ebx
  unsigned __int64 v2; // rdi
  __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  void *v5; // rcx

  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&MuiCacheSWRLock);
  if ( AlternateResourceModuleCount )
  {
    for ( i = 0; i < AlternateResourceModuleCount; ++i )
    {
      v2 = AlternateResourceModules + ((unsigned __int64)i << 6);
      v3 = *(_QWORD *)(v2 + 32);
      if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        v4 = v3 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( *(_DWORD *)(v2 + 56) == -1073741799 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4, v0);
        else
          NtUnmapViewOfSection(-1LL);
        *(_QWORD *)(v2 + 32) = 0LL;
        v5 = *(void **)(v2 + 40);
        if ( v5 )
        {
          NtClose(v5);
          *(_QWORD *)(v2 + 40) = 0LL;
        }
      }
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, AlternateResourceModules, v0);
    AlternateResourceModules = 0LL;
    AlternateResourceModuleCount = 0;
    AltResMemBlockCount = 0;
  }
  RtlReleaseSRWLockExclusive(&MuiCacheSWRLock);
  return 1;
}
