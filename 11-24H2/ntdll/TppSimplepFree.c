/*
 * XREFs of TppSimplepFree @ 0x18006A2D0
 * Callers:
 *     TppWorkUnposted @ 0x180068B90 (TppWorkUnposted.c)
 *     TppJobpExecuteCallback @ 0x180068EC0 (TppJobpExecuteCallback.c)
 *     TpReleaseCleanupGroupMembers @ 0x180069760 (TpReleaseCleanupGroupMembers.c)
 *     TppJobpRundownJob @ 0x180069A78 (TppJobpRundownJob.c)
 *     TpReleaseJobNotification @ 0x180069BD0 (TpReleaseJobNotification.c)
 *     TpReleaseAlpcCompletion @ 0x180069EA0 (TpReleaseAlpcCompletion.c)
 *     TpReleaseIoCompletion @ 0x18006A010 (TpReleaseIoCompletion.c)
 *     TpCancelAsyncIoOperation @ 0x18006A1B0 (TpCancelAsyncIoOperation.c)
 *     TppWaitTimerExpiration @ 0x18006A560 (TppWaitTimerExpiration.c)
 *     TppTimerpStopCallbackGeneration @ 0x18010B480 (TppTimerpStopCallbackGeneration.c)
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x180021980 (TppCleanupGroupMemberDestroy.c)
 */

__int64 __fastcall TppSimplepFree(_QWORD *a1)
{
  TppCleanupGroupMemberDestroy(a1);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, (unsigned __int64)a1);
}
