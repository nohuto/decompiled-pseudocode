/*
 * XREFs of RtlpSystemBootStatusRequest @ 0x18010E468
 * Callers:
 *     RtlGetSystemBootStatusEx @ 0x18011E0D0 (RtlGetSystemBootStatusEx.c)
 *     RtlSetSystemBootStatusEx @ 0x18011E5E0 (RtlSetSystemBootStatusEx.c)
 * Callees:
 *     NtPowerInformation @ 0x180160C20 (NtPowerInformation.c)
 */

NTSTATUS __fastcall RtlpSystemBootStatusRequest(int a1, __int64 a2, unsigned int a3, void *a4)
{
  unsigned __int64 OutputBufferLength; // rax
  _DWORD InputBuffer[4]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]

  if ( a4 )
  {
    OutputBufferLength = 4LL * a3;
    if ( OutputBufferLength > 0xFFFFFFFF )
      return -1073741675;
  }
  else
  {
    LODWORD(OutputBufferLength) = 0;
  }
  InputBuffer[1] = 0;
  InputBuffer[3] = 0;
  InputBuffer[2] = a3;
  InputBuffer[0] = a1;
  v7 = a2;
  return NtPowerInformation(PowerInformationInternal, InputBuffer, 0x18u, a4, OutputBufferLength);
}
