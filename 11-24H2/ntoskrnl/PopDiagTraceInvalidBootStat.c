/*
 * XREFs of PopDiagTraceInvalidBootStat @ 0x140C31F94
 * Callers:
 *     PopCheckShutdownMarker @ 0x140C2F7D4 (PopCheckShutdownMarker.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceInvalidBootStat(int a1)
{
  __int64 v2; // rdx
  unsigned int v3; // r10d
  int v4; // r8d
  char v5; // r9
  int v6; // r11d
  char v7; // [rsp+30h] [rbp-49h] BYREF
  int v8; // [rsp+34h] [rbp-45h] BYREF
  int v9; // [rsp+38h] [rbp-41h] BYREF
  int v10; // [rsp+3Ch] [rbp-3Dh] BYREF
  __int64 v11; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+50h] [rbp-29h] BYREF
  int *v13; // [rsp+70h] [rbp-9h]
  int v14; // [rsp+78h] [rbp-1h]
  int v15; // [rsp+7Ch] [rbp+3h]
  int *v16; // [rsp+80h] [rbp+7h]
  int v17; // [rsp+88h] [rbp+Fh]
  int v18; // [rsp+8Ch] [rbp+13h]
  int *v19; // [rsp+90h] [rbp+17h]
  int v20; // [rsp+98h] [rbp+1Fh]
  int v21; // [rsp+9Ch] [rbp+23h]
  char *v22; // [rsp+A0h] [rbp+27h]
  int v23; // [rsp+A8h] [rbp+2Fh]
  int v24; // [rsp+ACh] [rbp+33h]
  __int64 *v25; // [rsp+B0h] [rbp+37h]
  int v26; // [rsp+B8h] [rbp+3Fh]
  int v27; // [rsp+BCh] [rbp+43h]

  if ( dword_140E07680
    && tlgKeywordOn((__int64)&dword_140E07680, 0x800000000000LL)
    && v3 > 5
    && tlgKeywordOn((__int64)&dword_140E07680, v2) )
  {
    v15 = 0;
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v13 = &v8;
    v16 = &v9;
    v19 = &v10;
    v22 = &v7;
    v25 = &v11;
    v14 = 4;
    v17 = 4;
    v10 = v4;
    v20 = 4;
    v7 = v5;
    v8 = a1;
    v9 = v6;
    v23 = 1;
    v11 = 0x1000000LL;
    v26 = 8;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07680, (unsigned __int8 *)byte_14004B099, 0LL, 0LL, 7u, &v12);
  }
}
