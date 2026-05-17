/*
 * XREFs of LdrUnloadAlternateResourceModuleEx @ 0x180061800
 * Callers:
 *     LdrpUnloadNode @ 0x18001CA60 (LdrpUnloadNode.c)
 *     LdrpGetFromMUIMemCache @ 0x1800615D0 (LdrpGetFromMUIMemCache.c)
 *     LdrUnloadAlternateResourceModule @ 0x1800FB340 (LdrUnloadAlternateResourceModule.c)
 *     LdrResRelease @ 0x18010BB50 (LdrResRelease.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlReAllocateHeap @ 0x1800A0E30 (RtlReAllocateHeap.c)
 *     LdrpRemoveAlternateModuleCacheItem @ 0x1800F9E3C (LdrpRemoveAlternateModuleCacheItem.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x1801621D0 (NtUnmapViewOfSection.c)
 */

char __fastcall LdrUnloadAlternateResourceModuleEx(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  __int16 v3; // r12
  char v5; // r15
  int v6; // edi
  int v7; // ebx
  __int64 v8; // rsi
  _QWORD *v9; // r15
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  void *v12; // rcx
  unsigned int v13; // ecx
  __int64 Heap; // rax
  int v16; // [rsp+24h] [rbp-24h]
  __int64 v17; // [rsp+50h] [rbp+8h]

  v3 = (__int16)a2;
  v5 = 0;
  if ( !a1 )
    return 0;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&MuiCacheSWRLock, a2, a3);
  if ( AlternateResourceModuleCount )
  {
    v6 = AlternateResourceModuleCount;
    v16 = AlternateResourceModuleCount;
    while ( v6 > 0 )
    {
      v7 = v6 - 1;
      v8 = AlternateResourceModules + ((__int64)(v6 - 1) << 6);
      if ( *(_QWORD *)(v8 + 8) == a1 )
      {
        v17 = AlternateResourceModules + ((__int64)v7 << 6);
        v9 = (_QWORD *)(v8 + 32);
        v10 = *(_QWORD *)(v8 + 32);
        if ( v10 && (!v3 || v3 == *(_WORD *)v8) && v10 != -1 )
        {
          v11 = v10 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( *(_DWORD *)(v8 + 56) == -1073741799 )
          {
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11);
            v6 = v16;
            v8 = v17;
          }
          else
          {
            NtUnmapViewOfSection(-1LL);
          }
          v12 = *(void **)(v8 + 40);
          if ( v12 )
          {
            NtClose(v12);
            *(_QWORD *)(v8 + 40) = 0LL;
          }
          *v9 = 0LL;
        }
        if ( v6 != AlternateResourceModuleCount )
          LdrpRemoveAlternateModuleCacheItem((unsigned int)(v6 - 1));
        v13 = AlternateResourceModuleCount - 1;
        AlternateResourceModuleCount = v13;
        if ( v13 )
        {
          if ( v13 < AltResMemBlockCount - 32 )
          {
            Heap = RtlReAllocateHeap(
                     NtCurrentPeb()->ProcessHeap,
                     0LL,
                     AlternateResourceModules,
                     (unsigned __int64)(unsigned int)(AltResMemBlockCount - 32) << 6);
            if ( !Heap )
            {
              v5 = 0;
              break;
            }
            AlternateResourceModules = Heap;
            AltResMemBlockCount -= 32;
          }
          v5 = 1;
        }
        else
        {
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, AlternateResourceModules);
          AlternateResourceModules = 0LL;
          AltResMemBlockCount = 0;
          v5 = 1;
        }
      }
      v6 = v7;
      v16 = v7;
    }
  }
  else
  {
    v5 = 1;
  }
  RtlReleaseSRWLockExclusive(&MuiCacheSWRLock);
  return v5;
}
