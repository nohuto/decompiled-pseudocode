/*
 * XREFs of MiLogResetPagesCommitRelease @ 0x14066B330
 * Callers:
 *     MiReleaseCommitForResetPages @ 0x14066B9B8 (MiReleaseCommitForResetPages.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x14042C374 (_tlgCreate1Sz_char.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void MiLogResetPagesCommitRelease()
{
  __int64 v0; // r9
  __int64 v1; // r9
  int v2; // ecx
  __int64 v3; // r10
  __int64 v4; // r8
  int v5; // [rsp+20h] [rbp-59h]
  int v6; // [rsp+28h] [rbp-51h]
  int v7; // [rsp+40h] [rbp-39h] BYREF
  __int64 v8; // [rsp+48h] [rbp-31h] BYREF
  __int64 v9; // [rsp+50h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+60h] [rbp-19h] BYREF
  _BYTE v11[16]; // [rsp+80h] [rbp+7h] BYREF
  int *v12; // [rsp+90h] [rbp+17h]
  __int64 v13; // [rsp+98h] [rbp+1Fh]
  __int64 *v14; // [rsp+A0h] [rbp+27h]
  __int64 v15; // [rsp+A8h] [rbp+2Fh]
  __int64 *v16; // [rsp+B0h] [rbp+37h]
  __int64 v17; // [rsp+B8h] [rbp+3Fh]

  if ( *(_QWORD *)&qword_140E37658
    && **(_DWORD **)&qword_140E37658 > 5u
    && tlgKeywordOn(*(__int64 *)&qword_140E37658, 4LL) )
  {
    tlgCreate1Sz_char((__int64)v11, (const CHAR *)(v0 + 824));
    v2 = *(_DWORD *)(v1 + 464);
    v12 = &v7;
    v7 = v2;
    v14 = &v8;
    v9 = *(_QWORD *)(v1 + 1224);
    v16 = &v9;
    v13 = 4LL;
    v8 = v3;
    v15 = 8LL;
    v17 = 8LL;
    tlgWriteEx_EtwWriteEx(v4, (unsigned __int8 *)&word_140056BCA, v4, 1u, v5, v6, 6u, &v10);
  }
}
