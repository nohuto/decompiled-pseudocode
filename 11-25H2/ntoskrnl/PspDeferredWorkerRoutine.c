/*
 * XREFs of PspDeferredWorkerRoutine @ 0x140762F30
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

LONG __fastcall PspDeferredWorkerRoutine(PRKEVENT Event)
{
  LODWORD(Event[1].Header.WaitListHead.Blink) = guard_dispatch_icall_no_overrides(Event[1].Header.WaitListHead.Flink);
  return KeSetEvent(Event, 1, 0);
}
