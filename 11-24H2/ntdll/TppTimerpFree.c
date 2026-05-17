/*
 * XREFs of TppTimerpFree @ 0x1800204F0
 * Callers:
 *     TppWaitCompletion @ 0x18001FE00 (TppWaitCompletion.c)
 *     TpSetWaitEx @ 0x1800200E0 (TpSetWaitEx.c)
 *     TppCallbackEpilog @ 0x1800248E0 (TppCallbackEpilog.c)
 *     TpReleaseTimer @ 0x18006B880 (TpReleaseTimer.c)
 *     TpReleaseWait @ 0x18006E4C0 (TpReleaseWait.c)
 *     TpWaitForWait @ 0x18006EB30 (TpWaitForWait.c)
 *     TppStopWaitCallbackGeneration @ 0x180110540 (TppStopWaitCallbackGeneration.c)
 * Callees:
 *     TppDestroyTimer @ 0x1800EA74C (TppDestroyTimer.c)
 */

__int64 __fastcall TppTimerpFree(__int64 a1)
{
  TppDestroyTimer();
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 0x100000), a1);
}
