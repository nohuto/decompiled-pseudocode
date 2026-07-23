/*
 * XREFs of RtlCompareMemory @ 0x1406B4930
 * Callers:
 *     MmReportParkedProcessors @ 0x1403A38F0 (MmReportParkedProcessors.c)
 *     EtwpTraceStackKey @ 0x1403DE5B0 (EtwpTraceStackKey.c)
 *     PopWriteBsdPoInfo @ 0x14041C188 (PopWriteBsdPoInfo.c)
 *     SepIsPackageSid @ 0x14041C6F0 (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x1404217D0 (SepIsCapabilitySid.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x140464570 (IoReportTargetDeviceChangeAsynchronous.c)
 *     PpmPerfCalculateQosClassPolicies @ 0x140472694 (PpmPerfCalculateQosClassPolicies.c)
 *     EtwpGetCrimsonStackKey @ 0x1404C5C9C (EtwpGetCrimsonStackKey.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x1404E2E24 (PpmHeteroUpdateHgsConfiguration.c)
 *     WheaGetErrPacketFromErrRecord @ 0x140552990 (WheaGetErrPacketFromErrRecord.c)
 *     HalpGenericErrorSourceRecovery @ 0x140552B9C (HalpGenericErrorSourceRecovery.c)
 *     HalpHpetDiscover @ 0x14055E498 (HalpHpetDiscover.c)
 *     SecureDump_ValidateAmeCertChain @ 0x14059F7F0 (SecureDump_ValidateAmeCertChain.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1405E5CD4 (RtlpStdLogCapturedStackTrace.c)
 *     MinCrypK_ParseRevocationList @ 0x1406A031C (MinCrypK_ParseRevocationList.c)
 *     MinCryptIsKeyPresent @ 0x1406A0680 (MinCryptIsKeyPresent.c)
 *     CmpTransUowIsEqual @ 0x1406F90AC (CmpTransUowIsEqual.c)
 *     PipMatchPersistentMemory @ 0x14071A05C (PipMatchPersistentMemory.c)
 *     PnpNotifyHwProfileChange @ 0x14071E214 (PnpNotifyHwProfileChange.c)
 *     PnpRequestHwProfileChangeNotification @ 0x14071E588 (PnpRequestHwProfileChangeNotification.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x140735C50 (PiDrvDbQuerySyncNodesUpdated.c)
 *     ObpGetTraceIndex @ 0x14074317C (ObpGetTraceIndex.c)
 *     CompareNamesCaseSensitive @ 0x14077F2BC (CompareNamesCaseSensitive.c)
 *     WmipParseSysIdTable @ 0x1407A49A8 (WmipParseSysIdTable.c)
 *     SLUpdateLicenseDataInternal @ 0x1407BA654 (SLUpdateLicenseDataInternal.c)
 *     CmpFilterAcpiDockingState @ 0x1407D402C (CmpFilterAcpiDockingState.c)
 *     MiCompareUserSidHotPatchNodes @ 0x1407F2A84 (MiCompareUserSidHotPatchNodes.c)
 *     SdbpMergeAreTagValuesEqual @ 0x1408087D4 (SdbpMergeAreTagValuesEqual.c)
 *     BiUpdateBcdObject @ 0x140815EFC (BiUpdateBcdObject.c)
 *     MinCryptDecodeOid @ 0x140825004 (MinCryptDecodeOid.c)
 *     I_MinCryptFindIssuerCertificateByName @ 0x140825388 (I_MinCryptFindIssuerCertificateByName.c)
 *     I_MinCryptFindRootByKey @ 0x140825478 (I_MinCryptFindRootByKey.c)
 *     I_MinCryptFindRootByName @ 0x1408254EC (I_MinCryptFindRootByName.c)
 *     I_MinCryptFindSignerCertificateByIssuerAndSerialNumber @ 0x1408268A8 (I_MinCryptFindSignerCertificateByIssuerAndSerialNumber.c)
 *     I_MinCryptVerifyRFC3161TimeStamp @ 0x140826D68 (I_MinCryptVerifyRFC3161TimeStamp.c)
 *     I_MinCryptVerifySignerAuthenticatedAttributes @ 0x140826F00 (I_MinCryptVerifySignerAuthenticatedAttributes.c)
 *     MinCrypK_VerifySignedDataKModeEx @ 0x140827038 (MinCrypK_VerifySignedDataKModeEx.c)
 *     EtwpCalculateUpdateNotification @ 0x1408376F0 (EtwpCalculateUpdateNotification.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140837F48 (EtwpClearSessionAndUnreferenceEntry.c)
 *     ObpLookupDirectoryEntry @ 0x14083E800 (ObpLookupDirectoryEntry.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x14084D2F0 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x140863240 (SepAdtClassifyObjectIntoSubCategory.c)
 *     SepIsAclEqual @ 0x140863BB4 (SepIsAclEqual.c)
 *     ObpCompareEntryLevel2 @ 0x14086B770 (ObpCompareEntryLevel2.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x1408705E0 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     RtlCompareUnicodeStrings @ 0x14088C7D0 (RtlCompareUnicodeStrings.c)
 *     AlpcpExposeWorkOnBehalfAttribute @ 0x1408A0D80 (AlpcpExposeWorkOnBehalfAttribute.c)
 *     ObpLookupObjectName @ 0x1408A58B0 (ObpLookupObjectName.c)
 *     IopRegisterDeviceInterface @ 0x1408B141C (IopRegisterDeviceInterface.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1408B71A0 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     PnpIsNullGuid @ 0x1408D0B80 (PnpIsNullGuid.c)
 *     RtlCompareString @ 0x140906870 (RtlCompareString.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140912CF0 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     RtlGetAppContainerSidType @ 0x1409143B0 (RtlGetAppContainerSidType.c)
 *     sub_14091D4BC @ 0x14091D4BC (sub_14091D4BC.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 *     RtlCompareUnicodeString @ 0x1409343D0 (RtlCompareUnicodeString.c)
 *     PopArePowerSettingsEqual @ 0x1409A408C (PopArePowerSettingsEqual.c)
 *     PnpCompareInterruptInformation @ 0x1409C1130 (PnpCompareInterruptInformation.c)
 *     sub_1409DB564 @ 0x1409DB564 (sub_1409DB564.c)
 *     PnpNotifyDeviceClassChange @ 0x1409EC16C (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyTargetDeviceChange @ 0x1409EC4E0 (PnpNotifyTargetDeviceChange.c)
 *     sub_1409F581C @ 0x1409F581C (sub_1409F581C.c)
 *     EtwpTrackDebugIdForSession @ 0x1409F7A5C (EtwpTrackDebugIdForSession.c)
 *     EtwpTrackBinaryForSession @ 0x1409F8C88 (EtwpTrackBinaryForSession.c)
 *     PpmCompareAndApplyPolicySettings @ 0x140A3CFDC (PpmCompareAndApplyPolicySettings.c)
 *     RtlIsPackageSid @ 0x140A4069C (RtlIsPackageSid.c)
 *     RtlIsCapabilitySid @ 0x140A41A18 (RtlIsCapabilitySid.c)
 *     IoReportTargetDeviceChange @ 0x140A47610 (IoReportTargetDeviceChange.c)
 *     IopPnPDispatch @ 0x140A55010 (IopPnPDispatch.c)
 *     PipGenerateContainerID @ 0x140A69ACC (PipGenerateContainerID.c)
 *     PnpBusTypeGuidGetIndex @ 0x140A6D00C (PnpBusTypeGuidGetIndex.c)
 *     SepCheckCapabilities @ 0x140A8926C (SepCheckCapabilities.c)
 *     PopInitializeHeteroProcessors @ 0x140AC57E0 (PopInitializeHeteroProcessors.c)
 *     VfUtilEqualUnicodeString @ 0x140B85228 (VfUtilEqualUnicodeString.c)
 *     ViDdiDispatchWmiQueryAllData @ 0x140B864E4 (ViDdiDispatchWmiQueryAllData.c)
 *     ViCheckTag @ 0x140B8A624 (ViCheckTag.c)
 *     ViCopyBackModifiedBuffer @ 0x140B8A774 (ViCopyBackModifiedBuffer.c)
 *     HalpAuditSlicTables @ 0x140C163B4 (HalpAuditSlicTables.c)
 *     PipMigratePnpState @ 0x140C235F4 (PipMigratePnpState.c)
 *     VhdiInitializeBootDisk @ 0x140C5FA00 (VhdiInitializeBootDisk.c)
 *     CimfsInitializeBootDisk @ 0x140C60240 (CimfsInitializeBootDisk.c)
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
