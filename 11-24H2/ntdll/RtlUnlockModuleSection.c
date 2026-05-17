/*
 * XREFs of RtlUnlockModuleSection @ 0x180001D20
 * Callers:
 *     RtlpUnregisterLockedMemoryZone @ 0x18000197C (RtlpUnregisterLockedMemoryZone.c)
 *     RtlpUnregisterLockedMemoryBlockLookaside @ 0x180001C2C (RtlpUnregisterLockedMemoryBlockLookaside.c)
 *     RtlpRegisterLockedMemoryBlockLookaside @ 0x180001C88 (RtlpRegisterLockedMemoryBlockLookaside.c)
 * Callees:
 *     RtlpLocateModuleSectionInLockedSectionList @ 0x180001F00 (RtlpLocateModuleSectionInLockedSectionList.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     ZwUnlockVirtualMemory @ 0x180165840 (ZwUnlockVirtualMemory.c)
 */

__int64 __fastcall RtlUnlockModuleSection(__int64 a1)
{
  __int64 ModuleSectionInLockedSectionList; // rax
  unsigned int v3; // edi
  __int64 v4; // rbx
  __int64 v6; // rcx
  _QWORD *v7; // rax

  RtlAcquireSRWLockExclusive(&RtlpLockedSectionListLock);
  ModuleSectionInLockedSectionList = RtlpLocateModuleSectionInLockedSectionList(a1);
  v3 = 0;
  v4 = ModuleSectionInLockedSectionList;
  if ( ModuleSectionInLockedSectionList )
  {
    if ( (*(_DWORD *)(ModuleSectionInLockedSectionList + 32))-- == 1 )
    {
      v6 = *(_QWORD *)ModuleSectionInLockedSectionList;
      if ( *(_QWORD *)(*(_QWORD *)ModuleSectionInLockedSectionList + 8LL) != ModuleSectionInLockedSectionList
        || (v7 = *(_QWORD **)(ModuleSectionInLockedSectionList + 8), *v7 != v4) )
      {
        __fastfail(3u);
      }
      *v7 = v6;
      *(_QWORD *)(v6 + 8) = v7;
      v3 = ZwUnlockVirtualMemory(-1LL, v4 + 16, v4 + 24, 1LL);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v4);
    }
  }
  else
  {
    v3 = -1073741782;
  }
  RtlReleaseSRWLockExclusive(&RtlpLockedSectionListLock);
  return v3;
}
