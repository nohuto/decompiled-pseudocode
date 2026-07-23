/*
 * XREFs of PnpTraceRequestDeviceRemovalForReset @ 0x140730DE8
 * Callers:
 *     PiProcessDeviceResetAction @ 0x1405A1C18 (PiProcessDeviceResetAction.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PnpTraceRequestDeviceRemovalForReset(__int64 a1, int a2)
{
  unsigned __int16 *v3; // r8
  unsigned __int16 *v4; // r9
  int v5; // r10d
  int v6; // r11d
  int v7; // [rsp+30h] [rbp-79h] BYREF
  int v8; // [rsp+34h] [rbp-75h] BYREF
  int v9; // [rsp+38h] [rbp-71h] BYREF
  __int64 v10; // [rsp+40h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+50h] [rbp-59h] BYREF
  __int64 *v12; // [rsp+70h] [rbp-39h]
  int v13; // [rsp+78h] [rbp-31h]
  int v14; // [rsp+7Ch] [rbp-2Dh]
  _DWORD *v15; // [rsp+80h] [rbp-29h]
  int v16; // [rsp+88h] [rbp-21h]
  int v17; // [rsp+8Ch] [rbp-1Dh]
  __int64 v18; // [rsp+90h] [rbp-19h]
  _DWORD v19[2]; // [rsp+98h] [rbp-11h] BYREF
  _DWORD *v20; // [rsp+A0h] [rbp-9h]
  int v21; // [rsp+A8h] [rbp-1h]
  int v22; // [rsp+ACh] [rbp+3h]
  __int64 v23; // [rsp+B0h] [rbp+7h]
  _DWORD v24[2]; // [rsp+B8h] [rbp+Fh] BYREF
  int *v25; // [rsp+C0h] [rbp+17h]
  int v26; // [rsp+C8h] [rbp+1Fh]
  int v27; // [rsp+CCh] [rbp+23h]
  int *v28; // [rsp+D0h] [rbp+27h]
  int v29; // [rsp+D8h] [rbp+2Fh]
  int v30; // [rsp+DCh] [rbp+33h]
  int *v31; // [rsp+E0h] [rbp+37h]
  int v32; // [rsp+E8h] [rbp+3Fh]
  int v33; // [rsp+ECh] [rbp+43h]

  if ( (unsigned int)dword_140E06FA8 > 5 && tlgKeywordOn((__int64)&dword_140E06FA8, 0x400000000000LL) )
  {
    v14 = 0;
    v17 = 0;
    v19[1] = 0;
    v22 = 0;
    v24[1] = 0;
    v27 = 0;
    v30 = 0;
    v33 = 0;
    v12 = &v10;
    v15 = v19;
    v18 = *((_QWORD *)v3 + 1);
    v19[0] = *v3;
    v20 = v24;
    v23 = *((_QWORD *)v4 + 1);
    v24[0] = *v4;
    v25 = &v7;
    v28 = &v8;
    v31 = &v9;
    v16 = 2;
    v21 = 2;
    v26 = 4;
    v29 = 4;
    v32 = 4;
    v10 = 0x1000000LL;
    v13 = 8;
    v7 = v5;
    v8 = a2;
    v9 = v6;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E06FA8,
      (unsigned __int8 *)byte_140047035,
      0LL,
      0LL,
      0xAu,
      &v11);
  }
}
