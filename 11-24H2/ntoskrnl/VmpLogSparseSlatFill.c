/*
 * XREFs of VmpLogSparseSlatFill @ 0x14064A1E8
 * Callers:
 *     VmpFillSlat @ 0x14039CC40 (VmpFillSlat.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall VmpLogSparseSlatFill(__int64 a1, __int64 a2, __int16 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // r8
  int v7; // r9d
  __int64 v8; // r10
  __int64 v9; // r11
  int v10; // [rsp+20h] [rbp-99h]
  int v11; // [rsp+28h] [rbp-91h]
  __int16 v12; // [rsp+40h] [rbp-79h] BYREF
  int Flink; // [rsp+44h] [rbp-75h] BYREF
  int v14; // [rsp+48h] [rbp-71h] BYREF
  int v15; // [rsp+4Ch] [rbp-6Dh] BYREF
  int v16; // [rsp+50h] [rbp-69h] BYREF
  __int64 v17; // [rsp+58h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+60h] [rbp-59h] BYREF
  int *p_Flink; // [rsp+80h] [rbp-39h]
  __int64 v20; // [rsp+88h] [rbp-31h]
  int *v21; // [rsp+90h] [rbp-29h]
  __int64 v22; // [rsp+98h] [rbp-21h]
  __int16 *v23; // [rsp+A0h] [rbp-19h]
  __int64 v24; // [rsp+A8h] [rbp-11h]
  __int64 v25; // [rsp+B0h] [rbp-9h]
  int v26; // [rsp+B8h] [rbp-1h]
  int v27; // [rsp+BCh] [rbp+3h]
  int *v28; // [rsp+C0h] [rbp+7h]
  __int64 v29; // [rsp+C8h] [rbp+Fh]
  __int64 *v30; // [rsp+D0h] [rbp+17h]
  __int64 v31; // [rsp+D8h] [rbp+1Fh]
  int *v32; // [rsp+E0h] [rbp+27h]
  __int64 v33; // [rsp+E8h] [rbp+2Fh]

  v12 = a3;
  if ( **(_DWORD **)&VmpTraceLoggingProvider > 5u && tlgKeywordOn(*(__int64 *)&VmpTraceLoggingProvider, 1LL) )
  {
    Flink = (int)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
    p_Flink = &Flink;
    v21 = &v14;
    v23 = &v12;
    v26 = 16 * (unsigned __int16)v6;
    v28 = &v15;
    v17 = a5;
    v30 = &v17;
    v16 = a6;
    v32 = &v16;
    v27 = 0;
    v15 = v7;
    v20 = 4LL;
    v14 = v6;
    v22 = 4LL;
    v24 = 2LL;
    v25 = v9;
    v29 = 4LL;
    v31 = 8LL;
    v33 = 4LL;
    tlgWriteEx_EtwWriteEx(v8, (unsigned __int8 *)&byte_140052B6B, v6, 0, v10, v11, 9u, &v18);
  }
}
