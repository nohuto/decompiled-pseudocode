/*
 * XREFs of HUBSM_AddDsmEvent @ 0x14000A820
 * Callers:
 *     HUBFDO_IoctlGetDescriptorFromNodeConnection @ 0x14007BFEC (HUBFDO_IoctlGetDescriptorFromNodeConnection.c)
 *     HUBPDO_EvtDeviceReleaseHardware @ 0x140082700 (HUBPDO_EvtDeviceReleaseHardware.c)
 *     HUBPDO_EvtDeviceReportedMissing @ 0x140082A30 (HUBPDO_EvtDeviceReportedMissing.c)
 *     HUBPDO_EvtDeviceResourceRequirementsQuery @ 0x140082A90 (HUBPDO_EvtDeviceResourceRequirementsQuery.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x14000A83C (HUBSM_AddEvent.c)
 */

__int64 __fastcall HUBSM_AddDsmEvent(__int64 a1, __int64 a2)
{
  return HUBSM_AddEvent(a1 + 512, a2);
}
