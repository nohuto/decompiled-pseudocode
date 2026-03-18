/*
 * XREFs of LOCK_PAGE_TABLE_COMMITMENT @ 0x140384DF0
 * Callers:
 *     MiPerformVadSplitting @ 0x1402A3F44 (MiPerformVadSplitting.c)
 *     MiSetProtectionOnSection @ 0x14037E180 (MiSetProtectionOnSection.c)
 *     MiCommitExistingVad @ 0x1403840D0 (MiCommitExistingVad.c)
 *     MiDeleteEmptyPageTables @ 0x1403D7BA0 (MiDeleteEmptyPageTables.c)
 *     MmOutSwapVirtualAddresses @ 0x1403D8A60 (MmOutSwapVirtualAddresses.c)
 *     MmOutSwapWorkingSet @ 0x1403D8E1C (MmOutSwapWorkingSet.c)
 *     MiSplitPrivatePage @ 0x1404672C0 (MiSplitPrivatePage.c)
 *     MiCommitPageTableRangesForVad @ 0x140489444 (MiCommitPageTableRangesForVad.c)
 *     MiSplitReducedCommitClonePage @ 0x1404F6C24 (MiSplitReducedCommitClonePage.c)
 *     MmAssignProcessToJob @ 0x1408D9124 (MmAssignProcessToJob.c)
 *     MiFreeToSubAllocatedRegion @ 0x1408F63EC (MiFreeToSubAllocatedRegion.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1408F9D30 (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1408FA704 (MiAllocateFromSubAllocatedRegion.c)
 *     MiInsertVadCharges @ 0x140900770 (MiInsertVadCharges.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

__int64 *__fastcall LOCK_PAGE_TABLE_COMMITMENT(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rbx
  __int64 *result; // rax
  __int64 *v4; // rdi

  --*(_WORD *)(a1 + 486);
  v2 = (unsigned __int64 *)(a2 + 608);
  result = KeAbPreAcquire(a2 + 608, 0LL);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    result = (__int64 *)ExfAcquirePushLockExclusiveEx(v2, result, (__int64)v2);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  return result;
}
