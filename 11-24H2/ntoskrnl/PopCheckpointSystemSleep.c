/*
 * XREFs of PopCheckpointSystemSleep @ 0x140B6889C
 * Callers:
 *     PopPrepareSleep @ 0x1404B7A3C (PopPrepareSleep.c)
 *     PopResumeApps @ 0x140751DDC (PopResumeApps.c)
 *     PopSuspendApps @ 0x1407521E8 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x14075223C (PopSuspendServices.c)
 *     PopResumeServices @ 0x1409A0338 (PopResumeServices.c)
 *     PopIssueActionRequest @ 0x140A84124 (PopIssueActionRequest.c)
 *     PopDispatchSuperfetchNotification @ 0x140AA72C8 (PopDispatchSuperfetchNotification.c)
 *     PopNotifyCallbacksPreSleep @ 0x140AB5630 (PopNotifyCallbacksPreSleep.c)
 *     PopAllocateHiberContext @ 0x140AC4284 (PopAllocateHiberContext.c)
 *     PopDecompressHiberBlocks @ 0x140B5E974 (PopDecompressHiberBlocks.c)
 *     PopHiberChecksumHiberFileData @ 0x140B5F13C (PopHiberChecksumHiberFileData.c)
 *     PopRequestRead @ 0x140B5FCCC (PopRequestRead.c)
 *     PopRequestWrite @ 0x140B60100 (PopRequestWrite.c)
 *     PopWriteHiberPages @ 0x140B60AA8 (PopWriteHiberPages.c)
 *     PoBroadcastSystemState @ 0x140B66DA4 (PoBroadcastSystemState.c)
 *     PopInvokeSystemStateHandler @ 0x140B6766C (PopInvokeSystemStateHandler.c)
 *     PopRestoreHiberContext @ 0x140B683FC (PopRestoreHiberContext.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 *     PopHiberCheckResume @ 0x140B709E0 (PopHiberCheckResume.c)
 *     PopSaveHiberContext @ 0x140B70CF0 (PopSaveHiberContext.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PopRecordSleepCheckpoint @ 0x140A88720 (PopRecordSleepCheckpoint.c)
 *     PopCheckpointSystemSleepUnsafe @ 0x140B622DC (PopCheckpointSystemSleepUnsafe.c)
 */

unsigned __int64 __fastcall PopCheckpointSystemSleep(int a1)
{
  ULONG_PTR v1; // rbx
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rax
  unsigned __int64 result; // rax
  __int64 v7; // rcx

  v1 = a1;
  v2 = __rdtsc();
  v3 = (unsigned __int64)HIDWORD(v2) << 32;
  PopSleepCheckpoint = a1;
  v4 = v2;
  if ( PopBootStatCheckpointAvailable )
    PopRecordSleepCheckpoint(a1);
  if ( PopCheckpointSystemSleepEnabled )
  {
    v7 = (unsigned int)PopCheckpointSystemSleepSimulateFlags;
    if ( (PopCheckpointSystemSleepSimulateFlags & 1) == 0
      || (v7 = HIBYTE(PopCheckpointSystemSleepSimulateFlags), (unsigned int)v1 <= (unsigned int)v7) )
    {
      if ( PoAllProcIntrDisabled )
      {
        if ( KeGetCurrentPrcb()->Number )
          KeBugCheckEx(0xA0u, 0x10FuLL, v1, 1uLL, 0LL);
        if ( (unsigned __int8)guard_dispatch_icall_no_overrides(v7, v3) )
          KeBugCheckEx(0xA0u, 0x10FuLL, v1, 2uLL, 0LL);
      }
      else if ( !_InterlockedExchangeAdd(&PopPagingEnabled, 0) )
      {
        KeBugCheckEx(0xA0u, 0x10FuLL, v1, 0LL, 0LL);
      }
      PopCheckpointSystemSleepUnsafe(v1);
    }
  }
  v5 = __rdtsc();
  result = (((unsigned __int64)HIDWORD(v5) << 32) | (unsigned int)v5) - v4;
  qword_140F0BFB0 += result;
  return result;
}
