/*
 * XREFs of PopCheckpointSystemSleep @ 0x140B5692C
 * Callers:
 *     PopPrepareSleep @ 0x1404BD9CC (PopPrepareSleep.c)
 *     PopResumeApps @ 0x1407479CC (PopResumeApps.c)
 *     PopSuspendApps @ 0x140747DD8 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x140747E2C (PopSuspendServices.c)
 *     PopResumeServices @ 0x140A2C744 (PopResumeServices.c)
 *     PopIssueActionRequest @ 0x140A83104 (PopIssueActionRequest.c)
 *     PopDispatchSuperfetchNotification @ 0x140AA6CD0 (PopDispatchSuperfetchNotification.c)
 *     PopNotifyCallbacksPreSleep @ 0x140AB62D0 (PopNotifyCallbacksPreSleep.c)
 *     PopAllocateHiberContext @ 0x140ABEFAC (PopAllocateHiberContext.c)
 *     PopDecompressHiberBlocks @ 0x140B4C904 (PopDecompressHiberBlocks.c)
 *     PopHiberChecksumHiberFileData @ 0x140B4D0C0 (PopHiberChecksumHiberFileData.c)
 *     PopRequestRead @ 0x140B4DB88 (PopRequestRead.c)
 *     PopRequestWrite @ 0x140B4DFC0 (PopRequestWrite.c)
 *     PopWriteHiberPages @ 0x140B4E968 (PopWriteHiberPages.c)
 *     PoBroadcastSystemState @ 0x140B54B5C (PoBroadcastSystemState.c)
 *     PopInvokeSystemStateHandler @ 0x140B5541C (PopInvokeSystemStateHandler.c)
 *     PopRestoreHiberContext @ 0x140B561BC (PopRestoreHiberContext.c)
 *     PopHiberCheckResume @ 0x140B56660 (PopHiberCheckResume.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 *     PopSaveHiberContext @ 0x140B5BF00 (PopSaveHiberContext.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PopRecordSleepCheckpoint @ 0x140A871EC (PopRecordSleepCheckpoint.c)
 *     PopCheckpointSystemSleepUnsafe @ 0x140B500E0 (PopCheckpointSystemSleepUnsafe.c)
 */

unsigned __int64 __fastcall PopCheckpointSystemSleep(int a1)
{
  ULONG_PTR v1; // rbx
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rax
  unsigned __int64 result; // rax
  __int64 v5; // rcx

  v1 = a1;
  PopSleepCheckpoint = a1;
  v2 = __rdtsc();
  if ( PopBootStatCheckpointAvailable )
    PopRecordSleepCheckpoint(a1);
  if ( PopCheckpointSystemSleepEnabled )
  {
    v5 = (unsigned int)PopCheckpointSystemSleepSimulateFlags;
    if ( (PopCheckpointSystemSleepSimulateFlags & 1) == 0
      || (v5 = HIBYTE(PopCheckpointSystemSleepSimulateFlags), (unsigned int)v1 <= (unsigned int)v5) )
    {
      if ( PoAllProcIntrDisabled )
      {
        if ( KeGetCurrentPrcb()->Number )
          KeBugCheckEx(0xA0u, 0x10FuLL, v1, 1uLL, 0LL);
        if ( (unsigned __int8)guard_dispatch_icall_no_overrides(v5) )
          KeBugCheckEx(0xA0u, 0x10FuLL, v1, 2uLL, 0LL);
      }
      else if ( !_InterlockedExchangeAdd(&PopPagingEnabled, 0) )
      {
        KeBugCheckEx(0xA0u, 0x10FuLL, v1, 0LL, 0LL);
      }
      PopCheckpointSystemSleepUnsafe(v1);
    }
  }
  v3 = __rdtsc();
  result = (((unsigned __int64)HIDWORD(v3) << 32) | (unsigned int)v3) - v2;
  qword_140F0B0D0 += result;
  return result;
}
