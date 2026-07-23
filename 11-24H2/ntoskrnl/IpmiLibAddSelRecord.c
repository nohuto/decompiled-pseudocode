/*
 * XREFs of IpmiLibAddSelRecord @ 0x1406A0F0C
 * Callers:
 *     IpmiLibAddSelBugcheckRecord @ 0x1406A0CD4 (IpmiLibAddSelBugcheckRecord.c)
 *     IpmiLibAddSelCheckpointRecord @ 0x1406A0E10 (IpmiLibAddSelCheckpointRecord.c)
 *     IpmiLibAddSelErrorRecord @ 0x1406A0E80 (IpmiLibAddSelErrorRecord.c)
 *     IpmiLibpAddSelRawData @ 0x1406A0FA4 (IpmiLibpAddSelRawData.c)
 * Callees:
 *     IpmiLibRequestReceive @ 0x1406A1070 (IpmiLibRequestReceive.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall IpmiLibAddSelRecord(__int64 a1, __int128 *a2, __int64 a3)
{
  __int128 v4; // xmm1
  int v5; // ecx
  __int16 v7; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v8[5]; // [rsp+22h] [rbp-2Eh]
  char v9; // [rsp+28h] [rbp-28h] BYREF
  int v10; // [rsp+29h] [rbp-27h]
  __int128 v11; // [rsp+2Dh] [rbp-23h]

  v4 = *a2;
  *(_DWORD *)&v8[1] = 0;
  v9 = BYTE9(xmmword_140EF9F10);
  v10 = 1143472144;
  v7 = 7;
  v11 = v4;
  v8[0] = -1;
  v5 = IpmiLibRequestReceive(a1, &v9, &v7);
  if ( v5 >= 0 )
  {
    if ( (unsigned __int16)v7 >= 2u )
    {
      *(_WORD *)a3 = *(_WORD *)v8;
      *(_BYTE *)(a3 + 2) = v8[2];
    }
    else
    {
      return (unsigned int)-1073741762;
    }
  }
  return (unsigned int)v5;
}
