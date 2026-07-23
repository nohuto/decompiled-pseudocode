/*
 * XREFs of PnpIsValidGuidString @ 0x1408B5960
 * Callers:
 *     _CmValidateDeviceContainerName @ 0x1408B5474 (_CmValidateDeviceContainerName.c)
 *     _CmValidateInstallerClassName @ 0x1408B54C0 (_CmValidateInstallerClassName.c)
 *     _CmGetDeviceInterfaceName @ 0x1408B54E4 (_CmGetDeviceInterfaceName.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C4E80 (PiPnpRtlCmActionCallback.c)
 *     _CmGetCommonClassRegKeyPath @ 0x1408C7A40 (_CmGetCommonClassRegKeyPath.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x14097BA80 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1409AA8EC (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x1408C7C70 (RtlGUIDFromString.c)
 */

bool __fastcall PnpIsValidGuidString(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  GUID Guid; // [rsp+30h] [rbp-28h] BYREF

  DestinationString = 0LL;
  Guid = 0LL;
  return RtlInitUnicodeStringEx(&DestinationString, SourceString) >= 0
      && (DestinationString.MaximumLength & 0xFFFE) == 0x4E
      && RtlGUIDFromString(&DestinationString, &Guid) >= 0;
}
