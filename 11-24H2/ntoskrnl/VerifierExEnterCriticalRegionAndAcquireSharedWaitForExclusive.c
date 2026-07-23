/*
 * XREFs of VerifierExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x140B90520
 * Callers:
 *     <none>
 * Callees:
 *     ExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x1403D67E0 (ExEnterCriticalRegionAndAcquireSharedWaitForExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

PVOID __fastcall VerifierExEnterCriticalRegionAndAcquireSharedWaitForExclusive(struct _ERESOURCE *a1, __int64 a2)
{
  if ( pXdvExEnterCriticalRegionAndAcquireSharedWaitForExclusive )
    return (PVOID)guard_dispatch_icall_no_overrides(a1, a2);
  else
    return ExEnterCriticalRegionAndAcquireSharedWaitForExclusive(a1);
}
