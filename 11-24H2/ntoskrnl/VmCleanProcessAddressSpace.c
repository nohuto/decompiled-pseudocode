/*
 * XREFs of VmCleanProcessAddressSpace @ 0x14079E678
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x140A03374 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402BB610 (ExWaitForRundownProtectionRelease.c)
 *     ExGetExtensionTable @ 0x140398F94 (ExGetExtensionTable.c)
 *     FsRtlAcquirePushLockExclusive @ 0x1403B475C (FsRtlAcquirePushLockExclusive.c)
 *     ExReleaseExtensionTable @ 0x1404450F0 (ExReleaseExtensionTable.c)
 *     VmpReleasePushLockExclusive @ 0x1404816E0 (VmpReleasePushLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall VmCleanProcessAddressSpace(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rdx

  v1 = *(_QWORD *)(a1 + 1648);
  if ( v1 )
  {
    FsRtlAcquirePushLockExclusive((unsigned __int64 *)(v1 + 120));
    *(_WORD *)(v1 + 138) |= 1u;
    VmpReleasePushLockExclusive((volatile signed __int64 *)(v1 + 120));
    if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)VmpExtensionHost) )
    {
      guard_dispatch_icall_no_overrides(a1, v3);
      ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)VmpExtensionHost);
    }
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v1 + 128));
  }
}
