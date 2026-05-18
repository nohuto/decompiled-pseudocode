/*
 * XREFs of sub_180073E78 @ 0x180073E78
 * Callers:
 *     sub_18002C390 @ 0x18002C390 (sub_18002C390.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180012508 @ 0x180012508 (sub_180012508.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_180073BD8 @ 0x180073BD8 (sub_180073BD8.c)
 *     sub_18008DC8C @ 0x18008DC8C (sub_18008DC8C.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_180073E78(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  _QWORD v6[8]; // [rsp+30h] [rbp-58h] BYREF

  v2 = sub_180017054((__int64)v6, (__int64)&unk_1801C8ED8);
  sub_18008DC8C(a1, v2);
  *a1 = &Spectre::Engine::StandardShaderExtension::`vftable';
  v6[0] = &std::_Func_impl_no_alloc<_lambda_615f747b56e4a572d73a4444551448e6_,void,Spectre::Engine::LightConstants *>::`vftable';
  v6[7] = v6;
  v3 = o__aligned_malloc(592LL, 16LL);
  sub_180073BD8((__int64)(a1 + 19), v3, (__int64)v6);
  sub_180012508((__int64)v6, v4);
  return a1;
}
