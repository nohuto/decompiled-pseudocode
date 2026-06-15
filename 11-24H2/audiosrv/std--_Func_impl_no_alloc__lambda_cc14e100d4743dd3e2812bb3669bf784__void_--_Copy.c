/*
 * XREFs of std::_Func_impl_no_alloc__lambda_cc14e100d4743dd3e2812bb3669bf784__void_::_Copy @ 0x18010EF60
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18010B6D0 (--0-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA@AEBV01.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_cc14e100d4743dd3e2812bb3669bf784__void_::_Copy(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)a2 = off_18017D880;
  std::vector<Microsoft::WRL::WeakRef>::vector<Microsoft::WRL::WeakRef>((__int64 **)(a2 + 8), (__int64 **)(a1 + 8));
  return a2;
}
