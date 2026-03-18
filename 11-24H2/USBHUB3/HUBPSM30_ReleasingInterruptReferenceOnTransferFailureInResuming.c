/*
 * XREFs of HUBPSM30_ReleasingInterruptReferenceOnTransferFailureInResuming @ 0x1400143B0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_ReleaseInterruptReference @ 0x140011E84 (HUBMUX_ReleaseInterruptReference.c)
 */

__int64 __fastcall HUBPSM30_ReleasingInterruptReferenceOnTransferFailureInResuming(__int64 a1)
{
  HUBMUX_ReleaseInterruptReference(*(volatile signed __int32 **)(a1 + 960));
  return 3013LL;
}
