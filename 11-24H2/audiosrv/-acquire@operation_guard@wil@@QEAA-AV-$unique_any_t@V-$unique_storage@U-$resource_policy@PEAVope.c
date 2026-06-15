/*
 * XREFs of ?acquire@operation_guard@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1?release_operation_guard_reference@details@2@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800D975C
 * Callers:
 *     ??1operation_guard@wil@@QEAA@XZ @ 0x1800D27EC (--1operation_guard@wil@@QEAA@XZ.c)
 *     wistd::__function::__func__lambda_b6ef742704f6e3ba5e1d5817de19ce35__void___cdecl(void)_::operator() @ 0x1800D28B0 (wistd--__function--__func__lambda_b6ef742704f6e3ba5e1d5817de19ce35__void___cdecl(void)_--operato.c)
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_1d5316dfea7a7918102eba328e746dc2_@@X$$V@std@@EEAAXXZ @ 0x1800D8C60 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_1d5316dfea7a7918102eba328e746dc2_@@X$$V@std@@EEAAXXZ.c)
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_0d7505061d5fe897f28fc80eab3d553f_@@X_N@std@@EEAAX$$QEA_N@Z @ 0x1800D8CF0 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_0d7505061d5fe897f28fc80eab3d553f_@@X_N@std@@EEAAX$$QEA_.c)
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_d59dcad96ba54600a1284eacbd3c7034_@@X_N@std@@EEAAX$$QEA_N@Z @ 0x1800D8D40 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_d59dcad96ba54600a1284eacbd3c7034_@@X_N@std@@EEAAX$$QEA_.c)
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_eb7a3b5b11052349d6949419e1210a70_@@X$$V@std@@EEAAXXZ @ 0x1800D8D90 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_eb7a3b5b11052349d6949419e1210a70_@@X$$V@std@@EEAAXXZ.c)
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_f54142638d21adc8792a19c40bc87039_@@X$$V@std@@EEAAXXZ @ 0x1800D8DE0 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_f54142638d21adc8792a19c40bc87039_@@X$$V@std@@EEAAXXZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wil::operation_guard::acquire(__int64 a1, _QWORD *a2)
{
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 4));
  if ( *(_BYTE *)(a1 + 8) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4), 0xFFFFFFFF) == 1 )
    {
      *(_DWORD *)a1 = 1;
      WakeByAddressAll((PVOID)a1);
    }
    *a2 = 0LL;
  }
  else
  {
    *a2 = a1;
  }
  return a2;
}
