/*
 * XREFs of RtlStringCbLengthW @ 0x140457C50
 * Callers:
 *     AuthzBasepConvertRelativeToAbsoluteTokenAttribute @ 0x1404AF040 (AuthzBasepConvertRelativeToAbsoluteTokenAttribute.c)
 *     IoReportDetectedDevice @ 0x14071C850 (IoReportDetectedDevice.c)
 *     PopFxValidateReturnedUnicodeString @ 0x14074F4D8 (PopFxValidateReturnedUnicodeString.c)
 *     PpmRegisterProfiles @ 0x140763BDC (PpmRegisterProfiles.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x14078040C (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1407814C0 (RtlpGetTokenNamedObjectPath.c)
 *     AslpFileVerStringBlockGetValue @ 0x14080FD10 (AslpFileVerStringBlockGetValue.c)
 *     RtlpPopulateLanguageConfigList @ 0x14082D0C0 (RtlpPopulateLanguageConfigList.c)
 *     _PnpValidatePropertyData @ 0x1408B8DD0 (_PnpValidatePropertyData.c)
 *     RtlpValidRelativeAttribute @ 0x14099EE18 (RtlpValidRelativeAttribute.c)
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 *     PiSwIrpStartCreateWorker @ 0x1409F8A64 (PiSwIrpStartCreateWorker.c)
 *     PopIdleWakeGenerateDescriptionString @ 0x140AA4F28 (PopIdleWakeGenerateDescriptionString.c)
 *     LocalGetStringForRelativeAttribute @ 0x140AAA0A0 (LocalGetStringForRelativeAttribute.c)
 *     PopPowerInformationInternal @ 0x140AC4A30 (PopPowerInformationInternal.c)
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
