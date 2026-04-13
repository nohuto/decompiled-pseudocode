/*
 * XREFs of Windows::Internal::MakeAsyncHelper_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::INilDelegate_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::EnableLockScreenRotationOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___ @ 0x1800473F0
 * Callers:
 *     ?EnableLockScreenRotationAsync@ContentManagementService@ContentManagement@@UEAAJEPEAPEAUIAsyncAction@Foundation@Windows@@@Z @ 0x18004EA60 (-EnableLockScreenRotationAsync@ContentManagementService@ContentManagement@@UEAAJEPEAPEAUIAsyncAc.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::AsyncOperation_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Windows::Internal::INilDelegate_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::EnableLockScreenRotationOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2____Windows::Internal::ComTaskPoolHandler_unsigned_short_const___const_&_enum_TrustLevel_&_ @ 0x180046B74 (Microsoft--WRL--Details--Make_Windows--Internal--AsyncOperation_Windows--Foundation_ea_180046B74.c)
 *     Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::EnableLockScreenRotationOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::Start @ 0x180057A30 (Microsoft--WRL--AsyncBase_Windows--Foundation--IAsyncActionCompletedHandler_Microso_ea_180057A30.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::MakeAsyncHelper_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::INilDelegate_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::EnableLockScreenRotationOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void (__fastcall ***a5)(_QWORD, __int64))
{
  void (__fastcall ***v6)(_QWORD, __int64); // rdi
  __int64 v8; // rbx
  int v9; // edi
  unsigned int v10; // [rsp+20h] [rbp-18h] BYREF
  const wchar_t *v11; // [rsp+28h] [rbp-10h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = a3;
  v10 = 0;
  v11 = L"Windows.Foundation.IAsyncAction";
  *a1 = 0LL;
  v6 = a5;
  if ( !a5 )
    return 2147942414LL;
  Microsoft::WRL::Details::Make_Windows::Internal::AsyncOperation_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Windows::Internal::INilDelegate_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::EnableLockScreenRotationOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2____Windows::Internal::ComTaskPoolHandler_unsigned_short_const___const___enum_TrustLevel___(
    (__int64)&v12,
    a2,
    &v11,
    &v10);
  v8 = v12;
  if ( !v12 )
  {
    (**v6)(v6, 1LL);
    return 2147942414LL;
  }
  *(_QWORD *)(v12 + 256) = v6;
  v9 = Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::EnableLockScreenRotationOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::Start(v8 + 8);
  if ( v9 >= 0 )
  {
    *a1 = (v8 + 176) & -(__int64)(v8 != 0);
    v8 = 0LL;
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v8 + 8) + 16LL))(v8 + 8);
  return (unsigned int)v9;
}
