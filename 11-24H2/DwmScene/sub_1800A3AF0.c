/*
 * XREFs of sub_1800A3AF0 @ 0x1800A3AF0
 * Callers:
 *     sub_180002FF0 @ 0x180002FF0 (sub_180002FF0.c)
 *     sub_180003170 @ 0x180003170 (sub_180003170.c)
 *     sub_1800031E0 @ 0x1800031E0 (sub_1800031E0.c)
 *     sub_180003250 @ 0x180003250 (sub_180003250.c)
 *     sub_1800032C0 @ 0x1800032C0 (sub_1800032C0.c)
 *     sub_180003330 @ 0x180003330 (sub_180003330.c)
 *     sub_1800033A0 @ 0x1800033A0 (sub_1800033A0.c)
 *     sub_180003410 @ 0x180003410 (sub_180003410.c)
 *     sub_180003480 @ 0x180003480 (sub_180003480.c)
 *     sub_1800034F0 @ 0x1800034F0 (sub_1800034F0.c)
 *     sub_180003560 @ 0x180003560 (sub_180003560.c)
 *     sub_1800035D0 @ 0x1800035D0 (sub_1800035D0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x18000C9D8 (_Init_thread_footer.c)
 *     sub_18000CA40 @ 0x18000CA40 (sub_18000CA40.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_18001B5A8 @ 0x18001B5A8 (sub_18001B5A8.c)
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     sub_1800737C8 @ 0x1800737C8 (sub_1800737C8.c)
 *     sub_18007386C @ 0x18007386C (sub_18007386C.c)
 *     sub_18009C08C @ 0x18009C08C (sub_18009C08C.c)
 */

// Hidden C++ exception states: #wind=6
__int64 sub_1800A3AF0()
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
  if ( dword_1801C9CB0 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801C9CB0);
    if ( dword_1801C9CB0 == -1 )
    {
      *(_QWORD *)&v10 = &unk_180137EE0;
      *((_QWORD *)&v10 + 1) = &unk_180138160;
      *(_QWORD *)&v13 = 0x100000005LL;
      v1 = sub_18009C08C();
      v2 = sub_1800737C8(v18, 0LL, (__int64)v1, 0);
      v3 = sub_18001B678((__int64)v17, (__int64)"ImageProcessingFullscreen/ShaderModel40/", v2);
      v4 = sub_18001B5A8((__int64)v16, v3, (__int64)"/Pixel");
      v14 = v10;
      v15 = v13;
      sub_18007386C(v4, (__int64)&v14);
      sub_180011B5C((__int64)v17);
      sub_180011B5C((__int64)v18);
      Init_thread_footer(&dword_1801C9CB0);
    }
  }
  if ( dword_1801C9CB4 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801C9CB4);
    if ( dword_1801C9CB4 == -1 )
    {
      *(_QWORD *)&v11 = &unk_1801378F0;
      *((_QWORD *)&v11 + 1) = &unk_180137EDC;
      *(_QWORD *)&v15 = 0x100000001LL;
      v5 = sub_18009C08C();
      v6 = sub_1800737C8(v16, 0LL, (__int64)v5, 0);
      v7 = sub_18001B678((__int64)v17, (__int64)"ImageProcessingFullscreen/ShaderModel40/", v6);
      v8 = sub_18001B5A8((__int64)v18, v7, (__int64)"/Vertex");
      v12 = v11;
      v13 = v15;
      sub_18007386C(v8, (__int64)&v12);
      sub_180011B5C((__int64)v17);
      sub_180011B5C((__int64)v16);
      Init_thread_footer(&dword_1801C9CB4);
    }
  }
  return 0LL;
}
