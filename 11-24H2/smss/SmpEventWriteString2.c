/*
 * XREFs of SmpEventWriteString2 @ 0x14000D86C
 * Callers:
 *     SmpProcessFileRenames @ 0x1400176FC (SmpProcessFileRenames.c)
 * Callees:
 *     __security_check_cookie @ 0x14001EFC0 (__security_check_cookie.c)
 */

void __fastcall SmpEventWriteString2(__int64 a1, unsigned __int16 *a2, unsigned __int16 *a3)
{
  int v5; // ecx
  int v6; // r8d
  unsigned __int16 v7; // ax
  __int64 v8; // rax
  __int16 v9; // [rsp+20h] [rbp-60h] BYREF
  __int16 v10; // [rsp+24h] [rbp-5Ch] BYREF
  __int16 *v11; // [rsp+30h] [rbp-50h] BYREF
  int v12; // [rsp+38h] [rbp-48h]
  int v13; // [rsp+3Ch] [rbp-44h]
  __int16 *v14; // [rsp+40h] [rbp-40h]
  int v15; // [rsp+48h] [rbp-38h]
  int v16; // [rsp+4Ch] [rbp-34h]
  __int64 v17; // [rsp+50h] [rbp-30h]
  int v18; // [rsp+58h] [rbp-28h]
  int v19; // [rsp+5Ch] [rbp-24h]
  __int64 v20; // [rsp+60h] [rbp-20h]
  int v21; // [rsp+68h] [rbp-18h]
  int v22; // [rsp+6Ch] [rbp-14h]

  if ( SmpTraceHandle )
  {
    if ( EtwEventEnabled(SmpTraceHandle, &SmssEvt_FileRename_Info) )
    {
      v5 = *a2;
      v6 = *a3;
      v7 = *a2;
      v13 = 0;
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v9 = v7 >> 1;
      v10 = (unsigned __int16)v6 >> 1;
      v11 = &v9;
      v14 = &v10;
      v17 = *((_QWORD *)a2 + 1);
      v8 = *((_QWORD *)a3 + 1);
      v12 = 2;
      v15 = 2;
      v18 = v5;
      v21 = v6;
      v20 = v8;
      EtwEventWrite(SmpTraceHandle, &SmssEvt_FileRename_Info, 4LL, &v11);
    }
  }
}
