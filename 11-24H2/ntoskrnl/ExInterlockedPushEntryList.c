/*
 * XREFs of ExInterlockedPushEntryList @ 0x1406583C0
 * Callers:
 *     WheapPushPendingOfflineWrapper @ 0x1407C9604 (WheapPushPendingOfflineWrapper.c)
 * Callees:
 *     ExpAcquireSpinLockDisabled @ 0x14042ED58 (ExpAcquireSpinLockDisabled.c)
 *     ExpReleaseSpinLockDisabled @ 0x14042EE08 (ExpReleaseSpinLockDisabled.c)
 */

PSINGLE_LIST_ENTRY __stdcall ExInterlockedPushEntryList(
        PSINGLE_LIST_ENTRY ListHead,
        PSINGLE_LIST_ENTRY ListEntry,
        PKSPIN_LOCK Lock)
{
  char v6; // al
  struct _SINGLE_LIST_ENTRY *Next; // rbx

  v6 = ExpAcquireSpinLockDisabled((volatile signed __int32 *)Lock);
  Next = ListHead->Next;
  ListEntry->Next = ListHead->Next;
  ListHead->Next = ListEntry;
  ExpReleaseSpinLockDisabled((volatile signed __int64 *)Lock, v6);
  return Next;
}
