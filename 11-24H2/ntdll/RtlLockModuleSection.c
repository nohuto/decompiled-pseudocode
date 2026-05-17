/*
 * XREFs of RtlLockModuleSection @ 0x180001DD0
 * Callers:
 *     RtlpRegisterLockedMemoryZone @ 0x180001BB8 (RtlpRegisterLockedMemoryZone.c)
 *     RtlpRegisterLockedMemoryBlockLookaside @ 0x180001C88 (RtlpRegisterLockedMemoryBlockLookaside.c)
 * Callees:
 *     RtlpLocateModuleSectionInLockedSectionList @ 0x180001F00 (RtlpLocateModuleSectionInLockedSectionList.c)
 *     LdrEnumerateLoadedModules @ 0x180001F90 (LdrEnumerateLoadedModules.c)
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall RtlLockModuleSection(__int64 a1)
{
  __int64 ModuleSectionInLockedSectionList; // rax
  __int64 v3; // rbx
  __int64 Heap; // rax
  int v5; // edi
  __int64 *v6; // rax
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+30h] [rbp-18h]

  v8 = 0LL;
  v9 = 0LL;
  RtlAcquireSRWLockExclusive(&RtlpLockedSectionListLock);
  ModuleSectionInLockedSectionList = RtlpLocateModuleSectionInLockedSectionList(a1);
  v3 = ModuleSectionInLockedSectionList;
  if ( ModuleSectionInLockedSectionList )
  {
    ++*(_DWORD *)(ModuleSectionInLockedSectionList + 32);
    v5 = 0;
  }
  else
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, 40LL);
    v3 = Heap;
    if ( Heap )
    {
      *(_OWORD *)Heap = 0LL;
      *(_OWORD *)(Heap + 16) = 0LL;
      *(_QWORD *)(Heap + 32) = 0LL;
      *(_QWORD *)&v8 = a1;
      DWORD2(v8) = -1073741275;
      v5 = LdrEnumerateLoadedModules(0LL, RtlpModuleEnumeratorCallback, &v8);
      if ( v5 >= 0 )
      {
        v5 = DWORD2(v8);
        if ( (SDWORD2(v8) & 0x80000000) == 0 )
        {
          *(_OWORD *)(v3 + 16) = v9;
          *(_DWORD *)(v3 + 32) = 1;
          v6 = (__int64 *)off_1801CC550;
          if ( *off_1801CC550 != (_UNKNOWN *)&RtlpLockedSectionList )
            __fastfail(3u);
          *(_QWORD *)v3 = &RtlpLockedSectionList;
          *(_QWORD *)(v3 + 8) = v6;
          *v6 = v3;
          off_1801CC550 = (_UNKNOWN **)v3;
        }
      }
    }
    else
    {
      v5 = -1073741670;
    }
  }
  RtlReleaseSRWLockExclusive(&RtlpLockedSectionListLock);
  if ( v5 < 0 && v3 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v3);
  return (unsigned int)v5;
}
