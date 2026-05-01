/*
 * XREFs of CrmLogActivityStop @ 0x1800334B4
 * Callers:
 *     CrmActivityCleanup @ 0x180032E00 (CrmActivityCleanup.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180055770 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

void __fastcall CrmLogActivityStop(__int64 a1)
{
  int v1; // r9d
  void *v2; // rdx
  __int64 v3; // r8
  int v4; // [rsp+20h] [rbp-69h]
  int v5; // [rsp+30h] [rbp-59h] BYREF
  int v6; // [rsp+34h] [rbp-55h] BYREF
  int v7; // [rsp+38h] [rbp-51h] BYREF
  __int64 v8; // [rsp+40h] [rbp-49h] BYREF
  __int64 v9; // [rsp+48h] [rbp-41h] BYREF
  _BYTE v10[32]; // [rsp+50h] [rbp-39h] BYREF
  UUID *v11; // [rsp+70h] [rbp-19h]
  __int64 v12; // [rsp+78h] [rbp-11h]
  __int64 *v13; // [rsp+80h] [rbp-9h]
  __int64 v14; // [rsp+88h] [rbp-1h]
  int *v15; // [rsp+90h] [rbp+7h]
  __int64 v16; // [rsp+98h] [rbp+Fh]
  int *v17; // [rsp+A0h] [rbp+17h]
  __int64 v18; // [rsp+A8h] [rbp+1Fh]
  int *v19; // [rsp+B0h] [rbp+27h]
  __int64 v20; // [rsp+B8h] [rbp+2Fh]
  __int64 *v21; // [rsp+C0h] [rbp+37h]
  __int64 v22; // [rsp+C8h] [rbp+3Fh]

  v1 = *(_DWORD *)(a1 + 160);
  if ( v1 )
  {
    if ( (unsigned int)dword_1800E82E8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1800E82E8, 0x400000000004LL) )
    {
      v16 = 4LL;
      v14 = 8LL;
      v11 = &Uuid;
      v2 = &unk_1800D2C85;
      v9 = *(_QWORD *)(v3 + 56);
      v13 = &v9;
      v5 = *(_DWORD *)(v3 + 68);
      v15 = &v5;
      v17 = &v6;
      v7 = *(_DWORD *)(v3 + 72);
      v19 = &v7;
      v21 = &v8;
      v4 = 8;
      v18 = 4LL;
      v20 = 4LL;
      v8 = 0x2000000LL;
      v22 = 8LL;
      goto LABEL_7;
    }
  }
  else if ( (unsigned int)dword_1800E82E8 > 5 && (qword_1800E82F8 & 4) != 0 && (qword_1800E8300 & 4) == qword_1800E8300 )
  {
    v16 = 4LL;
    v11 = &Uuid;
    v8 = *(_QWORD *)(a1 + 56);
    v13 = &v8;
    v7 = *(_DWORD *)(a1 + 68);
    v15 = &v7;
    v17 = &v6;
    v5 = *(_DWORD *)(a1 + 72);
    v19 = &v5;
    v18 = 4LL;
    v20 = 4LL;
    v2 = &unk_1800D2BC1;
    v4 = 7;
    v14 = 8LL;
LABEL_7:
    v6 = v1;
    v12 = 16LL;
    tlgWriteTransfer_EventWriteTransfer(&dword_1800E82E8, v2, 0LL, 0LL, v4, v10);
  }
}
