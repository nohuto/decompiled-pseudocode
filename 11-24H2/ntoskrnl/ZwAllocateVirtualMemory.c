/*
 * XREFs of ZwAllocateVirtualMemory @ 0x1406A6710
 * Callers:
 *     PspWow64ThunkProcessParameters @ 0x140484934 (PspWow64ThunkProcessParameters.c)
 *     RtlpCreateHeap @ 0x1404D7334 (RtlpCreateHeap.c)
 *     RtlpStdExtendLowerWatermark @ 0x1405E8454 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x1405E853C (RtlpStdExtendUpperWatermark.c)
 *     RtlpExtendHeap @ 0x1405EC560 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x1405EC7B4 (RtlpFindAndCommitPages.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x1405ECF30 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlpInitializeHeapSegment @ 0x1405ED010 (RtlpInitializeHeapSegment.c)
 *     RtlpHpFixedHeapCommitRoutine @ 0x1406055A0 (RtlpHpFixedHeapCommitRoutine.c)
 *     DifZwAllocateVirtualMemoryWrapper @ 0x14063B890 (DifZwAllocateVirtualMemoryWrapper.c)
 *     VmpUpdateCommitStateMemoryRange @ 0x14064B5C0 (VmpUpdateCommitStateMemoryRange.c)
 *     DbgkUserReportWorkRoutine @ 0x140707610 (DbgkUserReportWorkRoutine.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x14079516C (SepAdtCopyToLsaSharedMemory.c)
 *     VmCreateMemoryProcess @ 0x14079E7D0 (VmCreateMemoryProcess.c)
 *     PspReserveAndCommitUserShadowStack @ 0x1408DE18C (PspReserveAndCommitUserShadowStack.c)
 *     PspSetupUserProcessAddressSpace @ 0x140907EE0 (PspSetupUserProcessAddressSpace.c)
 *     PspSchedulerSharedDataRegionSlotAllocate @ 0x1409137C4 (PspSchedulerSharedDataRegionSlotAllocate.c)
 *     EtwpFindUserBufferSpace @ 0x1409DA024 (EtwpFindUserBufferSpace.c)
 *     RtlCreateUserStack @ 0x1409E5C7C (RtlCreateUserStack.c)
 *     RtlpWow64CreateUserStack @ 0x140A1A87C (RtlpWow64CreateUserStack.c)
 *     MiCheckForUserStackOverflow @ 0x140A27F74 (MiCheckForUserStackOverflow.c)
 *     MiCheckShadowStackOverflow @ 0x140A28288 (MiCheckShadowStackOverflow.c)
 *     PspSetupReservedUserMappings @ 0x140A474E8 (PspSetupReservedUserMappings.c)
 *     ExRaiseHardError @ 0x140A4E2E0 (ExRaiseHardError.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwAllocateVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        PSIZE_T RegionSize,
        ULONG AllocationType,
        ULONG Protect)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, BaseAddress);
}
