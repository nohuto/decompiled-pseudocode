/*
 * XREFs of ??$emplace_back@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@@?$vector@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@@2@@std@@QEAA?A_T$$QEAU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@1@@Z @ 0x1805E1FBC
 * Callers:
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_ResumeCoro$1 @ 0x1805E8230 (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_ResumeCoro$1.c)
 * Callees:
 *     ??$_Emplace_reallocate@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@@?$vector@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@@2@@std@@AEAAPEAU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@1@QEAU21@$$QEAU21@@Z @ 0x1805E13A8 (--$_Emplace_reallocate@U-$pair@V-$shared_ptr@VPinOperationContext@@@std@@U-$IAsyncOperation@U-$I.c)
 */

char *__fastcall std::vector<std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>>::emplace_back<std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>>(
        __int64 *a1,
        _QWORD *a2)
{
  _QWORD *v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx

  v3 = (_QWORD *)a1[1];
  if ( v3 == (_QWORD *)a1[2] )
    return std::vector<std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>>::_Emplace_reallocate<std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>>(
             a1,
             (__int64)v3,
             a2);
  *v3 = 0LL;
  v3[1] = 0LL;
  *v3 = *a2;
  v3[1] = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  v4 = a2[2];
  a2[2] = 0LL;
  v3[2] = v4;
  v5 = a1[1];
  a1[1] = v5 + 24;
  return (char *)v5;
}
