/*
 * XREFs of HUBSM_AddHsmEvent @ 0x14000AD40
 * Callers:
 *     HUBFDO_EvtDeviceAdd @ 0x140079BE0 (HUBFDO_EvtDeviceAdd.c)
 *     HUBFDO_EvtDevicePrepareHardware @ 0x14007A970 (HUBFDO_EvtDevicePrepareHardware.c)
 *     HUBFDO_EvtDeviceReleaseHardware @ 0x14007B4E0 (HUBFDO_EvtDeviceReleaseHardware.c)
 *     HUBFDO_IoctlGetPortStatus @ 0x14007E4B8 (HUBFDO_IoctlGetPortStatus.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x14000A83C (HUBSM_AddEvent.c)
 */

__int64 __fastcall HUBSM_AddHsmEvent(__int64 a1, int a2)
{
  return HUBSM_AddEvent(a1 + 1280, a2);
}
