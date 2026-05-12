/*
 * XREFs of PortGetDeviceType @ 0x1401B85BC
 * Callers:
 *     RaidUnitGetCompatibleIds @ 0x14009E318 (RaidUnitGetCompatibleIds.c)
 *     RaidUnitGetDeviceId @ 0x14009E9BC (RaidUnitGetDeviceId.c)
 *     RaidUnitGetHardwareIds @ 0x14009EB24 (RaidUnitGetHardwareIds.c)
 *     RaidUnitRegisterInterfaces @ 0x14009FCC0 (RaidUnitRegisterInterfaces.c)
 *     RaUnitQueryDeviceTextIrp @ 0x140185CFC (RaUnitQueryDeviceTextIrp.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1401B7B2C (RaUnitQueryCapabilitiesIrp.c)
 * Callees:
 *     <none>
 */

char **__fastcall PortGetDeviceType(unsigned int a1)
{
  __int64 v1; // rax

  v1 = 21LL;
  if ( a1 < 0x16 )
    v1 = a1;
  return &PortScsiDeviceTypes[4 * v1];
}
