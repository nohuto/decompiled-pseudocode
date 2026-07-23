/*
 * XREFs of memcmp @ 0x1406C0E10
 * Callers:
 *     CompareEventEntry @ 0x140274D3C (CompareEventEntry.c)
 *     SepMandatoryIntegrityCheck @ 0x14028A540 (SepMandatoryIntegrityCheck.c)
 *     KeUpdateSoftParkRankList @ 0x1402B2C90 (KeUpdateSoftParkRankList.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x1402F6D30 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     SepMatchPackage @ 0x140323910 (SepMatchPackage.c)
 *     RtlpIsNameInExpressionPrivate @ 0x140326070 (RtlpIsNameInExpressionPrivate.c)
 *     RtlAreNamesEqual @ 0x140326A70 (RtlAreNamesEqual.c)
 *     IopIsKnownGoodLegacyFsFilter @ 0x1403B3C38 (IopIsKnownGoodLegacyFsFilter.c)
 *     SeComputeCreatorDeniedRights @ 0x1403B5DC0 (SeComputeCreatorDeniedRights.c)
 *     SepPotentialGlobalTableAttribute @ 0x1403B86D8 (SepPotentialGlobalTableAttribute.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1403B88F4 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     AuthzBasepFindSecurityAttributeValue @ 0x1403BAA7C (AuthzBasepFindSecurityAttributeValue.c)
 *     SepSidInTokenSidHash @ 0x1403BEFB0 (SepSidInTokenSidHash.c)
 *     SepSidInToken @ 0x1403CB430 (SepSidInToken.c)
 *     SepTokenIsOwner @ 0x1403D9F70 (SepTokenIsOwner.c)
 *     RtlSidHashLookup @ 0x1403E0130 (RtlSidHashLookup.c)
 *     RtlFindAceBySid @ 0x1403EB0D0 (RtlFindAceBySid.c)
 *     RtlEqualSid @ 0x1403EB6C0 (RtlEqualSid.c)
 *     RtlpOwnerAcesPresent @ 0x1403ECFB0 (RtlpOwnerAcesPresent.c)
 *     RtlSidDominates @ 0x1403EFBC0 (RtlSidDominates.c)
 *     RtlOwnerAcesPresent @ 0x1403F8D00 (RtlOwnerAcesPresent.c)
 *     SepMatchCapability @ 0x140424F30 (SepMatchCapability.c)
 *     HalpAcpiIsCachedTableCompromised @ 0x14045FB98 (HalpAcpiIsCachedTableCompromised.c)
 *     HalpAcpiGetRsdt @ 0x14046014C (HalpAcpiGetRsdt.c)
 *     IoRaiseInformationalHardError @ 0x1404A88B0 (IoRaiseInformationalHardError.c)
 *     AuthzBasepCompareOctetStringOperands @ 0x1404ADCD8 (AuthzBasepCompareOctetStringOperands.c)
 *     MiIdealClusterPage @ 0x1404CB218 (MiIdealClusterPage.c)
 *     SepValidateCAPID @ 0x1404F697C (SepValidateCAPID.c)
 *     SymCryptEcDhSecretAgreementSelftest @ 0x140526EB4 (SymCryptEcDhSecretAgreementSelftest.c)
 *     SymCryptEcDsaSelftest @ 0x14052704C (SymCryptEcDsaSelftest.c)
 *     SymCryptRsaSelftest @ 0x140527228 (SymCryptRsaSelftest.c)
 *     SymCryptFdefDecideModulusType @ 0x14052FB68 (SymCryptFdefDecideModulusType.c)
 *     HalMatchAcpiOemTableId @ 0x14053A860 (HalMatchAcpiOemTableId.c)
 *     __asan_wrap_memcmp @ 0x1405AA4E0 (__asan_wrap_memcmp.c)
 *     KiDisplayBlueScreen @ 0x1405B0834 (KiDisplayBlueScreen.c)
 *     RtlpComparePropertyEntry @ 0x1405E7810 (RtlpComparePropertyEntry.c)
 *     MiFindSpecialPurposeMemoryType @ 0x14068F888 (MiFindSpecialPurposeMemoryType.c)
 *     MinCryptK_GetBootAppSvnFromRevocationList @ 0x1406A0438 (MinCryptK_GetBootAppSvnFromRevocationList.c)
 *     MinCryptCheckCertsAndKeys @ 0x1406A04EC (MinCryptCheckCertsAndKeys.c)
 *     MinCryptIsCertPresent @ 0x1406A0610 (MinCryptIsCertPresent.c)
 *     RtlSuffixUnicodeString @ 0x14077D020 (RtlSuffixUnicodeString.c)
 *     RtlReplaceSidInSd @ 0x140780D90 (RtlReplaceSidInSd.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x1407821EC (RtlpCheckDynamicTimeZoneInformation.c)
 *     RtlpUpdateDynamicTimeZones @ 0x14078284C (RtlpUpdateDynamicTimeZones.c)
 *     SepSecureBootManifestCompareElements @ 0x140794250 (SepSecureBootManifestCompareElements.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x14079441C (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 *     SLQueryLicenseValueInternal @ 0x1407B9E3C (SLQueryLicenseValueInternal.c)
 *     SLUpdateLicenseDataInternal @ 0x1407BA654 (SLUpdateLicenseDataInternal.c)
 *     ExpKdPullRemoteFileForUser @ 0x1407C4C90 (ExpKdPullRemoteFileForUser.c)
 *     SdbpCheckMatchingRegistryValue @ 0x140803A6C (SdbpCheckMatchingRegistryValue.c)
 *     I_MinCryptCheckEKU @ 0x14082531C (I_MinCryptCheckEKU.c)
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x1408256A0 (MinCryptVerifyCertificateWithPolicy2.c)
 *     MincrypK_ParseCertificateChainWithPolicy2 @ 0x140825FE8 (MincrypK_ParseCertificateChainWithPolicy2.c)
 *     I_MinCryptHashSearchCompare @ 0x1408261A0 (I_MinCryptHashSearchCompare.c)
 *     I_MinCryptIsTimestampSignerTrusted @ 0x1408261C4 (I_MinCryptIsTimestampSignerTrusted.c)
 *     I_MinAsn1ParseSingleAttribute @ 0x1408274E0 (I_MinAsn1ParseSingleAttribute.c)
 *     MinAsn1ParseSingleExtensionValue @ 0x140827B30 (MinAsn1ParseSingleExtensionValue.c)
 *     I_MinCryptCheckEKURequirements @ 0x140827CF0 (I_MinCryptCheckEKURequirements.c)
 *     RtlFindUnicodeSubstring @ 0x1408318B0 (RtlFindUnicodeSubstring.c)
 *     CmpFindMatchingDescriptorCell @ 0x140831A34 (CmpFindMatchingDescriptorCell.c)
 *     EtwpUpdateDisallowedGuids @ 0x140831C00 (EtwpUpdateDisallowedGuids.c)
 *     EtwpGetLoggerInfoFromContext @ 0x140835798 (EtwpGetLoggerInfoFromContext.c)
 *     ObLogSecurityDescriptor @ 0x140836B60 (ObLogSecurityDescriptor.c)
 *     ObpLookupDirectoryEntry @ 0x14083E800 (ObpLookupDirectoryEntry.c)
 *     SeDefaultObjectMethod @ 0x140854470 (SeDefaultObjectMethod.c)
 *     ObSetSecurityDescriptorInfo @ 0x140854B90 (ObSetSecurityDescriptorInfo.c)
 *     RtlpNormalizeAcl @ 0x140856694 (RtlpNormalizeAcl.c)
 *     RtlPrefixUnicodeString @ 0x1408726F0 (RtlPrefixUnicodeString.c)
 *     SshpCacheDatabaseCompare @ 0x14088C5C0 (SshpCacheDatabaseCompare.c)
 *     SeExamineSacl @ 0x14088DA20 (SeExamineSacl.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x1408A161C (AlpcpEnterStateChangeEventMessageLog.c)
 *     ObpLookupObjectName @ 0x1408A58B0 (ObpLookupObjectName.c)
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 *     ConstraintEval @ 0x1408B2790 (ConstraintEval.c)
 *     PiDmObjectProcessPropertyChange @ 0x1408B7B08 (PiDmObjectProcessPropertyChange.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1408B8C6C (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C4E80 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectActionCallback @ 0x1408CC090 (PiPnpRtlObjectActionCallback.c)
 *     PropertyEval @ 0x1408D2920 (PropertyEval.c)
 *     RtlpInternEntryMatch @ 0x1408DEAB0 (RtlpInternEntryMatch.c)
 *     RtlPrefixString @ 0x140907510 (RtlPrefixString.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 *     PfSnAsyncPrefetchWorker @ 0x1409358F0 (PfSnAsyncPrefetchWorker.c)
 *     PfSnPrefetchCacheEntryGet @ 0x140949040 (PfSnPrefetchCacheEntryGet.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x14094A9E4 (PfSnPrefetchCacheEntryUpdate.c)
 *     PfSnAltProfileTreeCompareByProcess @ 0x14094BEF8 (PfSnAltProfileTreeCompareByProcess.c)
 *     PfSnEndProcessTrace @ 0x14094BF24 (PfSnEndProcessTrace.c)
 *     sub_14095C450 @ 0x14095C450 (sub_14095C450.c)
 *     FsRtlIsDbcsInExpression @ 0x140972D50 (FsRtlIsDbcsInExpression.c)
 *     ObAssignObjectSecurityDescriptor @ 0x140989740 (ObAssignObjectSecurityDescriptor.c)
 *     MiComputeBadImageHeaderType @ 0x14098EDF4 (MiComputeBadImageHeaderType.c)
 *     PopEtAggregateFind @ 0x14099CD44 (PopEtAggregateFind.c)
 *     PopApplyPolicy @ 0x14099EC20 (PopApplyPolicy.c)
 *     SepSidInSidAndAttributes @ 0x1409A9F24 (SepSidInSidAndAttributes.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1409ABB00 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     EtwpStartLogger @ 0x1409D017C (EtwpStartLogger.c)
 *     EtwpGenerateFileName @ 0x1409D6D84 (EtwpGenerateFileName.c)
 *     EtwpCompareGuid @ 0x1409D6EA0 (EtwpCompareGuid.c)
 *     TraitsCompare @ 0x1409E92F4 (TraitsCompare.c)
 *     PnpProcessTargetDeviceEvent @ 0x1409EB044 (PnpProcessTargetDeviceEvent.c)
 *     ExpWnfFindScopeInstance @ 0x1409F4530 (ExpWnfFindScopeInstance.c)
 *     FsRtlNotifyFilterReportChange @ 0x1409FD7C0 (FsRtlNotifyFilterReportChange.c)
 *     SepExamineSaclEx @ 0x140A19D34 (SepExamineSaclEx.c)
 *     PiDcCompareUpdateProperties @ 0x140A411E0 (PiDcCompareUpdateProperties.c)
 *     PiDevCfgResolveVariableExpression @ 0x140A8DDE0 (PiDevCfgResolveVariableExpression.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x140A92EC8 (PiSwDoesCreateChangesRequireReEnum.c)
 *     ExpWnfInvalidateDataStores @ 0x140A9A7A8 (ExpWnfInvalidateDataStores.c)
 *     BiExportEfiBootManager @ 0x140AADFCC (BiExportEfiBootManager.c)
 *     BiAreBootEntriesEqual @ 0x140AB1414 (BiAreBootEntriesEqual.c)
 *     NtSetSystemInformation @ 0x140AE2BE0 (NtSetSystemInformation.c)
 *     IovpExamineIrpStackForwarding @ 0x140B8F650 (IovpExamineIrpStackForwarding.c)
 *     ViCtxEqualExtendedState @ 0x140BA407C (ViCtxEqualExtendedState.c)
 *     HalpAcpiDetectMachineSpecificActions @ 0x140C1711C (HalpAcpiDetectMachineSpecificActions.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140C222B0 (PipCheckSystemFirmwareUpdated.c)
 *     CmpGetBiosDate @ 0x140C4B2B4 (CmpGetBiosDate.c)
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
