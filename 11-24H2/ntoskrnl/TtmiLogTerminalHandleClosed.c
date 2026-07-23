/*
 * XREFs of TtmiLogTerminalHandleClosed @ 0x14076EE30
 * Callers:
 *     TtmpCloseTerminalHandle @ 0x140770350 (TtmpCloseTerminalHandle.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void TtmiLogTerminalHandleClosed()
{
  int v0; // edx
  __int64 v1; // r8
  __int64 v2; // r9
  int v3; // r10d
  int v4; // r11d
  int v5; // [rsp+30h] [rbp-39h] BYREF
  int v6; // [rsp+34h] [rbp-35h] BYREF
  __int64 v7; // [rsp+38h] [rbp-31h] BYREF
  __int64 v8; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+50h] [rbp-19h] BYREF
  int *v10; // [rsp+70h] [rbp+7h]
  int v11; // [rsp+78h] [rbp+Fh]
  int v12; // [rsp+7Ch] [rbp+13h]
  int *v13; // [rsp+80h] [rbp+17h]
  int v14; // [rsp+88h] [rbp+1Fh]
  int v15; // [rsp+8Ch] [rbp+23h]
  __int64 *v16; // [rsp+90h] [rbp+27h]
  int v17; // [rsp+98h] [rbp+2Fh]
  int v18; // [rsp+9Ch] [rbp+33h]
  __int64 *v19; // [rsp+A0h] [rbp+37h]
  int v20; // [rsp+A8h] [rbp+3Fh]
  int v21; // [rsp+ACh] [rbp+43h]

  if ( (unsigned int)dword_140FD88C8 > 5 && tlgKeywordOn((__int64)&dword_140FD88C8, 1LL) )
  {
    v12 = 0;
    v15 = 0;
    v18 = 0;
    v21 = 0;
    v10 = &v5;
    v13 = &v6;
    v16 = &v7;
    v19 = &v8;
    v11 = v0 + 3;
    v14 = v0 + 3;
    v7 = v1;
    v17 = v0 + 7;
    v8 = v2;
    v20 = v0 + 7;
    v5 = v4;
    v6 = v3;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140FD88C8, (unsigned __int8 *)&dword_140051544, 0LL, 0LL, 6u, &v9);
  }
}
