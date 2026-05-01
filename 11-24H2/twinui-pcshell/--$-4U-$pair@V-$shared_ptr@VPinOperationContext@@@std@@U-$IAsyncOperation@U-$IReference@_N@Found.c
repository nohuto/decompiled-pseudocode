/*
 * XREFs of ??$?4U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@$0A@@?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@QEAAAEAU01@$$QEAU01@@Z @ 0x1805DE894
 * Callers:
 *     _anonymous_namespace_::PinConsentPromptManager::RemoveOutstandingPromptForOperation @ 0x1805E7ED8 (_anonymous_namespace_--PinConsentPromptManager--RemoveOutstandingPromptForOperation.c)
 * Callees:
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800BDC30 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

_QWORD *__fastcall std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>::operator=<std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>,0>(
        _QWORD *a1,
        __int64 *a2)
{
  std::shared_ptr<KBViewInfo>::operator=(a1, a2);
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(a1 + 2, a2 + 2);
  return a1;
}
