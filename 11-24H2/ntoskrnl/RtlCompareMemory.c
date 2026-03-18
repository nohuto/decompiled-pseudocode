/*
 * XREFs of RtlCompareMemory @ 0x1406B3990
 * Callers:
 *     PpmHeteroUpdateHgsConfiguration @ 0x140203248 (PpmHeteroUpdateHgsConfiguration.c)
 *     SepNormalAccessCheck @ 0x140344500 (SepNormalAccessCheck.c)
 *     MmReportParkedProcessors @ 0x1403C8D50 (MmReportParkedProcessors.c)
 *     EtwpTraceStackKey @ 0x1403EE6C0 (EtwpTraceStackKey.c)
 *     PopWriteBsdPoInfo @ 0x140427FF8 (PopWriteBsdPoInfo.c)
 *     SepIsPackageSid @ 0x140428560 (SepIsPackageSid.c)
 *     PpmPerfCalculateQosClassPolicies @ 0x140429AF0 (PpmPerfCalculateQosClassPolicies.c)
 *     SepIsCapabilitySid @ 0x14042FD20 (SepIsCapabilitySid.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x14046B8F0 (IoReportTargetDeviceChangeAsynchronous.c)
 *     EtwpGetCrimsonStackKey @ 0x1404CC8C8 (EtwpGetCrimsonStackKey.c)
 *     WheaGetErrPacketFromErrRecord @ 0x140555050 (WheaGetErrPacketFromErrRecord.c)
 *     HalpGenericErrorSourceRecovery @ 0x14055525C (HalpGenericErrorSourceRecovery.c)
 *     HalpHpetDiscover @ 0x140560868 (HalpHpetDiscover.c)
 *     SecureDump_ValidateAmeCertChain @ 0x1405A28B0 (SecureDump_ValidateAmeCertChain.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1405E86E4 (RtlpStdLogCapturedStackTrace.c)
 *     MinCrypK_ParseRevocationList @ 0x14069F218 (MinCrypK_ParseRevocationList.c)
 *     MinCryptIsKeyPresent @ 0x14069F57C (MinCryptIsKeyPresent.c)
 *     CmpTransUowIsEqual @ 0x1406FB46C (CmpTransUowIsEqual.c)
 *     PipMatchPersistentMemory @ 0x14071C4CC (PipMatchPersistentMemory.c)
 *     PnpNotifyHwProfileChange @ 0x140720684 (PnpNotifyHwProfileChange.c)
 *     PnpRequestHwProfileChangeNotification @ 0x1407209F8 (PnpRequestHwProfileChangeNotification.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x140737D20 (PiDrvDbQuerySyncNodesUpdated.c)
 *     ObpGetTraceIndex @ 0x140744E8C (ObpGetTraceIndex.c)
 *     CompareNamesCaseSensitive @ 0x14077F38C (CompareNamesCaseSensitive.c)
 *     WmipParseSysIdTable @ 0x1407A4898 (WmipParseSysIdTable.c)
 *     SLUpdateLicenseDataInternal @ 0x1407BA204 (SLUpdateLicenseDataInternal.c)
 *     CmpFilterAcpiDockingState @ 0x1407D3B3C (CmpFilterAcpiDockingState.c)
 *     MiCompareUserSidHotPatchNodes @ 0x1407F24B4 (MiCompareUserSidHotPatchNodes.c)
 *     SdbpMergeAreTagValuesEqual @ 0x140808094 (SdbpMergeAreTagValuesEqual.c)
 *     BiUpdateBcdObject @ 0x1408157BC (BiUpdateBcdObject.c)
 *     MinCryptDecodeOid @ 0x1408248A4 (MinCryptDecodeOid.c)
 *     I_MinCryptFindIssuerCertificateByName @ 0x140824BBC (I_MinCryptFindIssuerCertificateByName.c)
 *     I_MinCryptFindRootByKey @ 0x140824CAC (I_MinCryptFindRootByKey.c)
 *     I_MinCryptFindRootByName @ 0x140824D20 (I_MinCryptFindRootByName.c)
 *     I_MinCryptFindSignerCertificateByIssuerAndSerialNumber @ 0x1408260D8 (I_MinCryptFindSignerCertificateByIssuerAndSerialNumber.c)
 *     I_MinCryptVerifyRFC3161TimeStamp @ 0x140826598 (I_MinCryptVerifyRFC3161TimeStamp.c)
 *     I_MinCryptVerifySignerAuthenticatedAttributes @ 0x140826730 (I_MinCryptVerifySignerAuthenticatedAttributes.c)
 *     MinCrypK_VerifySignedDataKModeEx @ 0x140826868 (MinCrypK_VerifySignedDataKModeEx.c)
 *     EtwpTrackDebugIdForSession @ 0x140837480 (EtwpTrackDebugIdForSession.c)
 *     EtwpTrackBinaryForSession @ 0x140838890 (EtwpTrackBinaryForSession.c)
 *     EtwpCalculateUpdateNotification @ 0x14083A5D0 (EtwpCalculateUpdateNotification.c)
 *     EtwpEnableGuid @ 0x14083B040 (EtwpEnableGuid.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x14083ECD8 (EtwpClearSessionAndUnreferenceEntry.c)
 *     ObpLookupDirectoryEntry @ 0x140842540 (ObpLookupDirectoryEntry.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x140851030 (SepAdtAuditObjectAccessWithContext.c)
 *     ObpCompareEntryLevel2 @ 0x1408672E0 (ObpCompareEntryLevel2.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x14086C2B0 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     RtlCompareUnicodeStrings @ 0x140888920 (RtlCompareUnicodeStrings.c)
 *     AlpcpExposeWorkOnBehalfAttribute @ 0x1408986E0 (AlpcpExposeWorkOnBehalfAttribute.c)
 *     ObpLookupObjectName @ 0x14089D210 (ObpLookupObjectName.c)
 *     RtlCompareString @ 0x1408B0610 (RtlCompareString.c)
 *     IopRegisterDeviceInterface @ 0x1408B3B2C (IopRegisterDeviceInterface.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1408B97F8 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     PnpIsNullGuid @ 0x1408D3190 (PnpIsNullGuid.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x1408F1A40 (SepAdtClassifyObjectIntoSubCategory.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1408F1C3C (SeSecurityDescriptorChangedAuditAlarm.c)
 *     RtlGetAppContainerSidType @ 0x1408F2D70 (RtlGetAppContainerSidType.c)
 *     SepIsAclEqual @ 0x1408F3200 (SepIsAclEqual.c)
 *     sub_1408FABDC @ 0x1408FABDC (sub_1408FABDC.c)
 *     RtlEqualUnicodeString @ 0x140927050 (RtlEqualUnicodeString.c)
 *     RtlCompareUnicodeString @ 0x140932290 (RtlCompareUnicodeString.c)
 *     PopArePowerSettingsEqual @ 0x1409BDA3C (PopArePowerSettingsEqual.c)
 *     sub_1409E17B4 @ 0x1409E17B4 (sub_1409E17B4.c)
 *     PnpNotifyDeviceClassChange @ 0x1409EE72C (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyTargetDeviceChange @ 0x1409EEAA0 (PnpNotifyTargetDeviceChange.c)
 *     sub_1409FCADC @ 0x1409FCADC (sub_1409FCADC.c)
 *     PnpCompareInterruptInformation @ 0x140A12D20 (PnpCompareInterruptInformation.c)
 *     PopInitializeHeteroProcessors @ 0x140A2A138 (PopInitializeHeteroProcessors.c)
 *     PpmCompareAndApplyPolicySettings @ 0x140A4706C (PpmCompareAndApplyPolicySettings.c)
 *     RtlIsPackageSid @ 0x140A4997C (RtlIsPackageSid.c)
 *     RtlIsCapabilitySid @ 0x140A4AD90 (RtlIsCapabilitySid.c)
 *     IoReportTargetDeviceChange @ 0x140A50860 (IoReportTargetDeviceChange.c)
 *     IopPnPDispatch @ 0x140A5D2E0 (IopPnPDispatch.c)
 *     PipGenerateContainerID @ 0x140A7063C (PipGenerateContainerID.c)
 *     PnpBusTypeGuidGetIndex @ 0x140A739EC (PnpBusTypeGuidGetIndex.c)
 *     SepCheckCapabilities @ 0x140A8CD3C (SepCheckCapabilities.c)
 *     VfUtilEqualUnicodeString @ 0x140B83228 (VfUtilEqualUnicodeString.c)
 *     ViDdiDispatchWmiQueryAllData @ 0x140B844E4 (ViDdiDispatchWmiQueryAllData.c)
 *     ViCheckTag @ 0x140B88624 (ViCheckTag.c)
 *     ViCopyBackModifiedBuffer @ 0x140B88774 (ViCopyBackModifiedBuffer.c)
 *     HalpAuditSlicTables @ 0x140C143B4 (HalpAuditSlicTables.c)
 *     PipMigratePnpState @ 0x140C215B4 (PipMigratePnpState.c)
 *     VhdiInitializeBootDisk @ 0x140C5D8B0 (VhdiInitializeBootDisk.c)
 *     CimfsInitializeBootDisk @ 0x140C5E0F0 (CimfsInitializeBootDisk.c)
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
