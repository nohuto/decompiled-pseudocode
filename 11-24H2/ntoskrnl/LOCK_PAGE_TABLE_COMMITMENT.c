/*
 * XREFs of LOCK_PAGE_TABLE_COMMITMENT @ 0x1404065E0
 * Callers:
 *     MiSetProtectionOnSection @ 0x140236630 (MiSetProtectionOnSection.c)
 *     MmOutSwapVirtualAddresses @ 0x140404108 (MmOutSwapVirtualAddresses.c)
 *     MmOutSwapWorkingSet @ 0x140404630 (MmOutSwapWorkingSet.c)
 *     MiCommitPageTableRangesForVad @ 0x1404050D8 (MiCommitPageTableRangesForVad.c)
 *     MiSplitPrivatePage @ 0x1404051C4 (MiSplitPrivatePage.c)
 *     MiDeleteEmptyPageTables @ 0x140405978 (MiDeleteEmptyPageTables.c)
 *     MiPerformVadSplitting @ 0x140405FC8 (MiPerformVadSplitting.c)
 *     MiSplitReducedCommitClonePage @ 0x1404F9378 (MiSplitReducedCommitClonePage.c)
 *     MiFreeToSubAllocatedRegion @ 0x1408DB54C (MiFreeToSubAllocatedRegion.c)
 *     MiInsertVadCharges @ 0x1408E2418 (MiInsertVadCharges.c)
 *     MmAssignProcessToJob @ 0x1408E8398 (MmAssignProcessToJob.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1409C33C4 (MiAllocateFromSubAllocatedRegion.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1409C3660 (MiAllocateNewSubAllocatedRegion.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall LOCK_PAGE_TABLE_COMMITMENT(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rdi
  __int64 result; // rax
  __int64 v4; // rbx

  --*(_WORD *)(a1 + 486);
  v2 = (unsigned __int64 *)(a2 + 608);
  result = (__int64)KeAbPreAcquire(a2 + 608, 0LL);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(v2, result, (__int64)v2);
  if ( v4 )
    *(_BYTE *)(v4 + 10) = 1;
  return result;
}
