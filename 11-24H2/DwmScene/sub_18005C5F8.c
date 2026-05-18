/*
 * XREFs of sub_18005C5F8 @ 0x18005C5F8
 * Callers:
 *     sub_180066E54 @ 0x180066E54 (sub_180066E54.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180012508 @ 0x180012508 (sub_180012508.c)
 *     sub_180025F78 @ 0x180025F78 (sub_180025F78.c)
 */

__int64 __fastcall sub_18005C5F8(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdx
  _QWORD v6[8]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v7[56]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v8; // [rsp+98h] [rbp-20h]

  v8 = 0LL;
  v6[0] = &std::_Func_impl_no_alloc<_lambda_947c2138106fe11b43b65bbf065188b9_,void,Spectre::Engine::ImageProcessingEffect const &,std::shared_ptr<Spectre::Engine::Texture> const &>::`vftable';
  v6[1] = *a2;
  v6[7] = v6;
  sub_180025F78((__int64)v7, (__int64)v6);
  sub_180025F78((__int64)v6, a1);
  sub_180025F78(a1, (__int64)v7);
  sub_180012508((__int64)v7, v3);
  sub_180012508((__int64)v6, v4);
  return a1;
}
