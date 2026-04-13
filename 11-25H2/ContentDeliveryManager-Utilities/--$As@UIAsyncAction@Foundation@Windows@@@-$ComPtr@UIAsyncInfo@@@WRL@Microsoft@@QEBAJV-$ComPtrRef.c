/*
 * XREFs of ??$As@UIAsyncAction@Foundation@Windows@@@?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAsyncAction@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800247D0
 * Callers:
 *     ?FireCompletion@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?AddThumbnailToCacheAsyncActionName@ContentManagement@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJXZ @ 0x18002FD00 (-FireCompletion@-$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@M.c)
 *     ?FireCompletion@?$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U?$AsyncCausalityOptions@$1?AddThumbnailToCacheAsyncActionName@ContentManagement@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x180030140 (-FireCompletion@-$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U-$AsyncCaus.c)
 *     Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::FireCompletion @ 0x18004F700 (Microsoft--WRL--AsyncBase_Windows--Foundation--IAsyncActionCompletedHandler_Microso_ea_18004F700.c)
 *     Windows::Internal::AsyncBaseFTM_Windows::Foundation::IAsyncActionCompletedHandler_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::FireCompletion @ 0x18004F7E0 (Windows--Internal--AsyncBaseFTM_Windows--Foundation--IAsyncActionCompletedHandler_1_ea_18004F7E0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033D30 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IAsyncInfo>::As<Windows::Foundation::IAsyncAction>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64),
        __int64 a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
  return v4(v3, &GUID_5a648006_843a_4da9_865b_9d26e5dfad7b, a2);
}
