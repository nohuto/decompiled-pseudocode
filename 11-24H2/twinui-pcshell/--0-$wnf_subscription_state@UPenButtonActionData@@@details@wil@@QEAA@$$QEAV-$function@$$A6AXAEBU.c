/*
 * XREFs of ??0?$wnf_subscription_state@UPenButtonActionData@@@details@wil@@QEAA@$$QEAV?$function@$$A6AXAEBUPenButtonActionData@@@Z@wistd@@@Z @ 0x1806217D0
 * Callers:
 *     ??$make_wnf_subscription_state@UPenButtonActionData@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBUPenButtonActionData@@@Z@wistd@@KPEAPEAU?$wnf_subscription_state@UPenButtonActionData@@@01@@Z @ 0x18061E268 (--$make_wnf_subscription_state@UPenButtonActionData@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEA.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::details::wnf_subscription_state<PenButtonActionData>::wnf_subscription_state<PenButtonActionData>(
        _QWORD *a1,
        __int64 a2)
{
  a1[1] = 0LL;
  *a1 = &wil::details::wnf_subscription_state<int>::`vftable';
  if ( *(_QWORD *)(a2 + 112) )
  {
    a1[16] = a1 + 3;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 112) + 16LL))(*(_QWORD *)(a2 + 112));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 112) + 24LL))(*(_QWORD *)(a2 + 112));
    *(_QWORD *)(a2 + 112) = 0LL;
  }
  else
  {
    a1[16] = 0LL;
  }
  return a1;
}
