/*
 * XREFs of ?_Copy@?$_Func_impl_no_alloc@V_lambda_0d7505061d5fe897f28fc80eab3d553f_@@X_N@std@@EEBAPEAV?$_Func_base@X_N@2@PEAX@Z @ 0x1800D8A40
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x180052E14 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc<_lambda_0d7505061d5fe897f28fc80eab3d553f_,void,bool>::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r8

  *a2 = &std::_Func_impl_no_alloc<_lambda_0d7505061d5fe897f28fc80eab3d553f_,void,bool>::`vftable';
  a2[1] = *(_QWORD *)(a1 + 8);
  std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(a2 + 2, (_QWORD *)(a1 + 16));
  return v2;
}
