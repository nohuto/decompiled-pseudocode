/*
 * XREFs of ??R?$function@$$A6AXXZ@wistd@@QEBAXXZ @ 0x18009C17C
 * Callers:
 *     ?wait_callback@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x18007EF80 (-wait_callback@-$event_watcher_t@V-$unique_storage@U-$resource_policy@PEAUevent_watcher_state@de.c)
 *     ?_lambda_invoker_cdecl_@_lambda_d93655bd33d44513d4ad201382c30aa7_@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18010B140 (-_lambda_invoker_cdecl_@_lambda_d93655bd33d44513d4ad201382c30aa7_@@CAJU_WNF_STATE_NAME@@KPEAU_WN.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::function<void (void)>::operator()(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 112);
  if ( !v1 )
    __fastfail(7u);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 32LL))(v1);
}
