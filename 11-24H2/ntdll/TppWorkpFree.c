/*
 * XREFs of TppWorkpFree @ 0x180020C20
 * Callers:
 *     TppIopExecuteCallback @ 0x18001EF70 (TppIopExecuteCallback.c)
 *     TppExecuteWaitCallback @ 0x18001F480 (TppExecuteWaitCallback.c)
 *     TppIopCallbackEpilog @ 0x1800218E0 (TppIopCallbackEpilog.c)
 *     TppWorkCallbackPrologRelease @ 0x1800222C0 (TppWorkCallbackPrologRelease.c)
 *     TppCallbackEpilog @ 0x1800248E0 (TppCallbackEpilog.c)
 *     TppWorkPost @ 0x180055B40 (TppWorkPost.c)
 *     TppWorkUnposted @ 0x180068B90 (TppWorkUnposted.c)
 *     TppJobpExecuteCallback @ 0x180068EC0 (TppJobpExecuteCallback.c)
 *     TpReleaseCleanupGroupMembers @ 0x180069760 (TpReleaseCleanupGroupMembers.c)
 *     TppJobpRundownJob @ 0x180069A78 (TppJobpRundownJob.c)
 *     TpReleaseJobNotification @ 0x180069BD0 (TpReleaseJobNotification.c)
 *     TpReleaseAlpcCompletion @ 0x180069EA0 (TpReleaseAlpcCompletion.c)
 *     TpReleaseIoCompletion @ 0x18006A010 (TpReleaseIoCompletion.c)
 *     TpCancelAsyncIoOperation @ 0x18006A1B0 (TpCancelAsyncIoOperation.c)
 *     TppWaitTimerExpiration @ 0x18006A560 (TppWaitTimerExpiration.c)
 *     TpSimpleTryPost @ 0x18006A740 (TpSimpleTryPost.c)
 *     TpSetTimerEx @ 0x18006AF80 (TpSetTimerEx.c)
 *     TppSingleTimerExpiration @ 0x18006BE80 (TppSingleTimerExpiration.c)
 *     TpWaitForTimer @ 0x18006C110 (TpWaitForTimer.c)
 *     TpReleaseWork @ 0x18006CCA0 (TpReleaseWork.c)
 *     TppTimerpStopCallbackGeneration @ 0x18010B480 (TppTimerpStopCallbackGeneration.c)
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x180021980 (TppCleanupGroupMemberDestroy.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 */

__int64 __fastcall TppWorkpFree(__int64 a1)
{
  TppCleanupGroupMemberDestroy(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 0x200000), a1);
}
