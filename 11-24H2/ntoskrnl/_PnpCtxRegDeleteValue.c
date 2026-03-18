/*
 * XREFs of _PnpCtxRegDeleteValue @ 0x14098FA7C
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1405A36C0 (PipUpdateDeviceProducts.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x140719F50 (PipHardwareConfigClearStartOverrideCallback.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x1408192D4 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x14081A760 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x14081DB50 (_CmRemovePanelDeviceWorker.c)
 *     _CmDeleteDeviceMappedPropertyFromDriverKeyRegValue @ 0x14081E024 (_CmDeleteDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14081E148 (_CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x14081E250 (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x14081E3E8 (_CmDeleteInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmSetInstallerClassMappedProperty @ 0x14081F7C4 (_CmSetInstallerClassMappedProperty.c)
 *     DrvDbDeleteObjectSubKey @ 0x1408215CC (DrvDbDeleteObjectSubKey.c)
 *     DrvDbSetRegValueMappedProperty @ 0x14082348C (DrvDbSetRegValueMappedProperty.c)
 *     _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x1408B1A6C (_CmDeleteDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmSetDeviceRegPropWorker @ 0x140990F90 (_CmSetDeviceRegPropWorker.c)
 *     _PnpDeletePropertyWorker @ 0x140991470 (_PnpDeletePropertyWorker.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140995624 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     PiDevCfgMigrateDevice @ 0x14099A6AC (PiDevCfgMigrateDevice.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x1409B75AC (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x140A6A994 (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140A847DC (PiDevCfgResetDeviceDriverSettings.c)
 *     PiCMCreateDevice @ 0x140AB4970 (PiCMCreateDevice.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045AA10 (RtlInitUnicodeStringEx.c)
 *     ZwDeleteValueKey @ 0x1406A7FF0 (ZwDeleteValueKey.c)
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
