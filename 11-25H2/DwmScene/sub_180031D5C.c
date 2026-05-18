/*
 * XREFs of sub_180031D5C @ 0x180031D5C
 * Callers:
 *     sub_18003178C @ 0x18003178C (sub_18003178C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_18001C99C @ 0x18001C99C (sub_18001C99C.c)
 *     sub_18002851C @ 0x18002851C (sub_18002851C.c)
 *     sub_18002BCB4 @ 0x18002BCB4 (sub_18002BCB4.c)
 *     sub_18002BF54 @ 0x18002BF54 (sub_18002BF54.c)
 *     sub_180032A24 @ 0x180032A24 (sub_180032A24.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_180031D5C(_QWORD *a1, _QWORD *a2)
{
  unsigned int v4; // r15d
  __int64 v5; // rax
  _QWORD *v6; // rax
  void (__fastcall *v7)(_QWORD *, _QWORD *); // r8
  _QWORD *v8; // rcx
  __int64 *v9; // rdi
  __int64 *v10; // r14
  unsigned __int64 v11; // rdi
  _QWORD *v12; // rdx
  __int64 result; // rax
  __int64 v14; // rcx
  _BYTE v15[16]; // [rsp+38h] [rbp-71h] BYREF
  _BYTE v16[16]; // [rsp+48h] [rbp-61h] BYREF
  _BYTE v17[16]; // [rsp+58h] [rbp-51h] BYREF
  __int64 v18; // [rsp+68h] [rbp-41h] BYREF
  __int64 v19; // [rsp+70h] [rbp-39h]
  _QWORD v20[7]; // [rsp+90h] [rbp-19h] BYREF
  _QWORD *v21; // [rsp+C8h] [rbp+1Fh]

  sub_18002851C((__int64)(a1 + 1), (__int64)v17);
  sub_18002851C((__int64)(a1 + 138), (__int64)v16);
  sub_18002851C(*a2 + 24LL, (__int64)v15);
  v4 = *(_DWORD *)(*a2 + 244LL);
  v5 = sub_18002BF54((__int64)&v18, *a2 + 80LL);
  sub_1800137F8(v5);
  sub_18001C99C(&stru_1801B8288, 3);
  sub_180011A5C((__int64)&v18);
  v6 = unknown_libname_81(&v18, a2);
  v7(a1, v6);
  unknown_libname_81(&v18, a2);
  v20[0] = &std::_Func_impl_no_alloc<_lambda_d2182d05379cb014900636156d153b19_,void,std::shared_ptr<Spectre::Engine::Component> const &>::`vftable';
  v20[1] = v18;
  v20[2] = v19;
  v8 = v20;
  v21 = v20;
  v9 = (__int64 *)a1[88];
  v10 = (__int64 *)a1[89];
  if ( v9 != v10 )
  {
    do
    {
      sub_18002851C(*v9 + 16, (__int64)&v18);
      sub_18002BCB4(*v9, (__int64)v20);
      sub_180010F44((__int64)&v18);
      v9 += 2;
    }
    while ( v9 != v10 );
    v8 = v21;
  }
  v11 = 0LL;
  if ( (__int64)(a1[112] - a1[111]) >> 4 )
  {
    do
    {
      sub_180032A24(a1, &v18, v11);
      if ( v18 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v18 + 24LL))(v18, v4);
      if ( v19 )
        sub_18001050C(v19);
      ++v11;
    }
    while ( v11 < (__int64)(a1[112] - a1[111]) >> 4 );
    v8 = v21;
  }
  if ( v8 )
  {
    v12 = v20;
    LOBYTE(v12) = v8 != v20;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v8 + 32LL))(v8, v12);
    v21 = 0LL;
  }
  sub_180010F44((__int64)v15);
  sub_180010F44((__int64)v16);
  result = sub_180010F44((__int64)v17);
  v14 = a2[1];
  if ( v14 )
    return sub_18001050C(v14);
  return result;
}
