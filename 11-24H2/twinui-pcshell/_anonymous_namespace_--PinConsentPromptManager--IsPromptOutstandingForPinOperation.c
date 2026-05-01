/*
 * XREFs of _anonymous_namespace_::PinConsentPromptManager::IsPromptOutstandingForPinOperation @ 0x1805E7258
 * Callers:
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_ResumeCoro$1 @ 0x1805E8230 (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_ResumeCoro$1.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180049024 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@QEAA@AEBU01@@Z @ 0x1805E3080 (--0-$pair@V-$shared_ptr@VPinOperationContext@@@std@@U-$IAsyncOperation@U-$IReference@_N@Foundati.c)
 *     ??1?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@QEAA@XZ @ 0x1805E3504 (--1-$pair@V-$shared_ptr@VPinOperationContext@@@std@@U-$IAsyncOperation@U-$IReference@_N@Foundati.c)
 *     ?AreEquivalentPinOperations@@YA_NV?$shared_ptr@VPinOperationContext@@@std@@0@Z @ 0x1805E4768 (-AreEquivalentPinOperations@@YA_NV-$shared_ptr@VPinOperationContext@@@std@@0@Z.c)
 */

bool __fastcall anonymous_namespace_::PinConsentPromptManager::IsPromptOutstandingForPinOperation(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v3; // r14
  _QWORD *i; // rsi
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  _QWORD **v9; // r8
  bool v10; // bl
  std::_Ref_count_base *v11; // rcx
  bool v12; // bl
  __int64 v14; // [rsp+20h] [rbp-58h] BYREF
  __int64 v15; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v16[4]; // [rsp+40h] [rbp-38h] BYREF

  v3 = *(_QWORD **)(a1 + 32);
  for ( i = *(_QWORD **)(a1 + 24); i != v3; i += 3 )
  {
    v7 = std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>(
           v16,
           i);
    std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v14, v7);
    v8 = std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v15, a3);
    v10 = AreEquivalentPinOperations((_QWORD **)v8, v9);
    std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>::~pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>((__int64)v7);
    if ( v10 )
      break;
  }
  v11 = (std::_Ref_count_base *)a3[1];
  v12 = i != *(_QWORD **)(a1 + 32);
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  return v12;
}
