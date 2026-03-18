/*
 * XREFs of HUBHSM_UnblockResumeWaitingForStop @ 0x14000A1F0
 * Callers:
 *     <none>
 * Callees:
 *     HUBFDO_AcquireWdfPowerReference @ 0x14000C9B0 (HUBFDO_AcquireWdfPowerReference.c)
 *     HUBFDO_SignalPnpPowerEvent @ 0x14000F60C (HUBFDO_SignalPnpPowerEvent.c)
 */

__int64 __fastcall HUBHSM_UnblockResumeWaitingForStop(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBFDO_AcquireWdfPowerReference(v1);
  HUBFDO_SignalPnpPowerEvent(v1);
  return 2053LL;
}
