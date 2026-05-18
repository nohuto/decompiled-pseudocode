/*
 * XREFs of sub_180015E84 @ 0x180015E84
 * Callers:
 *     sub_1800187C0 @ 0x1800187C0 (sub_1800187C0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_180012344 @ 0x180012344 (sub_180012344.c)
 *     sub_180013128 @ 0x180013128 (sub_180013128.c)
 *     sub_18003E770 @ 0x18003E770 (sub_18003E770.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_180015E84(__int64 a1, _QWORD *a2, __int64 a3)
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
  v6 = sub_180012344((__int64)v9, a3);
  v11[0] = &std::_Func_impl_no_alloc<_lambda_e4f8b105d577d0521f3737a824532f0c_,bool,std::shared_ptr<Spectre::Engine::SceneNode> const &>::`vftable';
  v11[1] = a2;
  v12 = v11;
  sub_18003E770(a1, v11, v6);
  if ( v12 )
  {
    v7 = v11;
    LOBYTE(v7) = v12 != v11;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v12 + 32LL))(v12, v7);
  }
  sub_180013128(a3);
  return a2;
}
