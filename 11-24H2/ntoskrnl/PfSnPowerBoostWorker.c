/*
 * XREFs of PfSnPowerBoostWorker @ 0x140745A10
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     PfSnPowerBoostUpdate @ 0x140A77ED8 (PfSnPowerBoostUpdate.c)
 */

void __fastcall PfSnPowerBoostWorker(PEX_RUNDOWN_REF RunRef)
{
  PfSnPowerBoostUpdate(0LL);
  ExReleaseRundownProtection_0(RunRef);
}
