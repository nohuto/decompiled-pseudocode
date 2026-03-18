/*
 * XREFs of RtlEqualUnicodeString @ 0x1409329B0
 * Callers:
 *     AuthzBasepFindSecurityAttributeValue @ 0x1402911A0 (AuthzBasepFindSecurityAttributeValue.c)
 *     SeSecurityAttributePresent @ 0x1402940F0 (SeSecurityAttributePresent.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1403100CC (AuthzBasepCompareUnicodeStringOperands.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x140355CD0 (PopPepUpdateDripsDeviceVetoMask.c)
 *     AuthzBasepEqualUnicodeString @ 0x14035FA50 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepSecurityAttributePresent @ 0x14035FA80 (AuthzBasepSecurityAttributePresent.c)
 *     AuthzBasepFindSecurityAttribute @ 0x14035FB50 (AuthzBasepFindSecurityAttribute.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14035FF40 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x140360510 (AuthzBasepQuerySecurityAttributesToken.c)
 *     AuthzBasepCopyoutSecurityAttributes @ 0x140360890 (AuthzBasepCopyoutSecurityAttributes.c)
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x1403679D0 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x14046C970 (RtlDeriveCapabilitySidsFromName.c)
 *     VfDriverLoadSucceeded @ 0x1404B3520 (VfDriverLoadSucceeded.c)
 *     PnpMultiSzContainsString @ 0x1404B81E0 (PnpMultiSzContainsString.c)
 *     PopPepInitializeVetoMasks @ 0x1404BF148 (PopPepInitializeVetoMasks.c)
 *     PiDrvDbFindNode @ 0x1404F5634 (PiDrvDbFindNode.c)
 *     PopEmModuleAddressMatchCallback @ 0x1405D4230 (PopEmModuleAddressMatchCallback.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x1405D6570 (PopEmUpdateDeviceConstraintCallback.c)
 *     VfDriverRemoveAllDifVerification @ 0x140605114 (VfDriverRemoveAllDifVerification.c)
 *     IopIsReportedAlready @ 0x1407116EC (IopIsReportedAlready.c)
 *     PipAddRequestToEdge @ 0x140712318 (PipAddRequestToEdge.c)
 *     PipDeleteBindingId @ 0x14071267C (PipDeleteBindingId.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x14071C9FC (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x14072C720 (PiDrvDbResolveFilePathKeyValues.c)
 *     PiDrvDbResolveSystemFilePath @ 0x14072D034 (PiDrvDbResolveSystemFilePath.c)
 *     KsepDbCacheQueryDeviceData @ 0x1407323FC (KsepDbCacheQueryDeviceData.c)
 *     KseHookQueryValueKey @ 0x140735400 (KseHookQueryValueKey.c)
 *     SLQueryLicenseValueInternal @ 0x1407AA53C (SLQueryLicenseValueInternal.c)
 *     ExpFindArcName @ 0x1407AC74C (ExpFindArcName.c)
 *     CmpFindMachineHiveByMountPoint @ 0x1407C26D8 (CmpFindMachineHiveByMountPoint.c)
 *     MiInsertPreviouslyRegisteredHotPatchRecord @ 0x1407E3654 (MiInsertPreviouslyRegisteredHotPatchRecord.c)
 *     _PnpCtxFindNode @ 0x140807630 (_PnpCtxFindNode.c)
 *     _CmClassFilterCallback @ 0x14080AED0 (_CmClassFilterCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14080B120 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmServiceFilterCallback @ 0x14080BF80 (_CmServiceFilterCallback.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x140819C24 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     PipFindDeviceOverrideEntry @ 0x14082E6D8 (PipFindDeviceOverrideEntry.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x140847024 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     CmSetValueKey @ 0x140869F98 (CmSetValueKey.c)
 *     PiDevCfgLogDeviceConfigured @ 0x14088F39C (PiDevCfgLogDeviceConfigured.c)
 *     IopDeviceInterfaceFilterCallback @ 0x1408CEAE0 (IopDeviceInterfaceFilterCallback.c)
 *     CmLoadAppKey @ 0x1409122B0 (CmLoadAppKey.c)
 *     _CmIsRootDevice @ 0x140932574 (_CmIsRootDevice.c)
 *     DrvDbFindDatabaseNode @ 0x1409325B8 (DrvDbFindDatabaseNode.c)
 *     EtwpAcquireLoggerContext @ 0x14093263C (EtwpAcquireLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1409327CC (EtwpAcquireLoggerContextByLoggerName.c)
 *     VrpPreOpenOrCreate @ 0x1409475FC (VrpPreOpenOrCreate.c)
 *     VrpCreateNamespaceNode @ 0x140949EA0 (VrpCreateNamespaceNode.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14094C0A4 (PiDevCfgResolveMultiSzValue.c)
 *     IopGetDeviceInterfaces @ 0x1409572B8 (IopGetDeviceInterfaces.c)
 *     PiDevCfgConfigureDevice @ 0x14097F7D4 (PiDevCfgConfigureDevice.c)
 *     SepValidateReferencedCachedHandles @ 0x140983B48 (SepValidateReferencedCachedHandles.c)
 *     SepFindMatchingCachedHandlesEntry @ 0x140984004 (SepFindMatchingCachedHandlesEntry.c)
 *     IopCreateSecureDeviceClassSettings @ 0x14099CB48 (IopCreateSecureDeviceClassSettings.c)
 *     IopQueryRegistryKeySystemPath @ 0x1409B01F8 (IopQueryRegistryKeySystemPath.c)
 *     PiFindDevInstMatch @ 0x1409B1728 (PiFindDevInstMatch.c)
 *     SepIsImageInMinTcbList @ 0x1409BB558 (SepIsImageInMinTcbList.c)
 *     SepIsMinTCB @ 0x1409BB9B4 (SepIsMinTCB.c)
 *     PiPnpRtlServiceFilterCallback @ 0x140A00B50 (PiPnpRtlServiceFilterCallback.c)
 *     PspIdentityBasedJobBreakaway @ 0x140A0D378 (PspIdentityBasedJobBreakaway.c)
 *     MiResolveImageReferences @ 0x140A1286C (MiResolveImageReferences.c)
 *     MiObtainSectionForDriver @ 0x140A13124 (MiObtainSectionForDriver.c)
 *     EtwpLookupLoggerIdByName @ 0x140A38E44 (EtwpLookupLoggerIdByName.c)
 *     AdtpLookupDriveLetter @ 0x140A3A9B8 (AdtpLookupDriveLetter.c)
 *     SepIsNgenImage @ 0x140A408D4 (SepIsNgenImage.c)
 *     PopBatteryDeviceState @ 0x140A5FF68 (PopBatteryDeviceState.c)
 *     PiUEventCoalesceBroadcastEvents @ 0x140A65510 (PiUEventCoalesceBroadcastEvents.c)
 *     PiDevCfgResolveVariable @ 0x140A67A58 (PiDevCfgResolveVariable.c)
 *     PipQueryBindingResolution @ 0x140A6B9FC (PipQueryBindingResolution.c)
 *     AdtpBuildAccessesString @ 0x140A70050 (AdtpBuildAccessesString.c)
 *     VrpPreLoadKey @ 0x140A71EB8 (VrpPreLoadKey.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x140A7B244 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x140A85BE4 (RtlpGetNtProductTypeFromRegistry.c)
 *     PiRemoveDeferredSetInterfaceState @ 0x140A9163C (PiRemoveDeferredSetInterfaceState.c)
 *     ViIsDriverSuspectForVerifier @ 0x140B7384C (ViIsDriverSuspectForVerifier.c)
 *     ViLogAndLoadXdv @ 0x140B73B60 (ViLogAndLoadXdv.c)
 *     VfDriverApplyDifVerification @ 0x140B7A058 (VfDriverApplyDifVerification.c)
 *     VfDriverEnableVerifier @ 0x140B7A270 (VfDriverEnableVerifier.c)
 *     VfDriverRemoveDifVerification @ 0x140B7A510 (VfDriverRemoveDifVerification.c)
 *     ViDriverReApplyVerifierForAll @ 0x140B7A904 (ViDriverReApplyVerifierForAll.c)
 *     VfSuspectDriversLoadCallback @ 0x140B8AB5C (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversUnloadCallback @ 0x140B8AF64 (VfSuspectDriversUnloadCallback.c)
 *     ViSuspectDriversLookupEntry @ 0x140B8B1C4 (ViSuspectDriversLookupEntry.c)
 *     VfAddVerifierEntry @ 0x140B8C34C (VfAddVerifierEntry.c)
 *     ViFilterIsDeviceExcluded @ 0x140B8D4A0 (ViFilterIsDeviceExcluded.c)
 *     VfDriverLoadImage @ 0x140B97E14 (VfDriverLoadImage.c)
 *     VfCheckUserHandle @ 0x140B99248 (VfCheckUserHandle.c)
 *     sub_140BD00B0 @ 0x140BD00B0 (sub_140BD00B0.c)
 *     PipLookupGroupName @ 0x140C101F8 (PipLookupGroupName.c)
 *     VfInitBootDriversLoaded @ 0x140C29F60 (VfInitBootDriversLoaded.c)
 *     ViInitSystemPhase0 @ 0x140C2A404 (ViInitSystemPhase0.c)
 *     ExpPrmInitialization @ 0x140C2FA44 (ExpPrmInitialization.c)
 *     CmpCreateHardwareProfiles @ 0x140C3512C (CmpCreateHardwareProfiles.c)
 *     CmpDoSort @ 0x140C3A098 (CmpDoSort.c)
 *     CmpFindHiveSubKey @ 0x140C3A5AC (CmpFindHiveSubKey.c)
 *     CmpGetKnownHivePathNode @ 0x140C3AA70 (CmpGetKnownHivePathNode.c)
 *     CmGetSystemDriverList @ 0x140C51914 (CmGetSystemDriverList.c)
 *     PpInitGetGroupOrderIndex @ 0x140C55ABC (PpInitGetGroupOrderIndex.c)
 *     PnpLoadBootFilterDriver @ 0x140C55EC0 (PnpLoadBootFilterDriver.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     RtlCompareMemory @ 0x1406A86C0 (RtlCompareMemory.c)
 *     memcmp @ 0x1406B4C10 (memcmp.c)
 */

BOOLEAN __stdcall RtlEqualUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  __int64 v3; // rdx
  struct _LIST_ENTRY *Flink; // rbp
  char v5; // r8
  unsigned __int16 *v6; // r9
  __int64 v7; // rax
  char *v9; // rbx
  char *v10; // rdi
  size_t v11; // rsi
  unsigned __int16 *v12; // r14
  SIZE_T v13; // rax
  __int64 v14; // rax
  unsigned __int16 *v15; // rbx
  char *v16; // rdi
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r9

  Flink = PsGetCurrentServerSiloGlobals()[75].Flink;
  v7 = *v6;
  if ( (_WORD)v7 != *(_WORD *)v3 )
    return 0;
  v9 = (char *)*((_QWORD *)v6 + 1);
  v10 = *(char **)(v3 + 8);
  v11 = *v6;
  v12 = (unsigned __int16 *)&v9[v7];
  if ( !v5 )
    return memcmp(v9, v10, v11) == 0;
  v13 = RtlCompareMemory(v9, v10, v11);
  if ( v13 != v11 )
  {
    v14 = 2 * (v13 >> 1);
    v15 = (unsigned __int16 *)&v9[v14];
    v16 = &v10[v14];
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
