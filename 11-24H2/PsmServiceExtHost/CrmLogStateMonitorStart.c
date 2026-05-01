/*
 * XREFs of CrmLogStateMonitorStart @ 0x180071AC0
 * Callers:
 *     CrmStateMonitorStart @ 0x18006F1D8 (CrmStateMonitorStart.c)
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x18002D3DC (CrmStateMonitorStateSizeGet.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180055770 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

void CrmLogStateMonitorStart()
{
  int v0; // edx
  int v1; // r9d
  __int64 v2; // r10
  unsigned __int16 v3; // ax
  int v4; // r8d
  int v5; // r11d
  int v6; // [rsp+30h] [rbp-39h] BYREF
  int v7; // [rsp+34h] [rbp-35h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+40h] [rbp-29h] BYREF
  UUID *v9; // [rsp+60h] [rbp-9h]
  int v10; // [rsp+68h] [rbp-1h]
  int v11; // [rsp+6Ch] [rbp+3h]
  int *v12; // [rsp+70h] [rbp+7h]
  int v13; // [rsp+78h] [rbp+Fh]
  int v14; // [rsp+7Ch] [rbp+13h]
  _DWORD *v15; // [rsp+80h] [rbp+17h]
  int v16; // [rsp+88h] [rbp+1Fh]
  int v17; // [rsp+8Ch] [rbp+23h]
  __int64 v18; // [rsp+90h] [rbp+27h]
  _DWORD v19[2]; // [rsp+98h] [rbp+2Fh] BYREF
  int *v20; // [rsp+A0h] [rbp+37h]
  int v21; // [rsp+A8h] [rbp+3Fh]
  int v22; // [rsp+ACh] [rbp+43h]

  if ( (unsigned int)dword_1800E82E8 > 5 && tlgKeywordOn((__int64)&dword_1800E82E8, 8LL) )
  {
    v11 = 0;
    v14 = 0;
    v17 = 0;
    v9 = &Uuid;
    v12 = &v6;
    v15 = v19;
    v10 = 16;
    v6 = v1;
    v13 = v0 - 4;
    v16 = 2;
    v18 = v2;
    v3 = CrmStateMonitorStateSizeGet(v1);
    v19[1] = 0;
    v22 = 0;
    v20 = &v7;
    v19[0] = v3;
    v7 = v4;
    v21 = v5;
    tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1800E82E8, byte_1800D2D51, 0LL, 0LL, 7u, &v8);
  }
}
