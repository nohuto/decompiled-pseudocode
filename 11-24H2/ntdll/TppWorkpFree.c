/*
 * XREFs of TppWorkpFree @ 0x18004D620
 * Callers:
 *     TppIopExecuteCallback @ 0x18004B970 (TppIopExecuteCallback.c)
 *     TppExecuteWaitCallback @ 0x18004BE80 (TppExecuteWaitCallback.c)
 *     TppIopCallbackEpilog @ 0x18004E2E0 (TppIopCallbackEpilog.c)
 *     TppWorkCallbackPrologRelease @ 0x18004ECC0 (TppWorkCallbackPrologRelease.c)
 *     TppCallbackEpilog @ 0x1800512E0 (TppCallbackEpilog.c)
 *     TppWorkPost @ 0x18006B720 (TppWorkPost.c)
 *     TppWorkUnposted @ 0x180084900 (TppWorkUnposted.c)
 *     TppJobpExecuteCallback @ 0x180084A50 (TppJobpExecuteCallback.c)
 *     TpReleaseCleanupGroupMembers @ 0x1800852F0 (TpReleaseCleanupGroupMembers.c)
 *     TppJobpRundownJob @ 0x180085608 (TppJobpRundownJob.c)
 *     TpReleaseJobNotification @ 0x180085760 (TpReleaseJobNotification.c)
 *     TpReleaseAlpcCompletion @ 0x180086590 (TpReleaseAlpcCompletion.c)
 *     TpReleaseIoCompletion @ 0x180086700 (TpReleaseIoCompletion.c)
 *     TpCancelAsyncIoOperation @ 0x1800868A0 (TpCancelAsyncIoOperation.c)
 *     TppWaitTimerExpiration @ 0x180086C50 (TppWaitTimerExpiration.c)
 *     TpSimpleTryPost @ 0x180086E30 (TpSimpleTryPost.c)
 *     TpSetTimerEx @ 0x180087860 (TpSetTimerEx.c)
 *     TppSingleTimerExpiration @ 0x180088760 (TppSingleTimerExpiration.c)
 *     TpWaitForTimer @ 0x1800889F0 (TpWaitForTimer.c)
 *     TpReleaseWork @ 0x180089580 (TpReleaseWork.c)
 *     TppTimerpStopCallbackGeneration @ 0x180106240 (TppTimerpStopCallbackGeneration.c)
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x18004E380 (TppCleanupGroupMemberDestroy.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 */

LOGICAL __fastcall TppWorkpFree(void *a1)
{
  TppCleanupGroupMemberDestroy(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, a1);
}
