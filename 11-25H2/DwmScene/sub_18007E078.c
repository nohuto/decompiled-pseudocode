/*
 * XREFs of sub_18007E078 @ 0x18007E078
 * Callers:
 *     sub_18004126C @ 0x18004126C (sub_18004126C.c)
 *     sub_18007D894 @ 0x18007D894 (sub_18007D894.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_18004C918 @ 0x18004C918 (sub_18004C918.c)
 *     sub_18005BC94 @ 0x18005BC94 (sub_18005BC94.c)
 *     sub_18007E1A8 @ 0x18007E1A8 (sub_18007E1A8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18007E078(__int64 a1, __int64 *a2, int a3)
{
  __int64 v3; // r15
  _QWORD *v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rbp
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  __int64 v14; // [rsp+28h] [rbp-60h] BYREF
  __int64 v15; // [rsp+30h] [rbp-58h]
  __int64 v16; // [rsp+38h] [rbp-50h] BYREF
  __int64 v17; // [rsp+40h] [rbp-48h]
  _BYTE v18[40]; // [rsp+48h] [rbp-40h] BYREF

  v3 = a3;
  v6 = (_QWORD *)(a1 + 16 * (a3 + 24LL));
  if ( *v6 )
  {
    unknown_libname_81(a2, v6);
  }
  else if ( *(_QWORD *)(a1 + 32 * (a3 + 6LL) + 16) )
  {
    v7 = *(_QWORD *)sub_18005BC94(*(_QWORD *)(a1 + 16), &v16);
    v9 = sub_180016F54((__int64)v18, v8);
    sub_18004C918(v7, &v14, v9);
    if ( v17 )
      sub_18001050C(v17);
    v10 = v14;
    if ( v14 )
    {
      v11 = unknown_libname_81(&v16, &v14);
      sub_18007E1A8(a1, (unsigned int)v3);
      sub_18001244C((__int64 *)(a1 + 16 * (v3 + 24)), v11);
      v12 = v11[1];
      if ( v12 )
        sub_18001050C(v12);
      *a2 = v10;
      a2[1] = v15;
    }
    else
    {
      *a2 = 0LL;
      a2[1] = 0LL;
      if ( v15 )
        sub_18001050C(v15);
    }
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  return a2;
}
