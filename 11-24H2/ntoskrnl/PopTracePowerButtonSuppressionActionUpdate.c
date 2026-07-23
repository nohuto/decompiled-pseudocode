/*
 * XREFs of PopTracePowerButtonSuppressionActionUpdate @ 0x140AA3A7C
 * Callers:
 *     PopEvaluatePowerButtonSuppressionState @ 0x140758844 (PopEvaluatePowerButtonSuppressionState.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PopTracePowerButtonSuppressionActionUpdate(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v5; // r8d
  int v6; // r9d
  int v7; // r10d
  char v8; // r11
  char v9; // [rsp+30h] [rbp-61h] BYREF
  int v10; // [rsp+34h] [rbp-5Dh] BYREF
  int v11; // [rsp+38h] [rbp-59h] BYREF
  int v12; // [rsp+3Ch] [rbp-55h] BYREF
  int v13; // [rsp+40h] [rbp-51h] BYREF
  __int64 v14; // [rsp+48h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+50h] [rbp-41h] BYREF
  char *v16; // [rsp+70h] [rbp-21h]
  int v17; // [rsp+78h] [rbp-19h]
  int v18; // [rsp+7Ch] [rbp-15h]
  int *v19; // [rsp+80h] [rbp-11h]
  int v20; // [rsp+88h] [rbp-9h]
  int v21; // [rsp+8Ch] [rbp-5h]
  int *v22; // [rsp+90h] [rbp-1h]
  int v23; // [rsp+98h] [rbp+7h]
  int v24; // [rsp+9Ch] [rbp+Bh]
  int *v25; // [rsp+A0h] [rbp+Fh]
  int v26; // [rsp+A8h] [rbp+17h]
  int v27; // [rsp+ACh] [rbp+1Bh]
  int *v28; // [rsp+B0h] [rbp+1Fh]
  int v29; // [rsp+B8h] [rbp+27h]
  int v30; // [rsp+BCh] [rbp+2Bh]
  __int64 *v31; // [rsp+C0h] [rbp+2Fh]
  int v32; // [rsp+C8h] [rbp+37h]
  int v33; // [rsp+CCh] [rbp+3Bh]

  if ( (unsigned int)dword_140E07680 > 5 && tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL) )
  {
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v33 = 0;
    v16 = &v9;
    v19 = &v10;
    v22 = &v11;
    v25 = &v12;
    v13 = a5;
    v28 = &v13;
    v20 = 4;
    v23 = 4;
    v26 = 4;
    v29 = 4;
    v31 = &v14;
    v11 = v5;
    v12 = v6;
    v32 = 8;
    v9 = v8;
    v17 = 1;
    v10 = v7;
    v14 = 0x1000000LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07680, (unsigned __int8 *)byte_140049115, 0LL, 0LL, 8u, &v15);
  }
}
