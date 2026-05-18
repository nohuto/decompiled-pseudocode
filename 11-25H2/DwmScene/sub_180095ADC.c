/*
 * XREFs of sub_180095ADC @ 0x180095ADC
 * Callers:
 *     sub_180095BEC @ 0x180095BEC (sub_180095BEC.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_180027FBC @ 0x180027FBC (sub_180027FBC.c)
 *     sub_18002815C @ 0x18002815C (sub_18002815C.c)
 *     sub_180095E8C @ 0x180095E8C (sub_180095E8C.c)
 *     sub_1800975D8 @ 0x1800975D8 (sub_1800975D8.c)
 */

// Hidden C++ exception states: #wind=4
__int64 *__fastcall sub_180095ADC(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, _QWORD *a5)
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

  sub_180027FBC(a1);
  sub_180095E8C(a1, v17, a3);
  if ( v17[0] )
  {
    v9 = (__int64 *)(a1 + 64 + 16 * v18);
    v10 = *v9;
    v11 = unknown_libname_81(&v19, a5);
    v12 = sub_180016F54((__int64)v20, a4);
    v13 = sub_1800975D8(v10, v12, v11);
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
      sub_18001050C(v15);
    }
    sub_18002815C(a1);
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    sub_18002815C(a1);
  }
  return a2;
}
