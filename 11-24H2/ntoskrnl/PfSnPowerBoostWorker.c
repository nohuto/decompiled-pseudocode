/*
 * XREFs of PfSnPowerBoostWorker @ 0x140747720
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     PfSnPowerBoostUpdate @ 0x140A7DBD8 (PfSnPowerBoostUpdate.c)
 */

void __fastcall PfSnPowerBoostWorker(PEX_RUNDOWN_REF RunRef)
{
  PfSnPowerBoostUpdate(0LL);
  ExReleaseRundownProtection_0(RunRef);
}
