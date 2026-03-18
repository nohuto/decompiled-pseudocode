/*
 * XREFs of imp_WdfPdoMarkMissing @ 0x14007AA20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPdoPackageFromDeviceHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEADPEAPEAVFxPkgPdo@@PEAPEAU1@PEAPEAVFxDevice@@@Z @ 0x140011470 (-GetPdoPackageFromDeviceHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEADPEAPEAVFxPkgPdo@.c)
 *     ?UpdateDeviceAsMissing@FxChildList@@QEAAJPEAVFxDevice@@@Z @ 0x14007AA84 (-UpdateDeviceAsMissing@FxChildList@@QEAAJPEAVFxDevice@@@Z.c)
 */

int __fastcall imp_WdfPdoMarkMissing(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  int result; // eax
  FxPkgPdo *pPkgPdo; // [rsp+40h] [rbp+8h] BYREF
  FxDevice *pDevice; // [rsp+50h] [rbp+18h] BYREF
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+58h] [rbp+20h] BYREF

  pFxDriverGlobals = 0LL;
  pPkgPdo = 0LL;
  pDevice = 0LL;
  result = GetPdoPackageFromDeviceHandle(
             (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
             (unsigned __int64)Device,
             "imp_WdfPdoMarkMissing",
             &pPkgPdo,
             &pFxDriverGlobals,
             &pDevice);
  if ( result >= 0 )
    return FxChildList::UpdateDeviceAsMissing(pPkgPdo->m_OwningChildList, pDevice);
  return result;
}
