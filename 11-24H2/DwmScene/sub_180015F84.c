/*
 * XREFs of sub_180015F84 @ 0x180015F84
 * Callers:
 *     sub_180018880 @ 0x180018880 (sub_180018880.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180012444 @ 0x180012444 (sub_180012444.c)
 *     sub_180013228 @ 0x180013228 (sub_180013228.c)
 *     sub_18003E8D0 @ 0x18003E8D0 (sub_18003E8D0.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_180015F84(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rdx
  _BYTE v9[32]; // [rsp+38h] [rbp-31h] BYREF
  __int64 v10; // [rsp+58h] [rbp-11h]
  _QWORD v11[7]; // [rsp+60h] [rbp-9h] BYREF
  _QWORD *v12; // [rsp+98h] [rbp+2Fh]

  v10 = a3;
  *a2 = 0LL;
  a2[1] = 0LL;
  v6 = sub_180012444((__int64)v9, a3);
  v11[0] = &std::_Func_impl_no_alloc<_lambda_e4f8b105d577d0521f3737a824532f0c_,bool,std::shared_ptr<Spectre::Engine::SceneNode> const &>::`vftable';
  v11[1] = a2;
  v12 = v11;
  sub_18003E8D0(a1, v11, v6);
  if ( v12 )
  {
    v7 = v11;
    LOBYTE(v7) = v12 != v11;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v12 + 32LL))(v12, v7);
  }
  sub_180013228(a3);
  return a2;
}
