/*
 * XREFs of std::_Func_impl_no_alloc__lambda_55bbdd01f859b2b681de89e14de0bd19__void_::_Copy @ 0x18003D500
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x180017C44 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_55bbdd01f859b2b681de89e14de0bd19__void_::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rdx
  __int64 v3; // r9

  *a2 = off_1800540D8;
  std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(a2 + 1, (_QWORD *)(a1 + 8));
  *(_QWORD *)(v3 + 24) = *(_QWORD *)(v2 + 16);
  *(_DWORD *)(v3 + 32) = *(_DWORD *)(v2 + 24);
  *(_DWORD *)(v3 + 36) = *(_DWORD *)(v2 + 28);
  return v3;
}
