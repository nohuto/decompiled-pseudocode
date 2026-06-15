/*
 * XREFs of _lambda_9779933831ecf7631e1f1e31bfa66ff4_::operator() @ 0x180105814
 * Callers:
 *     wil::details::lambda_call__lambda_9779933831ecf7631e1f1e31bfa66ff4___::_lambda_call__lambda_9779933831ecf7631e1f1e31bfa66ff4___ @ 0x1801056C0 (wil--details--lambda_call__lambda_9779933831ecf7631e1f1e31bfa66ff4___--_lambda_call__lambda_9779.c)
 *     ?StopStream_Internal@CVADServer@@IEAAJXZ @ 0x180108548 (-StopStream_Internal@CVADServer@@IEAAJXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180017580 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?reset@?$shared_ptr@VCPowerReference@@@std@@QEAAXXZ @ 0x180055AC4 (-reset@-$shared_ptr@VCPowerReference@@@std@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B488 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??4?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18005DEC4 (--4-$shared_ptr@V-$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

void __fastcall lambda_9779933831ecf7631e1f1e31bfa66ff4_::operator()(struct _RTL_CRITICAL_SECTION **a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 *v3; // rdx
  std::_Ref_count_base *v4[2]; // [rsp+20h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+40h] [rbp+8h] BYREF

  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&(*a1)[13]);
  v2 = *a1 + 11;
  *(_OWORD *)v4 = 0LL;
  EnterCriticalSection(v2);
  v3 = (__int64 *)&(*a1)[12];
  v5 = v2;
  std::shared_ptr<std::function<void (void)>>::operator=(v4, v3);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v5);
  std::shared_ptr<CPowerReference>::reset(v4);
  if ( v4[1] )
    std::_Ref_count_base::_Decref(v4[1]);
}
