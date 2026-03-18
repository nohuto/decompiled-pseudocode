/*
 * XREFs of PnpIsValidGuidString @ 0x14095AE04
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1408C95E0 (PiPnpRtlCmActionCallback.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x140950D48 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmGetCommonClassRegKeyPath @ 0x140958F10 (_CmGetCommonClassRegKeyPath.c)
 *     _CmGetDeviceInterfaceName @ 0x14095A988 (_CmGetDeviceInterfaceName.c)
 *     _CmValidateInstallerClassName @ 0x14095AF00 (_CmValidateInstallerClassName.c)
 *     _CmValidateDeviceContainerName @ 0x14095B284 (_CmValidateDeviceContainerName.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1409A0318 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045CBF0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x140959130 (RtlGUIDFromString.c)
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
