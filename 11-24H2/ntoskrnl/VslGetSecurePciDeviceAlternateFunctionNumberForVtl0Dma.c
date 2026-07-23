/*
 * XREFs of VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x14058A5B0
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x14044B190 (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char __fastcall VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma(int a1, char a2, char a3, char a4)
{
  bool v8; // sf
  char result; // al
  _BYTE v10[8]; // [rsp+20h] [rbp-A8h] BYREF
  int v11; // [rsp+28h] [rbp-A0h]
  char v12; // [rsp+2Ch] [rbp-9Ch]
  char v13; // [rsp+2Dh] [rbp-9Bh]
  char v14; // [rsp+2Eh] [rbp-9Ah]
  int v15; // [rsp+30h] [rbp-98h]

  memset_0(v10, 0, 0x68uLL);
  if ( !HvlQueryVsmConnection(0LL) )
    return -1;
  v11 = a1;
  v12 = a2;
  v13 = a3;
  v14 = a4;
  v15 = 2;
  v8 = (int)VslpEnterIumSecureMode(2u, 0x10Bu, 0, (__int64)v10) < 0;
  result = v15;
  if ( v8 )
    return -1;
  return result;
}
