/*
 * XREFs of _CmIsDeviceInterfaceEnabled @ 0x1409E6B00
 * Callers:
 *     _CmDeviceClassesSubkeyCallback @ 0x14081B020 (_CmDeviceClassesSubkeyCallback.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045AA10 (RtlInitUnicodeStringEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __fastcall CmIsDeviceInterfaceEnabled(__int64 a1, const WCHAR *a2, __int64 a3, __int64 a4)
{
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
  {
    if ( *(_QWORD *)(a1 + 288) )
      return guard_dispatch_icall_no_overrides(a1, &DestinationString, a4, 0LL);
    else
      return -1073741822;
  }
  return result;
}
