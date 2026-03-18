/*
 * XREFs of RtlStringCbLengthW @ 0x140479D40
 * Callers:
 *     AuthzBasepConvertRelativeToAbsoluteTokenAttribute @ 0x1404AE1A0 (AuthzBasepConvertRelativeToAbsoluteTokenAttribute.c)
 *     IoReportDetectedDevice @ 0x140710750 (IoReportDetectedDevice.c)
 *     PopFxValidateReturnedUnicodeString @ 0x140743408 (PopFxValidateReturnedUnicodeString.c)
 *     PpmRegisterProfiles @ 0x14075411C (PpmRegisterProfiles.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1407711BC (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140772270 (RtlpGetTokenNamedObjectPath.c)
 *     AslpFileVerStringBlockGetValue @ 0x1408001A0 (AslpFileVerStringBlockGetValue.c)
 *     RtlpPopulateLanguageConfigList @ 0x14081D380 (RtlpPopulateLanguageConfigList.c)
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 *     RtlpValidRelativeAttribute @ 0x1409995A8 (RtlpValidRelativeAttribute.c)
 *     PiSwIrpStartCreateWorker @ 0x1409A4180 (PiSwIrpStartCreateWorker.c)
 *     LocalGetStringForRelativeAttribute @ 0x1409E5FCC (LocalGetStringForRelativeAttribute.c)
 *     PopIdleWakeGenerateDescriptionString @ 0x140A9F708 (PopIdleWakeGenerateDescriptionString.c)
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
