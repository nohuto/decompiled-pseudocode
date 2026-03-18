/*
 * XREFs of ExInterlockedPopEntryList @ 0x140658370
 * Callers:
 *     <none>
 * Callees:
 *     ExpAcquireSpinLockDisabled @ 0x14042ED58 (ExpAcquireSpinLockDisabled.c)
 *     ExpReleaseSpinLockDisabled @ 0x14042EE08 (ExpReleaseSpinLockDisabled.c)
 */

PSINGLE_LIST_ENTRY __stdcall ExInterlockedPopEntryList(PSINGLE_LIST_ENTRY ListHead, PKSPIN_LOCK Lock)
{
  char v4; // al
  struct _SINGLE_LIST_ENTRY *Next; // rbx

  v4 = ExpAcquireSpinLockDisabled((volatile signed __int32 *)Lock);
  Next = ListHead->Next;
  if ( ListHead->Next )
    ListHead->Next = Next->Next;
  ExpReleaseSpinLockDisabled((volatile signed __int64 *)Lock, v4);
  return Next;
}
