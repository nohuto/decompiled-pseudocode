/*
 * XREFs of TppFreeWait @ 0x180041EB0
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
 *     NtClose @ 0x180163400 (NtClose.c)
 */

LOGICAL __fastcall TppFreeWait(__int64 a1)
{
  TppDestroyTimer();
  NtClose(*(HANDLE *)(a1 + 368));
  *(_QWORD *)(a1 + 448) = 0LL;
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 1835008, (PVOID)a1);
}
