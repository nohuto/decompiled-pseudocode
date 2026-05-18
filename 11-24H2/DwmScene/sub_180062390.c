/*
 * XREFs of sub_180062390 @ 0x180062390
 * Callers:
 *     <none>
 * Callees:
 *     j_unknown_libname_81 @ 0x180012100 (j_unknown_libname_81.c)
 *     sub_18002C5D8 @ 0x18002C5D8 (sub_18002C5D8.c)
 *     sub_180036868 @ 0x180036868 (sub_180036868.c)
 *     sub_18004D2C8 @ 0x18004D2C8 (sub_18004D2C8.c)
 *     sub_18004D300 @ 0x18004D300 (sub_18004D300.c)
 *     sub_18005283C @ 0x18005283C (sub_18005283C.c)
 *     sub_180052CE0 @ 0x180052CE0 (sub_180052CE0.c)
 *     sub_180052E8C @ 0x180052E8C (sub_180052E8C.c)
 *     sub_180053E2C @ 0x180053E2C (sub_180053E2C.c)
 *     sub_18005D7BC @ 0x18005D7BC (sub_18005D7BC.c)
 *     sub_18005D888 @ 0x18005D888 (sub_18005D888.c)
 *     sub_18005DF7C @ 0x18005DF7C (sub_18005DF7C.c)
 *     sub_18005E5FC @ 0x18005E5FC (sub_18005E5FC.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180062390(_QWORD *a1, __int64 *a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 *v10; // rdi
  __int64 *v11; // rbx
  _QWORD *v12; // rcx
  __int64 v13; // rbx
  _QWORD *v14; // rdi
  __int64 v15; // rcx
  _QWORD *v16; // rbx
  __int64 v17; // rbx
  __int64 v18; // rbx
  __int128 v19; // [rsp+38h] [rbp-31h] BYREF
  _QWORD *v20; // [rsp+48h] [rbp-21h]
  __int128 v21; // [rsp+50h] [rbp-19h] BYREF
  __int64 v22; // [rsp+60h] [rbp-9h]
  __int128 v23; // [rsp+68h] [rbp-1h] BYREF
  __int64 *v24; // [rsp+78h] [rbp+Fh] BYREF
  __int64 *v25; // [rsp+80h] [rbp+17h]
  __int64 *v26[3]; // [rsp+90h] [rbp+27h] BYREF
  __int64 v27; // [rsp+D8h] [rbp+6Fh] BYREF

  result = a3[1];
  if ( *a3 != result )
  {
    sub_180052CE0(v26, (__int64)a3);
    sub_18005E5FC(v26[0], v26[1]);
    sub_18005D7BC(*a2, &v24);
    sub_18005E5FC(v24, v25);
    v19 = 0LL;
    v20 = 0LL;
    v10 = v25;
    v11 = v24;
    if ( v24 != v25 )
    {
      v12 = (_QWORD *)*((_QWORD *)&v19 + 1);
      do
      {
        if ( (*(_DWORD *)(*v11 + 440) & 0x200) != 0 )
        {
          if ( v12 == v20 )
          {
            sub_18005283C((__int64 *)&v19, (__int64)v12, v11);
            v12 = (_QWORD *)*((_QWORD *)&v19 + 1);
          }
          else
          {
            j_unknown_libname_81(v12, v11);
            v12 = (_QWORD *)(*((_QWORD *)&v19 + 1) + 16LL);
            *((_QWORD *)&v19 + 1) += 16LL;
          }
        }
        v11 += 2;
      }
      while ( v11 != v10 );
    }
    v13 = sub_18005D888(*a2, v9);
    v14 = (_QWORD *)(v13 + 136);
    v21 = 0LL;
    v22 = 0LL;
    sub_180053E2C((__int64 *)&v21, 3uLL);
    v15 = v13 + 184;
    v16 = (_QWORD *)v21;
    while ( v14 != (_QWORD *)v15 )
    {
      sub_18005DF7C(v15, v16, v14);
      v16 += 2;
      v14 += 2;
    }
    sub_18002C5D8((__int64)v16, (__int64)v16);
    *((_QWORD *)&v21 + 1) = v16;
    v27 = 0LL;
    sub_180052E8C(&v27);
    v17 = a1[64];
    v23 = 0LL;
    sub_18004D2C8(v17, (__int64)&unk_1801C8938, &v23);
    v23 = 0LL;
    sub_18004D300(v17, (__int64)&unk_1801C8938, &v23);
    v18 = a5;
    (*(void (__fastcall **)(_QWORD *, __int64 *, __int64, __int64))(*a1 + 112LL))(a1, a2, a4, a5);
    (*(void (__fastcall **)(_QWORD *, __int128 *, __int64, __int64))(*a1 + 160LL))(a1, &v21, a4, v18);
    (*(void (__fastcall **)(_QWORD *, __int128 *, __int64, __int64))(*a1 + 160LL))(a1, &v19, a4, v18);
    (*(void (__fastcall **)(_QWORD *, __int64 **, __int64, __int64))(*a1 + 160LL))(a1, v26, a4, v18);
    (*(void (__fastcall **)(_QWORD *, __int64 *, __int64, __int64))(*a1 + 136LL))(a1, a2, a4, v18);
    sub_180036868((__int64)&v21);
    sub_180036868((__int64)&v19);
    sub_180036868((__int64)&v24);
    return sub_180036868((__int64)v26);
  }
  return result;
}
