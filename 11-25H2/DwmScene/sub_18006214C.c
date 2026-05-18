/*
 * XREFs of sub_18006214C @ 0x18006214C
 * Callers:
 *     sub_180061850 @ 0x180061850 (sub_180061850.c)
 * Callees:
 *     sub_1800323A0 @ 0x1800323A0 (sub_1800323A0.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18006214C(__int64 a1)
{
  __int64 v2; // rcx
  __int64 (__fastcall *v3)(__int64, _QWORD *); // rax
  _QWORD v5[9]; // [rsp+20h] [rbp-48h] BYREF

  v2 = sub_1800323A0(a1, 1);
  v5[1] = a1;
  v3 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v2 + 8LL);
  v5[0] = &std::_Func_impl_no_alloc<_lambda_fc5806797b07904940ba13a2a5c07b95_,void,std::wstring const &>::`vftable';
  v5[7] = v5;
  return v3(v2, v5);
}
