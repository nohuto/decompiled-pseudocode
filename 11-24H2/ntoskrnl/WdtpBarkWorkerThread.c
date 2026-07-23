/*
 * XREFs of WdtpBarkWorkerThread @ 0x140824CB0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

LONG __fastcall WdtpBarkWorkerThread(struct _KEVENT *a1, __int64 a2)
{
  guard_dispatch_icall_no_overrides((char *)&a1[5].Header.WaitListHead.Blink + 5, a2);
  return KeSetEvent(a1 + 4, 0, 0);
}
