/*
 * XREFs of _PnpCtxRegDeleteValue @ 0x14097AAB4
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1405A0600 (PipUpdateDeviceProducts.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x140717AE0 (PipHardwareConfigClearStartOverrideCallback.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140819A14 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x14081AEA0 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x14081E290 (_CmRemovePanelDeviceWorker.c)
 *     _CmDeleteDeviceMappedPropertyFromDriverKeyRegValue @ 0x14081E764 (_CmDeleteDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14081E888 (_CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x14081E990 (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x14081EB28 (_CmDeleteInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmSetInstallerClassMappedProperty @ 0x14081FF04 (_CmSetInstallerClassMappedProperty.c)
 *     DrvDbDeleteObjectSubKey @ 0x140821D0C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbSetRegValueMappedProperty @ 0x140823BCC (DrvDbSetRegValueMappedProperty.c)
 *     _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x1408AF360 (_CmDeleteDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmSetDeviceRegPropWorker @ 0x14097BFD0 (_CmSetDeviceRegPropWorker.c)
 *     _PnpDeletePropertyWorker @ 0x14097C4B0 (_PnpDeletePropertyWorker.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140980664 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x1409AE93C (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     PiDevCfgMigrateDevice @ 0x1409CCE1C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x140A640A4 (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140A7F31C (PiDevCfgResetDeviceDriverSettings.c)
 *     PiCMCreateDevice @ 0x140AB39A4 (PiCMCreateDevice.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     ZwDeleteValueKey @ 0x1406A8F90 (ZwDeleteValueKey.c)
 */

int __fastcall PnpCtxRegDeleteValue(__int64 a1, void *a2, const WCHAR *a3)
{
  int result; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  result = RtlInitUnicodeStringEx(&DestinationString, a3);
  if ( result >= 0 )
    return ZwDeleteValueKey(a2, &DestinationString);
  return result;
}
