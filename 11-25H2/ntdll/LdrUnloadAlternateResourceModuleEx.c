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

char __fastcall LdrUnloadAlternateResourceModuleEx(__int64 a1, __int16 a2)
{
  char v4; // r15
  int v5; // edi
  int v6; // ebx
  __int64 v7; // rsi
  _QWORD *v8; // r15
  __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  void *v11; // rcx
  unsigned int v12; // ecx
  __int64 Heap; // rax
  int v15; // [rsp+20h] [rbp-28h]
  int v16; // [rsp+24h] [rbp-24h]
  __int64 v17; // [rsp+50h] [rbp+8h]

  v4 = 0;
  if ( !a1 )
    return 0;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&MuiCacheSWRLock);
  if ( AlternateResourceModuleCount )
  {
    v5 = AlternateResourceModuleCount;
    v16 = AlternateResourceModuleCount;
    while ( v5 > 0 )
    {
      v6 = v5 - 1;
      v7 = AlternateResourceModules + ((__int64)(v5 - 1) << 6);
      if ( *(_QWORD *)(v7 + 8) == a1 )
      {
        v17 = AlternateResourceModules + ((__int64)v6 << 6);
        v8 = (_QWORD *)(v7 + 32);
        v9 = *(_QWORD *)(v7 + 32);
        if ( v9 && (!a2 || a2 == *(_WORD *)v7) && v9 != -1 )
        {
          v10 = v9 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( *(_DWORD *)(v7 + 56) == -1073741799 )
          {
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v10);
            v5 = v16;
            v7 = v17;
          }
          else
          {
            NtUnmapViewOfSection(-1LL);
          }
          v11 = *(void **)(v7 + 40);
          if ( v11 )
          {
            NtClose(v11);
            *(_QWORD *)(v7 + 40) = 0LL;
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
                     0LL,
                     AlternateResourceModules,
                     (unsigned __int64)(unsigned int)(AltResMemBlockCount - 32) << 6,
                     v15);
            if ( !Heap )
            {
              v4 = 0;
              break;
            }
            AlternateResourceModules = Heap;
            AltResMemBlockCount -= 32;
          }
          v4 = 1;
          LOBYTE(v15) = 1;
        }
        else
        {
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, AlternateResourceModules);
          AlternateResourceModules = 0LL;
          AltResMemBlockCount = 0;
          v4 = 1;
          LOBYTE(v15) = 1;
        }
      }
      v5 = v6;
      v16 = v6;
    }
  }
  else
  {
    v4 = 1;
  }
  RtlReleaseSRWLockExclusive(&MuiCacheSWRLock);
  return v4;
}
