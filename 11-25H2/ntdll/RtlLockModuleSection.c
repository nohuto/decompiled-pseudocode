/*
 * XREFs of RtlLockModuleSection @ 0x1800F0370
 * Callers:
 *     RtlpRegisterLockedMemoryZone @ 0x1800F0158 (RtlpRegisterLockedMemoryZone.c)
 *     RtlpRegisterLockedMemoryBlockLookaside @ 0x1800F0228 (RtlpRegisterLockedMemoryBlockLookaside.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpLocateModuleSectionInLockedSectionList @ 0x1800F04A0 (RtlpLocateModuleSectionInLockedSectionList.c)
 *     LdrEnumerateLoadedModules @ 0x1800F04E0 (LdrEnumerateLoadedModules.c)
 */

__int64 __fastcall RtlLockModuleSection(__int64 a1)
{
  __int64 ModuleSectionInLockedSectionList; // rax
  __int64 v3; // rbx
  __int64 Heap; // rax
  int v5; // edi
  __int64 *v6; // rax
  __int64 v7; // r9
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int128 v10; // [rsp+30h] [rbp-18h]

  v9 = 0LL;
  v10 = 0LL;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpLockedSectionListLock);
  ModuleSectionInLockedSectionList = RtlpLocateModuleSectionInLockedSectionList(a1);
  v3 = ModuleSectionInLockedSectionList;
  if ( ModuleSectionInLockedSectionList )
  {
    ++*(_DWORD *)(ModuleSectionInLockedSectionList + 32);
    v5 = 0;
  }
  else
  {
    Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 0, 0x28uLL);
    v3 = Heap;
    if ( Heap )
    {
      *(_OWORD *)Heap = 0LL;
      *(_OWORD *)(Heap + 16) = 0LL;
      *(_QWORD *)(Heap + 32) = 0LL;
      *(_QWORD *)&v9 = a1;
      DWORD2(v9) = -1073741275;
      v5 = LdrEnumerateLoadedModules(0LL, RtlpModuleEnumeratorCallback, &v9);
      if ( v5 >= 0 )
      {
        v5 = DWORD2(v9);
        if ( (SDWORD2(v9) & 0x80000000) == 0 )
        {
          *(_OWORD *)(v3 + 16) = v10;
          *(_DWORD *)(v3 + 32) = 1;
          v6 = (__int64 *)off_1801CE550;
          if ( *off_1801CE550 != (_UNKNOWN *)&RtlpLockedSectionList )
            __fastfail(3u);
          *(_QWORD *)v3 = &RtlpLockedSectionList;
          *(_QWORD *)(v3 + 8) = v6;
          *v6 = v3;
          off_1801CE550 = (_UNKNOWN **)v3;
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
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v3, v7);
  return (unsigned int)v5;
}
