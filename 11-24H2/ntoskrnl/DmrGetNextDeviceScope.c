/*
 * XREFs of DmrGetNextDeviceScope @ 0x140576BD0
 * Callers:
 *     IvtpGetNextInternalDeviceScope @ 0x1404F60D0 (IvtpGetNextInternalDeviceScope.c)
 *     DmrGetNextDrhdDeviceScope @ 0x1405768E0 (DmrGetNextDrhdDeviceScope.c)
 *     DmrEnumerateSatcDevices @ 0x140576A70 (DmrEnumerateSatcDevices.c)
 *     DmrEnumerateRmrrDomains @ 0x140576D60 (DmrEnumerateRmrrDomains.c)
 *     IvtCheckForReservedRegion @ 0x140702270 (IvtCheckForReservedRegion.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall DmrGetNextDeviceScope(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r9
  unsigned __int64 v6; // rdx

  v3 = 0LL;
  if ( a3 )
    a1 = a3 + *(unsigned __int8 *)(a3 + 1);
  if ( a1 > a3 && a1 + 2 >= a1 && a1 + 2 <= a2 )
  {
    v6 = a1 + *(unsigned __int8 *)(a1 + 1);
    if ( v6 > a1 && v6 <= a2 )
      return a1;
  }
  return v3;
}
