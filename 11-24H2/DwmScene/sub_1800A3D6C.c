/*
 * XREFs of sub_1800A3D6C @ 0x1800A3D6C
 * Callers:
 *     sub_180002FC0 @ 0x180002FC0 (sub_180002FC0.c)
 *     sub_180003140 @ 0x180003140 (sub_180003140.c)
 *     sub_1800031B0 @ 0x1800031B0 (sub_1800031B0.c)
 *     sub_180003220 @ 0x180003220 (sub_180003220.c)
 *     sub_180003290 @ 0x180003290 (sub_180003290.c)
 *     sub_180003300 @ 0x180003300 (sub_180003300.c)
 *     sub_180003370 @ 0x180003370 (sub_180003370.c)
 *     sub_1800033E0 @ 0x1800033E0 (sub_1800033E0.c)
 *     sub_180003450 @ 0x180003450 (sub_180003450.c)
 *     sub_1800034C0 @ 0x1800034C0 (sub_1800034C0.c)
 *     sub_180003530 @ 0x180003530 (sub_180003530.c)
 *     sub_1800035A0 @ 0x1800035A0 (sub_1800035A0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x18000C9D8 (_Init_thread_footer.c)
 *     sub_18000CA40 @ 0x18000CA40 (sub_18000CA40.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_18001B5A8 @ 0x18001B5A8 (sub_18001B5A8.c)
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     sub_1800737C8 @ 0x1800737C8 (sub_1800737C8.c)
 *     sub_18007386C @ 0x18007386C (sub_18007386C.c)
 *     sub_1800A3CF0 @ 0x1800A3CF0 (sub_1800A3CF0.c)
 */

// Hidden C++ exception states: #wind=6
__int64 sub_1800A3D6C()
{
  __int64 v0; // rbx
  _QWORD *v1; // rax
  _QWORD *v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int128 v10; // [rsp+28h] [rbp-79h]
  __int128 v11; // [rsp+28h] [rbp-79h]
  __int128 v12; // [rsp+38h] [rbp-69h] BYREF
  __int128 v13; // [rsp+48h] [rbp-59h]
  __int128 v14; // [rsp+58h] [rbp-49h] BYREF
  __int128 v15; // [rsp+68h] [rbp-39h]
  _QWORD v16[4]; // [rsp+78h] [rbp-29h] BYREF
  _BYTE v17[32]; // [rsp+98h] [rbp-9h] BYREF
  _QWORD v18[4]; // [rsp+B8h] [rbp+17h] BYREF

  v0 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  if ( dword_1801C9FA8 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801C9FA8);
    if ( dword_1801C9FA8 == -1 )
    {
      *(_QWORD *)&v10 = &unk_18013A7B0;
      *((_QWORD *)&v10 + 1) = &unk_18013AD14;
      *(_QWORD *)&v13 = 0x100000005LL;
      v1 = sub_1800A3CF0();
      v2 = sub_1800737C8(v18, 0LL, (__int64)v1, 0);
      v3 = sub_18001B678((__int64)v17, (__int64)"Font/ShaderModel40/", v2);
      v4 = sub_18001B5A8((__int64)v16, v3, (__int64)"/Pixel");
      v14 = v10;
      v15 = v13;
      sub_18007386C(v4, (__int64)&v14);
      sub_180011B5C((__int64)v17);
      sub_180011B5C((__int64)v18);
      Init_thread_footer(&dword_1801C9FA8);
    }
  }
  if ( dword_1801C9FAC > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801C9FAC);
    if ( dword_1801C9FAC == -1 )
    {
      *(_QWORD *)&v11 = &unk_18013AD20;
      *((_QWORD *)&v11 + 1) = &unk_18013AFC4;
      *(_QWORD *)&v15 = 0x100000001LL;
      v5 = sub_1800A3CF0();
      v6 = sub_1800737C8(v16, 0LL, (__int64)v5, 0);
      v7 = sub_18001B678((__int64)v17, (__int64)"Font/ShaderModel40/", v6);
      v8 = sub_18001B5A8((__int64)v18, v7, (__int64)"/Vertex");
      v12 = v11;
      v13 = v15;
      sub_18007386C(v8, (__int64)&v12);
      sub_180011B5C((__int64)v17);
      sub_180011B5C((__int64)v16);
      Init_thread_footer(&dword_1801C9FAC);
    }
  }
  return 0LL;
}
