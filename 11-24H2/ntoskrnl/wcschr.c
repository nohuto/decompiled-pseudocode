/*
 * XREFs of wcschr @ 0x1404FD650
 * Callers:
 *     wcscspn @ 0x1404FD720 (wcscspn.c)
 *     wcsspn @ 0x1404FDB00 (wcsspn.c)
 *     wcspbrk @ 0x1404FE1E0 (wcspbrk.c)
 *     PiDevCfgParsePropertyKeyName @ 0x1405A3D00 (PiDevCfgParsePropertyKeyName.c)
 *     SmUniqueIdParseProductName @ 0x14060B270 (SmUniqueIdParseProductName.c)
 *     PiGetDeviceRegistryProperty @ 0x14071C7B8 (PiGetDeviceRegistryProperty.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x14072A218 (PiDevCfgSplitDriverConfigurationId.c)
 *     EtwpCovSampSplitSegments @ 0x1407B2B8C (EtwpCovSampSplitSegments.c)
 *     MiFormDllRegistryPath @ 0x1407E7A18 (MiFormDllRegistryPath.c)
 *     SdbQueryDataExTagID @ 0x140802B2C (SdbQueryDataExTagID.c)
 *     AslPathClean @ 0x140809E4C (AslPathClean.c)
 *     BiCreateFileDeviceElement @ 0x1408139E0 (BiCreateFileDeviceElement.c)
 *     BiCreatePartitionDevice @ 0x140813B8C (BiCreatePartitionDevice.c)
 *     BiDoesHiveKeyExist @ 0x140814F40 (BiDoesHiveKeyExist.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x14081C3C0 (_CmGetMatchingDeviceListForSubkey.c)
 *     DrvDbDeleteObjectSubKey @ 0x140821D0C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbValidateDeviceIdName @ 0x140823C64 (DrvDbValidateDeviceIdName.c)
 *     DrvDbValidateDriverDatabaseName @ 0x140823CDC (DrvDbValidateDriverDatabaseName.c)
 *     DrvDbValidateDriverInfFileName @ 0x140823D40 (DrvDbValidateDriverInfFileName.c)
 *     LocalpConvertStringSidToSid @ 0x140866A28 (LocalpConvertStringSidToSid.c)
 *     LocalGetAclForString @ 0x140869D60 (LocalGetAclForString.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x1408B4F88 (_CmGetDeviceInterfaceReferenceString.c)
 *     PiGetDeviceRegProperty @ 0x1408BA9AC (PiGetDeviceRegProperty.c)
 *     _CmGetDeviceRegPropWorker @ 0x1408C37A0 (_CmGetDeviceRegPropWorker.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1408C6D90 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1408C7D90 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     EtwpQueryTokenPackageInfo @ 0x1408EFE7C (EtwpQueryTokenPackageInfo.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x1409256C0 (DrvDbGetDeviceIdMappedProperty.c)
 *     DrvDbOpenObjectRegKey @ 0x140927630 (DrvDbOpenObjectRegKey.c)
 *     _RegRtlCreateTreeTransacted @ 0x1409282E4 (_RegRtlCreateTreeTransacted.c)
 *     DrvDbGetObjectDatabaseNode @ 0x140928938 (DrvDbGetObjectDatabaseNode.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x1409431D4 (SdbpCreateSearchPathPartsFromPath.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140980664 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x140980950 (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     PiNormalizeDeviceText @ 0x1409B8420 (PiNormalizeDeviceText.c)
 *     PiSwFindSwDevice @ 0x1409BF560 (PiSwFindSwDevice.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1409C4380 (PiPnpRtlGetFilteredDeviceList.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1409C7B64 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgFindDeviceDriver @ 0x1409C86B4 (PiDevCfgFindDeviceDriver.c)
 *     EtwpGenerateFileName @ 0x1409D6D84 (EtwpGenerateFileName.c)
 *     _CmGetDeviceInterfaceSymbolicLinkName @ 0x140A1FEAC (_CmGetDeviceInterfaceSymbolicLinkName.c)
 *     PnpQueryDeviceID @ 0x140A27FC0 (PnpQueryDeviceID.c)
 *     SepParseElamCertResources @ 0x140A90DEC (SepParseElamCertResources.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140A97D54 (PiDevCfgResolveVariableKeyHandle.c)
 *     _CmSplitDevicePanelId @ 0x140AB0C0C (_CmSplitDevicePanelId.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcschr(const wchar_t *Str, wchar_t Ch)
{
  wchar_t *v3; // r9
  __m128i v4; // xmm2
  __m128i v5; // xmm0
  unsigned int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  wchar_t *v9; // r8

  v3 = 0LL;
  v4 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_cvtsi32_si128(Ch), 0), 0);
  while ( ((unsigned __int16)Str & 0xFFFu) > 0xFF0uLL )
  {
    if ( *Str == Ch )
      return (wchar_t *)Str;
    if ( !*Str )
      return 0LL;
    v7 = 2LL;
LABEL_8:
    Str = (const wchar_t *)((char *)Str + v7);
  }
  v5 = _mm_loadu_si128((const __m128i *)Str);
  v6 = _mm_movemask_epi8((__m128i)_mm_or_ps((__m128)_mm_cmpeq_epi16((__m128i)0LL, v5), (__m128)_mm_cmpeq_epi16(v5, v4)));
  if ( !v6 )
  {
    v7 = 16LL;
    goto LABEL_8;
  }
  _BitScanForward((unsigned int *)&v8, v6);
  v9 = (wchar_t *)((char *)Str + v8);
  if ( *v9 == Ch )
    return v9;
  return v3;
}
