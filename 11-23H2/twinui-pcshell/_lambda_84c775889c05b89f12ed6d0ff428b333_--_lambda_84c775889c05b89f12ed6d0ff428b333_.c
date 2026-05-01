/*
 * XREFs of _lambda_84c775889c05b89f12ed6d0ff428b333_::_lambda_84c775889c05b89f12ed6d0ff428b333_ @ 0x18069DB44
 * Callers:
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_ResumeCoro$1 @ 0x180251610 (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_ResumeCoro$1.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 */

__int64 __fastcall lambda_84c775889c05b89f12ed6d0ff428b333_::_lambda_84c775889c05b89f12ed6d0ff428b333_(
        _QWORD *a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // r9

  v3 = *a2;
  *a2 = 0LL;
  *a1 = v3;
  v4 = a2[1];
  a2[1] = 0LL;
  a1[1] = v4;
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    a1 + 2,
    a3);
  return v5;
}
