/*
 * XREFs of IoStopIoRateControl @ 0x14042C4FC
 * Callers:
 *     PspIoRateEntryDeactivate @ 0x140A3B030 (PspIoRateEntryDeactivate.c)
 *     PspIoRateEntryActivate @ 0x140A3B3A4 (PspIoRateEntryActivate.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExGetExtensionTable @ 0x14042C694 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall IoStopIoRateControl(__int64 a1)
{
  __int64 v2; // rdx

  if ( ExGetExtensionTable(IopIoRateExtensionHost) )
  {
    guard_dispatch_icall_no_overrides(a1, v2);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 88));
  }
}
