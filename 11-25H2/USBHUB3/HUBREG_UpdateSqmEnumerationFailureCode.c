/*
 * XREFs of HUBREG_UpdateSqmEnumerationFailureCode @ 0x14008C914
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess @ 0x140016670 (HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess.c)
 * Callees:
 *     HUBREG_WriteValueToDeviceHardwareKey @ 0x14008D400 (HUBREG_WriteValueToDeviceHardwareKey.c)
 */

__int64 __fastcall HUBREG_UpdateSqmEnumerationFailureCode(__int64 a1)
{
  int v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 2432);
  return HUBREG_WriteValueToDeviceHardwareKey(a1, (unsigned int)L",.", 4, 4, (__int64)&v2);
}
