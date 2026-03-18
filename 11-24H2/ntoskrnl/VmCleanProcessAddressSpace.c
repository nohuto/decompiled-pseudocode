/*
 * XREFs of VmCleanProcessAddressSpace @ 0x14079E568
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x140A06E44 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402C6A90 (ExWaitForRundownProtectionRelease.c)
 *     ExGetExtensionTable @ 0x1403AA530 (ExGetExtensionTable.c)
 *     FsRtlAcquirePushLockExclusive @ 0x1403C5B9C (FsRtlAcquirePushLockExclusive.c)
 *     ExReleaseExtensionTable @ 0x14044FE80 (ExReleaseExtensionTable.c)
 *     VmpReleasePushLockExclusive @ 0x1404860F0 (VmpReleasePushLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall VmCleanProcessAddressSpace(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  v1 = *(_QWORD *)(a1 + 1648);
  if ( v1 )
  {
    FsRtlAcquirePushLockExclusive((unsigned __int64 *)(v1 + 120));
    *(_WORD *)(v1 + 138) |= 1u;
    VmpReleasePushLockExclusive((volatile signed __int64 *)(v1 + 120));
    if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)VmpExtensionHost) )
    {
      guard_dispatch_icall_no_overrides(a1, v3, v4, v5);
      ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)VmpExtensionHost);
    }
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v1 + 128));
  }
}
