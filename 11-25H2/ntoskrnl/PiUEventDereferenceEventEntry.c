/*
 * XREFs of PiUEventDereferenceEventEntry @ 0x1409673BC
 * Callers:
 *     PiUEventProcessEventWorker @ 0x1409669E0 (PiUEventProcessEventWorker.c)
 *     PiUEventDequeuePendingEventWorker @ 0x140966B30 (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventHandleGetEvent @ 0x140966DA0 (PiUEventHandleGetEvent.c)
 *     PiUEventNotifyUserMode @ 0x14096D4D4 (PiUEventNotifyUserMode.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     PiUEventFreeEventEntry @ 0x14096741C (PiUEventFreeEventEntry.c)
 */

__int64 __fastcall PiUEventDereferenceEventEntry(PVOID P)
{
  unsigned int v2; // edi

  ExAcquireFastMutex(*((PKGUARDED_MUTEX *)P + 2));
  v2 = --*((_DWORD *)P + 14);
  if ( *((_BYTE *)P + 76) && v2 == 1 )
    KeSetEvent(*((PRKEVENT *)P + 3), 0, 0);
  KeReleaseGuardedMutex(*((PKGUARDED_MUTEX *)P + 2));
  if ( !v2 )
    PiUEventFreeEventEntry(P);
  return v2;
}
