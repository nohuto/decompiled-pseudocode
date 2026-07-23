/*
 * XREFs of RtlEqualUnicodeString @ 0x140929190
 * Callers:
 *     SeSecurityAttributePresent @ 0x140322DA0 (SeSecurityAttributePresent.c)
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x140323790 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x140325368 (AuthzBasepCompareUnicodeStringOperands.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x1403A5BE4 (PopPepUpdateDripsDeviceVetoMask.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403B7650 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x1403B7C30 (AuthzBasepQuerySecurityAttributesToken.c)
 *     AuthzBasepCopyoutSecurityAttributes @ 0x1403B7FB0 (AuthzBasepCopyoutSecurityAttributes.c)
 *     AuthzBasepSecurityAttributePresent @ 0x1403B8760 (AuthzBasepSecurityAttributePresent.c)
 *     AuthzBasepFindSecurityAttribute @ 0x1403B8830 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepEqualUnicodeString @ 0x1403B8930 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepFindSecurityAttributeValue @ 0x1403BAA7C (AuthzBasepFindSecurityAttributeValue.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x140463B10 (RtlDeriveCapabilitySidsFromName.c)
 *     VfDriverLoadSucceeded @ 0x1404ADC50 (VfDriverLoadSucceeded.c)
 *     PnpMultiSzContainsString @ 0x1404B23C0 (PnpMultiSzContainsString.c)
 *     PopPepInitializeVetoMasks @ 0x1404B8B0C (PopPepInitializeVetoMasks.c)
 *     PiDrvDbFindNode @ 0x1404F5340 (PiDrvDbFindNode.c)
 *     PopEmModuleAddressMatchCallback @ 0x1405D6120 (PopEmModuleAddressMatchCallback.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x1405D8620 (PopEmUpdateDeviceConstraintCallback.c)
 *     SepVerifyUIAccessChildProcessImage @ 0x140607418 (SepVerifyUIAccessChildProcessImage.c)
 *     VfDriverRemoveAllDifVerification @ 0x14060F694 (VfDriverRemoveAllDifVerification.c)
 *     IopIsReportedAlready @ 0x14071B37C (IopIsReportedAlready.c)
 *     PipAddRequestToEdge @ 0x14071BFA8 (PipAddRequestToEdge.c)
 *     PipDeleteBindingId @ 0x14071C30C (PipDeleteBindingId.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x14072650C (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1407368E0 (PiDrvDbResolveFilePathKeyValues.c)
 *     PiDrvDbResolveSystemFilePath @ 0x1407371F4 (PiDrvDbResolveSystemFilePath.c)
 *     KsepDbCacheQueryDeviceData @ 0x14073C34C (KsepDbCacheQueryDeviceData.c)
 *     KseHookQueryValueKey @ 0x14073F350 (KseHookQueryValueKey.c)
 *     SLQueryLicenseValueInternal @ 0x1407B9E3C (SLQueryLicenseValueInternal.c)
 *     ExpFindArcName @ 0x1407BC01C (ExpFindArcName.c)
 *     CmpFindMachineHiveByMountPoint @ 0x1407D2308 (CmpFindMachineHiveByMountPoint.c)
 *     MiInsertPreviouslyRegisteredHotPatchRecord @ 0x1407F3AD0 (MiInsertPreviouslyRegisteredHotPatchRecord.c)
 *     _PnpCtxFindNode @ 0x140817C70 (_PnpCtxFindNode.c)
 *     _CmClassFilterCallback @ 0x14081B510 (_CmClassFilterCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14081B760 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmServiceFilterCallback @ 0x14081C5C0 (_CmServiceFilterCallback.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x14082A254 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x14083F834 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     CmSetValueKey @ 0x14086F460 (CmSetValueKey.c)
 *     IopGetDeviceInterfaces @ 0x1408C5EA0 (IopGetDeviceInterfaces.c)
 *     IopDeviceInterfaceFilterCallback @ 0x1408CEB60 (IopDeviceInterfaceFilterCallback.c)
 *     SepValidateReferencedCachedHandles @ 0x140913DDC (SepValidateReferencedCachedHandles.c)
 *     SepFindMatchingCachedHandlesEntry @ 0x140914298 (SepFindMatchingCachedHandlesEntry.c)
 *     _CmIsRootDevice @ 0x140928D54 (_CmIsRootDevice.c)
 *     DrvDbFindDatabaseNode @ 0x140928D98 (DrvDbFindDatabaseNode.c)
 *     EtwpAcquireLoggerContext @ 0x140928E1C (EtwpAcquireLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x140928FAC (EtwpAcquireLoggerContextByLoggerName.c)
 *     VrpPreOpenOrCreate @ 0x1409292F4 (VrpPreOpenOrCreate.c)
 *     VrpCreateNamespaceNode @ 0x14092BCA8 (VrpCreateNamespaceNode.c)
 *     CmLoadAppKey @ 0x14092FCDC (CmLoadAppKey.c)
 *     PiFindDevInstMatch @ 0x1409B6CA8 (PiFindDevInstMatch.c)
 *     IopQueryRegistryKeySystemPath @ 0x1409B81B0 (IopQueryRegistryKeySystemPath.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1409C7B64 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgConfigureDevice @ 0x1409CA478 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgResolveMultiSzValue @ 0x1409CF204 (PiDevCfgResolveMultiSzValue.c)
 *     EtwpLookupLoggerIdByName @ 0x1409CFB04 (EtwpLookupLoggerIdByName.c)
 *     PiPnpRtlServiceFilterCallback @ 0x1409F6C40 (PiPnpRtlServiceFilterCallback.c)
 *     SepIsImageInMinTcbList @ 0x1409F9F4C (SepIsImageInMinTcbList.c)
 *     SepIsMinTCB @ 0x1409FA28C (SepIsMinTCB.c)
 *     MiResolveImageReferences @ 0x140A10E04 (MiResolveImageReferences.c)
 *     MiObtainSectionForDriver @ 0x140A116B4 (MiObtainSectionForDriver.c)
 *     PipFindDeviceOverrideEntry @ 0x140A26D28 (PipFindDeviceOverrideEntry.c)
 *     AdtpLookupDriveLetter @ 0x140A32CC4 (AdtpLookupDriveLetter.c)
 *     SepIsNgenImage @ 0x140A3A5D4 (SepIsNgenImage.c)
 *     PopBatteryDeviceState @ 0x140A5A0BC (PopBatteryDeviceState.c)
 *     PiUEventCoalesceBroadcastEvents @ 0x140A60280 (PiUEventCoalesceBroadcastEvents.c)
 *     IopCreateSecureDeviceClassSettings @ 0x140A6063C (IopCreateSecureDeviceClassSettings.c)
 *     PiDevCfgResolveVariable @ 0x140A63A18 (PiDevCfgResolveVariable.c)
 *     PipQueryBindingResolution @ 0x140A67300 (PipQueryBindingResolution.c)
 *     AdtpBuildAccessesString @ 0x140A6BDDC (AdtpBuildAccessesString.c)
 *     PspIdentityBasedJobBreakaway @ 0x140A6D0A4 (PspIdentityBasedJobBreakaway.c)
 *     VrpPreLoadKey @ 0x140A6D8DC (VrpPreLoadKey.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x140A8688C (RtlpGetNtProductTypeFromRegistry.c)
 *     PiRemoveDeferredSetInterfaceState @ 0x140A9201C (PiRemoveDeferredSetInterfaceState.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140ABF650 (PiDevCfgLogDeviceConfigured.c)
 *     ViIsDriverSuspectForVerifier @ 0x140B8582C (ViIsDriverSuspectForVerifier.c)
 *     ViLogAndLoadXdv @ 0x140B85B40 (ViLogAndLoadXdv.c)
 *     VfDriverApplyDifVerification @ 0x140B8C038 (VfDriverApplyDifVerification.c)
 *     VfDriverEnableVerifier @ 0x140B8C250 (VfDriverEnableVerifier.c)
 *     VfDriverRemoveDifVerification @ 0x140B8C4F0 (VfDriverRemoveDifVerification.c)
 *     ViDriverReApplyVerifierForAll @ 0x140B8C8E4 (ViDriverReApplyVerifierForAll.c)
 *     VfSuspectDriversLoadCallback @ 0x140B9CB3C (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversUnloadCallback @ 0x140B9CF44 (VfSuspectDriversUnloadCallback.c)
 *     ViSuspectDriversLookupEntry @ 0x140B9D1A4 (ViSuspectDriversLookupEntry.c)
 *     VfAddVerifierEntry @ 0x140B9E32C (VfAddVerifierEntry.c)
 *     ViFilterIsDeviceExcluded @ 0x140B9F480 (ViFilterIsDeviceExcluded.c)
 *     VfDriverLoadImage @ 0x140BA9DF4 (VfDriverLoadImage.c)
 *     VfCheckUserHandle @ 0x140BAB228 (VfCheckUserHandle.c)
 *     sub_140BE30B0 @ 0x140BE30B0 (sub_140BE30B0.c)
 *     PipLookupGroupName @ 0x140C23398 (PipLookupGroupName.c)
 *     VfInitBootDriversLoaded @ 0x140C3D398 (VfInitBootDriversLoaded.c)
 *     ViInitSystemPhase0 @ 0x140C3D83C (ViInitSystemPhase0.c)
 *     ExpPrmInitialization @ 0x140C42EA4 (ExpPrmInitialization.c)
 *     CmpCreateHardwareProfiles @ 0x140C48538 (CmpCreateHardwareProfiles.c)
 *     CmpDoSort @ 0x140C4D530 (CmpDoSort.c)
 *     CmpFindHiveSubKey @ 0x140C4DA44 (CmpFindHiveSubKey.c)
 *     CmpGetKnownHivePathNode @ 0x140C4DF08 (CmpGetKnownHivePathNode.c)
 *     CmGetSystemDriverList @ 0x140C64DD4 (CmGetSystemDriverList.c)
 *     PpInitGetGroupOrderIndex @ 0x140C698C0 (PpInitGetGroupOrderIndex.c)
 *     PnpLoadBootFilterDriver @ 0x140C69CC4 (PnpLoadBootFilterDriver.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     RtlCompareMemory @ 0x1406B4930 (RtlCompareMemory.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
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
