/*
 * XREFs of RtlCheckSystemBootStatusIntegrity @ 0x180116E60
 * Callers:
 *     <none>
 * Callees:
 *     NtPowerInformation @ 0x180163DF0 (NtPowerInformation.c)
 */

NTSTATUS __fastcall RtlCheckSystemBootStatusIntegrity(__int64 a1)
{
  _QWORD InputBuffer[3]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v3[2]; // [rsp+48h] [rbp-20h] BYREF
  int v4; // [rsp+58h] [rbp-10h]

  v3[0] = 0LL;
  if ( !a1 )
    return -1073741811;
  v3[1] = a1;
  v4 = 1;
  InputBuffer[1] = 1LL;
  InputBuffer[0] = 34LL;
  InputBuffer[2] = v3;
  return NtPowerInformation(PowerInformationInternal, InputBuffer, 0x18u, 0LL, 0);
}
