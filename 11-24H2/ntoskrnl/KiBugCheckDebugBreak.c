/*
 * XREFs of KiBugCheckDebugBreak @ 0x1405B2D70
 * Callers:
 *     KeBugCheck2 @ 0x1405B1780 (KeBugCheck2.c)
 *     KeEnterKernelDebugger @ 0x1405B2830 (KeEnterKernelDebugger.c)
 *     KiAttemptBugcheckRecovery @ 0x1405C5784 (KiAttemptBugcheckRecovery.c)
 * Callees:
 *     DbgBreakPointWithStatus @ 0x1404FC810 (DbgBreakPointWithStatus.c)
 *     KiHeadlessDisplayString @ 0x1405B3EC4 (KiHeadlessDisplayString.c)
 *     HeadlessDispatch @ 0x140653C90 (HeadlessDispatch.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall KiBugCheckDebugBreak(ULONG Status)
{
  do
    DbgBreakPointWithStatus(Status);
  while ( Status != 3 );
}
