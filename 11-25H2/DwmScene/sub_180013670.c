/*
 * XREFs of sub_180013670 @ 0x180013670
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180013198 @ 0x180013198 (sub_180013198.c)
 *     sub_180041B44 @ 0x180041B44 (sub_180041B44.c)
 *     sub_180041CD8 @ 0x180041CD8 (sub_180041CD8.c)
 *     sub_18007C138 @ 0x18007C138 (sub_18007C138.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180013670(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // r9
  __int128 *v9; // rax
  char v10; // bl
  __int64 v11; // r9
  __int128 *v12; // rax
  char v13; // bl
  __int64 v14; // rbx
  void *v15; // rax
  __int64 v16; // r8
  __int64 result; // rax
  __int128 v18; // [rsp+28h] [rbp-70h] BYREF
  __int64 v19; // [rsp+38h] [rbp-60h]
  __int64 v20; // [rsp+40h] [rbp-58h] BYREF
  __int64 v21; // [rsp+48h] [rbp-50h]
  __int64 retaddr; // [rsp+98h] [rbp+0h]

  v19 = a2;
  v8 = *(_QWORD *)(a1 + 16);
  if ( a3 )
  {
    v9 = (__int128 *)unknown_libname_81(&v20, (_QWORD *)(a3 + 16));
    v10 = 1;
  }
  else
  {
    v18 = 0LL;
    v9 = &v18;
    v10 = 2;
  }
  try
  {
    sub_180041B44(v8, a2, v9);
    if ( (v10 & 2) != 0 )
    {
      v10 &= ~2u;
      if ( *((_QWORD *)&v18 + 1) )
        sub_18001050C(*((__int64 *)&v18 + 1));
    }
    if ( (v10 & 1) != 0 )
    {
      v10 &= ~1u;
      if ( v21 )
        sub_18001050C(v21);
    }
    v11 = *(_QWORD *)(a1 + 16);
    if ( a4 )
    {
      v12 = (__int128 *)unknown_libname_81(&v20, (_QWORD *)(a4 + 16));
      v13 = v10 | 4;
    }
    else
    {
      v18 = 0LL;
      v12 = &v18;
      v13 = v10 | 8;
    }
    sub_180041CD8(v11, a2, v12);
    if ( (v13 & 8) != 0 )
    {
      v13 &= ~8u;
      if ( *((_QWORD *)&v18 + 1) )
        sub_18001050C(*((__int64 *)&v18 + 1));
    }
    if ( (v13 & 4) != 0 && v21 )
      sub_18001050C(v21);
    v14 = *(_QWORD *)(a1 + 16);
    v15 = sub_180013198(&v20, a2, (__int64)&unk_1801C6CE8);
    LOBYTE(v16) = a3 != 0;
    sub_18007C138(*(_QWORD *)(v14 + 120), v15, v16);
    sub_180011A5C((__int64)&v20);
    sub_180011A5C(a2);
    result = 0LL;
  }
  catch ( ... )
  {
    sub_18000F0E4(
      retaddr,
      249LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrematerial.cpp",
      2147500037LL);
    sub_180011A5C(v19);
    return 2147500037LL;
  }
  return result;
}
