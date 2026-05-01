/*
 * XREFs of _anonymous_namespace_::PinConsentPromptManager::RemoveOutstandingPromptForOperation @ 0x1805E7ED8
 * Callers:
 *     _lambda_84c775889c05b89f12ed6d0ff428b333_::operator() @ 0x1805E41B4 (_lambda_84c775889c05b89f12ed6d0ff428b333_--operator().c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?4U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@$0A@@?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@QEAAAEAU01@$$QEAU01@@Z @ 0x1805DE894 (--$-4U-$pair@V-$shared_ptr@VPinOperationContext@@@std@@U-$IAsyncOperation@U-$IReference@_N@Found.c)
 *     ??$_Destroy_range@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@@std@@@std@@YAXPEAU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@0@QEAU10@AEAV?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@@0@@Z @ 0x1805E126C (--$_Destroy_range@V-$allocator@U-$pair@V-$shared_ptr@VPinOperationContext@@@std@@U-$IAsyncOperat.c)
 */

void __fastcall anonymous_namespace_::PinConsentPromptManager::RemoveOutstandingPromptForOperation(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 *v3; // rdi
  __int64 *v5; // rbx
  __int64 *i; // rsi
  __int64 *v8; // rsi
  std::_Ref_count_base *v9; // rcx

  v3 = *(__int64 **)(a1 + 32);
  v5 = *(__int64 **)(a1 + 24);
  if ( v5 != v3 )
  {
    do
    {
      if ( *v5 == *a3 )
        break;
      v5 += 3;
    }
    while ( v5 != v3 );
    if ( v5 != v3 )
    {
      for ( i = v5 + 3; i != v3; i += 3 )
      {
        if ( *i != *a3 )
        {
          std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>::operator=<std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>,0>(
            v5,
            i);
          v5 += 3;
        }
      }
      if ( v5 != v3 )
      {
        v8 = *(__int64 **)(a1 + 32);
        while ( v3 != v8 )
        {
          std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>::operator=<std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>,0>(
            v5,
            v3);
          v5 += 3;
          v3 += 3;
        }
        std::_Destroy_range<std::allocator<std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>>>(
          (__int64)v5,
          *(_QWORD *)(a1 + 32));
        *(_QWORD *)(a1 + 32) = v5;
      }
    }
  }
  v9 = (std::_Ref_count_base *)a3[1];
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
}
