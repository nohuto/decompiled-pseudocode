/*
 * XREFs of WheapPushPendingOfflineWrapper @ 0x1407C9AF4
 * Callers:
 *     WheapProcessOfflineList @ 0x14065E000 (WheapProcessOfflineList.c)
 *     WheapTrackPendingPage @ 0x1407C9B24 (WheapTrackPendingPage.c)
 * Callees:
 *     ExInterlockedPushEntryList @ 0x140656AC0 (ExInterlockedPushEntryList.c)
 */

PSINGLE_LIST_ENTRY __fastcall WheapPushPendingOfflineWrapper(PSINGLE_LIST_ENTRY ListEntry)
{
  PSINGLE_LIST_ENTRY result; // rax

  result = ExInterlockedPushEntryList((PSINGLE_LIST_ENTRY)&WheapOfflineChecker, ListEntry, &qword_140EF7B48);
  _InterlockedIncrement(&dword_140EF7B50);
  return result;
}
