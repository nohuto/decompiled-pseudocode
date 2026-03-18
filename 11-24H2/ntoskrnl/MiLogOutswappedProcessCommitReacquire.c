/*
 * XREFs of MiLogOutswappedProcessCommitReacquire @ 0x140669F18
 * Callers:
 *     MiReAcquireOutSwappedProcessCommit @ 0x14066A288 (MiReAcquireOutSwappedProcessCommit.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140426AF0 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x1404397B4 (_tlgCreate1Sz_char.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404A083C (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

void __fastcall MiLogOutswappedProcessCommitReacquire(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v5; // r11
  __int64 v6; // r8
  __int64 v7; // r10
  __int64 v8; // r11
  char *v9; // rdx
  __int64 v10; // r11
  __int64 v11; // r11
  int v12; // ecx
  int v13; // [rsp+20h] [rbp-39h]
  int v14; // [rsp+28h] [rbp-31h]
  int v15; // [rsp+40h] [rbp-19h] BYREF
  __int64 v16; // [rsp+48h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+50h] [rbp-9h] BYREF
  _BYTE v18[16]; // [rsp+70h] [rbp+17h] BYREF
  int *v19; // [rsp+80h] [rbp+27h]
  int v20; // [rsp+88h] [rbp+2Fh]
  int v21; // [rsp+8Ch] [rbp+33h]
  __int64 *v22; // [rsp+90h] [rbp+37h]
  int v23; // [rsp+98h] [rbp+3Fh]
  int v24; // [rsp+9Ch] [rbp+43h]

  if ( *(_QWORD *)&qword_140E37518 )
  {
    if ( a3 )
    {
      if ( a4 )
      {
        if ( **(_DWORD **)&qword_140E37518 > 5u && tlgKeywordOn(*(__int64 *)&qword_140E37518, 4LL) )
        {
          tlgCreate1Sz_char((__int64)v18, (const CHAR *)(v10 + 824));
          v9 = byte_140056143;
          goto LABEL_13;
        }
      }
      else if ( **(_DWORD **)&qword_140E37518 > 5u && tlgKeywordOn(*(__int64 *)&qword_140E37518, 4LL) )
      {
        tlgCreate1Sz_char((__int64)v18, (const CHAR *)(v11 + 824));
        v9 = (char *)&byte_140056197;
        goto LABEL_13;
      }
    }
    else if ( **(_DWORD **)&qword_140E37518 > 5u && tlgKeywordOn(*(__int64 *)&qword_140E37518, 4LL) )
    {
      tlgCreate1Sz_char((__int64)v18, (const CHAR *)(v5 + 824));
      v9 = byte_1400560F3;
LABEL_13:
      v12 = *(_DWORD *)(v8 + 464);
      v21 = 0;
      v24 = 0;
      v19 = &v15;
      v22 = &v16;
      v15 = v12;
      v20 = v6;
      v16 = a2;
      v23 = 8;
      tlgWriteEx_EtwWriteEx(v7, (unsigned __int8 *)v9, v6, 1u, v13, v14, 5u, &v17);
    }
  }
}
