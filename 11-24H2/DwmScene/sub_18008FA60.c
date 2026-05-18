/*
 * XREFs of sub_18008FA60 @ 0x18008FA60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18000B6A4 @ 0x18000B6A4 (sub_18000B6A4.c)
 *     atexit @ 0x18000BB2C (atexit.c)
 *     _Init_thread_footer @ 0x18000C9D8 (_Init_thread_footer.c)
 *     sub_18000CA40 @ 0x18000CA40 (sub_18000CA40.c)
 *     sub_18008D6A4 @ 0x18008D6A4 (sub_18008D6A4.c)
 *     sub_18008DA68 @ 0x18008DA68 (sub_18008DA68.c)
 *     sub_18008DBEC @ 0x18008DBEC (sub_18008DBEC.c)
 *     sub_180090E90 @ 0x180090E90 (sub_180090E90.c)
 */

// Hidden C++ exception states: #wind=13
char __fastcall sub_18008FA60(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  char *v6; // rbx
  _BYTE v8[4]; // [rsp+20h] [rbp-E0h] BYREF
  int v9; // [rsp+24h] [rbp-DCh] BYREF
  _BYTE v10[24]; // [rsp+28h] [rbp-D8h] BYREF
  _BYTE v11[40]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v12[40]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v13[40]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v14[40]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v15[40]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v16[40]; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v17[40]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v18[40]; // [rsp+158h] [rbp+58h] BYREF
  _BYTE v19[40]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v20[40]; // [rsp+1A8h] [rbp+A8h] BYREF
  _BYTE v21[40]; // [rsp+1D0h] [rbp+D0h] BYREF
  char v22; // [rsp+1F8h] [rbp+F8h] BYREF

  v3 = *(unsigned int *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex) + 16LL);
  if ( dword_1801C9A58 > (int)v3 )
  {
    sub_18000CA40(&dword_1801C9A58);
    if ( dword_1801C9A58 == -1 )
    {
      v8[0] = 0;
      sub_18008D6A4((__int64)v11, (__int64)&unk_1801C7DD8, v8);
      v8[0] = 0;
      sub_18008D6A4((__int64)v12, (__int64)&unk_1801C7D18, v8);
      v8[0] = 0;
      sub_18008D6A4((__int64)v13, (__int64)&unk_1801C7F18, v8);
      v8[0] = 2;
      sub_18008D6A4((__int64)v14, (__int64)&unk_1801C7E18, v8);
      v8[0] = 2;
      sub_18008D6A4((__int64)v15, (__int64)&unk_1801C7D38, v8);
      v8[0] = 3;
      sub_18008D6A4((__int64)v16, (__int64)&unk_1801C7DF8, v8);
      v8[0] = 3;
      sub_18008D6A4((__int64)v17, (__int64)&unk_1801C7D78, v8);
      v8[0] = 1;
      sub_18008D6A4((__int64)v18, (__int64)&unk_1801C7E38, v8);
      v8[0] = 1;
      sub_18008D6A4((__int64)v19, (__int64)&unk_1801C7DB8, v8);
      v8[0] = 5;
      sub_18008D6A4((__int64)v20, (__int64)&unk_1801C7E78, v8);
      v8[0] = 5;
      sub_18008D6A4((__int64)v21, (__int64)&unk_1801C7D98, v8);
      v9 = 0;
      sub_18008DBEC(v4, &v9);
      v6 = v11;
      do
      {
        sub_18008DA68(v5, (__int64)v10, (__int64)v6);
        v6 += 40;
      }
      while ( v6 != &v22 );
      sub_18000B6A4((__int64)v11, 40LL, 11LL, (void (__fastcall *)(__int64))sub_180011020);
      atexit(sub_1800E9C90);
      Init_thread_footer(&dword_1801C9A58);
    }
  }
  return *(_BYTE *)sub_180090E90(v3, a2);
}
