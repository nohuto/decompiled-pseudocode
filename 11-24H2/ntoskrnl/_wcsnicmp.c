/*
 * XREFs of _wcsnicmp @ 0x1404FE4F0
 * Callers:
 *     PiDevCfgMatchDriverConfigurationId @ 0x1405A6C78 (PiDevCfgMatchDriverConfigurationId.c)
 *     PopIdleWakeAreIdenticalWakeSources @ 0x1405DA9A4 (PopIdleWakeAreIdenticalWakeSources.c)
 *     BiIsValidDiskDevice @ 0x1406F9AF4 (BiIsValidDiskDevice.c)
 *     IopCheckIfNotNativeDriver @ 0x140711C94 (IopCheckIfNotNativeDriver.c)
 *     PiSwIrpCleanup @ 0x1407308E0 (PiSwIrpCleanup.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1407371AC (PiDrvDbOverlayCopyKeys.c)
 *     punycode_decode @ 0x14078489C (punycode_decode.c)
 *     punycode_encode @ 0x140784EA4 (punycode_encode.c)
 *     GetValueType @ 0x140797164 (GetValueType.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1407BEF90 (NtSetSystemEnvironmentValueEx.c)
 *     CmpPreserveSystemHiveData @ 0x1407E21A8 (CmpPreserveSystemHiveData.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x140801460 (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpGetMergeRedirectPathInternal @ 0x140801804 (SdbpGetMergeRedirectPathInternal.c)
 *     SdbpResolveMatchingFile @ 0x140805590 (SdbpResolveMatchingFile.c)
 *     AslPathCleanUstr @ 0x14080997C (AslPathCleanUstr.c)
 *     AslpPathWildcardMakeLeaves @ 0x14080B4D0 (AslpPathWildcardMakeLeaves.c)
 *     AslEnvVarQuery @ 0x14080BF80 (AslEnvVarQuery.c)
 *     AslpEnvResolveVars @ 0x14080C178 (AslpEnvResolveVars.c)
 *     BiCreateFileDeviceElement @ 0x1408132A0 (BiCreateFileDeviceElement.c)
 *     BiCreatePartitionDevice @ 0x14081344C (BiCreatePartitionDevice.c)
 *     SiIsValidDiskDevice @ 0x140816B50 (SiIsValidDiskDevice.c)
 *     GetOperandValue @ 0x14086038C (GetOperandValue.c)
 *     GetAttributeName @ 0x140860634 (GetAttributeName.c)
 *     LocalpGetStringForCondition @ 0x140861744 (LocalpGetStringForCondition.c)
 *     GetOperatorIndexByName @ 0x140862938 (GetOperatorIndexByName.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x140863ECC (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x140865750 (LocalGetAclForString.c)
 *     FContainCallBackAce @ 0x1408667C0 (FContainCallBackAce.c)
 *     LookupSidInTable @ 0x140866BD0 (LookupSidInTable.c)
 *     _RegRtlCreateTreeTransacted @ 0x1409261A4 (_RegRtlCreateTreeTransacted.c)
 *     VrpTranslatePath @ 0x1409276F0 (VrpTranslatePath.c)
 *     VrpFindNamespaceNode @ 0x140928DA0 (VrpFindNamespaceNode.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x14094DF38 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1409674D0 (IoVolumeDeviceNameToGuidPath.c)
 *     IopReplaceSymlinkPath @ 0x14099E1C0 (IopReplaceSymlinkPath.c)
 *     BiOpenSystemStore @ 0x1409C0FC0 (BiOpenSystemStore.c)
 *     WmipPrepareWnodeSI @ 0x1409CEBB0 (WmipPrepareWnodeSI.c)
 *     EtwpExpandFileName @ 0x1409DB494 (EtwpExpandFileName.c)
 *     PiSwFindSwDevice @ 0x140A11150 (PiSwFindSwDevice.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x140A6ED94 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x140A70400 (WmipGetGuidObjectInstanceInfo.c)
 *     EtwpApplyContainerFilter @ 0x140A7DE18 (EtwpApplyContainerFilter.c)
 *     EtwpApplyExeFilter @ 0x140A7F474 (EtwpApplyExeFilter.c)
 *     EtwpApplyPackageIdFilter @ 0x140A7F91C (EtwpApplyPackageIdFilter.c)
 *     MiCacheImageSymbols @ 0x140ABFD60 (MiCacheImageSymbols.c)
 *     CmpGetSystemRelativeRegistryHiveFilePath @ 0x140C47160 (CmpGetSystemRelativeRegistryHiveFilePath.c)
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
