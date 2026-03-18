/*
 * XREFs of PsBoostThreadOutstandingIoQoS @ 0x1402788E0
 * Callers:
 *     KiAbProcessThreadLocks @ 0x1402509C0 (KiAbProcessThreadLocks.c)
 *     KiAbDeferredProcessingWorker @ 0x140253050 (KiAbDeferredProcessingWorker.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     ExpApplyPriorityBoost @ 0x140277A10 (ExpApplyPriorityBoost.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x140323370 (KiAbConvertWaiterToOwnerEntry.c)
 *     ExpAcquireResourceSharedLite @ 0x140342300 (ExpAcquireResourceSharedLite.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x1402456A0 (ExfReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall PsBoostThreadOutstandingIoQoS(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  struct _EX_RUNDOWN_REF *v6; // rcx
  unsigned __int64 v7; // rtt

  if ( *(_DWORD *)(a1 + 1512) )
  {
    v2 = IopIoRateExtensionHost;
    if ( IopIoRateExtensionHost )
    {
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 88)) && *(_QWORD *)(v2 + 96) )
      {
        guard_dispatch_icall_no_overrides(a1, v3, v4, v5);
        v6 = (struct _EX_RUNDOWN_REF *)(IopIoRateExtensionHost + 88);
        _m_prefetchw((const void *)(IopIoRateExtensionHost + 88));
        v7 = v6->Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v7 != _InterlockedCompareExchange64((volatile signed __int64 *)v6, v7 - 2, v7) )
          ExfReleaseRundownProtection(v6);
      }
    }
  }
}
