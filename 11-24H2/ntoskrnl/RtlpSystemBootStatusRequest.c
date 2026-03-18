/*
 * XREFs of RtlpSystemBootStatusRequest @ 0x140A75404
 * Callers:
 *     PoClearTransitionMarker @ 0x140748F9C (PoClearTransitionMarker.c)
 *     RtlGetSystemBootStatus @ 0x140782DB0 (RtlGetSystemBootStatus.c)
 *     RtlGetSystemBootStatusEx @ 0x140782DF0 (RtlGetSystemBootStatusEx.c)
 *     RtlSetSystemBootStatusEx @ 0x140A753E0 (RtlSetSystemBootStatusEx.c)
 * Callees:
 *     ZwPowerInformation @ 0x1406A6FF0 (ZwPowerInformation.c)
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
  return ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x18u, a4, OutputBufferLength);
}
