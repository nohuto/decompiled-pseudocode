/*
 * XREFs of ExpTimeRefreshWork @ 0x140B612C0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     KeSetTimer2 @ 0x1403C20A0 (KeSetTimer2.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAcquireTimeRefreshLockExclusive @ 0x1409B1FC0 (ExAcquireTimeRefreshLockExclusive.c)
 *     ExReleaseTimeRefreshLockExclusive @ 0x1409B2024 (ExReleaseTimeRefreshLockExclusive.c)
 *     ExUpdateSystemTimeFromCmos @ 0x140B68020 (ExUpdateSystemTimeFromCmos.c)
 */

__int64 ExpTimeRefreshWork()
{
  __int64 v0; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  do
  {
    ExAcquireTimeRefreshLockExclusive();
    if ( KeTimeSynchronization )
      ExUpdateSystemTimeFromCmos(0LL, 0LL);
    ExReleaseTimeRefreshLockExclusive();
    Blink = PsGetCurrentServerSiloGlobals()[54].Blink;
    if ( qword_140FD7470 )
      guard_dispatch_icall_no_overrides(Blink, v0, v2, v3);
  }
  while ( _InterlockedExchangeAdd(&ExpOkToTimeRefresh, 0xFFFFFFFF) != 1 );
  v5[0] = 0LL;
  v5[1] = -1LL;
  return KeSetTimer2((__int64)&ExpTimeRefreshTimer, ExpTimeRefreshInterval, 0LL, (__int64)v5);
}
