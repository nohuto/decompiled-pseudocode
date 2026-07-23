/*
 * XREFs of PopTraceEsSetting @ 0x1404D28C0
 * Callers:
 *     PopEsUpdateSetting @ 0x14075C768 (PopEsUpdateSetting.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void PopTraceEsSetting()
{
  unsigned __int8 v0; // r8
  int v1; // r9d
  int v2; // r10d
  int v3; // [rsp+30h] [rbp-39h] BYREF
  int v4; // [rsp+34h] [rbp-35h] BYREF
  int v5; // [rsp+38h] [rbp-31h] BYREF
  __int64 v6; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+50h] [rbp-19h] BYREF
  int *v8; // [rsp+70h] [rbp+7h]
  __int64 v9; // [rsp+78h] [rbp+Fh]
  int *v10; // [rsp+80h] [rbp+17h]
  __int64 v11; // [rsp+88h] [rbp+1Fh]
  int *v12; // [rsp+90h] [rbp+27h]
  __int64 v13; // [rsp+98h] [rbp+2Fh]
  __int64 *v14; // [rsp+A0h] [rbp+37h]
  __int64 v15; // [rsp+A8h] [rbp+3Fh]

  if ( (unsigned int)dword_140E07680 > 5 && tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL) )
  {
    v4 = v1;
    v8 = &v3;
    v3 = v2;
    v10 = &v4;
    v5 = v0;
    v9 = 4LL;
    v12 = &v5;
    v14 = &v6;
    v11 = 4LL;
    v13 = 4LL;
    v6 = 0x1000000LL;
    v15 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07680, (unsigned __int8 *)&word_14004A626, 0LL, 0LL, 6u, &v7);
  }
}
