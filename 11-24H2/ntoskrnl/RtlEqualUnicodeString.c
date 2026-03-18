/*
 * XREFs of RtlEqualUnicodeString @ 0x140927050
 * Callers:
 *     SeSecurityAttributePresent @ 0x1403438C0 (SeSecurityAttributePresent.c)
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x1403442B0 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1403468F4 (AuthzBasepCompareUnicodeStringOperands.c)
 *     AuthzBasepEqualUnicodeString @ 0x140357D50 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepSecurityAttributePresent @ 0x140357D80 (AuthzBasepSecurityAttributePresent.c)
 *     AuthzBasepFindSecurityAttribute @ 0x140357E50 (AuthzBasepFindSecurityAttribute.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140358240 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x140358820 (AuthzBasepQuerySecurityAttributesToken.c)
 *     AuthzBasepCopyoutSecurityAttributes @ 0x140358BA0 (AuthzBasepCopyoutSecurityAttributes.c)
 *     AuthzBasepFindSecurityAttributeValue @ 0x1403600AC (AuthzBasepFindSecurityAttributeValue.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x14046B090 (RtlDeriveCapabilitySidsFromName.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x1404A64E8 (PopPepUpdateDripsDeviceVetoMask.c)
 *     VfDriverLoadSucceeded @ 0x1404B33E0 (VfDriverLoadSucceeded.c)
 *     PnpMultiSzContainsString @ 0x1404B7A70 (PnpMultiSzContainsString.c)
 *     PopPepInitializeVetoMasks @ 0x1404BD99C (PopPepInitializeVetoMasks.c)
 *     PiDrvDbFindNode @ 0x1404F7A60 (PiDrvDbFindNode.c)
 *     PopEmModuleAddressMatchCallback @ 0x1405D8C80 (PopEmModuleAddressMatchCallback.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x1405DB750 (PopEmUpdateDeviceConstraintCallback.c)
 *     VfDriverRemoveAllDifVerification @ 0x1406110D4 (VfDriverRemoveAllDifVerification.c)
 *     IopIsReportedAlready @ 0x14071D7EC (IopIsReportedAlready.c)
 *     PipAddRequestToEdge @ 0x14071E418 (PipAddRequestToEdge.c)
 *     PipDeleteBindingId @ 0x14071E77C (PipDeleteBindingId.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x14072897C (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1407389B0 (PiDrvDbResolveFilePathKeyValues.c)
 *     PiDrvDbResolveSystemFilePath @ 0x1407392C4 (PiDrvDbResolveSystemFilePath.c)
 *     KsepDbCacheQueryDeviceData @ 0x14073E41C (KsepDbCacheQueryDeviceData.c)
 *     KseHookQueryValueKey @ 0x140741420 (KseHookQueryValueKey.c)
 *     SLQueryLicenseValueInternal @ 0x1407B99EC (SLQueryLicenseValueInternal.c)
 *     ExpFindArcName @ 0x1407BBBCC (ExpFindArcName.c)
 *     CmpFindMachineHiveByMountPoint @ 0x1407D1E18 (CmpFindMachineHiveByMountPoint.c)
 *     MiInsertPreviouslyRegisteredHotPatchRecord @ 0x1407F34DC (MiInsertPreviouslyRegisteredHotPatchRecord.c)
 *     _PnpCtxFindNode @ 0x140817530 (_PnpCtxFindNode.c)
 *     _CmClassFilterCallback @ 0x14081ADD0 (_CmClassFilterCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14081B020 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmServiceFilterCallback @ 0x14081BE80 (_CmServiceFilterCallback.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x140829A24 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     EtwpLookupLoggerIdByName @ 0x140830720 (EtwpLookupLoggerIdByName.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x140843574 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     CmSetValueKey @ 0x14086B130 (CmSetValueKey.c)
 *     IopGetDeviceInterfaces @ 0x1408C8470 (IopGetDeviceInterfaces.c)
 *     IopDeviceInterfaceFilterCallback @ 0x1408D1170 (IopDeviceInterfaceFilterCallback.c)
 *     SepValidateReferencedCachedHandles @ 0x1408F2790 (SepValidateReferencedCachedHandles.c)
 *     SepFindMatchingCachedHandlesEntry @ 0x1408F2C4C (SepFindMatchingCachedHandlesEntry.c)
 *     _CmIsRootDevice @ 0x140926C14 (_CmIsRootDevice.c)
 *     DrvDbFindDatabaseNode @ 0x140926C58 (DrvDbFindDatabaseNode.c)
 *     EtwpAcquireLoggerContext @ 0x140926CDC (EtwpAcquireLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x140926E6C (EtwpAcquireLoggerContextByLoggerName.c)
 *     VrpPreOpenOrCreate @ 0x1409271B4 (VrpPreOpenOrCreate.c)
 *     VrpCreateNamespaceNode @ 0x140929B68 (VrpCreateNamespaceNode.c)
 *     CmLoadAppKey @ 0x14092DB9C (CmLoadAppKey.c)
 *     PiDevCfgConfigureDevice @ 0x140997CFC (PiDevCfgConfigureDevice.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14099CA94 (PiDevCfgResolveMultiSzValue.c)
 *     IopCreateSecureDeviceClassSettings @ 0x1409A1A38 (IopCreateSecureDeviceClassSettings.c)
 *     IopQueryRegistryKeySystemPath @ 0x1409C8568 (IopQueryRegistryKeySystemPath.c)
 *     PiFindDevInstMatch @ 0x1409C9A9C (PiFindDevInstMatch.c)
 *     PiPnpRtlServiceFilterCallback @ 0x1409FD9D0 (PiPnpRtlServiceFilterCallback.c)
 *     MiResolveImageReferences @ 0x140A17C94 (MiResolveImageReferences.c)
 *     MiObtainSectionForDriver @ 0x140A18544 (MiObtainSectionForDriver.c)
 *     SepIsImageInMinTcbList @ 0x140A1B9DC (SepIsImageInMinTcbList.c)
 *     SepIsMinTCB @ 0x140A1BD1C (SepIsMinTCB.c)
 *     SepIsNgenImage @ 0x140A1C41C (SepIsNgenImage.c)
 *     PspIdentityBasedJobBreakaway @ 0x140A31394 (PspIdentityBasedJobBreakaway.c)
 *     PipFindDeviceOverrideEntry @ 0x140A32D18 (PipFindDeviceOverrideEntry.c)
 *     AdtpLookupDriveLetter @ 0x140A3D3B4 (AdtpLookupDriveLetter.c)
 *     PopBatteryDeviceState @ 0x140A618DC (PopBatteryDeviceState.c)
 *     PiUEventCoalesceBroadcastEvents @ 0x140A674A0 (PiUEventCoalesceBroadcastEvents.c)
 *     PiDevCfgResolveVariable @ 0x140A6A668 (PiDevCfgResolveVariable.c)
 *     PipQueryBindingResolution @ 0x140A6DE00 (PipQueryBindingResolution.c)
 *     AdtpBuildAccessesString @ 0x140A729FC (AdtpBuildAccessesString.c)
 *     VrpPreLoadKey @ 0x140A73F7C (VrpPreLoadKey.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x140A7E6CC (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x140A8A54C (RtlpGetNtProductTypeFromRegistry.c)
 *     PiRemoveDeferredSetInterfaceState @ 0x140A957EC (PiRemoveDeferredSetInterfaceState.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140A98C04 (PiDevCfgLogDeviceConfigured.c)
 *     ViIsDriverSuspectForVerifier @ 0x140B8382C (ViIsDriverSuspectForVerifier.c)
 *     ViLogAndLoadXdv @ 0x140B83B40 (ViLogAndLoadXdv.c)
 *     VfDriverApplyDifVerification @ 0x140B8A038 (VfDriverApplyDifVerification.c)
 *     VfDriverEnableVerifier @ 0x140B8A250 (VfDriverEnableVerifier.c)
 *     VfDriverRemoveDifVerification @ 0x140B8A4F0 (VfDriverRemoveDifVerification.c)
 *     ViDriverReApplyVerifierForAll @ 0x140B8A8E4 (ViDriverReApplyVerifierForAll.c)
 *     VfSuspectDriversLoadCallback @ 0x140B9AB3C (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversUnloadCallback @ 0x140B9AF44 (VfSuspectDriversUnloadCallback.c)
 *     ViSuspectDriversLookupEntry @ 0x140B9B1A4 (ViSuspectDriversLookupEntry.c)
 *     VfAddVerifierEntry @ 0x140B9C32C (VfAddVerifierEntry.c)
 *     ViFilterIsDeviceExcluded @ 0x140B9D480 (ViFilterIsDeviceExcluded.c)
 *     VfDriverLoadImage @ 0x140BA7DF4 (VfDriverLoadImage.c)
 *     VfCheckUserHandle @ 0x140BA9228 (VfCheckUserHandle.c)
 *     sub_140BE10B0 @ 0x140BE10B0 (sub_140BE10B0.c)
 *     PipLookupGroupName @ 0x140C21358 (PipLookupGroupName.c)
 *     VfInitBootDriversLoaded @ 0x140C3B240 (VfInitBootDriversLoaded.c)
 *     ViInitSystemPhase0 @ 0x140C3B6E4 (ViInitSystemPhase0.c)
 *     ExpPrmInitialization @ 0x140C40D54 (ExpPrmInitialization.c)
 *     CmpCreateHardwareProfiles @ 0x140C463E8 (CmpCreateHardwareProfiles.c)
 *     CmpDoSort @ 0x140C4B394 (CmpDoSort.c)
 *     CmpFindHiveSubKey @ 0x140C4B8A8 (CmpFindHiveSubKey.c)
 *     CmpGetKnownHivePathNode @ 0x140C4BD6C (CmpGetKnownHivePathNode.c)
 *     CmGetSystemDriverList @ 0x140C62C58 (CmGetSystemDriverList.c)
 *     PpInitGetGroupOrderIndex @ 0x140C67744 (PpInitGetGroupOrderIndex.c)
 *     PnpLoadBootFilterDriver @ 0x140C67B48 (PnpLoadBootFilterDriver.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     RtlCompareMemory @ 0x1406B3990 (RtlCompareMemory.c)
 *     memcmp @ 0x1406BFF10 (memcmp.c)
 */

BOOLEAN __stdcall RtlEqualUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  __int64 v4; // rdx
  struct _LIST_ENTRY *Flink; // rbp
  char v6; // r8
  size_t Length; // rax
  wchar_t *Buffer; // rbx
  char *v10; // rdi
  size_t v11; // r14
  wchar_t *v12; // rsi
  SIZE_T v13; // rax
  __int64 v14; // rax
  wchar_t *v15; // rbx
  char *v16; // rdi
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r9

  Flink = PsGetCurrentServerSiloGlobals()[75].Flink;
  Length = String1->Length;
  if ( (_WORD)Length != *(_WORD *)v4 )
    return 0;
  Buffer = String1->Buffer;
  v10 = *(char **)(v4 + 8);
  v11 = Length;
  v12 = (wchar_t *)((char *)Buffer + Length);
  if ( !v6 )
    return memcmp(Buffer, v10, Length) == 0;
  v13 = RtlCompareMemory(Buffer, v10, Length);
  if ( v13 != v11 )
  {
    v14 = v13 >> 1;
    v15 = &Buffer[v14];
    v16 = &v10[v14 * 2];
    while ( v15 < v12 )
    {
      v17 = *v15;
      v18 = *(unsigned __int16 *)v16;
      if ( (_WORD)v17 != (_WORD)v18 )
      {
        if ( (unsigned int)v17 >= 0x61 )
        {
          if ( (unsigned int)v17 > 0x7A )
          {
            if ( Flink && (unsigned __int16)v17 >= 0xC0u )
              LOWORD(v17) = *((_WORD *)&Flink->Flink
                            + (v17 & 0xF)
                            + *((unsigned __int16 *)&Flink->Flink
                              + ((unsigned __int8)v17 >> 4)
                              + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v17 >> 8))))
                          + v17;
          }
          else
          {
            LOWORD(v17) = v17 - 32;
          }
        }
        if ( (unsigned int)v18 >= 0x61 )
        {
          if ( (unsigned int)v18 > 0x7A )
          {
            if ( Flink )
            {
              if ( (unsigned __int16)v18 >= 0xC0u )
                LOWORD(v18) = *((_WORD *)&Flink->Flink
                              + (v18 & 0xF)
                              + *((unsigned __int16 *)&Flink->Flink
                                + ((unsigned __int8)v18 >> 4)
                                + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v18 >> 8))))
                            + v18;
            }
          }
          else
          {
            LOWORD(v18) = v18 - 32;
          }
        }
        if ( (_WORD)v17 != (_WORD)v18 )
          return 0;
      }
      ++v15;
      v16 += 2;
    }
  }
  return 1;
}
