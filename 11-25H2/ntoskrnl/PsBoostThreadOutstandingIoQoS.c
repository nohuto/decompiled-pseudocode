/*
 * XREFs of PsBoostThreadOutstandingIoQoS @ 0x140325D24
 * Callers:
 *     KiAbConvertWaiterToOwnerEntry @ 0x14027E670 (KiAbConvertWaiterToOwnerEntry.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExpAcquireResourceSharedLite @ 0x1402955C0 (ExpAcquireResourceSharedLite.c)
 *     KiAbDeferredProcessingWorker @ 0x1402E4D00 (KiAbDeferredProcessingWorker.c)
 *     KiAbProcessThreadLocks @ 0x1402E8D40 (KiAbProcessThreadLocks.c)
 *     ExpApplyPriorityBoost @ 0x140324DC0 (ExpApplyPriorityBoost.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x1403242B0 (ExfReleaseRundownProtection.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall PsBoostThreadOutstandingIoQoS(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  struct _EX_RUNDOWN_REF *v4; // rcx
  unsigned __int64 v5; // rtt

  if ( *(_DWORD *)(a1 + 1512) )
  {
    v2 = IopIoRateExtensionHost;
    if ( IopIoRateExtensionHost )
    {
      if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 88)) && *(_QWORD *)(v2 + 96) )
      {
        guard_dispatch_icall_no_overrides(a1, v3);
        v4 = (struct _EX_RUNDOWN_REF *)(IopIoRateExtensionHost + 88);
        _m_prefetchw((const void *)(IopIoRateExtensionHost + 88));
        v5 = v4->Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v5 != _InterlockedCompareExchange64((volatile signed __int64 *)v4, v5 - 2, v5) )
          ExfReleaseRundownProtection(v4);
      }
    }
  }
}
