/*
 * XREFs of HUBHSM_WaitingForPortsToAcquireReferenceOnStart @ 0x14000A670
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_EnableResetHub @ 0x140011438 (HUBMUX_EnableResetHub.c)
 *     HUBMUX_QueuePowerUpEventToPSMs @ 0x140011940 (HUBMUX_QueuePowerUpEventToPSMs.c)
 *     FWUPDATE_ReenumerateFirmwareUpdateDevice @ 0x140042408 (FWUPDATE_ReenumerateFirmwareUpdateDevice.c)
 */

__int64 __fastcall HUBHSM_WaitingForPortsToAcquireReferenceOnStart(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBMUX_EnableResetHub(v1);
  _InterlockedAnd((volatile signed __int32 *)(v1 + 2368), 0xFFFFFFEF);
  HUBMUX_QueuePowerUpEventToPSMs(v1, 3026LL);
  FWUPDATE_ReenumerateFirmwareUpdateDevice(v1);
  return 1000LL;
}
