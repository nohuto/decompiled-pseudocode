/*
 * XREFs of MiLogWsEmptyControl @ 0x1404A993C
 * Callers:
 *     MmProcessWorkingSetControl @ 0x140A434A4 (MmProcessWorkingSetControl.c)
 * Callees:
 *     _tlgCreate1Sz_char @ 0x14042C374 (_tlgCreate1Sz_char.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall MiLogWsEmptyControl(__int64 a1)
{
  const CHAR *v1; // rdx
  int v3; // eax
  int v4; // r10d
  int v5; // r11d
  __int64 v6; // r8
  int v7; // [rsp+20h] [rbp-49h]
  int v8; // [rsp+28h] [rbp-41h]
  char v9; // [rsp+40h] [rbp-29h] BYREF
  int v10; // [rsp+44h] [rbp-25h] BYREF
  int v11; // [rsp+48h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+50h] [rbp-19h] BYREF
  char *v13; // [rsp+70h] [rbp+7h]
  int v14; // [rsp+78h] [rbp+Fh]
  int v15; // [rsp+7Ch] [rbp+13h]
  _BYTE v16[16]; // [rsp+80h] [rbp+17h] BYREF
  int *v17; // [rsp+90h] [rbp+27h]
  int v18; // [rsp+98h] [rbp+2Fh]
  int v19; // [rsp+9Ch] [rbp+33h]
  int *v20; // [rsp+A0h] [rbp+37h]
  int v21; // [rsp+A8h] [rbp+3Fh]
  int v22; // [rsp+ACh] [rbp+43h]

  if ( *(_QWORD *)&qword_140E37658 )
  {
    v1 = (*(_DWORD *)(a1 + 184) & 0xF) != 0 ? 0LL : (const CHAR *)(a1 - 200);
    if ( **(_DWORD **)&qword_140E37658 > 5u
      && (*(_BYTE *)(*(_QWORD *)&qword_140E37658 + 16LL) & 0x10) != 0
      && (*(_QWORD *)(*(_QWORD *)&qword_140E37658 + 24LL) & 0x10LL) == *(_QWORD *)(*(_QWORD *)&qword_140E37658 + 24LL) )
    {
      v3 = *(_DWORD *)(a1 + 184);
      v15 = 0;
      v9 = v3 & 0xF;
      v13 = &v9;
      v14 = 1;
      tlgCreate1Sz_char((__int64)v16, v1);
      v19 = 0;
      v22 = 0;
      v17 = &v10;
      v18 = 4;
      v20 = &v11;
      v21 = 4;
      v10 = v4;
      v11 = v5;
      tlgWriteEx_EtwWriteEx(v6, (unsigned __int8 *)&byte_140058435, v6, 1u, v7, v8, 6u, &v12);
    }
  }
}
