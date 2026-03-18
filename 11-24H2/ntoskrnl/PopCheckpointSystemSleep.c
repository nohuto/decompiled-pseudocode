/*
 * XREFs of PopCheckpointSystemSleep @ 0x140B6675C
 * Callers:
 *     PopPrepareSleep @ 0x1404BC8CC (PopPrepareSleep.c)
 *     PopResumeApps @ 0x140753ABC (PopResumeApps.c)
 *     PopSuspendApps @ 0x140753EC8 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x140753F1C (PopSuspendServices.c)
 *     PopResumeServices @ 0x1409B9CE8 (PopResumeServices.c)
 *     PopIssueActionRequest @ 0x140A87C34 (PopIssueActionRequest.c)
 *     PopDispatchSuperfetchNotification @ 0x140AAC290 (PopDispatchSuperfetchNotification.c)
 *     PopNotifyCallbacksPreSleep @ 0x140ABA610 (PopNotifyCallbacksPreSleep.c)
 *     PopAllocateHiberContext @ 0x140AC688C (PopAllocateHiberContext.c)
 *     PopDecompressHiberBlocks @ 0x140B5C904 (PopDecompressHiberBlocks.c)
 *     PopHiberChecksumHiberFileData @ 0x140B5D0C0 (PopHiberChecksumHiberFileData.c)
 *     PopRequestRead @ 0x140B5DC4C (PopRequestRead.c)
 *     PopRequestWrite @ 0x140B5E080 (PopRequestWrite.c)
 *     PopWriteHiberPages @ 0x140B5EA28 (PopWriteHiberPages.c)
 *     PoBroadcastSystemState @ 0x140B64C6C (PoBroadcastSystemState.c)
 *     PopInvokeSystemStateHandler @ 0x140B6552C (PopInvokeSystemStateHandler.c)
 *     PopRestoreHiberContext @ 0x140B662BC (PopRestoreHiberContext.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 *     PopHiberCheckResume @ 0x140B6E970 (PopHiberCheckResume.c)
 *     PopSaveHiberContext @ 0x140B6EC80 (PopSaveHiberContext.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PopRecordSleepCheckpoint @ 0x140A8C1E8 (PopRecordSleepCheckpoint.c)
 *     PopCheckpointSystemSleepUnsafe @ 0x140B60210 (PopCheckpointSystemSleepUnsafe.c)
 */

unsigned __int64 __fastcall PopCheckpointSystemSleep(int a1, __int64 a2, __int64 a3)
{
  ULONG_PTR v3; // rbx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 result; // rax
  __int64 v9; // rcx

  v3 = a1;
  v4 = __rdtsc();
  v5 = (unsigned __int64)HIDWORD(v4) << 32;
  PopSleepCheckpoint = a1;
  v6 = v4;
  if ( PopBootStatCheckpointAvailable )
    PopRecordSleepCheckpoint(a1);
  if ( PopCheckpointSystemSleepEnabled )
  {
    v9 = (unsigned int)PopCheckpointSystemSleepSimulateFlags;
    if ( (PopCheckpointSystemSleepSimulateFlags & 1) == 0
      || (v9 = HIBYTE(PopCheckpointSystemSleepSimulateFlags), (unsigned int)v3 <= (unsigned int)v9) )
    {
      if ( PoAllProcIntrDisabled )
      {
        if ( KeGetCurrentPrcb()->Number )
          KeBugCheckEx(0xA0u, 0x10FuLL, v3, 1uLL, 0LL);
        if ( (unsigned __int8)guard_dispatch_icall_no_overrides(v9, v5, a3, 1LL) )
          KeBugCheckEx(0xA0u, 0x10FuLL, v3, 2uLL, 0LL);
      }
      else if ( !_InterlockedExchangeAdd(&PopPagingEnabled, 0) )
      {
        KeBugCheckEx(0xA0u, 0x10FuLL, v3, 0LL, 0LL);
      }
      PopCheckpointSystemSleepUnsafe(v3);
    }
  }
  v7 = __rdtsc();
  result = (((unsigned __int64)HIDWORD(v7) << 32) | (unsigned int)v7) - v6;
  qword_140F0B370 += result;
  return result;
}
