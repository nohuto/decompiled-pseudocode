/*
 * XREFs of _lambda_84c775889c05b89f12ed6d0ff428b333_::operator() @ 0x18069F260
 * Callers:
 *     wil::details::lambda_call__lambda_84c775889c05b89f12ed6d0ff428b333___::_lambda_call__lambda_84c775889c05b89f12ed6d0ff428b333___ @ 0x18069E660 (wil--details--lambda_call__lambda_84c775889c05b89f12ed6d0ff428b333___--_lambda_call__lambda_84c7.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Incref_nz@_Ref_count_base@std@@QEAA_NXZ @ 0x18010D7E0 (-_Incref_nz@_Ref_count_base@std@@QEAA_NXZ.c)
 *     _anonymous_namespace_::PinConsentPromptManager::RemoveOutstandingPromptForOperation @ 0x1806A4E40 (_anonymous_namespace_--PinConsentPromptManager--RemoveOutstandingPromptForOperation.c)
 */

void __fastcall lambda_84c775889c05b89f12ed6d0ff428b333_::operator()(RTL_SRWLOCK **a1)
{
  std::_Ref_count_base *v2; // rbx
  std::_Ref_count_base *v3; // rcx
  std::_Ref_count_base *v4; // rcx
  RTL_SRWLOCK *v5; // rsi
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0LL;
  v3 = (std::_Ref_count_base *)a1[1];
  if ( v3 && std::_Ref_count_base::_Incref_nz(v3) && (v5 = *a1, v2 = v4, *a1) )
  {
    AcquireSRWLockExclusive(v5 + 2);
    v6 = std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
           v8,
           a1 + 2);
    anonymous_namespace_::PinConsentPromptManager::RemoveOutstandingPromptForOperation(v5, v7, v6);
    if ( v5 != (RTL_SRWLOCK *)-16LL )
      ReleaseSRWLockExclusive(v5 + 2);
  }
  else if ( !v2 )
  {
    return;
  }
  std::_Ref_count_base::_Decref(v2);
}
