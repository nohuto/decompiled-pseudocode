/*
 * XREFs of sub_180058644 @ 0x180058644
 * Callers:
 *     sub_180057C10 @ 0x180057C10 (sub_180057C10.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18004D2AC @ 0x18004D2AC (sub_18004D2AC.c)
 *     sub_18004D2C8 @ 0x18004D2C8 (sub_18004D2C8.c)
 *     sub_18004D300 @ 0x18004D300 (sub_18004D300.c)
 *     sub_18005755C @ 0x18005755C (sub_18005755C.c)
 *     sub_180058F20 @ 0x180058F20 (sub_180058F20.c)
 *     sub_180078578 @ 0x180078578 (sub_180078578.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_180058644(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  char v5; // r12
  char v6; // al
  char v7; // r15
  __int64 v8; // r14
  __int128 *v9; // rax
  __int128 *v10; // rax
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int64 v15; // [rsp+28h] [rbp-79h] BYREF
  __int64 v16; // [rsp+30h] [rbp-71h]
  __int64 v17; // [rsp+38h] [rbp-69h] BYREF
  __int64 v18; // [rsp+40h] [rbp-61h]
  __int64 v19; // [rsp+48h] [rbp-59h] BYREF
  __int64 v20; // [rsp+50h] [rbp-51h]
  __int128 v21; // [rsp+58h] [rbp-49h] BYREF
  __int128 v22; // [rsp+68h] [rbp-39h]
  __int128 v23; // [rsp+78h] [rbp-29h]
  __int128 v24; // [rsp+88h] [rbp-19h]
  _BYTE v25[8]; // [rsp+98h] [rbp-9h] BYREF
  __int64 v26; // [rsp+A0h] [rbp-1h]
  _BYTE v27[64]; // [rsp+A8h] [rbp+7h] BYREF

  if ( *(_DWORD *)(a1 + 172) )
  {
    unknown_libname_81(&v19, (_QWORD *)(a1 + 152));
    v4 = v19;
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v19 + 48LL))(v19, v25);
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v4 + 72LL))(
           v4,
           a2,
           *(unsigned int *)(a1 + 172));
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 72LL))(v4, a2, 3LL);
    v7 = v6;
    if ( v5 || v6 )
    {
      v8 = *(_QWORD *)(sub_180078578(a1) + 512);
      if ( *(_QWORD *)(a1 + 200) && v5 )
      {
        (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v4 + 56LL))(
          v4,
          &v15,
          *(unsigned int *)(a1 + 172));
        (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v4 + 64LL))(
          v4,
          &v17,
          *(unsigned int *)(a1 + 172));
        sub_18004D2C8(v8, a1 + 184, &v15);
        sub_18004D300(v8, a1 + 184, &v17);
        if ( v18 )
          sub_18001060C(v18);
        if ( v16 )
          sub_18001060C(v16);
      }
      if ( *(_QWORD *)(a1 + 232) )
      {
        if ( v7 )
        {
          (*(void (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v4 + 56LL))(v4, &v15, 3LL);
          sub_18004D2C8(v8, a1 + 216, &v15);
          if ( v16 )
            sub_18001060C(v16);
        }
      }
      if ( *(_QWORD *)(a1 + 264) )
      {
        v9 = (__int128 *)sub_18005755C(a1, 2, 0);
        v21 = *v9;
        v22 = v9[1];
        v23 = v9[2];
        v24 = v9[3];
        v10 = (__int128 *)sub_180058F20(&v21, v27);
        v11 = v10[1];
        v12 = v10[2];
        v13 = v10[3];
        v21 = *v10;
        v22 = v11;
        v23 = v12;
        v24 = v13;
        sub_18004D2AC(v8);
      }
    }
    if ( v26 )
      sub_18001060C(v26);
    if ( v20 )
      sub_18001060C(v20);
  }
  return 1;
}
