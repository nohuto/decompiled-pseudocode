/*
 * XREFs of sub_14000F1EC @ 0x14000F1EC
 * Callers:
 *     sub_14000F2B0 @ 0x14000F2B0 (sub_14000F2B0.c)
 * Callees:
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14000F1EC(__int64 a1, int a2, int a3, int a4, int a5, int a6, char a7)
{
  int v7; // ebx
  int v9; // [rsp+28h] [rbp-40h]
  _DWORD v10[5]; // [rsp+30h] [rbp-38h] BYREF
  char v11; // [rsp+44h] [rbp-24h]
  __int16 v12; // [rsp+45h] [rbp-23h]
  char v13; // [rsp+47h] [rbp-21h]

  v10[4] = a5;
  v10[3] = a6;
  v10[0] = a2;
  v10[1] = a3;
  v11 = a7;
  v12 = 0;
  v13 = 0;
  v10[2] = a4;
  v7 = PoFxProcessorNotification(a1, 13LL, v10);
  if ( v7 < 0 && off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    v9 = v7;
    sub_1400050F8((__int64)off_140018050->DeviceExtension, 2u, 2u, 0x25u, (__int64)&unk_140014CB8, v9);
  }
  return (unsigned int)v7;
}
