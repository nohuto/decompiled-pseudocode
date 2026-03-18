/*
 * XREFs of CmFcpConnectToAlpcServer @ 0x140A80380
 * Callers:
 *     CmFcpManagerPublishFeatureUsageDataBuffers @ 0x140A80154 (CmFcpManagerPublishFeatureUsageDataBuffers.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     _filwbuf_s @ 0x140489C50 (_filwbuf_s.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwAlpcConnectPortEx @ 0x1406A7390 (ZwAlpcConnectPortEx.c)
 */

__int64 __fastcall CmFcpConnectToAlpcServer(_QWORD *a1, char a2)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  int v6; // ebx
  _QWORD v8[3]; // [rsp+60h] [rbp-A0h] BYREF
  LARGE_INTEGER Interval; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  int v11; // [rsp+90h] [rbp-70h]
  int v12; // [rsp+94h] [rbp-6Ch]
  __int64 v13; // [rsp+98h] [rbp-68h]
  __int64 v14; // [rsp+A0h] [rbp-60h]
  int v15; // [rsp+A8h] [rbp-58h]
  int v16; // [rsp+ACh] [rbp-54h]
  __int128 v17; // [rsp+B0h] [rbp-50h]
  _DWORD v18[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v19; // [rsp+C8h] [rbp-38h]
  UNICODE_STRING *p_DestinationString; // [rsp+D0h] [rbp-30h]
  int v21; // [rsp+D8h] [rbp-28h]
  int v22; // [rsp+DCh] [rbp-24h]
  __int128 v23; // [rsp+E0h] [rbp-20h]
  __int128 v24; // [rsp+F0h] [rbp-10h]
  __int128 v25; // [rsp+100h] [rbp+0h]
  __int128 v26; // [rsp+110h] [rbp+10h]
  int v27; // [rsp+120h] [rbp+20h]
  __int64 v28; // [rsp+124h] [rbp+24h]
  __int16 v29; // [rsp+12Ch] [rbp+2Ch]
  __int16 v30; // [rsp+12Eh] [rbp+2Eh]
  __int64 v31; // [rsp+130h] [rbp+30h]
  __int64 v32; // [rsp+138h] [rbp+38h]
  __int64 v33; // [rsp+140h] [rbp+40h]
  __int64 v34; // [rsp+148h] [rbp+48h]
  __int64 v35; // [rsp+150h] [rbp+50h]
  __int64 v36; // [rsp+158h] [rbp+58h]
  int v37; // [rsp+160h] [rbp+60h]
  int v38; // [rsp+164h] [rbp+64h]

  v18[1] = 0;
  v22 = 0;
  v12 = 0;
  v16 = 0;
  DestinationString = 0LL;
  v30 = 0;
  v38 = 0;
  RtlInitUnicodeString(&DestinationString, L"\\RPC Control\\FconAlpcPort");
  v8[0] = 0LL;
  v8[1] = -50000000LL;
  v18[0] = 48;
  v21 = 512;
  v24 = 0LL;
  p_DestinationString = &DestinationString;
  v4 = 0;
  v25 = 0LL;
  v11 = 48;
  v26 = 0LL;
  v15 = 512;
  v23 = 0LL;
  Interval.QuadPart = -10000000LL;
  v17 = 0LL;
  v19 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v27 = 1179648;
  v31 = filwbuf_s();
  v33 = 0xFFFFFFFFLL;
  v34 = 0xFFFFFFFFLL;
  v36 = 0xFFFFFFFFLL;
  v35 = 0xFFFFFFFFLL;
  LOWORD(v24) = v5 - 40;
  v37 = 0;
  v32 = 0LL;
  v28 = 12LL;
  v29 = 1;
  *(_DWORD *)((char *)&v24 + 2) = -2147483600;
  DWORD2(v26) = 1;
  v8[2] = v5;
  do
  {
    v6 = ZwAlpcConnectPortEx((__int64)v8, (__int64)v18);
    if ( !a2 || v6 != -1073741772 && v6 != -1073740031 )
      break;
    ++v4;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  while ( v4 < 0xA );
  if ( v6 >= 0 )
    *a1 = v8[0];
  return (unsigned int)v6;
}
