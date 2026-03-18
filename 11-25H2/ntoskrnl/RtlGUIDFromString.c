/*
 * XREFs of RtlGUIDFromString @ 0x140959130
 * Callers:
 *     RtlQueryPackageIdentityEx @ 0x140292660 (RtlQueryPackageIdentityEx.c)
 *     RtlQueryPackageClaims @ 0x140292AF0 (RtlQueryPackageClaims.c)
 *     PiDevCfgParseInterfaceKeyName @ 0x1404B003C (PiDevCfgParseInterfaceKeyName.c)
 *     PiDevCfgParsePropertyKeyName @ 0x1405A3500 (PiDevCfgParsePropertyKeyName.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405E3BE0 (RtlRaiseCustomSystemEventTrigger.c)
 *     IoVolumeDeviceNameToGuid @ 0x14070BA10 (IoVolumeDeviceNameToGuid.c)
 *     PipGetDriverKsrGuidRegistryValue @ 0x14070FC40 (PipGetDriverKsrGuidRegistryValue.c)
 *     PiDcInitUpdateProperties @ 0x14071B75C (PiDcInitUpdateProperties.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x14071D170 (PiDevCfgConvertPropertyFromValue.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14071D504 (PiDevCfgFindDeviceMigrationNode.c)
 *     SddlpUuidFromString @ 0x1407878B0 (SddlpUuidFromString.c)
 *     WdipSemLoadNextContextProvider @ 0x140791C78 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadNextEndEvent @ 0x140791F28 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextScenario @ 0x140792238 (WdipSemLoadNextScenario.c)
 *     WdipSemLoadScenarioTable @ 0x140792730 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x140793624 (WdipSemLoadLocalGroupPolicy.c)
 *     EtwStartAutoLogger @ 0x14079EA28 (EtwStartAutoLogger.c)
 *     ExpParseSignatureName @ 0x1407ACBB0 (ExpParseSignatureName.c)
 *     BcdEnumerateObjects @ 0x1408023A4 (BcdEnumerateObjects.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14080D190 (_CmDevicePanelEnumSubkeyCallback.c)
 *     IoVolumeDeviceToGuid @ 0x140822800 (IoVolumeDeviceToGuid.c)
 *     PiProcessNewDeviceNode @ 0x14082CE68 (PiProcessNewDeviceNode.c)
 *     PipProcessStartPhase3 @ 0x1408333C4 (PipProcessStartPhase3.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x140891DEC (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C95E0 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectActionCallback @ 0x1408CBF70 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1408CDEA0 (PiDmObjectGetCachedObjectProperty.c)
 *     PiPnpRtlGetFilteredDeviceInterfaceList @ 0x1408D1AE8 (PiPnpRtlGetFilteredDeviceInterfaceList.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x14094E730 (PiDmObjectUpdateCachedCmProperty.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140951D4C (_PnpGetGenericStorePropertyKeys.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x14095720C (_CmGetDeviceInterfaceClassGuid.c)
 *     _CmGetCommonClassRegKeyPath @ 0x140958F10 (_CmGetCommonClassRegKeyPath.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x140959250 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x14095A5C0 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PnpIsValidGuidString @ 0x14095AE04 (PnpIsValidGuidString.c)
 *     BiGetObjectIdentifier @ 0x14096BADC (BiGetObjectIdentifier.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1409A913C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1409AA514 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     BiBuildIdentifierList @ 0x140A27590 (BiBuildIdentifierList.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x140A27C2C (BiGetObjectReferenceFromEfiEntry.c)
 *     BiConvertRegistryDataToElement @ 0x140A5F768 (BiConvertRegistryDataToElement.c)
 *     PipGenerateContainerID @ 0x140A6E420 (PipGenerateContainerID.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140A75EEC (PiDevCfgConfigureDeviceInterfaces.c)
 *     EtwpEnableAutoLoggerProvider @ 0x140A78080 (EtwpEnableAutoLoggerProvider.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140A89FC0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140A9DAA0 (PiCreateDriverSwDeviceCallback.c)
 *     _CmSplitDevicePanelId @ 0x140AB1928 (_CmSplitDevicePanelId.c)
 *     BiBindEfiEntryToBcdObject @ 0x140AB8160 (BiBindEfiEntryToBcdObject.c)
 *     PopProcessWakeSourceWork @ 0x140B5D998 (PopProcessWakeSourceWork.c)
 *     EmpInfParseGetGuidFromName @ 0x140C051A4 (EmpInfParseGetGuidFromName.c)
 *     EmpParseEntryTypes @ 0x140C055A4 (EmpParseEntryTypes.c)
 *     IopInitializePlugPlayServices @ 0x140C0DF14 (IopInitializePlugPlayServices.c)
 *     PipResetDevice @ 0x140C10C10 (PipResetDevice.c)
 *     VhdAutoAttachVirtualDisks @ 0x140C4BCCC (VhdAutoAttachVirtualDisks.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ScanHexFormat @ 0x140959C00 (ScanHexFormat.c)
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
