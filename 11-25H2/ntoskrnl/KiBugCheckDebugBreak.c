/*
 * XREFs of KiBugCheckDebugBreak @ 0x1405AF3E0
 * Callers:
 *     KeBugCheck2 @ 0x1405ADDF0 (KeBugCheck2.c)
 *     KeEnterKernelDebugger @ 0x1405AEEA0 (KeEnterKernelDebugger.c)
 *     KiAttemptBugcheckRecovery @ 0x1405C13E4 (KiAttemptBugcheckRecovery.c)
 * Callees:
 *     DbgBreakPointWithStatus @ 0x1404FA090 (DbgBreakPointWithStatus.c)
 *     KiHeadlessDisplayString @ 0x1405B0518 (KiHeadlessDisplayString.c)
 *     HeadlessDispatch @ 0x140647D90 (HeadlessDispatch.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall KiBugCheckDebugBreak(ULONG Status)
{
  do
    DbgBreakPointWithStatus(Status);
  while ( Status != 3 );
}
