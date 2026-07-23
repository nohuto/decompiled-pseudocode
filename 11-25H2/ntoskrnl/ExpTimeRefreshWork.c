/*
 * XREFs of ExpTimeRefreshWork @ 0x140B51190
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     KeSetTimer2 @ 0x140370EF0 (KeSetTimer2.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExAcquireTimeRefreshLockExclusive @ 0x1409CCD20 (ExAcquireTimeRefreshLockExclusive.c)
 *     ExReleaseTimeRefreshLockExclusive @ 0x1409CCD84 (ExReleaseTimeRefreshLockExclusive.c)
 *     ExUpdateSystemTimeFromCmos @ 0x140B581F0 (ExUpdateSystemTimeFromCmos.c)
 */

__int64 ExpTimeRefreshWork()
{
  struct _LIST_ENTRY *Blink; // rcx
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF

  do
  {
    ExAcquireTimeRefreshLockExclusive();
    if ( KeTimeSynchronization )
      ExUpdateSystemTimeFromCmos(0LL, 0LL);
    ExReleaseTimeRefreshLockExclusive();
    Blink = PsGetCurrentServerSiloGlobals()[54].Blink;
    if ( qword_140FD7470 )
      guard_dispatch_icall_no_overrides(Blink);
  }
  while ( _InterlockedExchangeAdd(&ExpOkToTimeRefresh, 0xFFFFFFFF) != 1 );
  v2[0] = 0LL;
  v2[1] = -1LL;
  return KeSetTimer2((__int64)&ExpTimeRefreshTimer, (LARGE_INTEGER)ExpTimeRefreshInterval, 0LL, (__int64)v2);
}
