/*
 * XREFs of HalpProcessorPrepareForIdle @ 0x140543A10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpProcessorPrepareForIdle(__int64 a1)
{
  if ( SLODWORD(KeGetCurrentPrcb()->HalReserved[3]) > 0
    && (KeGetCurrentPrcb()->HalReserved[3] & 1) == 0
    && HalpProfileInterface[9] )
  {
    guard_dispatch_icall_no_overrides(a1);
  }
  return 0LL;
}
