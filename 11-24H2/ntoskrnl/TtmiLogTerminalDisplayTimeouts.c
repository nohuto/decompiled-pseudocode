/*
 * XREFs of TtmiLogTerminalDisplayTimeouts @ 0x14076ED24
 * Callers:
 *     TtmiTerminalSetDisplayTimeouts @ 0x1407701C4 (TtmiTerminalSetDisplayTimeouts.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall TtmiLogTerminalDisplayTimeouts(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  int v9; // r10d
  int v10; // r11d
  int v11; // [rsp+30h] [rbp-69h] BYREF
  int v12; // [rsp+34h] [rbp-65h] BYREF
  int v13; // [rsp+38h] [rbp-61h] BYREF
  int v14; // [rsp+3Ch] [rbp-5Dh] BYREF
  __int64 v15; // [rsp+40h] [rbp-59h] BYREF
  __int64 v16; // [rsp+48h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+50h] [rbp-49h] BYREF
  int *v18; // [rsp+70h] [rbp-29h]
  int v19; // [rsp+78h] [rbp-21h]
  int v20; // [rsp+7Ch] [rbp-1Dh]
  int *v21; // [rsp+80h] [rbp-19h]
  int v22; // [rsp+88h] [rbp-11h]
  int v23; // [rsp+8Ch] [rbp-Dh]
  int *v24; // [rsp+90h] [rbp-9h]
  int v25; // [rsp+98h] [rbp-1h]
  int v26; // [rsp+9Ch] [rbp+3h]
  int *v27; // [rsp+A0h] [rbp+7h]
  int v28; // [rsp+A8h] [rbp+Fh]
  int v29; // [rsp+ACh] [rbp+13h]
  __int64 *v30; // [rsp+B0h] [rbp+17h]
  int v31; // [rsp+B8h] [rbp+1Fh]
  int v32; // [rsp+BCh] [rbp+23h]
  __int64 *v33; // [rsp+C0h] [rbp+27h]
  int v34; // [rsp+C8h] [rbp+2Fh]
  int v35; // [rsp+CCh] [rbp+33h]

  if ( (unsigned int)dword_140FD88C8 > 5 && tlgKeywordOn((__int64)&dword_140FD88C8, 1LL) )
  {
    v20 = 0;
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v18 = &v11;
    v21 = &v12;
    v24 = &v13;
    v27 = &v14;
    v15 = a5;
    v30 = &v15;
    v16 = a6;
    v33 = &v16;
    v19 = v6 + 3;
    v22 = v6 + 3;
    v13 = v7;
    v25 = v6 + 3;
    v14 = v8;
    v28 = v6 + 3;
    v31 = v6 + 7;
    v34 = v6 + 7;
    v11 = v10;
    v12 = v9;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140FD88C8,
      (unsigned __int8 *)&word_140050E36,
      0LL,
      0LL,
      v6 + 7,
      &v17);
  }
}
