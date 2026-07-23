/*
 * XREFs of PcwUnregister @ 0x140AA73C0
 * Callers:
 *     ExpPcwHostCallback @ 0x1407C1730 (ExpPcwHostCallback.c)
 * Callees:
 *     ExGetExtensionTable @ 0x140398F94 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1404450F0 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __stdcall PcwUnregister(PPCW_REGISTRATION Registration)
{
  __int64 v2; // rdx

  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost) )
  {
    guard_dispatch_icall_no_overrides(Registration, v2);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  }
}
