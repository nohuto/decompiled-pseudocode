/*
 * XREFs of RtlLockModuleSection @ 0x1800AAAE0
 * Callers:
 *     RtlpRegisterLockedMemoryZone @ 0x1800AA8C8 (RtlpRegisterLockedMemoryZone.c)
 *     RtlpRegisterLockedMemoryBlockLookaside @ 0x1800AA998 (RtlpRegisterLockedMemoryBlockLookaside.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlpLocateModuleSectionInLockedSectionList @ 0x1800AAC10 (RtlpLocateModuleSectionInLockedSectionList.c)
 *     LdrEnumerateLoadedModules @ 0x1800AAC50 (LdrEnumerateLoadedModules.c)
 */

NTSTATUS __cdecl RtlLockModuleSection(PVOID Address)
{
  __int64 ModuleSectionInLockedSectionList; // rax
  _OWORD *v3; // rbx
  _OWORD *Heap; // rax
  int v5; // edi
  _QWORD *v6; // rax
  __int128 Context; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+30h] [rbp-18h]

  Context = 0LL;
  v9 = 0LL;
  RtlAcquireSRWLockExclusive(&RtlpLockedSectionListLock);
  ModuleSectionInLockedSectionList = RtlpLocateModuleSectionInLockedSectionList(Address);
  v3 = (_OWORD *)ModuleSectionInLockedSectionList;
  if ( ModuleSectionInLockedSectionList )
  {
    ++*(_DWORD *)(ModuleSectionInLockedSectionList + 32);
    v5 = 0;
  }
  else
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x28uLL);
    v3 = Heap;
    if ( Heap )
    {
      *Heap = 0LL;
      Heap[1] = 0LL;
      *((_QWORD *)Heap + 4) = 0LL;
      *(_QWORD *)&Context = Address;
      DWORD2(Context) = -1073741275;
      v5 = LdrEnumerateLoadedModules(0, RtlpModuleEnumeratorCallback, &Context);
      if ( v5 >= 0 )
      {
        v5 = DWORD2(Context);
        if ( (SDWORD2(Context) & 0x80000000) == 0 )
        {
          v3[1] = v9;
          *((_DWORD *)v3 + 8) = 1;
          v6 = off_1801CB550;
          if ( *off_1801CB550 != (_UNKNOWN *)&RtlpLockedSectionList )
            __fastfail(3u);
          *(_QWORD *)v3 = &RtlpLockedSectionList;
          *((_QWORD *)v3 + 1) = v6;
          *v6 = v3;
          off_1801CB550 = (_UNKNOWN **)v3;
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
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  return v5;
}
