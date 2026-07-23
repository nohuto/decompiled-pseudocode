/*
 * XREFs of KiBugCheckDebugBreak @ 0x1405AFCE0
 * Callers:
 *     KeBugCheck2 @ 0x1405AE6F0 (KeBugCheck2.c)
 *     KeEnterKernelDebugger @ 0x1405AF7A0 (KeEnterKernelDebugger.c)
 *     KiAttemptBugcheckRecovery @ 0x1405C2EB4 (KiAttemptBugcheckRecovery.c)
 * Callees:
 *     DbgBreakPointWithStatus @ 0x1404FA0D0 (DbgBreakPointWithStatus.c)
 *     KiHeadlessDisplayString @ 0x1405B0E3C (KiHeadlessDisplayString.c)
 *     HeadlessDispatch @ 0x1406523F0 (HeadlessDispatch.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall KiBugCheckDebugBreak(ULONG Status)
{
  do
    DbgBreakPointWithStatus(Status);
  while ( Status != 3 );
}
