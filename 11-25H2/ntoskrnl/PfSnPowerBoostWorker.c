/*
 * XREFs of PfSnPowerBoostWorker @ 0x14073B700
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     PfSnPowerBoostUpdate @ 0x140A7A900 (PfSnPowerBoostUpdate.c)
 */

void __fastcall PfSnPowerBoostWorker(PEX_RUNDOWN_REF RunRef)
{
  PfSnPowerBoostUpdate(0LL);
  ExReleaseRundownProtection_0(RunRef);
}
