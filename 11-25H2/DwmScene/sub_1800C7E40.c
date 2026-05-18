/*
 * XREFs of sub_1800C7E40 @ 0x1800C7E40
 * Callers:
 *     sub_1800C84D0 @ 0x1800C84D0 (sub_1800C84D0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_180012408 @ 0x180012408 (sub_180012408.c)
 *     sub_180025E18 @ 0x180025E18 (sub_180025E18.c)
 */

__int64 __fastcall sub_1800C7E40(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int64 v5; // rdx
  __int64 v6; // rdx
  void **v8; // [rsp+20h] [rbp-39h] BYREF
  __int128 v9; // [rsp+28h] [rbp-31h]
  __int128 v10; // [rsp+38h] [rbp-21h]
  __int64 v11; // [rsp+48h] [rbp-11h]
  void ***v12; // [rsp+58h] [rbp-1h]
  _BYTE v13[56]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v14; // [rsp+98h] [rbp+3Fh]

  v2 = *a2;
  v14 = 0LL;
  v3 = a2[1];
  v8 = &std::_Func_impl_no_alloc<_lambda_5efd0f16faa6f6439fdb99826dc3e8ab_,void,std::shared_ptr<Spectre::Engine::Texture>,enum Spectre::Engine::Format,unsigned int>::`vftable';
  v9 = v2;
  v11 = *((_QWORD *)a2 + 4);
  v10 = v3;
  v12 = &v8;
  sub_180025E18((__int64)v13, (__int64)&v8);
  sub_180025E18((__int64)&v8, a1);
  sub_180025E18(a1, (__int64)v13);
  sub_180012408((__int64)v13, v5);
  sub_180012408((__int64)&v8, v6);
  return a1;
}
