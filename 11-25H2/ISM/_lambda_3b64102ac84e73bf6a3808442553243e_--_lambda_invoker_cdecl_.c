/*
 * XREFs of _lambda_3b64102ac84e73bf6a3808442553243e_::_lambda_invoker_cdecl_ @ 0x1800BB5B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_ptr@V?$function@$$A6AXXZ@std@@U?$default_delete@V?$function@$$A6AXXZ@std@@@2@@std@@QEAA@XZ @ 0x1800BBA70 (--1-$unique_ptr@V-$function@$$A6AXXZ@std@@U-$default_delete@V-$function@$$A6AXXZ@std@@@2@@std@@Q.c)
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x1800BBD08 (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_3b64102ac84e73bf6a3808442553243e_::_lambda_invoker_cdecl_(__int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  std::_Func_class<void,>::operator()();
  std::unique_ptr<std::function<void (void)>>::~unique_ptr<std::function<void (void)>>(&v2);
  return 0LL;
}
