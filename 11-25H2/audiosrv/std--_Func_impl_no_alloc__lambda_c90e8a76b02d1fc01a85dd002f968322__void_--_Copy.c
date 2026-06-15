/*
 * XREFs of std::_Func_impl_no_alloc__lambda_c90e8a76b02d1fc01a85dd002f968322__void_::_Copy @ 0x180104210
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x180060820 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_c90e8a76b02d1fc01a85dd002f968322__void_::_Copy(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 result; // rax

  *(_QWORD *)a2 = off_18016C6C8;
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 8);
  std::shared_ptr<std::wstring>::shared_ptr<std::wstring>((_QWORD *)(a2 + 16), (_QWORD *)(a1 + 16));
  result = v3;
  *(_QWORD *)(v3 + 32) = *(_QWORD *)(v2 + 32);
  return result;
}
