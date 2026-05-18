/*
 * XREFs of sub_180014880 @ 0x180014880
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_18000F0E4 @ 0x18000F0E4 (sub_18000F0E4.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18001258C @ 0x18001258C (sub_18001258C.c)
 *     sub_180014644 @ 0x180014644 (sub_180014644.c)
 *     sub_18002851C @ 0x18002851C (sub_18002851C.c)
 *     sub_18003DBF8 @ 0x18003DBF8 (sub_18003DBF8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180014880(__int64 a1, __int64 *a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  _QWORD *v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // rax
  __int64 v10; // [rsp+20h] [rbp-40h] BYREF
  __int64 v11; // [rsp+28h] [rbp-38h]
  __int64 v12; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+38h] [rbp-28h]
  _BYTE v14[16]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h] BYREF
  __int64 retaddr; // [rsp+78h] [rbp+18h]
  __int64 v17; // [rsp+80h] [rbp+20h] BYREF

  v3 = (_QWORD *)(a1 + 32);
  sub_18001258C(*(_QWORD *)(a1 + 32), &v12);
  v4 = v12;
  sub_18002851C(v12 + 16, v14);
  v5 = unknown_libname_81(&v15, v3);
  sub_18003DBF8(v4, &v10, -1LL, v5);
  v17 = 0LL;
  sub_18000E854(&v17);
  v6 = sub_180014644(&v17, &v10);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = v17;
    v17 = 0LL;
    *a2 = v9;
    sub_18000E854(&v17);
    if ( v11 )
      sub_18001050C(v11);
    sub_180010F44((__int64)v14);
    if ( v13 )
      sub_18001050C(v13);
    return 0LL;
  }
  else
  {
    sub_18000F0E4(
      retaddr,
      82LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrenode.cpp",
      (unsigned int)v6);
    sub_18000E854(&v17);
    if ( v11 )
      sub_18001050C(v11);
    sub_180010F44((__int64)v14);
    if ( v13 )
      sub_18001050C(v13);
    return v7;
  }
}
