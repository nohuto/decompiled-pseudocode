/*
 * XREFs of WheapPushPendingOfflineWrapper @ 0x1407C9604
 * Callers:
 *     WheapProcessOfflineList @ 0x14065F830 (WheapProcessOfflineList.c)
 *     WheapTrackPendingPage @ 0x1407C9634 (WheapTrackPendingPage.c)
 * Callees:
 *     ExInterlockedPushEntryList @ 0x1406583C0 (ExInterlockedPushEntryList.c)
 */

PSINGLE_LIST_ENTRY __fastcall WheapPushPendingOfflineWrapper(PSINGLE_LIST_ENTRY ListEntry)
{
  PSINGLE_LIST_ENTRY result; // rax

  result = ExInterlockedPushEntryList((PSINGLE_LIST_ENTRY)&WheapOfflineChecker, ListEntry, &qword_140EF7888);
  _InterlockedIncrement(&dword_140EF7890);
  return result;
}
