/*
 * XREFs of _CmGetDeviceInterfaceClassGuid @ 0x1408CB640
 * Callers:
 *     IopProcessSetInterfaceState @ 0x1408B42D4 (IopProcessSetInterfaceState.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x1408B6638 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     PiSwCompleteCreate @ 0x1409F8538 (PiSwCompleteCreate.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045AA10 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1408C9360 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     RtlGUIDFromString @ 0x1408CA240 (RtlGUIDFromString.c)
 */

NTSTATUS __fastcall CmGetDeviceInterfaceClassGuid(__int64 a1, const WCHAR *a2, GUID *a3)
{
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-78h] BYREF
  WCHAR SourceString[40]; // [rsp+50h] [rbp-68h] BYREF

  DestinationString = 0LL;
  result = CmGetDeviceInterfaceSubkeyPath(a1, a2, 1, SourceString, 0LL, 0);
  if ( !result )
    return -1073741595;
  if ( result == -1073741789 )
  {
    SourceString[38] = 0;
  }
  else if ( result < 0 )
  {
    return result;
  }
  result = RtlInitUnicodeStringEx(&DestinationString, SourceString);
  if ( result >= 0 )
    return RtlGUIDFromString(&DestinationString, a3);
  return result;
}
