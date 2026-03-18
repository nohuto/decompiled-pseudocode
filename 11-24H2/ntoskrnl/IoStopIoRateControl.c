/*
 * XREFs of IoStopIoRateControl @ 0x1403AA398
 * Callers:
 *     PspIoRateEntryDeactivate @ 0x14085E900 (PspIoRateEntryDeactivate.c)
 *     PspIoRateEntryActivate @ 0x14085F29C (PspIoRateEntryActivate.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExGetExtensionTable @ 0x1403AA530 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall IoStopIoRateControl(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  if ( ExGetExtensionTable(IopIoRateExtensionHost) )
  {
    guard_dispatch_icall_no_overrides(a1, v2, v3, v4);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 88));
  }
}
