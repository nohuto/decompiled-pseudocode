/*
 * XREFs of ExpTimeRefreshWork @ 0x140B63390
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     KeSetTimer2 @ 0x1403B0C60 (KeSetTimer2.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExAcquireTimeRefreshLockExclusive @ 0x1409A9310 (ExAcquireTimeRefreshLockExclusive.c)
 *     ExReleaseTimeRefreshLockExclusive @ 0x1409A9374 (ExReleaseTimeRefreshLockExclusive.c)
 *     ExUpdateSystemTimeFromCmos @ 0x140B6A160 (ExUpdateSystemTimeFromCmos.c)
 */

__int64 ExpTimeRefreshWork()
{
  __int64 v0; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  do
  {
    ExAcquireTimeRefreshLockExclusive();
    if ( KeTimeSynchronization )
      ExUpdateSystemTimeFromCmos(0LL, 0LL);
    ExReleaseTimeRefreshLockExclusive();
    Blink = PsGetCurrentServerSiloGlobals()[54].Blink;
    if ( qword_140FD8480 )
      guard_dispatch_icall_no_overrides(Blink, v0);
  }
  while ( _InterlockedExchangeAdd(&ExpOkToTimeRefresh, 0xFFFFFFFF) != 1 );
  v3[0] = 0LL;
  v3[1] = -1LL;
  return KeSetTimer2((__int64)&ExpTimeRefreshTimer, (LARGE_INTEGER)ExpTimeRefreshInterval, 0LL, (__int64)v3);
}
