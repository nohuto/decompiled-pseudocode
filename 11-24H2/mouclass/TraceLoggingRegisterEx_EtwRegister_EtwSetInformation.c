/*
 * XREFs of TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C000E690
 * Callers:
 *     DriverEntry @ 0x1C0011080 (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0006AE0 (__security_check_cookie.c)
 */

NTSTATUS TraceLoggingRegisterEx_EtwRegister_EtwSetInformation()
{
  NTSTATUS result; // eax
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  ProviderId = (GUID)*((_OWORD *)EventInformation - 1);
  if ( RegHandle )
    __fastfail(5u);
  xmmword_1C000B028 = 0LL;
  result = EtwRegister(&ProviderId, tlgEnableCallback, &dword_1C000B000, &RegHandle);
  if ( !result )
  {
    EtwSetInformation(RegHandle, EventProviderSetTraits, EventInformation, *(unsigned __int16 *)EventInformation);
    return 0;
  }
  return result;
}
