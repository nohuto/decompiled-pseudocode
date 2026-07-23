/*
 * XREFs of ZwAllocateVirtualMemory @ 0x1406A76B0
 * Callers:
 *     PspWow64ThunkProcessParameters @ 0x14047FE44 (PspWow64ThunkProcessParameters.c)
 *     RtlpCreateHeap @ 0x1404D0784 (RtlpCreateHeap.c)
 *     RtlpStdExtendLowerWatermark @ 0x1405E5A44 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x1405E5B2C (RtlpStdExtendUpperWatermark.c)
 *     RtlpExtendHeap @ 0x1405E9AF4 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x1405E9D48 (RtlpFindAndCommitPages.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x1405EA4EC (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlpInitializeHeapSegment @ 0x1405EA5CC (RtlpInitializeHeapSegment.c)
 *     RtlpHpFixedHeapCommitRoutine @ 0x140602BE0 (RtlpHpFixedHeapCommitRoutine.c)
 *     DifZwAllocateVirtualMemoryWrapper @ 0x140639E50 (DifZwAllocateVirtualMemoryWrapper.c)
 *     VmpUpdateCommitStateMemoryRange @ 0x140649B80 (VmpUpdateCommitStateMemoryRange.c)
 *     DbgkUserReportWorkRoutine @ 0x1407051D0 (DbgkUserReportWorkRoutine.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x14079527C (SepAdtCopyToLsaSharedMemory.c)
 *     VmCreateMemoryProcess @ 0x14079E8E0 (VmCreateMemoryProcess.c)
 *     PspSetupUserProcessAddressSpace @ 0x1408DF5FC (PspSetupUserProcessAddressSpace.c)
 *     PspSchedulerSharedDataRegionSlotAllocate @ 0x1408EAED0 (PspSchedulerSharedDataRegionSlotAllocate.c)
 *     PspReserveAndCommitUserShadowStack @ 0x140914D48 (PspReserveAndCommitUserShadowStack.c)
 *     EtwpFindUserBufferSpace @ 0x1409D4B34 (EtwpFindUserBufferSpace.c)
 *     RtlCreateUserStack @ 0x1409E050C (RtlCreateUserStack.c)
 *     RtlpWow64CreateUserStack @ 0x140A130B8 (RtlpWow64CreateUserStack.c)
 *     MiCheckForUserStackOverflow @ 0x140A1C9F4 (MiCheckForUserStackOverflow.c)
 *     MiCheckShadowStackOverflow @ 0x140A1CD08 (MiCheckShadowStackOverflow.c)
 *     PspSetupReservedUserMappings @ 0x140A3D458 (PspSetupReservedUserMappings.c)
 *     ExRaiseHardError @ 0x140A44F60 (ExRaiseHardError.c)
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
  return KiServiceInternal(ProcessHandle);
}
