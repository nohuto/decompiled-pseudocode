/*
 * XREFs of sub_18006220C @ 0x18006220C
 * Callers:
 *     sub_1800619B0 @ 0x1800619B0 (sub_1800619B0.c)
 * Callees:
 *     sub_180032500 @ 0x180032500 (sub_180032500.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18006220C(__int64 a1)
{
  __int64 v2; // rcx
  __int64 (__fastcall *v3)(__int64, _QWORD *); // rax
  _QWORD v5[9]; // [rsp+20h] [rbp-48h] BYREF

  v2 = sub_180032500(a1, 1);
  v5[1] = a1;
  v3 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v2 + 8LL);
  v5[0] = &std::_Func_impl_no_alloc<_lambda_718c83fccd190710b454871d75af9a8f_,void,std::wstring const &>::`vftable';
  v5[7] = v5;
  return v3(v2, v5);
}
