/*
 * XREFs of ZwFreeVirtualMemory @ 0x1406A7770
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x1403C1B1C (SepRmDispatchDataToLsa.c)
 *     RtlpCreateHeap @ 0x1404D0784 (RtlpCreateHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x1405E953C (RtlpDeCommitFreeBlock.c)
 *     RtlpExtendHeap @ 0x1405E9AF4 (RtlpExtendHeap.c)
 *     RtlpFreeHeap @ 0x1405E9FB0 (RtlpFreeHeap.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x1405EA4EC (RtlpHpAllocVirtBlockCommitFirst.c)
 *     DifZwFreeVirtualMemoryWrapper @ 0x14063EAA0 (DifZwFreeVirtualMemoryWrapper.c)
 *     VmpUpdateCommitStateMemoryRange @ 0x140649B80 (VmpUpdateCommitStateMemoryRange.c)
 *     DbgkUserReportWorkRoutine @ 0x1407051D0 (DbgkUserReportWorkRoutine.c)
 *     RtlpDestroyHeapSegment @ 0x140783668 (RtlpDestroyHeapSegment.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x14079527C (SepAdtCopyToLsaSharedMemory.c)
 *     EtwpFreeUserBufferSpace @ 0x1407B1B48 (EtwpFreeUserBufferSpace.c)
 *     PspExitThread @ 0x1408FDFF0 (PspExitThread.c)
 *     sub_1409DA42C @ 0x1409DA42C (sub_1409DA42C.c)
 *     PspSetupUserStack @ 0x1409E0398 (PspSetupUserStack.c)
 *     RtlCreateUserStack @ 0x1409E050C (RtlCreateUserStack.c)
 *     RtlpWow64CreateUserStack @ 0x140A130B8 (RtlpWow64CreateUserStack.c)
 *     ExRaiseHardError @ 0x140A44F60 (ExRaiseHardError.c)
 *     PspDeleteUserStack @ 0x140A59AF8 (PspDeleteUserStack.c)
 *     RtlDestroyHeap @ 0x140A8D840 (RtlDestroyHeap.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
