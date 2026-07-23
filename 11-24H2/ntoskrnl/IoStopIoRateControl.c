/*
 * XREFs of IoStopIoRateControl @ 0x140398DFC
 * Callers:
 *     PspIoRateEntryDeactivate @ 0x14085A670 (PspIoRateEntryDeactivate.c)
 *     PspIoRateEntryActivate @ 0x140A6D2B4 (PspIoRateEntryActivate.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExGetExtensionTable @ 0x140398F94 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
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
