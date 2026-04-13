/*
 * XREFs of Microsoft::WRL::Details::RuntimeClassImpl_Microsoft::WRL::RuntimeClassFlags_3__1_1_0_Windows::Internal::AsyncBaseWithProgressFTM_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::INilDelegate_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2____Windows::Foundation::IAsyncAction_Windows::Internal::IAsyncOperationLocal_Microsoft::WRL::CloakedIid_Windows::Internal::IAsyncDeferral__Microsoft::WRL::CloakedIid_Windows::Internal::IComPoolTask__Microsoft::WRL::CloakedIid_Windows::Internal::IAsyncFireCompletion___::AddRef @ 0x18004DEE0
 * Callers:
 *     sub_18004DF40 @ 0x18004DF40 (sub_18004DF40.c)
 *     sub_18004DF50 @ 0x18004DF50 (sub_18004DF50.c)
 *     sub_18004DF70 @ 0x18004DF70 (sub_18004DF70.c)
 *     sub_18004DF90 @ 0x18004DF90 (sub_18004DF90.c)
 *     sub_18004DFB0 @ 0x18004DFB0 (sub_18004DFB0.c)
 *     sub_18004DFD0 @ 0x18004DFD0 (sub_18004DFD0.c)
 *     sub_18004DFF0 @ 0x18004DFF0 (sub_18004DFF0.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003A7C4 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl_Microsoft::WRL::RuntimeClassFlags_3__1_1_0_Windows::Internal::AsyncBaseWithProgressFTM_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::INilDelegate_1_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::StageOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2____Windows::Foundation::IAsyncAction_Windows::Internal::IAsyncOperationLocal_Microsoft::WRL::CloakedIid_Windows::Internal::IAsyncDeferral__Microsoft::WRL::CloakedIid_Windows::Internal::IComPoolTask__Microsoft::WRL::CloakedIid_Windows::Internal::IAsyncFireCompletion___::AddRef(
        __int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 216);
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 0x7FFFFFFF;
    v3 = v1 + 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 216), v1 + 1, v1);
    if ( v4 == v1 )
      return v3;
  }
  return (unsigned int)Microsoft::WRL::Details::SafeUnknownIncrementReference(
                         (Microsoft::WRL::Details *)(2 * v1 + 16),
                         (volatile int *)((unsigned __int64)v1 >> 63));
}
