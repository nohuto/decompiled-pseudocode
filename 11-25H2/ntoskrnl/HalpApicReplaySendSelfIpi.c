/*
 * XREFs of HalpApicReplaySendSelfIpi @ 0x1405719E0
 * Callers:
 *     HalpApicReplayLocalInterrupts @ 0x140571950 (HalpApicReplayLocalInterrupts.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 HalpApicReplaySendSelfIpi()
{
  while ( (guard_dispatch_icall_no_overrides(768LL) & 0x1000) != 0 )
    ;
  return guard_dispatch_icall_no_overrides(768LL);
}
