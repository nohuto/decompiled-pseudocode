/*
 * XREFs of _TouchEdgeGestureProcessor::InputGestureOperationStarted_::_1_::catch$46 @ 0x1806D9555
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAAXXZ @ 0x180288A98 (-complete@-$tip_test@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@d.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@@1@XZ @ 0x1802895D8 (--C-$tip_test@V-$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802C8950 (--1-$test_data_control@V-$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@@tip2@@QEAA@.c)
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x1802DF6D4 (-ResultFromCaughtException@wil@@YAJXZ.c)
 *     ??$capture@UIImmersiveMonitor@@AEAU?$com_ptr@UIImmersiveMonitorManager@@@winrt@@P8IImmersiveMonitorManager@@EAAJPEAUHMONITOR__@@AEBU_GUID@@1PEAPEAX@Z$$TAEBU6@@winrt@@YA?AU?$com_ptr@UIImmersiveMonitor@@@0@AEAU?$com_ptr@UIImmersiveMonitorManager@@@0@$$QEAP8IImmersiveMonitorManager@@EAAJPEAUHMONITOR__@@AEBU_GUID@@2PEAPEAX@Z$$QEA$$T2@Z @ 0x1805932A0 (--$capture@UIImmersiveMonitor@@AEAU-$com_ptr@UIImmersiveMonitorManager@@@winrt@@P8IImmersiveMoni.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TouchEdgeGestureProcessor::InputGestureOperationStarted_::_1_::catch_46(wil *a1, __int64 *a2)
{
  __int64 *v3; // rsi
  __int64 v4; // rdi
  void (__fastcall *v5)(__int64, __int64); // rbx
  __int64 *v6; // rax
  __int64 v7; // rdi
  void (__fastcall *v8)(__int64, __int64); // rbx
  __int64 *v9; // rax
  __int64 v10; // rbx
  void (__fastcall *v11)(__int64, __int64); // rdi
  __int64 *v12; // rax

  if ( (unsigned int)wil::ResultFromCaughtException(a1) != -2147023728 )
    throw;
  *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_TouchEdgeGestureTest,_tip_TouchEdgeGestureTest>>::operator->(
                (__int64)(a2 + 8),
                a2 + 16)
           + 288) = 1;
  tip2::test_data_control<tip2::details::merged_data<_tip_TouchEdgeGestureTest,_tip_TouchEdgeGestureTest>>::~test_data_control<tip2::details::merged_data<_tip_TouchEdgeGestureTest,_tip_TouchEdgeGestureTest>>((void **)a2 + 16);
  v3 = (__int64 *)a2[54];
  v4 = *v3;
  v5 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)*v3 + 24LL);
  v6 = tip2::tip_test<tip2::details::merged_data<_tip_TouchEdgeGestureTest,_tip_TouchEdgeGestureTest>>::operator->(
         (__int64)(a2 + 8),
         a2 + 17);
  v5(v4, *v6 + 292);
  tip2::test_data_control<tip2::details::merged_data<_tip_TouchEdgeGestureTest,_tip_TouchEdgeGestureTest>>::~test_data_control<tip2::details::merged_data<_tip_TouchEdgeGestureTest,_tip_TouchEdgeGestureTest>>((void **)a2 + 17);
  v7 = *v3;
  v8 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)*v3 + 32LL);
  v9 = tip2::tip_test<tip2::details::merged_data<_tip_TouchEdgeGestureTest,_tip_TouchEdgeGestureTest>>::operator->(
         (__int64)(a2 + 8),
         a2 + 11);
  v8(v7, *v9 + 296);
  tip2::test_data_control<tip2::details::merged_data<_tip_TouchEdgeGestureTest,_tip_TouchEdgeGestureTest>>::~test_data_control<tip2::details::merged_data<_tip_TouchEdgeGestureTest,_tip_TouchEdgeGestureTest>>((void **)a2 + 11);
  a2[57] = 0LL;
  a2[11] = (__int64) winrt::impl::abi<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator,void>::type::`vcall'{72,{flat}};
  winrt::capture<IImmersiveMonitor,winrt::com_ptr<IImmersiveMonitorManager> &,long (IImmersiveMonitorManager::*)(HMONITOR__ *,_GUID const &,_GUID const &,void * *),std::nullptr_t,_GUID const &>(
    a2 + 14,
    v3,
    (__int64 (__fastcall **)(__int64, __int64, GUID *, void *, __int64 *))a2 + 11,
    a2 + 57);
  v10 = a2[14];
  v11 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 72LL);
  v12 = tip2::tip_test<tip2::details::merged_data<_tip_TouchEdgeGestureTest,_tip_TouchEdgeGestureTest>>::operator->(
          (__int64)(a2 + 8),
          a2 + 18);
  v11(v10, *v12 + 300);
  tip2::test_data_control<tip2::details::merged_data<_tip_TouchEdgeGestureTest,_tip_TouchEdgeGestureTest>>::~test_data_control<tip2::details::merged_data<_tip_TouchEdgeGestureTest,_tip_TouchEdgeGestureTest>>((void **)a2 + 18);
  tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::complete(a2 + 8);
  if ( v10 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(a2 + 14);
  return 0LL;
}
