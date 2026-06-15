/*
 * XREFs of std::_Func_impl_no_alloc__lambda_918e4e49d297a413fd0aa649d8f0eebd__void_::_Copy @ 0x1800C0FC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x180060820 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_918e4e49d297a413fd0aa649d8f0eebd__void_::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 result; // rax

  *a2 = off_180170E58;
  a2[1] = *(_QWORD *)(a1 + 8);
  std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(a2 + 2, (_QWORD *)(a1 + 16));
  result = v3;
  *(_OWORD *)(v3 + 32) = *(_OWORD *)(v2 + 32);
  return result;
}
