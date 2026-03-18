/*
 * XREFs of PnpIsValidGuidString @ 0x1408B7FF0
 * Callers:
 *     _CmValidateDeviceContainerName @ 0x1408B7B04 (_CmValidateDeviceContainerName.c)
 *     _CmValidateInstallerClassName @ 0x1408B7B50 (_CmValidateInstallerClassName.c)
 *     _CmGetDeviceInterfaceName @ 0x1408B7B74 (_CmGetDeviceInterfaceName.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C7450 (PiPnpRtlCmActionCallback.c)
 *     _CmGetCommonClassRegKeyPath @ 0x1408CA010 (_CmGetCommonClassRegKeyPath.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x140990A40 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1409B355C (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045AA10 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x1408CA240 (RtlGUIDFromString.c)
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
