/*
 * XREFs of CmFcpConnectToAlpcServer @ 0x140A8FB5C
 * Callers:
 *     CmFcpManagerPublishFeatureUsageDataBuffers @ 0x140A8F960 (CmFcpManagerPublishFeatureUsageDataBuffers.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     _filwbuf_s @ 0x1404B9BEC (_filwbuf_s.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwAlpcConnectPortEx @ 0x14069C0C0 (ZwAlpcConnectPortEx.c)
 */

__int64 __fastcall CmFcpConnectToAlpcServer(_QWORD *a1, char a2)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  int v6; // eax
  int v7; // ebx
  _QWORD v9[3]; // [rsp+60h] [rbp-A0h] BYREF
  LARGE_INTEGER Interval; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  int v12; // [rsp+90h] [rbp-70h]
  int v13; // [rsp+94h] [rbp-6Ch]
  __int64 v14; // [rsp+98h] [rbp-68h]
  __int64 v15; // [rsp+A0h] [rbp-60h]
  int v16; // [rsp+A8h] [rbp-58h]
  int v17; // [rsp+ACh] [rbp-54h]
  __int128 v18; // [rsp+B0h] [rbp-50h]
  _DWORD v19[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v20; // [rsp+C8h] [rbp-38h]
  UNICODE_STRING *p_DestinationString; // [rsp+D0h] [rbp-30h]
  int v22; // [rsp+D8h] [rbp-28h]
  int v23; // [rsp+DCh] [rbp-24h]
  __int128 v24; // [rsp+E0h] [rbp-20h]
  __int128 v25; // [rsp+F0h] [rbp-10h]
  __int128 v26; // [rsp+100h] [rbp+0h]
  __int128 v27; // [rsp+110h] [rbp+10h]
  int v28; // [rsp+120h] [rbp+20h]
  __int64 v29; // [rsp+124h] [rbp+24h]
  __int16 v30; // [rsp+12Ch] [rbp+2Ch]
  __int16 v31; // [rsp+12Eh] [rbp+2Eh]
  __int64 v32; // [rsp+130h] [rbp+30h]
  __int64 v33; // [rsp+138h] [rbp+38h]
  __int64 v34; // [rsp+140h] [rbp+40h]
  __int64 v35; // [rsp+148h] [rbp+48h]
  __int64 v36; // [rsp+150h] [rbp+50h]
  __int64 v37; // [rsp+158h] [rbp+58h]
  int v38; // [rsp+160h] [rbp+60h]
  int v39; // [rsp+164h] [rbp+64h]

  v19[1] = 0;
  v23 = 0;
  v13 = 0;
  v17 = 0;
  DestinationString = 0LL;
  v31 = 0;
  v39 = 0;
  RtlInitUnicodeString(&DestinationString, L"\\RPC Control\\FconAlpcPort");
  v9[0] = 0LL;
  v9[1] = -50000000LL;
  v19[0] = 48;
  v22 = 512;
  v25 = 0LL;
  p_DestinationString = &DestinationString;
  v4 = 0;
  v26 = 0LL;
  v12 = 48;
  v27 = 0LL;
  v16 = 512;
  v24 = 0LL;
  Interval.QuadPart = -10000000LL;
  v18 = 0LL;
  v20 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v28 = 1179648;
  v32 = filwbuf_s();
  v34 = 0xFFFFFFFFLL;
  v35 = 0xFFFFFFFFLL;
  v37 = 0xFFFFFFFFLL;
  v36 = 0xFFFFFFFFLL;
  LOWORD(v25) = v5 - 40;
  v38 = 0;
  v33 = 0LL;
  v29 = 12LL;
  v30 = 1;
  *(_DWORD *)((char *)&v25 + 2) = -2147483600;
  DWORD2(v27) = 1;
  v9[2] = v5;
  do
  {
    v6 = ZwAlpcConnectPortEx((__int64)v9, (__int64)v19);
    v7 = v6;
    if ( !a2 || v6 != -1073741772 && v6 != -1073740031 )
      break;
    ++v4;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  while ( v4 < 0xA );
  if ( v7 >= 0 )
    *a1 = v9[0];
  return (unsigned int)v7;
}
