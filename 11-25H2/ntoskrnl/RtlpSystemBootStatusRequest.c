/*
 * XREFs of RtlpSystemBootStatusRequest @ 0x140A72DB4
 * Callers:
 *     PoClearTransitionMarker @ 0x14073CF8C (PoClearTransitionMarker.c)
 *     RtlGetSystemBootStatus @ 0x140773B00 (RtlGetSystemBootStatus.c)
 *     RtlGetSystemBootStatusEx @ 0x140773B40 (RtlGetSystemBootStatusEx.c)
 *     RtlSetSystemBootStatusEx @ 0x140A72D90 (RtlSetSystemBootStatusEx.c)
 * Callees:
 *     ZwPowerInformation @ 0x14069BD20 (ZwPowerInformation.c)
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
