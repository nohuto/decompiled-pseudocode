/*
 * XREFs of sub_180014170 @ 0x180014170
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18001258C @ 0x18001258C (sub_18001258C.c)
 *     sub_180013DD4 @ 0x180013DD4 (sub_180013DD4.c)
 *     sub_18002851C @ 0x18002851C (sub_18002851C.c)
 *     sub_180049780 @ 0x180049780 (sub_180049780.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_180014170(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int128 *v5; // rax
  char v6; // bl
  _QWORD *v7; // rdx
  __int64 v8; // r8
  __int64 result; // rax
  __int64 v10; // [rsp+20h] [rbp-68h] BYREF
  __int64 v11; // [rsp+28h] [rbp-60h]
  __int128 v12; // [rsp+30h] [rbp-58h] BYREF
  __int64 v13; // [rsp+40h] [rbp-48h] BYREF
  __int64 v14; // [rsp+48h] [rbp-40h]
  __int64 v15; // [rsp+50h] [rbp-38h] BYREF
  __int64 v16; // [rsp+60h] [rbp-28h] BYREF
  __int64 v17; // [rsp+68h] [rbp-20h]
  _BYTE v18[24]; // [rsp+70h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+88h] [rbp+0h]

  try
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
    unknown_libname_81(&v10, (_QWORD *)(v3 + 32));
    v4 = *(_QWORD *)sub_18001258C(v10, &v12) + 16LL;
    sub_18002851C(v4, v18);
    if ( *((_QWORD *)&v12 + 1) )
      sub_18001050C(*((__int64 *)&v12 + 1));
    sub_180013DD4(v10, &v13);
    if ( a2 )
    {
      v5 = (__int128 *)unknown_libname_81(&v16, (_QWORD *)(a2 + 16));
      v6 = 1;
    }
    else
    {
      v12 = 0LL;
      v5 = &v12;
      v6 = 2;
    }
    v7 = unknown_libname_81(&v15, v5);
    sub_180049780(v8, v7);
    if ( (v6 & 2) != 0 )
    {
      v6 &= ~2u;
      if ( *((_QWORD *)&v12 + 1) )
        sub_18001050C(*((__int64 *)&v12 + 1));
    }
    if ( (v6 & 1) != 0 && v17 )
      sub_18001050C(v17);
    if ( v14 )
      sub_18001050C(v14);
    sub_180010F44((__int64)v18);
    if ( v11 )
      sub_18001050C(v11);
    result = 0LL;
  }
  catch ( ... )
  {
    sub_18000F0E4(
      retaddr,
      87LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectremeshcomponent.cpp",
      2147500037LL);
    return 2147500037LL;
  }
  return result;
}
