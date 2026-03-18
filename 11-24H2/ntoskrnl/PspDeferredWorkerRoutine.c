/*
 * XREFs of PspDeferredWorkerRoutine @ 0x1407728F0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

LONG __fastcall PspDeferredWorkerRoutine(PRKEVENT Event, __int64 a2, __int64 a3, __int64 a4)
{
  LODWORD(Event[1].Header.WaitListHead.Blink) = guard_dispatch_icall_no_overrides(
                                                  Event[1].Header.WaitListHead.Flink,
                                                  a2,
                                                  a3,
                                                  a4);
  return KeSetEvent(Event, 1, 0);
}
