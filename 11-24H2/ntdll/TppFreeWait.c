/*
 * XREFs of TppFreeWait @ 0x18004CEA0
 * Callers:
 *     TppWaitCompletion @ 0x18004C800 (TppWaitCompletion.c)
 *     TpSetWaitEx @ 0x18004CAE0 (TpSetWaitEx.c)
 *     TppCallbackEpilog @ 0x1800512E0 (TppCallbackEpilog.c)
 *     TpReleaseTimer @ 0x180088160 (TpReleaseTimer.c)
 *     TpReleaseWait @ 0x18008ADA0 (TpReleaseWait.c)
 *     TpWaitForWait @ 0x18008B410 (TpWaitForWait.c)
 *     TppStopWaitCallbackGeneration @ 0x18010B800 (TppStopWaitCallbackGeneration.c)
 * Callees:
 *     TppDestroyTimer @ 0x1800E5FBC (TppDestroyTimer.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 */

LOGICAL __fastcall TppFreeWait(__int64 a1)
{
  TppDestroyTimer();
  NtClose(*(HANDLE *)(a1 + 368));
  *(_QWORD *)(a1 + 448) = 0LL;
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 1835008, (PVOID)a1);
}
