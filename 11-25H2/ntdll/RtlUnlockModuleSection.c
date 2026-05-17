/*
 * XREFs of RtlUnlockModuleSection @ 0x1800F02C0
 * Callers:
 *     RtlpUnregisterLockedMemoryBlockLookaside @ 0x1800F01CC (RtlpUnregisterLockedMemoryBlockLookaside.c)
 *     RtlpRegisterLockedMemoryBlockLookaside @ 0x1800F0228 (RtlpRegisterLockedMemoryBlockLookaside.c)
 *     RtlpUnregisterLockedMemoryZone @ 0x1800F068C (RtlpUnregisterLockedMemoryZone.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpLocateModuleSectionInLockedSectionList @ 0x1800F04A0 (RtlpLocateModuleSectionInLockedSectionList.c)
 *     ZwUnlockVirtualMemory @ 0x180166DD0 (ZwUnlockVirtualMemory.c)
 */

__int64 __fastcall RtlUnlockModuleSection(__int64 a1)
{
  __int64 ModuleSectionInLockedSectionList; // rax
  unsigned int v3; // edi
  __int64 v4; // rbx
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v9; // r9

  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpLockedSectionListLock);
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
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4, v9);
    }
  }
  else
  {
    v3 = -1073741782;
  }
  RtlReleaseSRWLockExclusive(&RtlpLockedSectionListLock);
  return v3;
}
