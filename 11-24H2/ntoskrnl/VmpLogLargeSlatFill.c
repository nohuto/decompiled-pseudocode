/*
 * XREFs of VmpLogLargeSlatFill @ 0x140649F78
 * Callers:
 *     VmpFillSlat @ 0x14039CC40 (VmpFillSlat.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall VmpLogLargeSlatFill(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // r8
  int v7; // r9d
  __int64 v8; // r10
  __int64 v9; // r11
  int Flink; // eax
  int v11; // [rsp+20h] [rbp-99h]
  int v12; // [rsp+28h] [rbp-91h]
  int v13; // [rsp+40h] [rbp-79h] BYREF
  int v14; // [rsp+44h] [rbp-75h] BYREF
  int v15; // [rsp+48h] [rbp-71h] BYREF
  __int64 v16; // [rsp+50h] [rbp-69h] BYREF
  __int64 v17; // [rsp+58h] [rbp-61h] BYREF
  __int64 v18; // [rsp+60h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+70h] [rbp-49h] BYREF
  int *v20; // [rsp+90h] [rbp-29h]
  int v21; // [rsp+98h] [rbp-21h]
  int v22; // [rsp+9Ch] [rbp-1Dh]
  __int64 *v23; // [rsp+A0h] [rbp-19h]
  int v24; // [rsp+A8h] [rbp-11h]
  int v25; // [rsp+ACh] [rbp-Dh]
  __int64 *v26; // [rsp+B0h] [rbp-9h]
  int v27; // [rsp+B8h] [rbp-1h]
  int v28; // [rsp+BCh] [rbp+3h]
  int *v29; // [rsp+C0h] [rbp+7h]
  int v30; // [rsp+C8h] [rbp+Fh]
  int v31; // [rsp+CCh] [rbp+13h]
  __int64 *v32; // [rsp+D0h] [rbp+17h]
  int v33; // [rsp+D8h] [rbp+1Fh]
  int v34; // [rsp+DCh] [rbp+23h]
  int *v35; // [rsp+E0h] [rbp+27h]
  int v36; // [rsp+E8h] [rbp+2Fh]
  int v37; // [rsp+ECh] [rbp+33h]

  if ( **(_DWORD **)&VmpTraceLoggingProvider > 5u && tlgKeywordOn(*(__int64 *)&VmpTraceLoggingProvider, 1LL) )
  {
    Flink = (int)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v31 = 0;
    v34 = 0;
    v37 = 0;
    v13 = Flink;
    v20 = &v13;
    v23 = &v16;
    v26 = &v17;
    v29 = &v14;
    v18 = a5;
    v32 = &v18;
    v15 = a6;
    v35 = &v15;
    v21 = 4;
    v24 = 8;
    v27 = 8;
    v14 = v7;
    v30 = 4;
    v33 = 8;
    v36 = 4;
    v16 = v9;
    v17 = v6;
    tlgWriteEx_EtwWriteEx(v8, (unsigned __int8 *)&dword_140052874, v6, 0, v11, v12, 8u, &v19);
  }
}
