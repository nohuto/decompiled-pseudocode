/*
 * XREFs of MiLogContinueTrim @ 0x1404B3950
 * Callers:
 *     MiCheckSystemTrimEndCriteria @ 0x1402F33B8 (MiCheckSystemTrimEndCriteria.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void MiLogContinueTrim()
{
  int v0; // edx
  __int64 v1; // r8
  unsigned __int16 *v2; // r9
  __int64 v3; // r10
  int v4; // eax
  int v5; // [rsp+30h] [rbp-69h] BYREF
  int v6; // [rsp+34h] [rbp-65h] BYREF
  __int64 v7; // [rsp+38h] [rbp-61h] BYREF
  __int64 v8; // [rsp+40h] [rbp-59h] BYREF
  __int64 v9; // [rsp+48h] [rbp-51h] BYREF
  __int64 v10; // [rsp+50h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+60h] [rbp-39h] BYREF
  int *v12; // [rsp+80h] [rbp-19h]
  __int64 v13; // [rsp+88h] [rbp-11h]
  int *v14; // [rsp+90h] [rbp-9h]
  __int64 v15; // [rsp+98h] [rbp-1h]
  __int64 *v16; // [rsp+A0h] [rbp+7h]
  __int64 v17; // [rsp+A8h] [rbp+Fh]
  __int64 *v18; // [rsp+B0h] [rbp+17h]
  __int64 v19; // [rsp+B8h] [rbp+1Fh]
  __int64 *v20; // [rsp+C0h] [rbp+27h]
  __int64 v21; // [rsp+C8h] [rbp+2Fh]
  __int64 *v22; // [rsp+D0h] [rbp+37h]
  __int64 v23; // [rsp+D8h] [rbp+3Fh]

  if ( *(_QWORD *)&qword_140E37658
    && **(_DWORD **)&qword_140E37658 > 5u
    && tlgKeywordOn(*(__int64 *)&qword_140E37658, 1LL) )
  {
    v5 = *v2;
    v17 = (unsigned int)(v0 + 7);
    v12 = &v5;
    v4 = *(_BYTE *)v1 & 0x7F;
    v19 = v17;
    v6 = v4;
    v14 = &v6;
    v7 = *(_QWORD *)(v1 + 96);
    v16 = &v7;
    v8 = *(_QWORD *)(v1 + 80);
    v18 = &v8;
    v9 = *(_QWORD *)(v1 + 72);
    v20 = &v9;
    v10 = *((_QWORD *)v2 + 2336);
    v22 = &v10;
    v21 = v17;
    v23 = v17;
    v13 = 4LL;
    v15 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(v3, (unsigned __int8 *)byte_140057123, 0LL, 0LL, v17, &v11);
  }
}
