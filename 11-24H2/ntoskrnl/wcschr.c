/*
 * XREFs of wcschr @ 0x1404FFD90
 * Callers:
 *     wcscspn @ 0x1404FFE60 (wcscspn.c)
 *     wcsspn @ 0x140500240 (wcsspn.c)
 *     wcspbrk @ 0x140500920 (wcspbrk.c)
 *     PiDevCfgParsePropertyKeyName @ 0x1405A6D10 (PiDevCfgParsePropertyKeyName.c)
 *     SmUniqueIdParseProductName @ 0x14060CCB0 (SmUniqueIdParseProductName.c)
 *     PiGetDeviceRegistryProperty @ 0x14071EC28 (PiGetDeviceRegistryProperty.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x14072C228 (PiDevCfgSplitDriverConfigurationId.c)
 *     EtwpCovSampSplitSegments @ 0x1407B273C (EtwpCovSampSplitSegments.c)
 *     MiFormDllRegistryPath @ 0x1407E7448 (MiFormDllRegistryPath.c)
 *     SdbQueryDataExTagID @ 0x1408023EC (SdbQueryDataExTagID.c)
 *     AslPathClean @ 0x14080970C (AslPathClean.c)
 *     BiCreateFileDeviceElement @ 0x1408132A0 (BiCreateFileDeviceElement.c)
 *     BiCreatePartitionDevice @ 0x14081344C (BiCreatePartitionDevice.c)
 *     BiDoesHiveKeyExist @ 0x140814800 (BiDoesHiveKeyExist.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x14081BC80 (_CmGetMatchingDeviceListForSubkey.c)
 *     DrvDbDeleteObjectSubKey @ 0x1408215CC (DrvDbDeleteObjectSubKey.c)
 *     DrvDbValidateDeviceIdName @ 0x140823524 (DrvDbValidateDeviceIdName.c)
 *     DrvDbValidateDriverDatabaseName @ 0x14082359C (DrvDbValidateDriverDatabaseName.c)
 *     DrvDbValidateDriverInfFileName @ 0x140823600 (DrvDbValidateDriverInfFileName.c)
 *     LocalpConvertStringSidToSid @ 0x140862418 (LocalpConvertStringSidToSid.c)
 *     LocalGetAclForString @ 0x140865750 (LocalGetAclForString.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x1408B7618 (_CmGetDeviceInterfaceReferenceString.c)
 *     PiGetDeviceRegProperty @ 0x1408BD05C (PiGetDeviceRegProperty.c)
 *     _CmGetDeviceRegPropWorker @ 0x1408C5D70 (_CmGetDeviceRegPropWorker.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1408C9360 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1408CA360 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x140923580 (DrvDbGetDeviceIdMappedProperty.c)
 *     DrvDbOpenObjectRegKey @ 0x1409254F0 (DrvDbOpenObjectRegKey.c)
 *     _RegRtlCreateTreeTransacted @ 0x1409261A4 (_RegRtlCreateTreeTransacted.c)
 *     DrvDbGetObjectDatabaseNode @ 0x1409267F8 (DrvDbGetObjectDatabaseNode.c)
 *     EtwpQueryTokenPackageInfo @ 0x14094B90C (EtwpQueryTokenPackageInfo.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x14095B714 (SdbpCreateSearchPathPartsFromPath.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140995624 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x140995910 (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     PiDevCfgFindDeviceDriver @ 0x140995E90 (PiDevCfgFindDeviceDriver.c)
 *     PiNormalizeDeviceText @ 0x1409C8004 (PiNormalizeDeviceText.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1409D4550 (PiPnpRtlGetFilteredDeviceList.c)
 *     PiSwFindSwDevice @ 0x140A11150 (PiSwFindSwDevice.c)
 *     _CmGetDeviceInterfaceSymbolicLinkName @ 0x140A2BFEC (_CmGetDeviceInterfaceSymbolicLinkName.c)
 *     PnpQueryDeviceID @ 0x140A33FB0 (PnpQueryDeviceID.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x140A7E6CC (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     EtwpGenerateFileName @ 0x140A7F9B8 (EtwpGenerateFileName.c)
 *     SepParseElamCertResources @ 0x140A9463C (SepParseElamCertResources.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140A9C7E4 (PiDevCfgResolveVariableKeyHandle.c)
 *     _CmSplitDevicePanelId @ 0x140AB6934 (_CmSplitDevicePanelId.c)
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
