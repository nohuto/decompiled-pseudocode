/*
 * XREFs of TppSimplepFree @ 0x1800D6F60
 * Callers:
 *     TppWorkUnposted @ 0x1800D5C10 (TppWorkUnposted.c)
 *     TppJobpExecuteCallback @ 0x1800D5D60 (TppJobpExecuteCallback.c)
 *     TpReleaseCleanupGroupMembers @ 0x1800D6600 (TpReleaseCleanupGroupMembers.c)
 *     TpReleaseJobNotification @ 0x1800D6920 (TpReleaseJobNotification.c)
 *     TppWaitTimerExpiration @ 0x1800D6A74 (TppWaitTimerExpiration.c)
 *     TpReleaseAlpcCompletion @ 0x1800D6B30 (TpReleaseAlpcCompletion.c)
 *     TpReleaseIoCompletion @ 0x1800D6CA0 (TpReleaseIoCompletion.c)
 *     TpCancelAsyncIoOperation @ 0x1800D6E40 (TpCancelAsyncIoOperation.c)
 *     TppJobpRundownJob @ 0x1800D6F9C (TppJobpRundownJob.c)
 *     TppTimerpStopCallbackGeneration @ 0x18010DB20 (TppTimerpStopCallbackGeneration.c)
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x180043EC0 (TppCleanupGroupMemberDestroy.c)
 */

LOGICAL __fastcall TppSimplepFree(_QWORD *a1)
{
  TppCleanupGroupMemberDestroy(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, a1);
}
