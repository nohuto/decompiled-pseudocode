/*
 * XREFs of _wcsnicmp @ 0x1404FBDB0
 * Callers:
 *     PiDevCfgMatchDriverConfigurationId @ 0x1405A3C68 (PiDevCfgMatchDriverConfigurationId.c)
 *     PopIdleWakeAreIdenticalWakeSources @ 0x1405D7CC4 (PopIdleWakeAreIdenticalWakeSources.c)
 *     BiIsValidDiskDevice @ 0x1406F7734 (BiIsValidDiskDevice.c)
 *     IopCheckIfNotNativeDriver @ 0x14070F824 (IopCheckIfNotNativeDriver.c)
 *     PiSwIrpCleanup @ 0x14072E8F0 (PiSwIrpCleanup.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1407350DC (PiDrvDbOverlayCopyKeys.c)
 *     punycode_decode @ 0x1407847CC (punycode_decode.c)
 *     punycode_encode @ 0x140784DD4 (punycode_encode.c)
 *     GetValueType @ 0x140797274 (GetValueType.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1407BF3E0 (NtSetSystemEnvironmentValueEx.c)
 *     CmpPreserveSystemHiveData @ 0x1407E26F8 (CmpPreserveSystemHiveData.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x140801BA0 (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpGetMergeRedirectPathInternal @ 0x140801F44 (SdbpGetMergeRedirectPathInternal.c)
 *     SdbpResolveMatchingFile @ 0x140805CD0 (SdbpResolveMatchingFile.c)
 *     AslPathCleanUstr @ 0x14080A0BC (AslPathCleanUstr.c)
 *     AslpPathWildcardMakeLeaves @ 0x14080BC10 (AslpPathWildcardMakeLeaves.c)
 *     AslEnvVarQuery @ 0x14080C6C0 (AslEnvVarQuery.c)
 *     AslpEnvResolveVars @ 0x14080C8B8 (AslpEnvResolveVars.c)
 *     BiCreateFileDeviceElement @ 0x1408139E0 (BiCreateFileDeviceElement.c)
 *     BiCreatePartitionDevice @ 0x140813B8C (BiCreatePartitionDevice.c)
 *     SiIsValidDiskDevice @ 0x140817290 (SiIsValidDiskDevice.c)
 *     GetOperandValue @ 0x140864998 (GetOperandValue.c)
 *     GetAttributeName @ 0x140864C40 (GetAttributeName.c)
 *     LocalpGetStringForCondition @ 0x140865D50 (LocalpGetStringForCondition.c)
 *     GetOperatorIndexByName @ 0x140866F48 (GetOperatorIndexByName.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x1408684DC (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x140869D60 (LocalGetAclForString.c)
 *     FContainCallBackAce @ 0x14086ADD0 (FContainCallBackAce.c)
 *     LookupSidInTable @ 0x14086B1E0 (LookupSidInTable.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x1408F24A8 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     _RegRtlCreateTreeTransacted @ 0x1409282E4 (_RegRtlCreateTreeTransacted.c)
 *     VrpTranslatePath @ 0x140929830 (VrpTranslatePath.c)
 *     VrpFindNamespaceNode @ 0x14092AEE0 (VrpFindNamespaceNode.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x14094FF60 (IoVolumeDeviceNameToGuidPath.c)
 *     BiOpenSystemStore @ 0x1409A7610 (BiOpenSystemStore.c)
 *     WmipPrepareWnodeSI @ 0x1409B3B80 (WmipPrepareWnodeSI.c)
 *     PiSwFindSwDevice @ 0x1409BF560 (PiSwFindSwDevice.c)
 *     IopReplaceSymlinkPath @ 0x1409C707C (IopReplaceSymlinkPath.c)
 *     EtwpExpandFileName @ 0x1409D5FA4 (EtwpExpandFileName.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x140A68218 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x140A69890 (WmipGetGuidObjectInstanceInfo.c)
 *     EtwpApplyContainerFilter @ 0x140A78118 (EtwpApplyContainerFilter.c)
 *     EtwpApplyExeFilter @ 0x140A78C24 (EtwpApplyExeFilter.c)
 *     EtwpApplyPackageIdFilter @ 0x140A7975C (EtwpApplyPackageIdFilter.c)
 *     MiCacheImageSymbols @ 0x140ABAE40 (MiCacheImageSymbols.c)
 *     CmpGetSystemRelativeRegistryHiveFilePath @ 0x140C492B0 (CmpGetSystemRelativeRegistryHiveFilePath.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsnicmp(const wchar_t *Str1, const wchar_t *Str2, size_t MaxCount)
{
  int v3; // r9d
  size_t v4; // rbx
  const wchar_t *v5; // r11
  signed __int64 v6; // r10
  __int16 v7; // cx
  unsigned __int16 v8; // dx
  unsigned __int16 v9; // cx
  unsigned __int16 v10; // r8

  v3 = 0;
  v4 = MaxCount;
  v5 = Str2;
  if ( MaxCount )
  {
    v6 = (char *)Str1 - (char *)Str2;
    do
    {
      v7 = *(const wchar_t *)((char *)v5 + v6);
      v8 = v7 + 32;
      if ( (unsigned __int16)(v7 - 65) > 0x19u )
        v8 = *(const wchar_t *)((char *)v5 + v6);
      v9 = *v5++;
      v10 = v9 + 32;
      if ( (unsigned __int16)(v9 - 65) > 0x19u )
        v10 = v9;
      --v4;
    }
    while ( v4 && v8 && v8 == v10 );
    return v8 - v10;
  }
  return v3;
}
