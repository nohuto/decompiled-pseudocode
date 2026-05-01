/*
 * XREFs of CrmLogRegistrationNotifyWindowClosedReasonChange @ 0x180030890
 * Callers:
 *     CrmRegistrationNotifyWindowClosedReasonChange @ 0x18002FE58 (CrmRegistrationNotifyWindowClosedReasonChange.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180055770 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

void __fastcall CrmLogRegistrationNotifyWindowClosedReasonChange(__int64 a1, __int64 a2, int *a3, int a4)
{
  int v4; // eax
  int v5; // eax
  int v6; // [rsp+30h] [rbp-69h] BYREF
  int v7; // [rsp+34h] [rbp-65h] BYREF
  int v8; // [rsp+38h] [rbp-61h] BYREF
  int v9; // [rsp+3Ch] [rbp-5Dh] BYREF
  __int64 v10; // [rsp+40h] [rbp-59h] BYREF
  _BYTE v11[32]; // [rsp+50h] [rbp-49h] BYREF
  UUID *v12; // [rsp+70h] [rbp-29h]
  __int64 v13; // [rsp+78h] [rbp-21h]
  int *v14; // [rsp+80h] [rbp-19h]
  __int64 v15; // [rsp+88h] [rbp-11h]
  __int64 v16; // [rsp+90h] [rbp-9h]
  int v17; // [rsp+98h] [rbp-1h]
  int v18; // [rsp+9Ch] [rbp+3h]
  int *v19; // [rsp+A0h] [rbp+7h]
  __int64 v20; // [rsp+A8h] [rbp+Fh]
  __int64 *v21; // [rsp+B0h] [rbp+17h]
  __int64 v22; // [rsp+B8h] [rbp+1Fh]
  int *v23; // [rsp+C0h] [rbp+27h]
  __int64 v24; // [rsp+C8h] [rbp+2Fh]
  int *v25; // [rsp+D0h] [rbp+37h]
  __int64 v26; // [rsp+D8h] [rbp+3Fh]

  if ( (unsigned int)dword_1800E82E8 > 5 && (qword_1800E82F8 & 2) != 0 && (qword_1800E8300 & 2) == qword_1800E8300 )
  {
    v13 = 16LL;
    v12 = &Uuid;
    v6 = *(_DWORD *)(a1 + 24);
    v14 = &v6;
    v16 = a1 + 72;
    v4 = *(unsigned __int8 *)(a1 + 73);
    v15 = 4LL;
    v18 = 0;
    v20 = 4LL;
    v22 = 8LL;
    v17 = 4 * v4 + 8;
    v7 = *(_DWORD *)(a2 + 64);
    v19 = &v7;
    v10 = *(_QWORD *)(a2 + 56);
    v21 = &v10;
    if ( a3 )
      v5 = *a3;
    else
      v5 = 0;
    v8 = v5;
    v9 = a4;
    v23 = &v8;
    v24 = 4LL;
    v25 = &v9;
    v26 = 4LL;
    tlgWriteTransfer_EventWriteTransfer(&dword_1800E82E8, &unk_1800D31B3, 0LL, 0LL, 9, v11);
  }
}
