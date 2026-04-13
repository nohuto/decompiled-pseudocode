/*
 * XREFs of Microsoft::WRL::Details::RuntimeClassImpl_Microsoft::WRL::RuntimeClassFlags_3__1_1_0_Windows::Internal::AsyncBaseWithProgressFTM_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::INilDelegate_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2____Windows::Foundation::IAsyncAction_Windows::Internal::IAsyncOperationLocal_Microsoft::WRL::CloakedIid_Windows::Internal::IAsyncDeferral__Microsoft::WRL::CloakedIid_Windows::Internal::IComPoolTask__Microsoft::WRL::CloakedIid_Windows::Internal::IAsyncFireCompletion___::Release @ 0x1800560C0
 * Callers:
 *     Windows::Internal::AsyncOperation_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Windows::Internal::INilDelegate_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::Release @ 0x180055ED0 (Windows--Internal--AsyncOperation_Windows--Foundation--IAsyncAction_Windows--Founda_ea_180055ED0.c)
 *     sub_180056150 @ 0x180056150 (sub_180056150.c)
 *     sub_180056160 @ 0x180056160 (sub_180056160.c)
 *     sub_180056180 @ 0x180056180 (sub_180056180.c)
 *     sub_1800561A0 @ 0x1800561A0 (sub_1800561A0.c)
 *     sub_1800561C0 @ 0x1800561C0 (sub_1800561C0.c)
 *     sub_1800561E0 @ 0x1800561E0 (sub_1800561E0.c)
 *     sub_180056200 @ 0x180056200 (sub_180056200.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003A8D8 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl_Microsoft::WRL::RuntimeClassFlags_3__1_1_0_Windows::Internal::AsyncBaseWithProgressFTM_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::INilDelegate_1_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::StageOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2____Windows::Foundation::IAsyncAction_Windows::Internal::IAsyncOperationLocal_Microsoft::WRL::CloakedIid_Windows::Internal::IAsyncDeferral__Microsoft::WRL::CloakedIid_Windows::Internal::IComPoolTask__Microsoft::WRL::CloakedIid_Windows::Internal::IAsyncFireCompletion___::Release(
        __int64 a1)
{
  signed __int64 v1; // rax
  __int64 v2; // r10
  unsigned int v3; // ebx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 216);
  v2 = a1;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646;
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 216), v1 - 1, v1);
    if ( v4 == v1 )
      goto LABEL_8;
  }
  v3 = Microsoft::WRL::Details::SafeUnknownDecrementReference(
         (Microsoft::WRL::Details *)(2 * v1 + 16),
         (volatile int *)((unsigned __int64)v1 >> 63));
LABEL_8:
  if ( !v3 )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 88LL))(v2, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v3;
}
