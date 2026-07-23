/*
 * XREFs of PnpTraceWatchdogViolation @ 0x1405A626C
 * Callers:
 *     PnpWatchdogEtwWrite @ 0x1404C2730 (PnpWatchdogEtwWrite.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PnpTraceWatchdogViolation(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int16 *a5)
{
  int v5; // r8d
  unsigned __int16 *v6; // r9
  char v7; // r10
  int v8; // r11d
  char v9; // [rsp+30h] [rbp-81h] BYREF
  int v10; // [rsp+34h] [rbp-7Dh] BYREF
  int v11; // [rsp+38h] [rbp-79h] BYREF
  __int64 v12; // [rsp+40h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+50h] [rbp-61h] BYREF
  __int64 *v14; // [rsp+70h] [rbp-41h]
  int v15; // [rsp+78h] [rbp-39h]
  int v16; // [rsp+7Ch] [rbp-35h]
  int *v17; // [rsp+80h] [rbp-31h]
  int v18; // [rsp+88h] [rbp-29h]
  int v19; // [rsp+8Ch] [rbp-25h]
  int *v20; // [rsp+90h] [rbp-21h]
  int v21; // [rsp+98h] [rbp-19h]
  int v22; // [rsp+9Ch] [rbp-15h]
  _DWORD *v23; // [rsp+A0h] [rbp-11h]
  int v24; // [rsp+A8h] [rbp-9h]
  int v25; // [rsp+ACh] [rbp-5h]
  __int64 v26; // [rsp+B0h] [rbp-1h]
  _DWORD v27[2]; // [rsp+B8h] [rbp+7h] BYREF
  _DWORD *v28; // [rsp+C0h] [rbp+Fh]
  int v29; // [rsp+C8h] [rbp+17h]
  int v30; // [rsp+CCh] [rbp+1Bh]
  __int64 v31; // [rsp+D0h] [rbp+1Fh]
  _DWORD v32[2]; // [rsp+D8h] [rbp+27h] BYREF
  char *v33; // [rsp+E0h] [rbp+2Fh]
  int v34; // [rsp+E8h] [rbp+37h]
  int v35; // [rsp+ECh] [rbp+3Bh]

  if ( (unsigned int)dword_140E06FA8 > 5 && tlgKeywordOn((__int64)&dword_140E06FA8, 0x400000000000LL) )
  {
    v16 = 0;
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v27[1] = 0;
    v30 = 0;
    v32[1] = 0;
    v35 = 0;
    v14 = &v12;
    v17 = &v10;
    v20 = &v11;
    v23 = v27;
    v26 = *((_QWORD *)v6 + 1);
    v27[0] = *v6;
    v28 = v32;
    v31 = *((_QWORD *)a5 + 1);
    v32[0] = *a5;
    v18 = 4;
    v21 = 4;
    v33 = &v9;
    v11 = v5;
    v24 = 2;
    v29 = 2;
    v12 = 0x1000000LL;
    v15 = 8;
    v10 = v8;
    v9 = v7;
    v34 = 1;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E06FA8,
      (unsigned __int8 *)byte_140046DA3,
      0LL,
      0LL,
      0xAu,
      &v13);
  }
}
