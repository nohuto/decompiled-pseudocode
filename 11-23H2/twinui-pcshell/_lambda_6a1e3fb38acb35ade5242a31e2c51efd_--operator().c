/*
 * XREFs of _lambda_6a1e3fb38acb35ade5242a31e2c51efd_::operator() @ 0x180236A80
 * Callers:
 *     wistd::__function::__func__lambda_6a1e3fb38acb35ade5242a31e2c51efd__long___cdecl(void)_::operator() @ 0x180237AD0 (wistd--__function--__func__lambda_6a1e3fb38acb35ade5242a31e2c51efd__long___cdecl(void)_--operato.c)
 * Callees:
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1800130C8 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180235824 (--1-$test_data_control@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_6a1e3fb38acb35ade5242a31e2c51efd_::operator()(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rbx
  const char *v5; // r9
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**(_QWORD **)(*(_QWORD *)a1 + 152LL) + 80LL))(
         *(_QWORD *)(*(_QWORD *)a1 + 152LL),
         _mm_unpacklo_ps(
           (__m128)COERCE_UNSIGNED_INT((float)**(int **)(a1 + 8)),
           (__m128)COERCE_UNSIGNED_INT((float)*(int *)(*(_QWORD *)(a1 + 8) + 4LL))).m128_u64[0]);
  if ( v2 < 0 )
  {
    try
    {
      winrt::throw_hresult((unsigned int)v2);
    }
    catch ( ... )
    {
      *(_DWORD *)(v6 + 48) = wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x513,
                               (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
                               v5);
      return (unsigned int)v8;
    }
  }
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL);
  v8 = (void *)v3;
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 312));
  tip2::details::shared_data<1,0,0>::begin_update(v3 + 8);
  *(_BYTE *)(v3 + 273) = 1;
  tip2::test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>(&v8);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 32LL) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(*(_QWORD *)(a1 + 16) + 8LL));
  return 0LL;
}
