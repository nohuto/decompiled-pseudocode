/*
 * XREFs of VerifierExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x140B8E520
 * Callers:
 *     <none>
 * Callees:
 *     ExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x1403E8C40 (ExEnterCriticalRegionAndAcquireSharedWaitForExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

PVOID __fastcall VerifierExEnterCriticalRegionAndAcquireSharedWaitForExclusive(
        struct _ERESOURCE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  if ( pXdvExEnterCriticalRegionAndAcquireSharedWaitForExclusive )
    return (PVOID)guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  else
    return ExEnterCriticalRegionAndAcquireSharedWaitForExclusive(a1);
}
