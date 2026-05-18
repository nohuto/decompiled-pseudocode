/*
 * XREFs of sub_18009C108 @ 0x18009C108
 * Callers:
 *     sub_180002FD0 @ 0x180002FD0 (sub_180002FD0.c)
 *     sub_180003150 @ 0x180003150 (sub_180003150.c)
 *     sub_1800031C0 @ 0x1800031C0 (sub_1800031C0.c)
 *     sub_180003230 @ 0x180003230 (sub_180003230.c)
 *     sub_1800032A0 @ 0x1800032A0 (sub_1800032A0.c)
 *     sub_180003310 @ 0x180003310 (sub_180003310.c)
 *     sub_180003380 @ 0x180003380 (sub_180003380.c)
 *     sub_1800033F0 @ 0x1800033F0 (sub_1800033F0.c)
 *     sub_180003460 @ 0x180003460 (sub_180003460.c)
 *     sub_1800034D0 @ 0x1800034D0 (sub_1800034D0.c)
 *     sub_180003540 @ 0x180003540 (sub_180003540.c)
 *     sub_1800035B0 @ 0x1800035B0 (sub_1800035B0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x18000C9D8 (_Init_thread_footer.c)
 *     sub_18000CA40 @ 0x18000CA40 (sub_18000CA40.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_18001B5A8 @ 0x18001B5A8 (sub_18001B5A8.c)
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     sub_1800737C8 @ 0x1800737C8 (sub_1800737C8.c)
 *     sub_18007386C @ 0x18007386C (sub_18007386C.c)
 *     sub_18009BF00 @ 0x18009BF00 (sub_18009BF00.c)
 */

// Hidden C++ exception states: #wind=18
__int64 sub_18009C108()
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
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int128 v26; // [rsp+28h] [rbp-89h]
  __int128 v27; // [rsp+28h] [rbp-89h]
  __int128 v28; // [rsp+28h] [rbp-89h]
  __int128 v29; // [rsp+28h] [rbp-89h]
  __int128 v30; // [rsp+28h] [rbp-89h]
  __int128 v31; // [rsp+28h] [rbp-89h]
  __int128 v32; // [rsp+38h] [rbp-79h] BYREF
  __int128 v33; // [rsp+48h] [rbp-69h]
  __int128 v34; // [rsp+58h] [rbp-59h] BYREF
  __int128 v35; // [rsp+68h] [rbp-49h]
  _QWORD v36[4]; // [rsp+78h] [rbp-39h] BYREF
  _BYTE v37[32]; // [rsp+98h] [rbp-19h] BYREF
  _QWORD v38[4]; // [rsp+B8h] [rbp+7h] BYREF

  v0 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  if ( dword_1801C9C70 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801C9C70);
    if ( dword_1801C9C70 == -1 )
    {
      *(_QWORD *)&v26 = &unk_180138160;
      *((_QWORD *)&v26 + 1) = &unk_180138A2C;
      *(_QWORD *)&v33 = 0x100000005LL;
      v1 = sub_18009BF00();
      v2 = sub_1800737C8(v38, 1LL, (__int64)v1, 3);
      v3 = sub_18001B678((__int64)v37, (__int64)"ImageProcessingBlur/ShaderModel40/", v2);
      v4 = sub_18001B5A8((__int64)v36, v3, (__int64)"/Pixel");
      v34 = v26;
      v35 = v33;
      sub_18007386C(v4, (__int64)&v34);
      sub_180011B5C((__int64)v37);
      sub_180011B5C((__int64)v38);
      Init_thread_footer(&dword_1801C9C70);
    }
  }
  if ( dword_1801C9C74 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801C9C74);
    if ( dword_1801C9C74 == -1 )
    {
      *(_QWORD *)&v27 = &unk_180138A30;
      *((_QWORD *)&v27 + 1) = &unk_1801395EC;
      *(_QWORD *)&v35 = 0x100000005LL;
      v5 = sub_18009BF00();
      v6 = sub_1800737C8(v36, 2LL, (__int64)v5, 3);
      v7 = sub_18001B678((__int64)v37, (__int64)"ImageProcessingBlur/ShaderModel40/", v6);
      v8 = sub_18001B5A8((__int64)v38, v7, (__int64)"/Pixel");
      v32 = v27;
      v33 = v35;
      sub_18007386C(v8, (__int64)&v32);
      sub_180011B5C((__int64)v37);
      sub_180011B5C((__int64)v36);
      Init_thread_footer(&dword_1801C9C74);
    }
  }
  if ( dword_1801C9C78 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801C9C78);
    if ( dword_1801C9C78 == -1 )
    {
      *(_QWORD *)&v28 = &unk_1801395F0;
      *((_QWORD *)&v28 + 1) = &unk_18013A78C;
      *(_QWORD *)&v35 = 0x100000005LL;
      v9 = sub_18009BF00();
      v10 = sub_1800737C8(v36, 4LL, (__int64)v9, 3);
      v11 = sub_18001B678((__int64)v37, (__int64)"ImageProcessingBlur/ShaderModel40/", v10);
      v12 = sub_18001B5A8((__int64)v38, v11, (__int64)"/Pixel");
      v32 = v28;
      v33 = v35;
      sub_18007386C(v12, (__int64)&v32);
      sub_180011B5C((__int64)v37);
      sub_180011B5C((__int64)v36);
      Init_thread_footer(&dword_1801C9C78);
    }
  }
  if ( dword_1801C9C7C > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801C9C7C);
    if ( dword_1801C9C7C == -1 )
    {
      *(_QWORD *)&v29 = &unk_1801378F0;
      *((_QWORD *)&v29 + 1) = &unk_180137EDC;
      *(_QWORD *)&v35 = 0x100000001LL;
      v13 = sub_18009BF00();
      v14 = sub_1800737C8(v36, 1LL, (__int64)v13, 3);
      v15 = sub_18001B678((__int64)v37, (__int64)"ImageProcessingBlur/ShaderModel40/", v14);
      v16 = sub_18001B5A8((__int64)v38, v15, (__int64)"/Vertex");
      v32 = v29;
      v33 = v35;
      sub_18007386C(v16, (__int64)&v32);
      sub_180011B5C((__int64)v37);
      sub_180011B5C((__int64)v36);
      Init_thread_footer(&dword_1801C9C7C);
    }
  }
  if ( dword_1801C9C80 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801C9C80);
    if ( dword_1801C9C80 == -1 )
    {
      *(_QWORD *)&v30 = &unk_1801378F0;
      *((_QWORD *)&v30 + 1) = &unk_180137EDC;
      *(_QWORD *)&v35 = 0x100000001LL;
      v17 = sub_18009BF00();
      v18 = sub_1800737C8(v36, 2LL, (__int64)v17, 3);
      v19 = sub_18001B678((__int64)v37, (__int64)"ImageProcessingBlur/ShaderModel40/", v18);
      v20 = sub_18001B5A8((__int64)v38, v19, (__int64)"/Vertex");
      v32 = v30;
      v33 = v35;
      sub_18007386C(v20, (__int64)&v32);
      sub_180011B5C((__int64)v37);
      sub_180011B5C((__int64)v36);
      Init_thread_footer(&dword_1801C9C80);
    }
  }
  if ( dword_1801C9C84 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801C9C84);
    if ( dword_1801C9C84 == -1 )
    {
      *(_QWORD *)&v31 = &unk_1801378F0;
      *((_QWORD *)&v31 + 1) = &unk_180137EDC;
      *(_QWORD *)&v35 = 0x100000001LL;
      v21 = sub_18009BF00();
      v22 = sub_1800737C8(v36, 4LL, (__int64)v21, 3);
      v23 = sub_18001B678((__int64)v37, (__int64)"ImageProcessingBlur/ShaderModel40/", v22);
      v24 = sub_18001B5A8((__int64)v38, v23, (__int64)"/Vertex");
      v32 = v31;
      v33 = v35;
      sub_18007386C(v24, (__int64)&v32);
      sub_180011B5C((__int64)v37);
      sub_180011B5C((__int64)v36);
      Init_thread_footer(&dword_1801C9C84);
    }
  }
  return 0LL;
}
