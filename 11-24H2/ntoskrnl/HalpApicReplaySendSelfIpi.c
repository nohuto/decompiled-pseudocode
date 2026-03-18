/*
 * XREFs of HalpApicReplaySendSelfIpi @ 0x140574CE0
 * Callers:
 *     HalpApicReplayLocalInterrupts @ 0x140574C50 (HalpApicReplayLocalInterrupts.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpApicReplaySendSelfIpi(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  while ( (guard_dispatch_icall_no_overrides(768LL, a2, a3, a4) & 0x1000) != 0 )
    ;
  return guard_dispatch_icall_no_overrides(768LL, a1 | 0x40000u, a3, a4);
}
