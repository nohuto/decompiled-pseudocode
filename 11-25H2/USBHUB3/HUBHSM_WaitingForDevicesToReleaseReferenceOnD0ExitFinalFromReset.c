/*
 * XREFs of HUBHSM_WaitingForDevicesToReleaseReferenceOnD0ExitFinalFromReset @ 0x14000A450
 * Callers:
 *     <none>
 * Callees:
 *     HUBFDO_ReleaseWdfPowerReference @ 0x14000EF70 (HUBFDO_ReleaseWdfPowerReference.c)
 *     HUBMUX_QueuePowerDownEventToDSMs @ 0x1400114A4 (HUBMUX_QueuePowerDownEventToDSMs.c)
 */

__int64 __fastcall HUBHSM_WaitingForDevicesToReleaseReferenceOnD0ExitFinalFromReset(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBFDO_ReleaseWdfPowerReference(v1);
  HUBMUX_QueuePowerDownEventToDSMs(v1, 4022LL);
  return 1000LL;
}
