/*
 * XREFs of PspDeferredWorkerRoutine @ 0x140772B10
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

LONG __fastcall PspDeferredWorkerRoutine(PRKEVENT Event, __int64 a2)
{
  LODWORD(Event[1].Header.WaitListHead.Blink) = guard_dispatch_icall_no_overrides(
                                                  Event[1].Header.WaitListHead.Flink,
                                                  a2);
  return KeSetEvent(Event, 1, 0);
}
