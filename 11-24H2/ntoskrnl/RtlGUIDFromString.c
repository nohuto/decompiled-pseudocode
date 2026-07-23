/*
 * XREFs of RtlGUIDFromString @ 0x1408C7C70
 * Callers:
 *     RtlQueryPackageIdentityEx @ 0x140422890 (RtlQueryPackageIdentityEx.c)
 *     RtlQueryPackageClaims @ 0x140422D20 (RtlQueryPackageClaims.c)
 *     PiDevCfgParseInterfaceKeyName @ 0x1404AB8CC (PiDevCfgParseInterfaceKeyName.c)
 *     PiDevCfgParsePropertyKeyName @ 0x1405A3D00 (PiDevCfgParsePropertyKeyName.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405ED4D0 (RtlRaiseCustomSystemEventTrigger.c)
 *     IoVolumeDeviceNameToGuid @ 0x1407156A0 (IoVolumeDeviceNameToGuid.c)
 *     PipGetDriverKsrGuidRegistryValue @ 0x1407198D0 (PipGetDriverKsrGuidRegistryValue.c)
 *     PiDcInitUpdateProperties @ 0x14072526C (PiDcInitUpdateProperties.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x140726CF0 (PiDevCfgConvertPropertyFromValue.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1407270E0 (PiDevCfgFindDeviceMigrationNode.c)
 *     SddlpUuidFromString @ 0x140796D90 (SddlpUuidFromString.c)
 *     WdipSemLoadNextContextProvider @ 0x1407A1160 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadNextEndEvent @ 0x1407A1410 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextScenario @ 0x1407A1720 (WdipSemLoadNextScenario.c)
 *     WdipSemLoadScenarioTable @ 0x1407A1C18 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x1407A2B0C (WdipSemLoadLocalGroupPolicy.c)
 *     EtwStartAutoLogger @ 0x1407AE248 (EtwStartAutoLogger.c)
 *     ExpParseSignatureName @ 0x1407BC480 (ExpParseSignatureName.c)
 *     BcdEnumerateObjects @ 0x14081265C (BcdEnumerateObjects.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14081D7D0 (_CmDevicePanelEnumSubkeyCallback.c)
 *     PnpIsValidGuidString @ 0x1408B5960 (PnpIsValidGuidString.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C4E80 (PiPnpRtlCmActionCallback.c)
 *     _CmGetCommonClassRegKeyPath @ 0x1408C7A40 (_CmGetCommonClassRegKeyPath.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1408C7D90 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x1408C9070 (_CmGetDeviceInterfaceClassGuid.c)
 *     PiPnpRtlObjectActionCallback @ 0x1408CC090 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1408CDD40 (PiDmObjectGetCachedObjectProperty.c)
 *     IoVolumeDeviceToGuid @ 0x14094FD30 (IoVolumeDeviceToGuid.c)
 *     PipProcessStartPhase3 @ 0x14097B0A4 (PipProcessStartPhase3.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x14097D12C (_PnpGetGenericStorePropertyKeys.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x14099AAC0 (PiDmObjectGetCachedObjectPropertyData.c)
 *     BiGetObjectIdentifier @ 0x1409A5118 (BiGetObjectIdentifier.c)
 *     BiBuildIdentifierList @ 0x1409A55CC (BiBuildIdentifierList.c)
 *     BiConvertRegistryDataToElement @ 0x1409A5CA8 (BiConvertRegistryDataToElement.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1409A60FC (BiGetObjectReferenceFromEfiEntry.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1409ABB00 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1409ACEE0 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x1409C3E70 (PiDmObjectUpdateCachedCmProperty.c)
 *     PiPnpRtlGetFilteredDeviceInterfaceList @ 0x1409C479C (PiPnpRtlGetFilteredDeviceInterfaceList.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x1409D1CC4 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PipGenerateContainerID @ 0x140A69ACC (PipGenerateContainerID.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140A71FC0 (PiDevCfgConfigureDeviceInterfaces.c)
 *     EtwpEnableAutoLoggerProvider @ 0x140A741F0 (EtwpEnableAutoLoggerProvider.c)
 *     PiProcessNewDeviceNode @ 0x140A76864 (PiProcessNewDeviceNode.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140A8B600 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140A9E6B0 (PiCreateDriverSwDeviceCallback.c)
 *     _CmSplitDevicePanelId @ 0x140AB0C0C (_CmSplitDevicePanelId.c)
 *     BiBindEfiEntryToBcdObject @ 0x140AB7300 (BiBindEfiEntryToBcdObject.c)
 *     PopProcessWakeSourceWork @ 0x140B6E318 (PopProcessWakeSourceWork.c)
 *     EmpInfParseGetGuidFromName @ 0x140C18244 (EmpInfParseGetGuidFromName.c)
 *     EmpParseEntryTypes @ 0x140C18644 (EmpParseEntryTypes.c)
 *     IopInitializePlugPlayServices @ 0x140C210BC (IopInitializePlugPlayServices.c)
 *     PipResetDevice @ 0x140C23DB0 (PipResetDevice.c)
 *     VhdAutoAttachVirtualDisks @ 0x140C5F1A4 (VhdAutoAttachVirtualDisks.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ScanHexFormat @ 0x1408C8740 (ScanHexFormat.c)
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
