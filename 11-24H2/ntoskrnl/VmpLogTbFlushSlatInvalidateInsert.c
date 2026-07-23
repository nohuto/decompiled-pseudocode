/*
 * XREFs of VmpLogTbFlushSlatInvalidateInsert @ 0x14064A500
 * Callers:
 *     VmpInsertInvalidateListRange @ 0x14039FB08 (VmpInsertInvalidateListRange.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall VmpLogTbFlushSlatInvalidateInsert(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  int v6; // edx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // r11
  int Flink; // eax
  int v12; // [rsp+20h] [rbp-99h]
  int v13; // [rsp+28h] [rbp-91h]
  int v14; // [rsp+40h] [rbp-79h] BYREF
  int v15; // [rsp+44h] [rbp-75h] BYREF
  __int64 v16; // [rsp+48h] [rbp-71h] BYREF
  __int64 v17; // [rsp+50h] [rbp-69h] BYREF
  __int64 v18; // [rsp+58h] [rbp-61h] BYREF
  __int64 v19; // [rsp+60h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+70h] [rbp-49h] BYREF
  int *v21; // [rsp+90h] [rbp-29h]
  int v22; // [rsp+98h] [rbp-21h]
  int v23; // [rsp+9Ch] [rbp-1Dh]
  __int64 *v24; // [rsp+A0h] [rbp-19h]
  int v25; // [rsp+A8h] [rbp-11h]
  int v26; // [rsp+ACh] [rbp-Dh]
  __int64 *v27; // [rsp+B0h] [rbp-9h]
  int v28; // [rsp+B8h] [rbp-1h]
  int v29; // [rsp+BCh] [rbp+3h]
  __int64 *v30; // [rsp+C0h] [rbp+7h]
  int v31; // [rsp+C8h] [rbp+Fh]
  int v32; // [rsp+CCh] [rbp+13h]
  int *v33; // [rsp+D0h] [rbp+17h]
  int v34; // [rsp+D8h] [rbp+1Fh]
  int v35; // [rsp+DCh] [rbp+23h]
  __int64 *v36; // [rsp+E0h] [rbp+27h]
  int v37; // [rsp+E8h] [rbp+2Fh]
  int v38; // [rsp+ECh] [rbp+33h]

  if ( **(_DWORD **)&VmpTraceLoggingProvider > 5u && tlgKeywordOn(*(__int64 *)&VmpTraceLoggingProvider, 2LL) )
  {
    Flink = (int)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v38 = 0;
    v14 = Flink;
    v21 = &v14;
    v24 = &v16;
    v27 = &v17;
    v30 = &v18;
    v15 = a5;
    v33 = &v15;
    v19 = a6;
    v36 = &v19;
    v22 = v6 + 2;
    v25 = v6 + 6;
    v28 = v6 + 6;
    v18 = v8;
    v31 = v6 + 6;
    v34 = v6 + 2;
    v37 = v6 + 6;
    v16 = v10;
    v17 = v7;
    tlgWriteEx_EtwWriteEx(v9, (unsigned __int8 *)&word_140052512, v7, 0, v12, v13, v6 + 6, &v20);
  }
}
