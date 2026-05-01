/*
 * XREFs of ?WaitForResultsOperationAcknowledgedAsync_old@GamingOverlayExperienceManager@@AEAA?AUIAsyncAction@Foundation@Windows@winrt@@V?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@Z @ 0x18035DA4C
 * Callers:
 *     GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1 @ 0x180352A40 (GamingOverlayExperienceManager--LaunchForResultsAsyncInternal$_ResumeCoro$1.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     GamingOverlayExperienceManager::WaitForResultsOperationAcknowledgedAsync_old$_InitCoro$2 @ 0x18035D648 (GamingOverlayExperienceManager--WaitForResultsOperationAcknowledgedAsync_old$_InitCoro$2.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall GamingOverlayExperienceManager::WaitForResultsOperationAcknowledgedAsync_old(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3)
{
  void *v6; // rax
  std::_Ref_count_base *v7; // rcx
  _DWORD v9[82]; // [rsp+30h] [rbp-178h] BYREF
  _QWORD *v10; // [rsp+178h] [rbp-30h]

  v10 = a3;
  v6 = operator new(0x140uLL);
  v9[0] = 0;
  GamingOverlayExperienceManager::WaitForResultsOperationAcknowledgedAsync_old__InitCoro_2(
    v9,
    (__int64)v6 + 112,
    a2,
    a3,
    a1);
  v7 = (std::_Ref_count_base *)a3[1];
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  return a2;
}
