/*
 * XREFs of ??$Unmarshal@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@CMarshaledInterface@@QEAAJV?$ComPtrRef@V?$ComPtr@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801B9CC0
 * Callers:
 *     _lambda_0a887bd1ba0ce60acd924cbd6ddeb365_::operator() @ 0x180398004 (_lambda_0a887bd1ba0ce60acd924cbd6ddeb365_--operator().c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs___::_)(Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____lambda_b8a139c36294ee7a0b7be3bff03bc510___1_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs___::Invoke @ 0x1803BC8A0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1803BC8A0.c)
 *     _lambda_e1cc468f42f502bf01f54fa0c50a937b_::operator() @ 0x1803C8168 (_lambda_e1cc468f42f502bf01f54fa0c50a937b_--operator().c)
 *     _lambda_71ae74f74888d637c85562ef224bc48a_::operator() @ 0x180680FBC (_lambda_71ae74f74888d637c85562ef224bc48a_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Attach@?$ComPtr@VPositionerPriority@@@WRL@Microsoft@@QEAAXPEAVPositionerPriority@@@Z @ 0x1801B1FC4 (-Attach@-$ComPtr@VPositionerPriority@@@WRL@Microsoft@@QEAAXPEAVPositionerPriority@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMarshaledInterface::Unmarshal<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>(
        __int64 *a1,
        __int64 *a2)
{
  unsigned int InterfaceAndReleaseStream; // edi
  __int64 v5; // rbx
  IStream *v7; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a2);
  *a2 = 0LL;
  InterfaceAndReleaseStream = -2147467259;
  v5 = *a1;
  if ( *a1 )
  {
    v8 = 0LL;
    if ( *(_DWORD *)(v5 + 24) == 2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    }
    else
    {
      *a1 = 0LL;
      Microsoft::WRL::ComPtr<PositionerPriority>::Attach(&v8, v5);
      v5 = v8;
    }
    *a2 = 0LL;
    if ( *(_DWORD *)(v5 + 24) == 2 )
    {
      if ( *(_QWORD *)(v5 + 32) )
        InterfaceAndReleaseStream = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64 *))(**(_QWORD **)(v5 + 32) + 24LL))(
                                      *(_QWORD *)(v5 + 32),
                                      &GUID_8cecdf70_ced8_5bc7_84a7_d80615fedcdd,
                                      a2);
      else
        InterfaceAndReleaseStream = -2147024809;
    }
    else
    {
      v7 = *(IStream **)(v5 + 16);
      *(_QWORD *)(v5 + 16) = 0LL;
      InterfaceAndReleaseStream = CoGetInterfaceAndReleaseStream(
                                    v7,
                                    &GUID_8cecdf70_ced8_5bc7_84a7_d80615fedcdd,
                                    (LPVOID *)a2);
    }
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return InterfaceAndReleaseStream;
}
