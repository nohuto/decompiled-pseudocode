/*
 * XREFs of RtlCompareMemory @ 0x1406A86C0
 * Callers:
 *     PpmPerfCalculateQosClassPolicies @ 0x14026424C (PpmPerfCalculateQosClassPolicies.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x140267B4C (PpmHeteroUpdateHgsConfiguration.c)
 *     MmReportParkedProcessors @ 0x14026BF50 (MmReportParkedProcessors.c)
 *     SepNormalAccessCheck @ 0x140366DE0 (SepNormalAccessCheck.c)
 *     SepIsPackageSid @ 0x14036C3F0 (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x14036C460 (SepIsCapabilitySid.c)
 *     EtwpTraceStackKey @ 0x1403F5C40 (EtwpTraceStackKey.c)
 *     PopWriteBsdPoInfo @ 0x140431A88 (PopWriteBsdPoInfo.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x14046CF60 (IoReportTargetDeviceChangeAsynchronous.c)
 *     EtwpGetCrimsonStackKey @ 0x1404CCBE8 (EtwpGetCrimsonStackKey.c)
 *     WheaGetErrPacketFromErrRecord @ 0x140552750 (WheaGetErrPacketFromErrRecord.c)
 *     HalpGenericErrorSourceRecovery @ 0x14055295C (HalpGenericErrorSourceRecovery.c)
 *     HalpHpetDiscover @ 0x14055DF68 (HalpHpetDiscover.c)
 *     SecureDump_ValidateAmeCertChain @ 0x14059F0D0 (SecureDump_ValidateAmeCertChain.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1405DC634 (RtlpStdLogCapturedStackTrace.c)
 *     MinCrypK_ParseRevocationList @ 0x140693E78 (MinCrypK_ParseRevocationList.c)
 *     MinCryptIsKeyPresent @ 0x1406941DC (MinCryptIsKeyPresent.c)
 *     CmpTransUowIsEqual @ 0x1406EF5FC (CmpTransUowIsEqual.c)
 *     PipMatchPersistentMemory @ 0x1407103CC (PipMatchPersistentMemory.c)
 *     PnpNotifyHwProfileChange @ 0x140714584 (PnpNotifyHwProfileChange.c)
 *     PnpRequestHwProfileChangeNotification @ 0x1407148F8 (PnpRequestHwProfileChangeNotification.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x14072BA90 (PiDrvDbQuerySyncNodesUpdated.c)
 *     ObpGetTraceIndex @ 0x140738E6C (ObpGetTraceIndex.c)
 *     CompareNamesCaseSensitive @ 0x14077013C (CompareNamesCaseSensitive.c)
 *     WmipParseSysIdTable @ 0x1407954C8 (WmipParseSysIdTable.c)
 *     SLUpdateLicenseDataInternal @ 0x1407AAD54 (SLUpdateLicenseDataInternal.c)
 *     CmpFilterAcpiDockingState @ 0x1407C43F8 (CmpFilterAcpiDockingState.c)
 *     MiCompareUserSidHotPatchNodes @ 0x1407E2614 (MiCompareUserSidHotPatchNodes.c)
 *     SdbpMergeAreTagValuesEqual @ 0x1407F8524 (SdbpMergeAreTagValuesEqual.c)
 *     MinCryptDecodeOid @ 0x140814A84 (MinCryptDecodeOid.c)
 *     I_MinCryptFindIssuerCertificateByName @ 0x140814D9C (I_MinCryptFindIssuerCertificateByName.c)
 *     I_MinCryptFindRootByKey @ 0x140814E8C (I_MinCryptFindRootByKey.c)
 *     I_MinCryptFindRootByName @ 0x140814F00 (I_MinCryptFindRootByName.c)
 *     I_MinCryptFindSignerCertificateByIssuerAndSerialNumber @ 0x1408162E4 (I_MinCryptFindSignerCertificateByIssuerAndSerialNumber.c)
 *     I_MinCryptVerifyRFC3161TimeStamp @ 0x1408167A4 (I_MinCryptVerifyRFC3161TimeStamp.c)
 *     I_MinCryptVerifySignerAuthenticatedAttributes @ 0x14081693C (I_MinCryptVerifySignerAuthenticatedAttributes.c)
 *     MinCrypK_VerifySignedDataKModeEx @ 0x140816A74 (MinCrypK_VerifySignedDataKModeEx.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1408369DC (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     PnpIsNullGuid @ 0x140838480 (PnpIsNullGuid.c)
 *     ObpLookupDirectoryEntry @ 0x140846000 (ObpLookupDirectoryEntry.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x140854E70 (SepAdtAuditObjectAccessWithContext.c)
 *     ObpLookupObjectName @ 0x14085CB70 (ObpLookupObjectName.c)
 *     RtlCompareUnicodeStrings @ 0x1408694A0 (RtlCompareUnicodeStrings.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x14086B0B4 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     EtwpTrackDebugIdForSession @ 0x140897F00 (EtwpTrackDebugIdForSession.c)
 *     EtwpTrackBinaryForSession @ 0x140899338 (EtwpTrackBinaryForSession.c)
 *     EtwpCalculateUpdateNotification @ 0x14089B0D4 (EtwpCalculateUpdateNotification.c)
 *     EtwpEnableGuid @ 0x14089BB2C (EtwpEnableGuid.c)
 *     AlpcpExposeWorkOnBehalfAttribute @ 0x1408A8250 (AlpcpExposeWorkOnBehalfAttribute.c)
 *     RtlCompareString @ 0x1408E8980 (RtlCompareString.c)
 *     sub_140907180 @ 0x140907180 (sub_140907180.c)
 *     ObpCompareEntryLevel2 @ 0x1409191B0 (ObpCompareEntryLevel2.c)
 *     RtlEqualUnicodeString @ 0x1409329B0 (RtlEqualUnicodeString.c)
 *     RtlCompareUnicodeString @ 0x140939BB0 (RtlCompareUnicodeString.c)
 *     IopRegisterDeviceInterface @ 0x14095C574 (IopRegisterDeviceInterface.c)
 *     PopArePowerSettingsEqual @ 0x140965D30 (PopArePowerSettingsEqual.c)
 *     PnpNotifyDeviceClassChange @ 0x14096CC3C (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyTargetDeviceChange @ 0x14096CFB0 (PnpNotifyTargetDeviceChange.c)
 *     SepIsAclEqual @ 0x140982EF4 (SepIsAclEqual.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140982FF4 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     RtlGetAppContainerSidType @ 0x140984120 (RtlGetAppContainerSidType.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x1409859D0 (SepAdtClassifyObjectIntoSubCategory.c)
 *     RtlIsPackageSid @ 0x140998B14 (RtlIsPackageSid.c)
 *     RtlIsCapabilitySid @ 0x140998B5C (RtlIsCapabilitySid.c)
 *     PnpCompareInterruptInformation @ 0x1409A3260 (PnpCompareInterruptInformation.c)
 *     sub_1409E28D4 @ 0x1409E28D4 (sub_1409E28D4.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1409E471C (EtwpClearSessionAndUnreferenceEntry.c)
 *     sub_1409FFD00 @ 0x1409FFD00 (sub_1409FFD00.c)
 *     PopInitializeHeteroProcessors @ 0x140A2061C (PopInitializeHeteroProcessors.c)
 *     PpmCompareAndApplyPolicySettings @ 0x140A3EC4C (PpmCompareAndApplyPolicySettings.c)
 *     IoReportTargetDeviceChange @ 0x140A4D370 (IoReportTargetDeviceChange.c)
 *     IopPnPDispatch @ 0x140A5AF70 (IopPnPDispatch.c)
 *     PipGenerateContainerID @ 0x140A6E420 (PipGenerateContainerID.c)
 *     PnpBusTypeGuidGetIndex @ 0x140A7129C (PnpBusTypeGuidGetIndex.c)
 *     SepCheckCapabilities @ 0x140A87D3C (SepCheckCapabilities.c)
 *     BiUpdateBcdObject @ 0x140AD63A8 (BiUpdateBcdObject.c)
 *     VfUtilEqualUnicodeString @ 0x140B73248 (VfUtilEqualUnicodeString.c)
 *     ViDdiDispatchWmiQueryAllData @ 0x140B74504 (ViDdiDispatchWmiQueryAllData.c)
 *     ViCheckTag @ 0x140B78644 (ViCheckTag.c)
 *     ViCopyBackModifiedBuffer @ 0x140B78794 (ViCopyBackModifiedBuffer.c)
 *     HalpAuditSlicTables @ 0x140C03324 (HalpAuditSlicTables.c)
 *     PipMigratePnpState @ 0x140C10454 (PipMigratePnpState.c)
 *     VhdiInitializeBootDisk @ 0x140C4C530 (VhdiInitializeBootDisk.c)
 *     CimfsInitializeBootDisk @ 0x140C4CD70 (CimfsInitializeBootDisk.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall RtlCompareMemory(const void *Source1, const void *Source2, SIZE_T Length)
{
  _BYTE *v3; // rsi
  _BYTE *v4; // rdi
  __int64 v5; // rcx
  bool v6; // zf
  SIZE_T v7; // rcx
  bool v8; // zf
  bool v9; // zf
  SIZE_T v10; // r8
  SIZE_T v11; // rcx
  bool v13; // zf
  SIZE_T v14; // rcx

  v3 = Source1;
  v4 = Source2;
  if ( (((unsigned __int8)Source1 ^ (unsigned __int8)Source2) & 7) != 0 || Length < 8 )
  {
    v13 = Length == 0;
    if ( Length )
    {
      v14 = Length;
      do
      {
        if ( !v14 )
          break;
        v13 = *v3++ == *v4++;
        --v14;
      }
      while ( v13 );
      if ( !v13 )
        Length -= v14 + 1;
    }
    return Length;
  }
  else
  {
    v5 = -(int)Source1 & 7;
    if ( (_DWORD)v5 )
    {
      Length -= (unsigned int)v5;
      v6 = Length == 0;
      do
      {
        if ( !v5 )
          break;
        v6 = *v3++ == *v4++;
        --v5;
      }
      while ( v6 );
      if ( !v6 )
        goto LABEL_19;
    }
    v7 = Length & 0xFFFFFFFFFFFFFFF8uLL;
    if ( (Length & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
    {
      Length -= v7;
      v7 >>= 3;
      v8 = v7 == 0;
      do
      {
        if ( !v7 )
          break;
        v8 = *(_QWORD *)v3 == *(_QWORD *)v4;
        v3 += 8;
        v4 += 8;
        --v7;
      }
      while ( v8 );
      if ( !v8 )
      {
        v3 -= 8;
        v4 -= 8;
        v7 = 8 * (v7 + 1);
      }
    }
    v9 = v7 + Length == 0;
    v10 = v7 + Length;
    if ( v10 )
    {
      v11 = v10;
      do
      {
        if ( !v11 )
          break;
        v9 = *v3++ == *v4++;
        --v11;
      }
      while ( v9 );
      if ( !v9 )
LABEL_19:
        --v4;
    }
    return v4 - (_BYTE *)Source2;
  }
}
