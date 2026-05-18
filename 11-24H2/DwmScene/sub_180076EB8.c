/*
 * XREFs of sub_180076EB8 @ 0x180076EB8
 * Callers:
 *     sub_18002C204 @ 0x18002C204 (sub_18002C204.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180012508 @ 0x180012508 (sub_180012508.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_18005AA08 @ 0x18005AA08 (sub_18005AA08.c)
 *     sub_180073BD8 @ 0x180073BD8 (sub_180073BD8.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_180076EB8(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  _QWORD v6[8]; // [rsp+30h] [rbp-58h] BYREF

  v2 = sub_180017054((__int64)v6, (__int64)&unk_1801C9498);
  sub_18005AA08((__int64)a1, v2);
  *a1 = &Spectre::Engine::BackgroundUnlitShaderExtension::`vftable';
  v6[0] = &std::_Func_impl_no_alloc<_lambda_bf891fdd623fe213d977bbf9c972eb66_,void,Spectre::Engine::LightConstants *>::`vftable';
  v6[7] = v6;
  v3 = o__aligned_malloc(592LL, 16LL);
  sub_180073BD8((__int64)(a1 + 14), v3, (__int64)v6);
  sub_180012508((__int64)v6, v4);
  return a1;
}
