/*
 * XREFs of PpDevCfgRequestDeviceInstall @ 0x1406FAF90
 * Callers:
 *     PiUEventNotifyUserMode @ 0x1409EEFC4 (PiUEventNotifyUserMode.c)
 *     PpDevCfgInit @ 0x140C24F94 (PpDevCfgInit.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 */

__int64 PpDevCfgRequestDeviceInstall()
{
  unsigned int v0; // ecx

  v0 = 0;
  if ( (PiDevCfgFlags & 2) != 0 )
    return (unsigned int)ZwUpdateWnfStateData((__int64)&WNF_PNPC_DEVICE_INSTALL_REQUESTED, 0LL);
  return v0;
}
