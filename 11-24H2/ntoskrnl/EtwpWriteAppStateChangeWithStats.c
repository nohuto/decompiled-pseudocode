/*
 * XREFs of EtwpWriteAppStateChangeWithStats @ 0x140A3AE58
 * Callers:
 *     EtwTraceAppStateChange @ 0x1408F057C (EtwTraceAppStateChange.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PsGetProcessStartKey @ 0x140447F60 (PsGetProcessStartKey.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall EtwpWriteAppStateChangeWithStats(__int64 a1, __int64 a2)
{
  char v2; // al
  unsigned __int64 ProcessStartKey; // rax
  __int64 v4; // r9
  unsigned __int8 v5; // cl
  __int64 v6; // r8
  char v7; // [rsp+30h] [rbp-D0h] BYREF
  char v8; // [rsp+31h] [rbp-CFh] BYREF
  char v9; // [rsp+32h] [rbp-CEh] BYREF
  bool v10; // [rsp+33h] [rbp-CDh] BYREF
  int v11; // [rsp+34h] [rbp-CCh] BYREF
  int v12; // [rsp+38h] [rbp-C8h] BYREF
  int v13; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v17; // [rsp+70h] [rbp-90h]
  __int64 v18; // [rsp+78h] [rbp-88h]
  int *v19; // [rsp+80h] [rbp-80h]
  __int64 v20; // [rsp+88h] [rbp-78h]
  unsigned __int64 *v21; // [rsp+90h] [rbp-70h]
  __int64 v22; // [rsp+98h] [rbp-68h]
  int *v23; // [rsp+A0h] [rbp-60h]
  __int64 v24; // [rsp+A8h] [rbp-58h]
  char *v25; // [rsp+B0h] [rbp-50h]
  __int64 v26; // [rsp+B8h] [rbp-48h]
  char *v27; // [rsp+C0h] [rbp-40h]
  __int64 v28; // [rsp+C8h] [rbp-38h]
  char *v29; // [rsp+D0h] [rbp-30h]
  __int64 v30; // [rsp+D8h] [rbp-28h]
  bool *v31; // [rsp+E0h] [rbp-20h]
  __int64 v32; // [rsp+E8h] [rbp-18h]
  __int64 v33; // [rsp+F0h] [rbp-10h]
  __int64 v34; // [rsp+F8h] [rbp-8h]
  int *v35; // [rsp+100h] [rbp+0h]
  __int64 v36; // [rsp+108h] [rbp+8h]
  __int64 *v37; // [rsp+110h] [rbp+10h]
  __int64 v38; // [rsp+118h] [rbp+18h]

  if ( (unsigned int)dword_140E09160 > 5 )
  {
    if ( (qword_140E09170 & 0x200000000003LL) == 0 || (v2 = 1, (qword_140E09178 & 0x200000000003LL) != qword_140E09178) )
      v2 = 0;
    if ( v2 )
    {
      v11 = *(_DWORD *)(a1 + 464);
      v19 = &v11;
      v17 = a2;
      v18 = 98LL;
      v20 = 4LL;
      ProcessStartKey = PsGetProcessStartKey(a1);
      v5 = *(_BYTE *)(v4 + 1531);
      v14 = ProcessStartKey;
      v21 = &v14;
      v12 = *(_DWORD *)(v4 + 1364);
      v23 = &v12;
      LOBYTE(ProcessStartKey) = (*(_DWORD *)(v4 + 1532) & 4) != 0;
      v33 = v6;
      v7 = ProcessStartKey;
      v22 = 8LL;
      v25 = &v7;
      v24 = 4LL;
      v8 = v5 & 7;
      v27 = &v8;
      v9 = (v5 >> 3) & 7;
      v10 = (v5 & 0x40) != 0;
      v29 = &v9;
      v26 = 1LL;
      v31 = &v10;
      v13 = *(_DWORD *)(v4 + 1192);
      v35 = &v13;
      v15 = *(_QWORD *)(v4 + 1704) << 12;
      v37 = &v15;
      v28 = 1LL;
      v30 = 1LL;
      v32 = 1LL;
      v34 = 44LL;
      v36 = 4LL;
      v38 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E09160,
        (unsigned __int8 *)&dword_140052F5C,
        0LL,
        0LL,
        0xDu,
        &v16);
    }
  }
}
