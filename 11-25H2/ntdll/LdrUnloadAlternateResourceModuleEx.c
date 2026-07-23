/*
 * XREFs of LdrUnloadAlternateResourceModuleEx @ 0x18001D460
 * Callers:
 *     LdrpGetFromMUIMemCache @ 0x18001D230 (LdrpGetFromMUIMemCache.c)
 *     LdrpUnloadNode @ 0x1800465A0 (LdrpUnloadNode.c)
 *     LdrUnloadAlternateResourceModule @ 0x1800FD570 (LdrUnloadAlternateResourceModule.c)
 *     LdrResRelease @ 0x18010E1A0 (LdrResRelease.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlReAllocateHeap @ 0x180029DE0 (RtlReAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     LdrpRemoveAlternateModuleCacheItem @ 0x1800FBD3C (LdrpRemoveAlternateModuleCacheItem.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x180163760 (NtUnmapViewOfSection.c)
 */

BOOLEAN __cdecl LdrUnloadAlternateResourceModuleEx(PVOID DllHandle, ULONG Flags)
{
  __int16 v2; // r12
  BOOLEAN v4; // r15
  int v5; // edi
  int v6; // ebx
  char *v7; // rsi
  _QWORD *v8; // r15
  __int64 v9; // rdx
  void *v10; // rdx
  void *v11; // rcx
  unsigned int v12; // ecx
  PVOID Heap; // rax
  int v15; // [rsp+24h] [rbp-24h]
  char *v16; // [rsp+50h] [rbp+8h]

  v2 = Flags;
  v4 = 0;
  if ( !DllHandle )
    return 0;
  RtlAcquireSRWLockExclusive(&MuiCacheSWRLock);
  if ( AlternateResourceModuleCount )
  {
    v5 = AlternateResourceModuleCount;
    v15 = AlternateResourceModuleCount;
    while ( v5 > 0 )
    {
      v6 = v5 - 1;
      v7 = (char *)AlternateResourceModules + 64 * (__int64)(v5 - 1);
      if ( *((PVOID *)v7 + 1) == DllHandle )
      {
        v16 = (char *)AlternateResourceModules + 64 * (__int64)v6;
        v8 = v7 + 32;
        v9 = *((_QWORD *)v7 + 4);
        if ( v9 && (!v2 || v2 == *(_WORD *)v7) && v9 != -1 )
        {
          v10 = (void *)(v9 & 0xFFFFFFFFFFFFFFFCuLL);
          if ( *((_DWORD *)v7 + 14) == -1073741799 )
          {
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
            v5 = v15;
            v7 = v16;
          }
          else
          {
            NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v10);
          }
          v11 = (void *)*((_QWORD *)v7 + 5);
          if ( v11 )
          {
            NtClose(v11);
            *((_QWORD *)v7 + 5) = 0LL;
          }
          *v8 = 0LL;
        }
        if ( v5 != AlternateResourceModuleCount )
          LdrpRemoveAlternateModuleCacheItem((unsigned int)(v5 - 1));
        v12 = AlternateResourceModuleCount - 1;
        AlternateResourceModuleCount = v12;
        if ( v12 )
        {
          if ( v12 < AltResMemBlockCount - 32 )
          {
            Heap = RtlReAllocateHeap(
                     NtCurrentPeb()->ProcessHeap,
                     0,
                     AlternateResourceModules,
                     (unsigned __int64)(unsigned int)(AltResMemBlockCount - 32) << 6);
            if ( !Heap )
            {
              v4 = 0;
              break;
            }
            AlternateResourceModules = Heap;
            AltResMemBlockCount -= 32;
          }
          v4 = 1;
        }
        else
        {
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, AlternateResourceModules);
          AlternateResourceModules = 0LL;
          AltResMemBlockCount = 0;
          v4 = 1;
        }
      }
      v5 = v6;
      v15 = v6;
    }
  }
  else
  {
    v4 = 1;
  }
  RtlReleaseSRWLockExclusive(&MuiCacheSWRLock);
  return v4;
}
