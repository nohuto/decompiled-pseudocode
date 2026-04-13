/*
 * XREFs of Windows::Internal::AsyncBaseFTM_Windows::Foundation::IAsyncActionCompletedHandler_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::CommitOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::AsyncBaseFTM_Windows::Foundation::IAsyncActionCompletedHandler_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::CommitOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___ @ 0x18006BA68
 * Callers:
 *     Microsoft::WRL::RuntimeClass_Microsoft::WRL::RuntimeClassFlags_3__Windows::Internal::AsyncBaseWithProgressFTM_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::INilDelegate_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::CommitOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2____Windows::Foundation::IAsyncAction_Windows::Internal::IAsyncOperationLocal_Microsoft::WRL::CloakedIid_Windows::Internal::IAsyncDeferral__Microsoft::WRL::CloakedIid_Windows::Internal::IComPoolTask__Microsoft::WRL::CloakedIid_Windows::Internal::IAsyncFireCompletion___::RuntimeClass_Microsoft::WRL::RuntimeClassFlags_3__Windows::Internal::AsyncBaseWithProgressFTM_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::INilDelegate_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::CommitOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2____Windows::Foundation::IAsyncAction_Windows::Internal::IAsyncOperationLocal_Microsoft::WRL::CloakedIid_Windows::Internal::IAsyncDeferral__Microsoft::WRL::CloakedIid_Windows::Internal::IComPoolTask__Microsoft::WRL::CloakedIid_Windows::Internal::IAsyncFireCompletion___ @ 0x18006C298 (Microsoft--WRL--RuntimeClass_Microsoft--WRL--RuntimeClassFlags_3__Windows--Internal_ea_18006C298.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180029498 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Windows::Internal::AsyncBaseFTM_Windows::Foundation::IAsyncActionCompletedHandler_1_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::CommitOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::AsyncBaseFTM_Windows::Foundation::IAsyncActionCompletedHandler_1_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::CommitOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___(
        __int64 a1)
{
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_QWORD *)a1 = off_1800C5DD8;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_DWORD *)(a1 + 48) = -1;
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 56) = 1;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(a1 + 72));
  *(_QWORD *)a1 = off_1800C5920;
  *(_QWORD *)(a1 + 72) = &Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncActionCompletedHandler,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const ContentManagement::AddThumbnailToCacheAsyncActionName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const ContentManagement::AddThumbnailToCacheAsyncActionName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>>,Microsoft::WRL::FtmBase>>'};
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_DWORD *)(a1 + 128) = 0;
  InitOnceExecuteOnce(
    &Windows::Internal::s_bIsEnvironmentCheckDone,
    (PINIT_ONCE_FN)Windows::Internal::AsyncBaseFTM_Windows::Foundation::IAsyncActionCompletedHandler_1_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::StageOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::CheckExecutionEnvironment,
    0LL,
    0LL);
  return a1;
}
