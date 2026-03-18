/*
 * XREFs of RtlGUIDFromString @ 0x1408CA240
 * Callers:
 *     RtlQueryPackageIdentityEx @ 0x140355EF0 (RtlQueryPackageIdentityEx.c)
 *     RtlQueryPackageClaims @ 0x140356380 (RtlQueryPackageClaims.c)
 *     PiDevCfgParseInterfaceKeyName @ 0x1404B103C (PiDevCfgParseInterfaceKeyName.c)
 *     PiDevCfgParsePropertyKeyName @ 0x1405A6D10 (PiDevCfgParsePropertyKeyName.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405EFEF0 (RtlRaiseCustomSystemEventTrigger.c)
 *     IoVolumeDeviceNameToGuid @ 0x140717B10 (IoVolumeDeviceNameToGuid.c)
 *     PipGetDriverKsrGuidRegistryValue @ 0x14071BD40 (PipGetDriverKsrGuidRegistryValue.c)
 *     PiDcInitUpdateProperties @ 0x1407276DC (PiDcInitUpdateProperties.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x1407290F0 (PiDevCfgConvertPropertyFromValue.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140729484 (PiDevCfgFindDeviceMigrationNode.c)
 *     SddlpUuidFromString @ 0x140796C80 (SddlpUuidFromString.c)
 *     WdipSemLoadNextContextProvider @ 0x1407A1050 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadNextEndEvent @ 0x1407A1300 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextScenario @ 0x1407A1610 (WdipSemLoadNextScenario.c)
 *     WdipSemLoadScenarioTable @ 0x1407A1B08 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x1407A29FC (WdipSemLoadLocalGroupPolicy.c)
 *     EtwStartAutoLogger @ 0x1407ADDF8 (EtwStartAutoLogger.c)
 *     ExpParseSignatureName @ 0x1407BC030 (ExpParseSignatureName.c)
 *     BcdEnumerateObjects @ 0x140811F1C (BcdEnumerateObjects.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14081D090 (_CmDevicePanelEnumSubkeyCallback.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x140831268 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PnpIsValidGuidString @ 0x1408B7FF0 (PnpIsValidGuidString.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C7450 (PiPnpRtlCmActionCallback.c)
 *     _CmGetCommonClassRegKeyPath @ 0x1408CA010 (_CmGetCommonClassRegKeyPath.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1408CA360 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x1408CB640 (_CmGetDeviceInterfaceClassGuid.c)
 *     PiPnpRtlObjectActionCallback @ 0x1408CE6A0 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1408D0350 (PiDmObjectGetCachedObjectProperty.c)
 *     IoVolumeDeviceToGuid @ 0x1409672A0 (IoVolumeDeviceToGuid.c)
 *     PipProcessStartPhase3 @ 0x14099006C (PipProcessStartPhase3.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1409920EC (_PnpGetGenericStorePropertyKeys.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1409B1000 (PiDmObjectGetCachedObjectPropertyData.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1409B4770 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1409B5B50 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     BiGetObjectIdentifier @ 0x1409BEAC8 (BiGetObjectIdentifier.c)
 *     BiBuildIdentifierList @ 0x1409BEF7C (BiBuildIdentifierList.c)
 *     BiConvertRegistryDataToElement @ 0x1409BF658 (BiConvertRegistryDataToElement.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1409BFAAC (BiGetObjectReferenceFromEfiEntry.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x1409D4040 (PiDmObjectUpdateCachedCmProperty.c)
 *     PiPnpRtlGetFilteredDeviceInterfaceList @ 0x1409D496C (PiPnpRtlGetFilteredDeviceInterfaceList.c)
 *     PipGenerateContainerID @ 0x140A7063C (PipGenerateContainerID.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140A77CC0 (PiDevCfgConfigureDeviceInterfaces.c)
 *     EtwpEnableAutoLoggerProvider @ 0x140A79EF0 (EtwpEnableAutoLoggerProvider.c)
 *     PiProcessNewDeviceNode @ 0x140A7C564 (PiProcessNewDeviceNode.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140A8EF90 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140AA3320 (PiCreateDriverSwDeviceCallback.c)
 *     _CmSplitDevicePanelId @ 0x140AB6934 (_CmSplitDevicePanelId.c)
 *     BiBindEfiEntryToBcdObject @ 0x140ABC2E0 (BiBindEfiEntryToBcdObject.c)
 *     PopProcessWakeSourceWork @ 0x140B6CA78 (PopProcessWakeSourceWork.c)
 *     EmpInfParseGetGuidFromName @ 0x140C16244 (EmpInfParseGetGuidFromName.c)
 *     EmpParseEntryTypes @ 0x140C16644 (EmpParseEntryTypes.c)
 *     IopInitializePlugPlayServices @ 0x140C1F07C (IopInitializePlugPlayServices.c)
 *     PipResetDevice @ 0x140C21D70 (PipResetDevice.c)
 *     VhdAutoAttachVirtualDisks @ 0x140C5D04C (VhdAutoAttachVirtualDisks.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ScanHexFormat @ 0x1408CAD10 (ScanHexFormat.c)
 */

NTSTATUS __stdcall RtlGUIDFromString(PCUNICODE_STRING GuidString, GUID *Guid)
{
  unsigned __int16 *p_Data2; // r8
  unsigned __int16 *p_Data3; // rax
  unsigned int Length; // edx
  wchar_t *Buffer; // rcx
  unsigned int v7; // r8d
  unsigned __int8 *v8; // rdx
  unsigned __int8 *v9; // rax
  unsigned __int8 v10; // cl
  __int128 v12; // [rsp+70h] [rbp-28h] BYREF

  p_Data2 = &Guid->Data2;
  p_Data3 = &Guid->Data3;
  Length = GuidString->Length;
  Buffer = GuidString->Buffer;
  v12 = 0LL;
  if ( (unsigned int)ScanHexFormat(
                       Buffer,
                       Length >> 1,
                       L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
                       Guid,
                       p_Data2,
                       p_Data3,
                       &v12,
                       (char *)&v12 + 2,
                       (char *)&v12 + 4,
                       (char *)&v12 + 6,
                       (char *)&v12 + 8,
                       (char *)&v12 + 10,
                       (char *)&v12 + 12,
                       (char *)&v12 + 14) == -1 )
    return -1073741811;
  v7 = 0;
  v8 = &Guid->Data4[1];
  v9 = (unsigned __int8 *)&v12 + 2;
  do
  {
    v7 += 8;
    *(v8 - 1) = *(v9 - 2);
    v8 += 8;
    v10 = *v9;
    v9 += 16;
    *(v8 - 8) = v10;
    *(v8 - 7) = *(v9 - 14);
    *(v8 - 6) = *(v9 - 12);
    *(v8 - 5) = *(v9 - 10);
    *(v8 - 4) = *(v9 - 8);
    *(v8 - 3) = *(v9 - 6);
    *(v8 - 2) = *(v9 - 4);
  }
  while ( v7 < 8 );
  return 0;
}
