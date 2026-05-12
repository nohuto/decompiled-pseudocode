/*
 * XREFs of RaidAllocateDeferredItem @ 0x14006AFA8
 * Callers:
 *     StorPortBusy @ 0x140040270 (StorPortBusy.c)
 *     StorPortNotification @ 0x14004B4F0 (StorPortNotification.c)
 *     StorPortReady @ 0x1400561E0 (StorPortReady.c)
 *     StorPortLogError @ 0x140074080 (StorPortLogError.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall RaidAllocateDeferredItem(union _SLIST_HEADER *a1)
{
  PSLIST_ENTRY result; // rax

  result = ExpInterlockedPopEntrySList(a1 + 5);
  if ( result )
    LODWORD(result[1].Next) = 134684674;
  return result;
}
