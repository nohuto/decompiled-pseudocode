/*
 * XREFs of WdtpBarkWorkerThread @ 0x140824550
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

LONG __fastcall WdtpBarkWorkerThread(struct _KEVENT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  guard_dispatch_icall_no_overrides((char *)&a1[5].Header.WaitListHead.Blink + 5, a2, a3, a4);
  return KeSetEvent(a1 + 4, 0, 0);
}
