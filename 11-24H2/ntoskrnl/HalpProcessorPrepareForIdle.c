/*
 * XREFs of HalpProcessorPrepareForIdle @ 0x140543BC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpProcessorPrepareForIdle(__int64 a1, __int64 a2)
{
  if ( SLODWORD(KeGetCurrentPrcb()->HalReserved[3]) > 0
    && (KeGetCurrentPrcb()->HalReserved[3] & 1) == 0
    && HalpProfileInterface[9] )
  {
    guard_dispatch_icall_no_overrides(a1, a2);
  }
  return 0LL;
}
