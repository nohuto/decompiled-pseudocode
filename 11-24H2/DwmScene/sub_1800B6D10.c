/*
 * XREFs of sub_1800B6D10 @ 0x1800B6D10
 * Callers:
 *     sub_1800BAD20 @ 0x1800BAD20 (sub_1800BAD20.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180011C30 @ 0x180011C30 (sub_180011C30.c)
 *     sub_180012508 @ 0x180012508 (sub_180012508.c)
 *     sub_180025F78 @ 0x180025F78 (sub_180025F78.c)
 *     sub_18004F18C @ 0x18004F18C (sub_18004F18C.c)
 */

int __fastcall sub_1800B6D10(__int64 *a1)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rdx
  _QWORD v7[2]; // [rsp+20h] [rbp-59h] BYREF
  _BYTE v8[16]; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v9[8]; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v10[56]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v11; // [rsp+B8h] [rbp+3Fh]

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 2);
  v7[1] = a1 + 2;
  sub_180011C30((__int64)(a1 + 2));
  v7[0] = _std_type_info_hash(&qword_1801BA638);
  v3 = *(_QWORD *)sub_18004F18C(a1, (__int64)v8, v7);
  v9[0] = &std::_Func_impl_no_alloc<_lambda_70a7c175e000a2384906e3376e592082_,std::shared_ptr<Spectre::Engine::RendererResource>,>::`vftable';
  v9[7] = v9;
  v11 = 0LL;
  sub_180025F78((__int64)v10, (__int64)v9);
  sub_180025F78((__int64)v9, v3 + 40);
  sub_180025F78(v3 + 40, (__int64)v10);
  sub_180012508((__int64)v10, v4);
  sub_180012508((__int64)v9, v5);
  return Mtx_unlock(v2);
}
