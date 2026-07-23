/*
 * XREFs of PspSetProcessEnergyTrackingStateCallback @ 0x140A77D70
 * Callers:
 *     <none>
 * Callees:
 *     PsUpdateComponentPower @ 0x14041F720 (PsUpdateComponentPower.c)
 */

__int64 __fastcall PspSetProcessEnergyTrackingStateCallback(struct _KPROCESS *a1, unsigned __int64 *a2)
{
  PsUpdateComponentPower(a1, 8u, *a2);
  return 0LL;
}
