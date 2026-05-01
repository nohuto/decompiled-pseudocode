/*
 * XREFs of ?CreateTimer@?$consume_Windows_System_Threading_IThreadPoolTimerStatics@UIThreadPoolTimerStatics@Threading@System@Windows@winrt@@@impl@winrt@@QEBA@AEBUTimerElapsedHandler@Threading@System@Windows@3@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x1801D9BDC
 * Callers:
 *     ??R_lambda_b19cf72fe9674443383aa89d5c22450b_@@QEBA@AEBUIThreadPoolTimerStatics@Threading@System@Windows@winrt@@@Z @ 0x1801D9884 (--R_lambda_b19cf72fe9674443383aa89d5c22450b_@@QEBA@AEBUIThreadPoolTimerStatics@Threading@System@.c)
 *     ?StartInvokeTimer@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801D98B0 (-StartInvokeTimer@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV-$unique_any_t@V-$unique_st.c)
 *     ?CreateTimer@ThreadPoolTimer@Threading@System@Windows@winrt@@SA@AEBUTimerElapsedHandler@2345@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x1801D9B60 (-CreateTimer@ThreadPoolTimer@Threading@System@Windows@winrt@@SA@AEBUTimerElapsedHandler@2345@AEB.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_System_Threading_IThreadPoolTimerStatics<winrt::Windows::System::Threading::IThreadPoolTimerStatics>::CreateTimer(
        __int64 **a1,
        _QWORD *a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 *v4; // rcx
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  unsigned int v10; // eax
  _QWORD *result; // rax
  _BYTE v12[4]; // [rsp+34h] [rbp-34h] BYREF
  int v13; // [rsp+38h] [rbp-30h] BYREF
  __int128 v14; // [rsp+40h] [rbp-28h]
  _QWORD *v15; // [rsp+50h] [rbp-18h] BYREF

  v15 = a2;
  v4 = *a1;
  v15 = 0LL;
  v13 = 0;
  v7 = *v4;
  v8 = *a4;
  v9 = *a3;
  v14 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, _QWORD **))(v7 + 56))(v4, v9, v8, &v15);
  winrt::check_hresult(v12, v10, &v13);
  result = a2;
  *a2 = v15;
  return result;
}
