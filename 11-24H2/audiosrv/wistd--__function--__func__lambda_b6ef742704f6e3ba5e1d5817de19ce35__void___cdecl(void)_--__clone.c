/*
 * XREFs of wistd::__function::__func__lambda_b6ef742704f6e3ba5e1d5817de19ce35__void___cdecl(void)_::__clone @ 0x1800D95B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x180052E14 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 */

_QWORD *__fastcall wistd::__function::__func__lambda_b6ef742704f6e3ba5e1d5817de19ce35__void___cdecl_void__::__clone(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *result; // rax
  __int64 v3; // r9
  __int64 v4; // r8

  *a2 = &off_18017BFB8;
  result = std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(a2 + 1, (_QWORD *)(a1 + 8));
  *(_QWORD *)(v4 + 16) = *(_QWORD *)(v3 + 16);
  return result;
}
