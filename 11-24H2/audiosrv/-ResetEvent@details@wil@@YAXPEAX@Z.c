/*
 * XREFs of ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x18001FE80
 * Callers:
 *     ?PrepareForADGStartup@CAudioDGProcess@@AEAAJXZ @ 0x18001FD90 (-PrepareForADGStartup@CAudioDGProcess@@AEAAJXZ.c)
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180070498 (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800B3870 (-RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAJXZ.c)
 *     std::_Func_impl_no_alloc__lambda_414dbc0e41b953f3a8115f76f732fa65__void_::_Do_call @ 0x1800B5150 (std--_Func_impl_no_alloc__lambda_414dbc0e41b953f3a8115f76f732fa65__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_fd18c6a3b571192092869a19e3ba0802__void_::_Do_call @ 0x1800CA930 (std--_Func_impl_no_alloc__lambda_fd18c6a3b571192092869a19e3ba0802__void_--_Do_call.c)
 *     ?wait_callback@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1800D9A40 (-wait_callback@-$event_watcher_t@V-$unique_storage@U-$resource_policy@PEAUevent_watcher_state@de.c)
 *     std::_Func_impl_no_alloc__lambda_1e3a2485e9e200bd7646026f56d618b4__void_::_Do_call @ 0x1800F8E40 (std--_Func_impl_no_alloc__lambda_1e3a2485e9e200bd7646026f56d618b4__void_--_Do_call.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800AA568 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::ResetEvent(wil::details *this, void *a2)
{
  unsigned int v2; // r8d
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !ResetEvent(this) )
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x9D8, v2, v3);
}
