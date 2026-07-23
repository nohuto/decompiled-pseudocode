/*
 * XREFs of RtlLocalTimeToSystemTime @ 0x14077DB50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1406A7A70 (ZwQuerySystemInformation.c)
 */

NTSTATUS __cdecl RtlLocalTimeToSystemTime(PLARGE_INTEGER LocalTime, PLARGE_INTEGER SystemTime)
{
  NTSTATUS result; // eax
  __int128 SystemInformation; // [rsp+20h] [rbp-48h] BYREF
  __int128 v6; // [rsp+30h] [rbp-38h]
  __int128 v7; // [rsp+40h] [rbp-28h]

  SystemInformation = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  result = ZwQuerySystemInformation(SystemTimeOfDayInformation, &SystemInformation, 0x30u, 0LL);
  if ( result >= 0 )
  {
    SystemTime->QuadPart = v6 + LocalTime->QuadPart;
    return 0;
  }
  return result;
}
