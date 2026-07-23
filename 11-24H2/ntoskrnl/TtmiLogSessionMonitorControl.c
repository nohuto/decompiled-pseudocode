/*
 * XREFs of TtmiLogSessionMonitorControl @ 0x14099DED4
 * Callers:
 *     TtmSessionMonitorControl @ 0x14099DE24 (TtmSessionMonitorControl.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void TtmiLogSessionMonitorControl()
{
  int v0; // r8d
  int v1; // r9d
  int v2; // r10d
  int v3; // r11d
  int v4; // [rsp+30h] [rbp-29h] BYREF
  int v5; // [rsp+34h] [rbp-25h] BYREF
  int v6; // [rsp+38h] [rbp-21h] BYREF
  int v7; // [rsp+3Ch] [rbp-1Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+40h] [rbp-19h] BYREF
  int *v9; // [rsp+60h] [rbp+7h]
  int v10; // [rsp+68h] [rbp+Fh]
  int v11; // [rsp+6Ch] [rbp+13h]
  int *v12; // [rsp+70h] [rbp+17h]
  int v13; // [rsp+78h] [rbp+1Fh]
  int v14; // [rsp+7Ch] [rbp+23h]
  int *v15; // [rsp+80h] [rbp+27h]
  int v16; // [rsp+88h] [rbp+2Fh]
  int v17; // [rsp+8Ch] [rbp+33h]
  int *v18; // [rsp+90h] [rbp+37h]
  int v19; // [rsp+98h] [rbp+3Fh]
  int v20; // [rsp+9Ch] [rbp+43h]

  if ( (unsigned int)dword_140FD88C8 > 5 && tlgKeywordOn((__int64)&dword_140FD88C8, 1LL) )
  {
    v11 = 0;
    v14 = 0;
    v17 = 0;
    v20 = 0;
    v9 = &v4;
    v12 = &v5;
    v15 = &v6;
    v18 = &v7;
    v10 = 4;
    v13 = 4;
    v6 = v0;
    v16 = 4;
    v7 = v1;
    v19 = 4;
    v4 = v3;
    v5 = v2;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140FD88C8, (unsigned __int8 *)qword_140051250, 0LL, 0LL, 6u, &v8);
  }
}
