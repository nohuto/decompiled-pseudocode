/*
 * XREFs of HUBDSM_UnregisteringWithHSMOnDetachAfterCleanup @ 0x140024E90
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_UnregisterWithHSM @ 0x140012050 (HUBMUX_UnregisterWithHSM.c)
 *     HUBMISC_ReleaseWdfReferenceOnPort @ 0x140033464 (HUBMISC_ReleaseWdfReferenceOnPort.c)
 */

__int64 __fastcall HUBDSM_UnregisteringWithHSMOnDetachAfterCleanup(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBMUX_UnregisterWithHSM(v1);
  HUBMISC_ReleaseWdfReferenceOnPort(v1);
  return 4077LL;
}
