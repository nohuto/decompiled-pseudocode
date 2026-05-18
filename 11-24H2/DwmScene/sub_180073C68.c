/*
 * XREFs of sub_180073C68 @ 0x180073C68
 * Callers:
 *     sub_180073C48 @ 0x180073C48 (sub_180073C48.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001229C @ 0x18001229C (sub_18001229C.c)
 *     sub_18003E858 @ 0x18003E858 (sub_18003E858.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

_QWORD *__fastcall sub_180073C68(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rdx
  unsigned __int64 v6[3]; // [rsp+28h] [rbp-11h] BYREF
  _QWORD v7[7]; // [rsp+40h] [rbp+7h] BYREF
  _QWORD *v8; // [rsp+78h] [rbp+3Fh]

  v6[1] = (unsigned __int64)a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v6[0] = 32LL;
  sub_18001229C(a2, v6);
  v7[0] = &std::_Func_impl_no_alloc<_lambda_7184ac0b1d10aa8b036768733263c113_,void,std::shared_ptr<Spectre::Engine::SceneNode const> const &>::`vftable';
  v7[1] = a2;
  v8 = v7;
  sub_18003E858(a1, (__int64)v7);
  if ( v8 )
  {
    v4 = v7;
    LOBYTE(v4) = v8 != v7;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v8 + 32LL))(v8, v4);
  }
  return a2;
}
