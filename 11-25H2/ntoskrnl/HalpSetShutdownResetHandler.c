/*
 * XREFs of HalpSetShutdownResetHandler @ 0x140542454
 * Callers:
 *     HalpKsrCallbackRoutine @ 0x1406F7070 (HalpKsrCallbackRoutine.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwPowerInformation @ 0x14069BD20 (ZwPowerInformation.c)
 */

NTSTATUS __fastcall HalpSetShutdownResetHandler(__int64 a1)
{
  _QWORD InputBuffer[3]; // [rsp+30h] [rbp-28h] BYREF

  InputBuffer[1] = a1;
  InputBuffer[2] = 0LL;
  InputBuffer[0] = 5LL;
  return ZwPowerInformation(SystemPowerStateHandler, InputBuffer, 0x18u, 0LL, 0);
}
