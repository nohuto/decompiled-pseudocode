/*
 * XREFs of MiStoreLogWriteIssueFailure @ 0x1402CC8D0
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x1402CA294 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x1404A1010 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

void __fastcall MiStoreLogWriteIssueFailure(int a1, __int64 *a2, int a3, int a4)
{
  int v5; // [rsp+20h] [rbp-69h]
  int v6; // [rsp+28h] [rbp-61h]
  int v7; // [rsp+40h] [rbp-49h] BYREF
  int v8; // [rsp+44h] [rbp-45h] BYREF
  int v9; // [rsp+48h] [rbp-41h] BYREF
  __int64 v10; // [rsp+50h] [rbp-39h] BYREF
  __int64 v11; // [rsp+58h] [rbp-31h] BYREF
  __int64 v12[5]; // [rsp+60h] [rbp-29h] BYREF
  int v13; // [rsp+88h] [rbp-1h]
  int v14; // [rsp+8Ch] [rbp+3h]
  __int64 *v15; // [rsp+90h] [rbp+7h]
  int v16; // [rsp+98h] [rbp+Fh]
  int v17; // [rsp+9Ch] [rbp+13h]
  __int64 *v18; // [rsp+A0h] [rbp+17h]
  int v19; // [rsp+A8h] [rbp+1Fh]
  int v20; // [rsp+ACh] [rbp+23h]
  int *v21; // [rsp+B0h] [rbp+27h]
  int v22; // [rsp+B8h] [rbp+2Fh]
  int v23; // [rsp+BCh] [rbp+33h]
  int *v24; // [rsp+C0h] [rbp+37h]
  int v25; // [rsp+C8h] [rbp+3Fh]
  int v26; // [rsp+CCh] [rbp+43h]

  if ( *(_QWORD *)&qword_140E372D8
    && **(_DWORD **)&qword_140E372D8 > 5u
    && (*(_BYTE *)(*(_QWORD *)&qword_140E372D8 + 16LL) & 2) != 0
    && (*(_QWORD *)(*(_QWORD *)&qword_140E372D8 + 24LL) & 2LL) == *(_QWORD *)(*(_QWORD *)&qword_140E372D8 + 24LL) )
  {
    v14 = 0;
    v17 = 0;
    v20 = 0;
    v23 = 0;
    v26 = 0;
    v12[4] = (__int64)&v7;
    v10 = *a2;
    v15 = &v10;
    v11 = a2[1];
    v18 = &v11;
    v21 = &v8;
    v7 = a1;
    v24 = &v9;
    v9 = a4;
    v16 = 8;
    v19 = 8;
    v13 = 4;
    v8 = a3;
    v22 = 4;
    v25 = 4;
    tlgWriteEx_EtwWriteEx(qword_140E372D8, (int)&byte_140056B2F, a3, 1, v5, v6, 7u, (__int64)v12);
  }
}
