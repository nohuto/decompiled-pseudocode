/*
 * XREFs of Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::InvokeOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::_AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::InvokeOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___ @ 0x18006CC44
 * Callers:
 *     Microsoft::WRL::Details::ImplementsHelper_Microsoft::WRL::RuntimeClassFlags_3__1_Microsoft::WRL::Details::ImplementsMarker_Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::InvokeOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2______Microsoft::WRL::FtmBase_::_ImplementsHelper_Microsoft::WRL::RuntimeClassFlags_3__1_Microsoft::WRL::Details::ImplementsMarker_Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::InvokeOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2______Microsoft::WRL::FtmBase_ @ 0x18006D1CC (Microsoft--WRL--Details--ImplementsHelper_Microsoft--WRL--RuntimeClassFlags_3__1_Mi_ea_18006D1CC.c)
 *     Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::InvokeOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::_scalar_deleting_destructor_ @ 0x18006DDC0 (Microsoft--WRL--AsyncBase_Windows--Foundation--IAsyncActionCompletedHandler_Microso_ea_18006DDC0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E10 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::TraceOperationComplete @ 0x180059124 (Microsoft--WRL--AsyncBase_Windows--Foundation--IAsyncActionCompletedHandler_Microso_ea_180059124.c)
 */

__int64 __fastcall Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::InvokeOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::_AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::InvokeOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___(
        __int64 a1)
{
  *(_QWORD *)a1 = off_1800C6E78;
  if ( !*(_DWORD *)(a1 + 16) )
    Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::StageOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::TraceOperationComplete(a1);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 40));
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 24));
}
