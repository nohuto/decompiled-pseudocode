/*
 * XREFs of LdrFlushAlternateResourceModules @ 0x18010DE50
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x1801621D0 (NtUnmapViewOfSection.c)
 */

char __fastcall LdrFlushAlternateResourceModules(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  unsigned int i; // ebx
  unsigned __int64 v4; // rdi
  __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  void *v7; // rcx

  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&MuiCacheSWRLock, a2, a3);
  if ( AlternateResourceModuleCount )
  {
    for ( i = 0; i < AlternateResourceModuleCount; ++i )
    {
      v4 = AlternateResourceModules + ((unsigned __int64)i << 6);
      v5 = *(_QWORD *)(v4 + 32);
      if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        v6 = v5 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( *(_DWORD *)(v4 + 56) == -1073741799 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
        else
          NtUnmapViewOfSection(-1LL);
        *(_QWORD *)(v4 + 32) = 0LL;
        v7 = *(void **)(v4 + 40);
        if ( v7 )
        {
          NtClose(v7);
          *(_QWORD *)(v4 + 40) = 0LL;
        }
      }
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, AlternateResourceModules);
    AlternateResourceModules = 0LL;
    AlternateResourceModuleCount = 0;
    AltResMemBlockCount = 0;
  }
  RtlReleaseSRWLockExclusive(&MuiCacheSWRLock);
  return 1;
}
