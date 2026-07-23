/*
 * XREFs of TppSimplepFree @ 0x1800869C0
 * Callers:
 *     TppWorkUnposted @ 0x180084900 (TppWorkUnposted.c)
 *     TppJobpExecuteCallback @ 0x180084A50 (TppJobpExecuteCallback.c)
 *     TpReleaseCleanupGroupMembers @ 0x1800852F0 (TpReleaseCleanupGroupMembers.c)
 *     TppJobpRundownJob @ 0x180085608 (TppJobpRundownJob.c)
 *     TpReleaseJobNotification @ 0x180085760 (TpReleaseJobNotification.c)
 *     TpReleaseAlpcCompletion @ 0x180086590 (TpReleaseAlpcCompletion.c)
 *     TpReleaseIoCompletion @ 0x180086700 (TpReleaseIoCompletion.c)
 *     TpCancelAsyncIoOperation @ 0x1800868A0 (TpCancelAsyncIoOperation.c)
 *     TppWaitTimerExpiration @ 0x180086C50 (TppWaitTimerExpiration.c)
 *     TppTimerpStopCallbackGeneration @ 0x180106240 (TppTimerpStopCallbackGeneration.c)
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x18004E380 (TppCleanupGroupMemberDestroy.c)
 */

LOGICAL __fastcall TppSimplepFree(_QWORD *a1)
{
  TppCleanupGroupMemberDestroy(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, a1);
}
