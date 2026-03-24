/*
 * XREFs of TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C000EA78
 * Callers:
 *     DriverEntry @ 0x1C0011080 (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0007290 (__security_check_cookie.c)
 */

__int64 TraceLoggingRegisterEx_EtwRegister_EtwSetInformation()
{
  unsigned int v0; // ebx
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  ProviderId = (GUID)*((_OWORD *)EventInformation - 1);
  if ( RegHandle )
    __fastfail(5u);
  xmmword_1C000B028 = 0LL;
  v0 = EtwRegister(&ProviderId, tlgEnableCallback, &dword_1C000B000, &RegHandle);
  if ( !v0 )
    EtwSetInformation(RegHandle, EventProviderSetTraits, EventInformation, *(unsigned __int16 *)EventInformation);
  return v0;
}
