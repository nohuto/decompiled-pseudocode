/*
 * XREFs of ?CheckFeature_Servicing_PDCAgentSessions_Enabled@@YAHXZ @ 0x1401AD968
 * Callers:
 *     PowerConnectionEvent @ 0x14014C44C (PowerConnectionEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 CheckFeature_Servicing_PDCAgentSessions_Enabled(void)
{
  unsigned int v0; // ebx
  _BYTE OutputBuffer[8]; // [rsp+30h] [rbp-28h] BYREF
  _DWORD InputBuffer[4]; // [rsp+38h] [rbp-20h] BYREF

  InputBuffer[1] = 0;
  v0 = 1;
  OutputBuffer[0] = 0;
  InputBuffer[0] = 97;
  InputBuffer[2] = 59996711;
  if ( ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0xCu, OutputBuffer, 1u) || !OutputBuffer[0] )
    return 0;
  return v0;
}
