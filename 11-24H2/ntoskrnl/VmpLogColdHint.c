/*
 * XREFs of VmpLogColdHint @ 0x140649E90
 * Callers:
 *     VmColdPagesHint @ 0x14039A140 (VmColdPagesHint.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void VmpLogColdHint()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // r10
  __int64 v4; // r11
  int v5; // [rsp+20h] [rbp-59h]
  int v6; // [rsp+28h] [rbp-51h]
  int Flink; // [rsp+40h] [rbp-39h] BYREF
  __int64 v8; // [rsp+48h] [rbp-31h] BYREF
  __int64 v9; // [rsp+50h] [rbp-29h] BYREF
  __int64 v10; // [rsp+58h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+60h] [rbp-19h] BYREF
  int *p_Flink; // [rsp+80h] [rbp+7h]
  __int64 v13; // [rsp+88h] [rbp+Fh]
  __int64 *v14; // [rsp+90h] [rbp+17h]
  __int64 v15; // [rsp+98h] [rbp+1Fh]
  __int64 *v16; // [rsp+A0h] [rbp+27h]
  __int64 v17; // [rsp+A8h] [rbp+2Fh]
  __int64 *v18; // [rsp+B0h] [rbp+37h]
  __int64 v19; // [rsp+B8h] [rbp+3Fh]

  if ( **(_DWORD **)&VmpTraceLoggingProvider > 5u && tlgKeywordOn(*(__int64 *)&VmpTraceLoggingProvider, 4LL) )
  {
    Flink = (int)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
    p_Flink = &Flink;
    v14 = &v8;
    v16 = &v9;
    v18 = &v10;
    v13 = v0;
    v10 = v2;
    v8 = v4;
    v15 = 8LL;
    v9 = v1;
    v17 = 8LL;
    v19 = 8LL;
    tlgWriteEx_EtwWriteEx(v3, (unsigned __int8 *)&dword_14005282C, v1, 0, v5, v6, 6u, &v11);
  }
}
