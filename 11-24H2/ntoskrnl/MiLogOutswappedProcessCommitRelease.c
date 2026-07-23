/*
 * XREFs of MiLogOutswappedProcessCommitRelease @ 0x14066B248
 * Callers:
 *     MiReleaseOutSwappedProcessCommit @ 0x140424B70 (MiReleaseOutSwappedProcessCommit.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x14042C374 (_tlgCreate1Sz_char.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void MiLogOutswappedProcessCommitRelease()
{
  __int64 v0; // r9
  __int64 v1; // r9
  int v2; // ecx
  __int64 v3; // r11
  __int64 v4; // r8
  __int64 v5; // r10
  int v6; // [rsp+20h] [rbp-59h]
  int v7; // [rsp+28h] [rbp-51h]
  int v8; // [rsp+40h] [rbp-39h] BYREF
  __int64 v9; // [rsp+48h] [rbp-31h] BYREF
  __int64 v10; // [rsp+50h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+60h] [rbp-19h] BYREF
  char v12[16]; // [rsp+80h] [rbp+7h] BYREF
  int *v13; // [rsp+90h] [rbp+17h]
  int v14; // [rsp+98h] [rbp+1Fh]
  int v15; // [rsp+9Ch] [rbp+23h]
  __int64 *v16; // [rsp+A0h] [rbp+27h]
  int v17; // [rsp+A8h] [rbp+2Fh]
  int v18; // [rsp+ACh] [rbp+33h]
  __int64 *v19; // [rsp+B0h] [rbp+37h]
  int v20; // [rsp+B8h] [rbp+3Fh]
  int v21; // [rsp+BCh] [rbp+43h]

  if ( *(_QWORD *)&qword_140E37658
    && **(_DWORD **)&qword_140E37658 > 5u
    && tlgKeywordOn(*(__int64 *)&qword_140E37658, 4LL) )
  {
    tlgCreate1Sz_char((__int64)v12, (const CHAR *)(v0 + 824));
    v2 = *(_DWORD *)(v1 + 464);
    v15 = 0;
    v18 = 0;
    v21 = 0;
    v13 = &v8;
    v8 = v2;
    v16 = &v9;
    v19 = &v10;
    v17 = 8;
    v20 = 8;
    v14 = 4;
    v9 = v3;
    v10 = v4;
    tlgWriteEx_EtwWriteEx(v5, (unsigned __int8 *)&unk_140056C80, v4, 1u, v6, v7, 6u, &v11);
  }
}
