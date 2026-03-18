/*
 * XREFs of PcwCloseInstance @ 0x140A594B0
 * Callers:
 *     <none>
 * Callees:
 *     ExGetExtensionTable @ 0x1403AA530 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x14044FE80 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __stdcall PcwCloseInstance(PPCW_INSTANCE Instance)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost) )
  {
    guard_dispatch_icall_no_overrides(Instance, v2, v3, v4);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  }
}
