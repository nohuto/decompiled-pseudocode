/*
 * XREFs of sub_180076D58 @ 0x180076D58
 * Callers:
 *     sub_18002C0A4 @ 0x18002C0A4 (sub_18002C0A4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_180012408 @ 0x180012408 (sub_180012408.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_18005A8A8 @ 0x18005A8A8 (sub_18005A8A8.c)
 *     sub_180073A78 @ 0x180073A78 (sub_180073A78.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_180076D58(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  _QWORD v6[8]; // [rsp+30h] [rbp-58h] BYREF

  v2 = sub_180016F54((__int64)v6, (__int64)&unk_1801C8488);
  sub_18005A8A8((__int64)a1, v2);
  *a1 = &Spectre::Engine::BackgroundUnlitShaderExtension::`vftable';
  v6[0] = &std::_Func_impl_no_alloc<_lambda_bf891fdd623fe213d977bbf9c972eb66_,void,Spectre::Engine::LightConstants *>::`vftable';
  v6[7] = v6;
  v3 = o__aligned_malloc(592LL, 16LL);
  sub_180073A78((__int64)(a1 + 14), v3, (__int64)v6);
  sub_180012408((__int64)v6, v4);
  return a1;
}
