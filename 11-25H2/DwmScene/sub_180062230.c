/*
 * XREFs of sub_180062230 @ 0x180062230
 * Callers:
 *     <none>
 * Callees:
 *     j_unknown_libname_81 @ 0x180012000 (j_unknown_libname_81.c)
 *     sub_18002C478 @ 0x18002C478 (sub_18002C478.c)
 *     sub_180036708 @ 0x180036708 (sub_180036708.c)
 *     sub_18004D168 @ 0x18004D168 (sub_18004D168.c)
 *     sub_18004D1A0 @ 0x18004D1A0 (sub_18004D1A0.c)
 *     sub_1800526DC @ 0x1800526DC (sub_1800526DC.c)
 *     sub_180052B80 @ 0x180052B80 (sub_180052B80.c)
 *     sub_180052D2C @ 0x180052D2C (sub_180052D2C.c)
 *     sub_180053CCC @ 0x180053CCC (sub_180053CCC.c)
 *     sub_18005D65C @ 0x18005D65C (sub_18005D65C.c)
 *     sub_18005D728 @ 0x18005D728 (sub_18005D728.c)
 *     sub_18005DE1C @ 0x18005DE1C (sub_18005DE1C.c)
 *     sub_18005E49C @ 0x18005E49C (sub_18005E49C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180062230(_QWORD *a1, __int64 *a2, _QWORD *a3, __int64 a4, __int64 a5)
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
    sub_180052B80(v26, (__int64)a3);
    sub_18005E49C(v26[0], v26[1]);
    sub_18005D65C(*a2, &v24);
    sub_18005E49C(v24, v25);
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
            sub_1800526DC((__int64 *)&v19, (__int64)v12, v11);
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
    v13 = sub_18005D728(*a2, v9);
    v14 = (_QWORD *)(v13 + 136);
    v21 = 0LL;
    v22 = 0LL;
    sub_180053CCC((__int64 *)&v21, 3uLL);
    v15 = v13 + 184;
    v16 = (_QWORD *)v21;
    while ( v14 != (_QWORD *)v15 )
    {
      sub_18005DE1C(v15, v16, v14);
      v16 += 2;
      v14 += 2;
    }
    sub_18002C478((__int64)v16, (__int64)v16);
    *((_QWORD *)&v21 + 1) = v16;
    v27 = 0LL;
    sub_180052D2C(&v27);
    v17 = a1[64];
    v23 = 0LL;
    sub_18004D168(v17, (__int64)&unk_1801C7928, &v23);
    v23 = 0LL;
    sub_18004D1A0(v17, (__int64)&unk_1801C7928, &v23);
    v18 = a5;
    (*(void (__fastcall **)(_QWORD *, __int64 *, __int64, __int64))(*a1 + 112LL))(a1, a2, a4, a5);
    (*(void (__fastcall **)(_QWORD *, __int128 *, __int64, __int64))(*a1 + 160LL))(a1, &v21, a4, v18);
    (*(void (__fastcall **)(_QWORD *, __int128 *, __int64, __int64))(*a1 + 160LL))(a1, &v19, a4, v18);
    (*(void (__fastcall **)(_QWORD *, __int64 **, __int64, __int64))(*a1 + 160LL))(a1, v26, a4, v18);
    (*(void (__fastcall **)(_QWORD *, __int64 *, __int64, __int64))(*a1 + 136LL))(a1, a2, a4, v18);
    sub_180036708((__int64)&v21);
    sub_180036708((__int64)&v19);
    sub_180036708((__int64)&v24);
    return sub_180036708((__int64)v26);
  }
  return result;
}
