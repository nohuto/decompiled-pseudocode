/*
 * XREFs of ZwFreeVirtualMemory @ 0x1406A67D0
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x140349EEC (SepRmDispatchDataToLsa.c)
 *     RtlpCreateHeap @ 0x1404D7334 (RtlpCreateHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x1405EBFC0 (RtlpDeCommitFreeBlock.c)
 *     RtlpExtendHeap @ 0x1405EC560 (RtlpExtendHeap.c)
 *     RtlpFreeHeap @ 0x1405ECA10 (RtlpFreeHeap.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x1405ECF30 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     DifZwFreeVirtualMemoryWrapper @ 0x1406404E0 (DifZwFreeVirtualMemoryWrapper.c)
 *     VmpUpdateCommitStateMemoryRange @ 0x14064B5C0 (VmpUpdateCommitStateMemoryRange.c)
 *     DbgkUserReportWorkRoutine @ 0x140707610 (DbgkUserReportWorkRoutine.c)
 *     RtlpDestroyHeapSegment @ 0x140783738 (RtlpDestroyHeapSegment.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x14079516C (SepAdtCopyToLsaSharedMemory.c)
 *     EtwpFreeUserBufferSpace @ 0x1407B16F8 (EtwpFreeUserBufferSpace.c)
 *     PspExitThread @ 0x1408A7D90 (PspExitThread.c)
 *     PspDeleteUserStack @ 0x1408DB270 (PspDeleteUserStack.c)
 *     sub_1409E067C @ 0x1409E067C (sub_1409E067C.c)
 *     PspSetupUserStack @ 0x1409E5B08 (PspSetupUserStack.c)
 *     RtlCreateUserStack @ 0x1409E5C7C (RtlCreateUserStack.c)
 *     RtlpWow64CreateUserStack @ 0x140A1A87C (RtlpWow64CreateUserStack.c)
 *     ExRaiseHardError @ 0x140A4E2E0 (ExRaiseHardError.c)
 *     RtlDestroyHeap @ 0x140A91140 (RtlDestroyHeap.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, BaseAddress);
}
