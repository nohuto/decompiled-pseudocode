/*
 * XREFs of _CmIsDeviceInterfaceEnabled @ 0x1409E1AC0
 * Callers:
 *     _CmDeviceClassesSubkeyCallback @ 0x14081B760 (_CmDeviceClassesSubkeyCallback.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __fastcall CmIsDeviceInterfaceEnabled(__int64 a1, const WCHAR *a2)
{
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
  {
    if ( *(_QWORD *)(a1 + 288) )
      return guard_dispatch_icall_no_overrides(a1, &DestinationString);
    else
      return -1073741822;
  }
  return result;
}
