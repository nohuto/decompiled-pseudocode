/*
 * XREFs of TppWorkpFree @ 0x180042630
 * Callers:
 *     TppWorkPost @ 0x180011780 (TppWorkPost.c)
 *     TpReleaseWork @ 0x18003A420 (TpReleaseWork.c)
 *     TpSetTimerEx @ 0x18003E670 (TpSetTimerEx.c)
 *     TppSingleTimerExpiration @ 0x18003F720 (TppSingleTimerExpiration.c)
 *     TpWaitForTimer @ 0x18003FF90 (TpWaitForTimer.c)
 *     TppIopExecuteCallback @ 0x180040230 (TppIopExecuteCallback.c)
 *     TppExecuteWaitCallback @ 0x180040740 (TppExecuteWaitCallback.c)
 *     TppIopCallbackEpilog @ 0x1800432B0 (TppIopCallbackEpilog.c)
 *     TppWorkCallbackPrologRelease @ 0x180043350 (TppWorkCallbackPrologRelease.c)
 *     TppCallbackEpilog @ 0x18007ECC0 (TppCallbackEpilog.c)
 *     TppWorkUnposted @ 0x1800D5C10 (TppWorkUnposted.c)
 *     TppJobpExecuteCallback @ 0x1800D5D60 (TppJobpExecuteCallback.c)
 *     TpReleaseCleanupGroupMembers @ 0x1800D6600 (TpReleaseCleanupGroupMembers.c)
 *     TpReleaseJobNotification @ 0x1800D6920 (TpReleaseJobNotification.c)
 *     TppWaitTimerExpiration @ 0x1800D6A74 (TppWaitTimerExpiration.c)
 *     TpReleaseAlpcCompletion @ 0x1800D6B30 (TpReleaseAlpcCompletion.c)
 *     TpReleaseIoCompletion @ 0x1800D6CA0 (TpReleaseIoCompletion.c)
 *     TpCancelAsyncIoOperation @ 0x1800D6E40 (TpCancelAsyncIoOperation.c)
 *     TppJobpRundownJob @ 0x1800D6F9C (TppJobpRundownJob.c)
 *     TpSimpleTryPost @ 0x1800EB150 (TpSimpleTryPost.c)
 *     TppTimerpStopCallbackGeneration @ 0x18010DB20 (TppTimerpStopCallbackGeneration.c)
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x180043EC0 (TppCleanupGroupMemberDestroy.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

LOGICAL __fastcall TppWorkpFree(void *a1)
{
  TppCleanupGroupMemberDestroy(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, a1);
}
