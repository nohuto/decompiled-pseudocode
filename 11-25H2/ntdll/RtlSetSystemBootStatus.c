/*
 * XREFs of RtlSetSystemBootStatus @ 0x1801163B0
 * Callers:
 *     <none>
 * Callees:
 *     NtPowerInformation @ 0x180163DF0 (NtPowerInformation.c)
 */

__int64 __fastcall RtlSetSystemBootStatus(int a1, __int64 a2, int a3)
{
  _DWORD v4[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v5; // [rsp+38h] [rbp-28h]
  int v6; // [rsp+40h] [rbp-20h]
  _QWORD v7[3]; // [rsp+48h] [rbp-18h] BYREF

  v4[0] = a1;
  v5 = a2;
  v6 = a3;
  v4[1] = 0;
  v7[0] = 32LL;
  v7[1] = 1LL;
  v7[2] = v4;
  return NtPowerInformation(87LL, v7);
}
