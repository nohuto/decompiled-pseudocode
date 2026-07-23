/*
 * XREFs of TppTimerpFree @ 0x180041F00
 * Callers:
 *     TpReleaseWait @ 0x18003C9C0 (TpReleaseWait.c)
 *     TpWaitForWait @ 0x18003D030 (TpWaitForWait.c)
 *     TpReleaseTimer @ 0x18003F060 (TpReleaseTimer.c)
 *     TppWaitCompletion @ 0x180041270 (TppWaitCompletion.c)
 *     TpSetWaitEx @ 0x180041AF0 (TpSetWaitEx.c)
 *     TppCallbackEpilog @ 0x18007ECC0 (TppCallbackEpilog.c)
 *     TppStopWaitCallbackGeneration @ 0x180113310 (TppStopWaitCallbackGeneration.c)
 * Callees:
 *     TppDestroyTimer @ 0x1800EBB9C (TppDestroyTimer.c)
 */

LOGICAL __fastcall TppTimerpFree(void *a1)
{
  TppDestroyTimer();
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x100000, a1);
}
