/*
 * XREFs of PcwUnregister @ 0x140AA6F50
 * Callers:
 *     ExpPcwHostCallback @ 0x1407B1B10 (ExpPcwHostCallback.c)
 * Callees:
 *     ExGetExtensionTable @ 0x14042C694 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1404516B0 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __stdcall PcwUnregister(PPCW_REGISTRATION Registration)
{
  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost) )
  {
    guard_dispatch_icall_no_overrides(Registration);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  }
}
