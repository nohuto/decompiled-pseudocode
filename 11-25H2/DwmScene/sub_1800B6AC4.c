/*
 * XREFs of sub_1800B6AC4 @ 0x1800B6AC4
 * Callers:
 *     sub_1800BABC0 @ 0x1800BABC0 (sub_1800BABC0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_180011B30 @ 0x180011B30 (sub_180011B30.c)
 *     sub_180012408 @ 0x180012408 (sub_180012408.c)
 *     sub_180025E18 @ 0x180025E18 (sub_180025E18.c)
 *     sub_18004F02C @ 0x18004F02C (sub_18004F02C.c)
 */

int __fastcall sub_1800B6AC4(__int64 *a1)
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
  sub_180011B30((__int64)(a1 + 2));
  v7[0] = _std_type_info_hash(&qword_1801B9588);
  v3 = *(_QWORD *)sub_18004F02C(a1, (__int64)v8, v7);
  v9[0] = &std::_Func_impl_no_alloc<_lambda_74281c84ea322a35b112587499033771_,std::shared_ptr<Spectre::Engine::RendererResource>,>::`vftable';
  v9[7] = v9;
  v11 = 0LL;
  sub_180025E18((__int64)v10, (__int64)v9);
  sub_180025E18((__int64)v9, v3 + 40);
  sub_180025E18(v3 + 40, (__int64)v10);
  sub_180012408((__int64)v10, v4);
  sub_180012408((__int64)v9, v5);
  return Mtx_unlock(v2);
}
