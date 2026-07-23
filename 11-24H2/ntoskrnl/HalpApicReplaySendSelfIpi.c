/*
 * XREFs of HalpApicReplaySendSelfIpi @ 0x140572170
 * Callers:
 *     HalpApicReplayLocalInterrupts @ 0x1405720E0 (HalpApicReplayLocalInterrupts.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpApicReplaySendSelfIpi(int a1, __int64 a2)
{
  while ( (guard_dispatch_icall_no_overrides(768LL, a2) & 0x1000) != 0 )
    ;
  return guard_dispatch_icall_no_overrides(768LL, a1 | 0x40000u);
}
