/*
 * XREFs of memcmp @ 0x1406BFF10
 * Callers:
 *     SepMandatoryIntegrityCheck @ 0x140259F30 (SepMandatoryIntegrityCheck.c)
 *     SepMatchPackage @ 0x140344430 (SepMatchPackage.c)
 *     SepNormalAccessCheck @ 0x140344500 (SepNormalAccessCheck.c)
 *     RtlpIsNameInExpressionPrivate @ 0x140347600 (RtlpIsNameInExpressionPrivate.c)
 *     RtlAreNamesEqual @ 0x140348070 (RtlAreNamesEqual.c)
 *     KeUpdateSoftParkRankList @ 0x140354F60 (KeUpdateSoftParkRankList.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x140357F14 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     SepPotentialGlobalTableAttribute @ 0x1403592C8 (SepPotentialGlobalTableAttribute.c)
 *     SeComputeCreatorDeniedRights @ 0x140359A70 (SeComputeCreatorDeniedRights.c)
 *     SeAccessCheckWithHint @ 0x14035A620 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x14035C8A0 (SeAccessCheckByType.c)
 *     AuthzBasepFindSecurityAttributeValue @ 0x1403600AC (AuthzBasepFindSecurityAttributeValue.c)
 *     SepTokenIsOwner @ 0x140361440 (SepTokenIsOwner.c)
 *     RtlpOwnerAcesPresent @ 0x140362230 (RtlpOwnerAcesPresent.c)
 *     SepSidInToken @ 0x1403624E0 (SepSidInToken.c)
 *     SepMaximumAccessCheck @ 0x140363250 (SepMaximumAccessCheck.c)
 *     RtlSidHashLookup @ 0x140363CE0 (RtlSidHashLookup.c)
 *     RtlEqualSid @ 0x140364150 (RtlEqualSid.c)
 *     RtlFindAceBySid @ 0x1403641E0 (RtlFindAceBySid.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x140399A30 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     IopIsKnownGoodLegacyFsFilter @ 0x1403C5078 (IopIsKnownGoodLegacyFsFilter.c)
 *     CompareEventEntry @ 0x1403D124C (CompareEventEntry.c)
 *     SepSidInTokenSidHash @ 0x1403DF2C0 (SepSidInTokenSidHash.c)
 *     RtlSidDominates @ 0x1403F9CB0 (RtlSidDominates.c)
 *     RtlOwnerAcesPresent @ 0x1403FEA60 (RtlOwnerAcesPresent.c)
 *     SepMatchCapability @ 0x140432DE8 (SepMatchCapability.c)
 *     HalpAcpiIsCachedTableCompromised @ 0x140478708 (HalpAcpiIsCachedTableCompromised.c)
 *     HalpAcpiGetRsdt @ 0x1404789A4 (HalpAcpiGetRsdt.c)
 *     IoRaiseInformationalHardError @ 0x1404ADFA0 (IoRaiseInformationalHardError.c)
 *     AuthzBasepCompareOctetStringOperands @ 0x1404B3468 (AuthzBasepCompareOctetStringOperands.c)
 *     MiIdealClusterPage @ 0x1404D205C (MiIdealClusterPage.c)
 *     SepValidateCAPID @ 0x1404F909C (SepValidateCAPID.c)
 *     SymCryptEcDhSecretAgreementSelftest @ 0x140529594 (SymCryptEcDhSecretAgreementSelftest.c)
 *     SymCryptEcDsaSelftest @ 0x14052972C (SymCryptEcDsaSelftest.c)
 *     SymCryptRsaSelftest @ 0x140529908 (SymCryptRsaSelftest.c)
 *     SymCryptFdefDecideModulusType @ 0x1405356C8 (SymCryptFdefDecideModulusType.c)
 *     HalMatchAcpiOemTableId @ 0x14053CF60 (HalMatchAcpiOemTableId.c)
 *     __asan_wrap_memcmp @ 0x1405AD570 (__asan_wrap_memcmp.c)
 *     KiDisplayBlueScreen @ 0x1405B38C0 (KiDisplayBlueScreen.c)
 *     RtlpComparePropertyEntry @ 0x1405EA2C0 (RtlpComparePropertyEntry.c)
 *     MiFindSpecialPurposeMemoryType @ 0x14068E758 (MiFindSpecialPurposeMemoryType.c)
 *     MinCryptK_GetBootAppSvnFromRevocationList @ 0x14069F334 (MinCryptK_GetBootAppSvnFromRevocationList.c)
 *     MinCryptCheckCertsAndKeys @ 0x14069F3E8 (MinCryptCheckCertsAndKeys.c)
 *     MinCryptIsCertPresent @ 0x14069F50C (MinCryptIsCertPresent.c)
 *     RtlSuffixUnicodeString @ 0x14077D0F0 (RtlSuffixUnicodeString.c)
 *     RtlReplaceSidInSd @ 0x140780E60 (RtlReplaceSidInSd.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x1407822BC (RtlpCheckDynamicTimeZoneInformation.c)
 *     RtlpUpdateDynamicTimeZones @ 0x14078291C (RtlpUpdateDynamicTimeZones.c)
 *     SepSecureBootManifestCompareElements @ 0x140794140 (SepSecureBootManifestCompareElements.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x14079430C (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 *     SLQueryLicenseValueInternal @ 0x1407B99EC (SLQueryLicenseValueInternal.c)
 *     SLUpdateLicenseDataInternal @ 0x1407BA204 (SLUpdateLicenseDataInternal.c)
 *     ExpKdPullRemoteFileForUser @ 0x1407C4CB4 (ExpKdPullRemoteFileForUser.c)
 *     SdbpCheckMatchingRegistryValue @ 0x14080332C (SdbpCheckMatchingRegistryValue.c)
 *     I_MinCryptCheckEKU @ 0x140824B50 (I_MinCryptCheckEKU.c)
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x140824ED4 (MinCryptVerifyCertificateWithPolicy2.c)
 *     MincrypK_ParseCertificateChainWithPolicy2 @ 0x14082581C (MincrypK_ParseCertificateChainWithPolicy2.c)
 *     I_MinCryptHashSearchCompare @ 0x1408259D0 (I_MinCryptHashSearchCompare.c)
 *     I_MinCryptIsTimestampSignerTrusted @ 0x1408259F4 (I_MinCryptIsTimestampSignerTrusted.c)
 *     I_MinAsn1ParseSingleAttribute @ 0x140826D10 (I_MinAsn1ParseSingleAttribute.c)
 *     MinAsn1ParseSingleExtensionValue @ 0x140827360 (MinAsn1ParseSingleExtensionValue.c)
 *     I_MinCryptCheckEKURequirements @ 0x140827520 (I_MinCryptCheckEKURequirements.c)
 *     EtwpStartLogger @ 0x140831694 (EtwpStartLogger.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1408343FC (EtwpGetLoggerInfoFromContext.c)
 *     ObLogSecurityDescriptor @ 0x140838F50 (ObLogSecurityDescriptor.c)
 *     ObpLookupDirectoryEntry @ 0x140842540 (ObpLookupDirectoryEntry.c)
 *     SeDefaultObjectMethod @ 0x140858190 (SeDefaultObjectMethod.c)
 *     ObSetSecurityDescriptorInfo @ 0x1408588B0 (ObSetSecurityDescriptorInfo.c)
 *     RtlpNormalizeAcl @ 0x14085A3B4 (RtlpNormalizeAcl.c)
 *     RtlPrefixUnicodeString @ 0x14086E3C0 (RtlPrefixUnicodeString.c)
 *     SshpCacheDatabaseCompare @ 0x140888710 (SshpCacheDatabaseCompare.c)
 *     SeExamineSacl @ 0x140889B70 (SeExamineSacl.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x140898F7C (AlpcpEnterStateChangeEventMessageLog.c)
 *     ObpLookupObjectName @ 0x14089D210 (ObpLookupObjectName.c)
 *     IopParseDevice @ 0x14089F880 (IopParseDevice.c)
 *     RtlPrefixString @ 0x1408B12B0 (RtlPrefixString.c)
 *     ConstraintEval @ 0x1408B4EA0 (ConstraintEval.c)
 *     PiDmObjectProcessPropertyChange @ 0x1408BA158 (PiDmObjectProcessPropertyChange.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1408BB2BC (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C7450 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectActionCallback @ 0x1408CE6A0 (PiPnpRtlObjectActionCallback.c)
 *     PropertyEval @ 0x1408D4F30 (PropertyEval.c)
 *     PopEtAggregateFind @ 0x1409060C4 (PopEtAggregateFind.c)
 *     RtlpInternEntryMatch @ 0x140907394 (RtlpInternEntryMatch.c)
 *     SepExamineSaclEx @ 0x14091FD68 (SepExamineSaclEx.c)
 *     RtlEqualUnicodeString @ 0x140927050 (RtlEqualUnicodeString.c)
 *     PfSnAltProfileTreeCompareByProcess @ 0x140939A14 (PfSnAltProfileTreeCompareByProcess.c)
 *     PfSnEndProcessTrace @ 0x140939A40 (PfSnEndProcessTrace.c)
 *     MiComputeBadImageHeaderType @ 0x140944F84 (MiComputeBadImageHeaderType.c)
 *     PfSnAsyncPrefetchWorker @ 0x140951F40 (PfSnAsyncPrefetchWorker.c)
 *     PfSnPrefetchCacheEntryGet @ 0x140961580 (PfSnPrefetchCacheEntryGet.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x140962F24 (PfSnPrefetchCacheEntryUpdate.c)
 *     sub_140973C40 @ 0x140973C40 (sub_140973C40.c)
 *     FsRtlIsDbcsInExpression @ 0x1409892A0 (FsRtlIsDbcsInExpression.c)
 *     RtlFindUnicodeSubstring @ 0x1409A0970 (RtlFindUnicodeSubstring.c)
 *     CmpFindMatchingDescriptorCell @ 0x1409A0AF4 (CmpFindMatchingDescriptorCell.c)
 *     ObAssignObjectSecurityDescriptor @ 0x1409A6120 (ObAssignObjectSecurityDescriptor.c)
 *     SepSidInSidAndAttributes @ 0x1409B2B94 (SepSidInSidAndAttributes.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1409B4770 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PopApplyPolicy @ 0x1409B85D0 (PopApplyPolicy.c)
 *     EtwpCompareGuid @ 0x1409D7590 (EtwpCompareGuid.c)
 *     PnpProcessTargetDeviceEvent @ 0x1409ED604 (PnpProcessTargetDeviceEvent.c)
 *     TraitsCompare @ 0x1409F5C40 (TraitsCompare.c)
 *     EtwpUpdateDisallowedGuids @ 0x1409F5D48 (EtwpUpdateDisallowedGuids.c)
 *     ExpWnfFindScopeInstance @ 0x1409FB7F8 (ExpWnfFindScopeInstance.c)
 *     FsRtlNotifyFilterReportChange @ 0x140A007F0 (FsRtlNotifyFilterReportChange.c)
 *     PiDcCompareUpdateProperties @ 0x140A4A4C0 (PiDcCompareUpdateProperties.c)
 *     EtwpGenerateFileName @ 0x140A7F9B8 (EtwpGenerateFileName.c)
 *     PiDevCfgResolveVariableExpression @ 0x140A91630 (PiDevCfgResolveVariableExpression.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x140A96698 (PiSwDoesCreateChangesRequireReEnum.c)
 *     ExpWnfInvalidateDataStores @ 0x140A9F3D8 (ExpWnfInvalidateDataStores.c)
 *     BiExportEfiBootManager @ 0x140AB305C (BiExportEfiBootManager.c)
 *     BiAreBootEntriesEqual @ 0x140AB713C (BiAreBootEntriesEqual.c)
 *     NtSetSystemInformation @ 0x140AE1300 (NtSetSystemInformation.c)
 *     IovpExamineIrpStackForwarding @ 0x140B8D650 (IovpExamineIrpStackForwarding.c)
 *     ViCtxEqualExtendedState @ 0x140BA207C (ViCtxEqualExtendedState.c)
 *     HalpAcpiDetectMachineSpecificActions @ 0x140C1511C (HalpAcpiDetectMachineSpecificActions.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140C20270 (PipCheckSystemFirmwareUpdated.c)
 *     CmpGetBiosDate @ 0x140C49190 (CmpGetBiosDate.c)
 * Callees:
 *     <none>
 */

int __cdecl memcmp(const void *Buf1, const void *Buf2, size_t Size)
{
  signed __int64 v3; // rdx
  bool v4; // cf
  size_t v6; // r9
  unsigned __int64 v7; // rax
  size_t v8; // r9

  v3 = (_BYTE *)Buf2 - (_BYTE *)Buf1;
  if ( Size < 8 )
    goto LABEL_6;
  for ( ; ((unsigned __int8)Buf1 & 7) != 0; --Size )
  {
    v4 = *(_BYTE *)Buf1 < *((_BYTE *)Buf1 + v3);
    if ( *(_BYTE *)Buf1 != *((_BYTE *)Buf1 + v3) )
      return -v4 - (v4 - 1);
    Buf1 = (char *)Buf1 + 1;
  }
  if ( !(Size >> 3) )
  {
LABEL_6:
    if ( !Size )
      return 0;
    while ( 1 )
    {
      v4 = *(_BYTE *)Buf1 < *((_BYTE *)Buf1 + v3);
      if ( *(_BYTE *)Buf1 != *((_BYTE *)Buf1 + v3) )
        break;
      Buf1 = (char *)Buf1 + 1;
      if ( !--Size )
        return 0;
    }
    return -v4 - (v4 - 1);
  }
  v6 = Size >> 5;
  if ( Size >> 5 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)Buf1;
      if ( *(_QWORD *)Buf1 != *(_QWORD *)((char *)Buf1 + v3) )
        break;
      v7 = *((_QWORD *)Buf1 + 1);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 8) )
        goto LABEL_24;
      v7 = *((_QWORD *)Buf1 + 2);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 16) )
        goto LABEL_23;
      v7 = *((_QWORD *)Buf1 + 3);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 24) )
      {
        Buf1 = (char *)Buf1 + 8;
LABEL_23:
        Buf1 = (char *)Buf1 + 8;
LABEL_24:
        Buf1 = (char *)Buf1 + 8;
        break;
      }
      Buf1 = (char *)Buf1 + 32;
      if ( !--v6 )
      {
        Size &= 0x1Fu;
        goto LABEL_18;
      }
    }
  }
  else
  {
LABEL_18:
    v8 = Size >> 3;
    if ( !(Size >> 3) )
      goto LABEL_6;
    while ( 1 )
    {
      v7 = *(_QWORD *)Buf1;
      if ( *(_QWORD *)Buf1 != *(_QWORD *)((char *)Buf1 + v3) )
        break;
      Buf1 = (char *)Buf1 + 8;
      if ( !--v8 )
      {
        Size &= 7u;
        goto LABEL_6;
      }
    }
  }
  v4 = _byteswap_uint64(v7) < _byteswap_uint64(*(_QWORD *)((char *)Buf1 + v3));
  return -v4 - (v4 - 1);
}
