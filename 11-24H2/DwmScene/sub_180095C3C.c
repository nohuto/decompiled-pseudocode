/*
 * XREFs of sub_180095C3C @ 0x180095C3C
 * Callers:
 *     sub_180095D4C @ 0x180095D4C (sub_180095D4C.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_18002811C @ 0x18002811C (sub_18002811C.c)
 *     sub_1800282BC @ 0x1800282BC (sub_1800282BC.c)
 *     sub_180095FEC @ 0x180095FEC (sub_180095FEC.c)
 *     sub_180097738 @ 0x180097738 (sub_180097738.c)
 */

// Hidden C++ exception states: #wind=4
__int64 *__fastcall sub_180095C3C(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 *v9; // r14
  __int64 v10; // rdi
  _QWORD *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  _BYTE v17[8]; // [rsp+38h] [rbp-60h] BYREF
  __int64 v18; // [rsp+40h] [rbp-58h]
  __int64 v19; // [rsp+48h] [rbp-50h] BYREF
  _BYTE v20[40]; // [rsp+58h] [rbp-40h] BYREF

  sub_18002811C(a1);
  sub_180095FEC(a1, v17, a3);
  if ( v17[0] )
  {
    v9 = (__int64 *)(a1 + 64 + 16 * v18);
    v10 = *v9;
    v11 = unknown_libname_81(&v19, a5);
    v12 = sub_180017054((__int64)v20, a4);
    v13 = sub_180097738(v10, v12, v11);
    v14 = v9[1];
    if ( v14 )
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
    v15 = v9[1];
    *a2 = 0LL;
    a2[1] = 0LL;
    if ( v15 )
    {
      *a2 = v13;
      a2[1] = v15;
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 12));
      sub_18001060C(v15);
    }
    sub_1800282BC(a1);
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    sub_1800282BC(a1);
  }
  return a2;
}
