/*
 * XREFs of MiLogCreateImageFileMapFailure @ 0x1407EC61C
 * Callers:
 *     MiCreateImageFileMap @ 0x14098DFC0 (MiCreateImageFileMap.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x14042C374 (_tlgCreate1Sz_char.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void MiLogCreateImageFileMapFailure()
{
  __int64 v0; // r11
  int v1; // r9d
  __int64 v2; // r8
  __int64 v3; // r10
  int v4; // [rsp+20h] [rbp-69h]
  int v5; // [rsp+28h] [rbp-61h]
  int v6; // [rsp+40h] [rbp-49h] BYREF
  int v7; // [rsp+44h] [rbp-45h] BYREF
  __int64 v8; // [rsp+48h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+50h] [rbp-39h] BYREF
  _BYTE v10[16]; // [rsp+70h] [rbp-19h] BYREF
  _DWORD *v11; // [rsp+80h] [rbp-9h]
  int v12; // [rsp+88h] [rbp-1h]
  int v13; // [rsp+8Ch] [rbp+3h]
  __int64 v14; // [rsp+90h] [rbp+7h]
  _DWORD v15[2]; // [rsp+98h] [rbp+Fh] BYREF
  int *v16; // [rsp+A0h] [rbp+17h]
  int v17; // [rsp+A8h] [rbp+1Fh]
  int v18; // [rsp+ACh] [rbp+23h]
  int *v19; // [rsp+B0h] [rbp+27h]
  int v20; // [rsp+B8h] [rbp+2Fh]
  int v21; // [rsp+BCh] [rbp+33h]
  __int64 *v22; // [rsp+C0h] [rbp+37h]
  int v23; // [rsp+C8h] [rbp+3Fh]
  int v24; // [rsp+CCh] [rbp+43h]

  if ( *(_QWORD *)&qword_140E37658
    && **(_DWORD **)&qword_140E37658 > 2u
    && tlgKeywordOn(*(__int64 *)&qword_140E37658, 0x400000004000LL) )
  {
    tlgCreate1Sz_char((__int64)v10, "SectionAlignmentIssue");
    v13 = 0;
    v15[1] = 0;
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v11 = v15;
    v14 = *(_QWORD *)(v0 + 96);
    v15[0] = *(unsigned __int16 *)(v0 + 88);
    v16 = &v6;
    v19 = &v7;
    v17 = 4;
    v20 = 4;
    v22 = &v8;
    v7 = v1;
    v23 = 8;
    v12 = 2;
    v6 = v2;
    v8 = 0x1000000LL;
    tlgWriteEx_EtwWriteEx(v3, (unsigned __int8 *)&byte_140056F25, v2, 1u, v4, v5, 8u, &v9);
  }
}
