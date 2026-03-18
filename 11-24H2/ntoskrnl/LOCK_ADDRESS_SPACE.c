/*
 * XREFs of LOCK_ADDRESS_SPACE @ 0x140405F18
 * Callers:
 *     MiWalkVaRange @ 0x14028A740 (MiWalkVaRange.c)
 *     MiLockAddressSpaceToo @ 0x140405808 (MiLockAddressSpaceToo.c)
 *     MiDeleteEmptyPageTables @ 0x140405978 (MiDeleteEmptyPageTables.c)
 *     MiBeginProcessClean @ 0x140405D10 (MiBeginProcessClean.c)
 *     MiCopyOnWriteCheckConditions @ 0x140406AD8 (MiCopyOnWriteCheckConditions.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14042D608 (MiReleaseOutSwappedProcessCommit.c)
 *     MiDeleteFinalPageTables @ 0x14045BA24 (MiDeleteFinalPageTables.c)
 *     MiReleaseCommitForResetPages @ 0x14066A7E8 (MiReleaseCommitForResetPages.c)
 *     MiAllocateEnclaveVad @ 0x1407F6D40 (MiAllocateEnclaveVad.c)
 *     MiResizeAweBitMap @ 0x1407F99A0 (MiResizeAweBitMap.c)
 *     NtFreeUserPhysicalPages @ 0x1407F9BD0 (NtFreeUserPhysicalPages.c)
 *     MiReserveUserMemory @ 0x1408DFE98 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1408E0820 (MiMapViewOfDataSection.c)
 *     MiMapViewOfImageSection @ 0x1408E3418 (MiMapViewOfImageSection.c)
 *     MiLockVadRange @ 0x1408E8B10 (MiLockVadRange.c)
 *     MiInsertProcessVads @ 0x1408F8BD8 (MiInsertProcessVads.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1409C33C4 (MiAllocateFromSubAllocatedRegion.c)
 *     MiMapLockedPagesInUserSpace @ 0x1409C3AE8 (MiMapLockedPagesInUserSpace.c)
 *     MmCleanProcessAddressSpace @ 0x140A06E44 (MmCleanProcessAddressSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x140A135A0 (MiMapViewOfPhysicalSection.c)
 *     MiInitializeVadCellBitMap @ 0x140A37938 (MiInitializeVadCellBitMap.c)
 *     MiInitializeVadBitMap @ 0x140A3A8FC (MiInitializeVadBitMap.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall LOCK_ADDRESS_SPACE(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rdi
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  v2 = (unsigned __int64 *)(a2 + 600);
  v4 = KeAbPreAcquire(a2 + 600, 0LL);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, (__int64)v4, (__int64)v2);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  result = *(_DWORD *)(a1 + 1448) | 1u;
  *(_DWORD *)(a1 + 1448) = result;
  return result;
}
