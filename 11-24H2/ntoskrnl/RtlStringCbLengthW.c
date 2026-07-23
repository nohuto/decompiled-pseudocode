/*
 * XREFs of RtlStringCbLengthW @ 0x14044CF68
 * Callers:
 *     AuthzBasepConvertRelativeToAbsoluteTokenAttribute @ 0x1404A9A3C (AuthzBasepConvertRelativeToAbsoluteTokenAttribute.c)
 *     IoReportDetectedDevice @ 0x14071A3E0 (IoReportDetectedDevice.c)
 *     PopFxValidateReturnedUnicodeString @ 0x14074D808 (PopFxValidateReturnedUnicodeString.c)
 *     PpmRegisterProfiles @ 0x1407635A0 (PpmRegisterProfiles.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x14078033C (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1407813F0 (RtlpGetTokenNamedObjectPath.c)
 *     AslpFileVerStringBlockGetValue @ 0x140810450 (AslpFileVerStringBlockGetValue.c)
 *     RtlpPopulateLanguageConfigList @ 0x14082D8F0 (RtlpPopulateLanguageConfigList.c)
 *     _PnpValidatePropertyData @ 0x1408B6740 (_PnpValidatePropertyData.c)
 *     RtlpValidRelativeAttribute @ 0x140983640 (RtlpValidRelativeAttribute.c)
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 *     PiSwIrpStartCreateWorker @ 0x1409F13D4 (PiSwIrpStartCreateWorker.c)
 *     PopIdleWakeGenerateDescriptionString @ 0x140AA0228 (PopIdleWakeGenerateDescriptionString.c)
 *     LocalGetStringForRelativeAttribute @ 0x140AA5150 (LocalGetStringForRelativeAttribute.c)
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbLengthW(STRSAFE_PCNZWCH psz, size_t cbMax, size_t *pcbLength)
{
  size_t v3; // rdx
  __int64 v5; // rax
  size_t i; // r8
  NTSTATUS v7; // ecx

  v3 = cbMax >> 1;
  v5 = 0LL;
  if ( psz && v3 <= 0x7FFFFFFF )
  {
    for ( i = v3; i; --i )
    {
      if ( !*psz )
        break;
      ++psz;
    }
    v7 = i == 0 ? 0xC000000D : 0;
    v5 = (v3 - i) & -(__int64)(i != 0);
  }
  else
  {
    v7 = -1073741811;
  }
  if ( pcbLength )
  {
    if ( v7 < 0 )
      *pcbLength = 0LL;
    else
      *pcbLength = 2 * v5;
  }
  return v7;
}
