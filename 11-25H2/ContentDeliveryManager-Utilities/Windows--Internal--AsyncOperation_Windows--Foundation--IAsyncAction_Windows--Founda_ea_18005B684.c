/*
 * XREFs of Windows::Internal::AsyncOperation_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Windows::Internal::INilDelegate_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::_Run @ 0x18005B684
 * Callers:
 *     Windows::Internal::AsyncOperation_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Windows::Internal::INilDelegate_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::OnCancel @ 0x1800540F0 (Windows--Internal--AsyncOperation_Windows--Foundation--IAsyncAction_Windows--Founda_ea_1800540F0.c)
 *     Windows::Internal::AsyncOperation_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Windows::Internal::INilDelegate_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::OnStart @ 0x180054110 (Windows--Internal--AsyncOperation_Windows--Foundation--IAsyncAction_Windows--Founda_ea_180054110.c)
 *     Windows::Internal::AsyncOperation_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Windows::Internal::INilDelegate_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::Run @ 0x180056B40 (Windows--Internal--AsyncOperation_Windows--Foundation--IAsyncAction_Windows--Founda_ea_180056B40.c)
 * Callees:
 *     Windows::Internal::AsyncOperation_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Windows::Internal::INilDelegate_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::_AfterComplete @ 0x180059298 (Windows--Internal--AsyncOperation_Windows--Foundation--IAsyncAction_Windows--Founda_ea_180059298.c)
 *     Windows::Internal::AsyncOperation_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Windows::Internal::INilDelegate_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::_AfterExecute @ 0x1800592EC (Windows--Internal--AsyncOperation_Windows--Foundation--IAsyncAction_Windows--Founda_ea_1800592EC.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Windows::Internal::AsyncOperation_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Windows::Internal::INilDelegate_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::StageOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::_Run(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  bool v4; // cl
  int v5; // eax
  signed __int32 v6; // edx

  if ( (_DWORD)a2 == 2 )
  {
    if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 244)) != 1 )
      return;
    (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 256) + 8LL))(
      *(_QWORD *)(a1 + 256),
      a2,
      a3,
      a1 + 280);
    v4 = _InterlockedAdd((volatile signed __int32 *)(a1 + 252), 0xFFFFFFFF) == 0;
    if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 248)) == 1 )
    {
      (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 256) + 8LL))(
        *(_QWORD *)(a1 + 256),
        1LL,
        2147943623LL,
        a1 + 280);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 252), 0xFFFFFFFF) != 1 )
        return;
    }
    else if ( !v4 )
    {
      return;
    }
    Windows::Internal::AsyncOperation_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Windows::Internal::INilDelegate_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::StageOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::_AfterComplete(a1);
  }
  else if ( (_DWORD)a2 == 1 && _InterlockedIncrement((volatile signed __int32 *)(a1 + 248)) == 1 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 256) + 8LL))(
           *(_QWORD *)(a1 + 256),
           1LL,
           a3,
           a1 + 280);
    if ( v5 >= 0 && *(_BYTE *)(a1 + 289) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 272), 0xFFFFFFFF) != 1 )
        return;
      v6 = *(_DWORD *)(a1 + 276);
    }
    else
    {
      v6 = v5;
    }
    Windows::Internal::AsyncOperation_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Windows::Internal::INilDelegate_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::StageOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::_AfterExecute(
      (volatile signed __int32 *)a1,
      v6);
  }
}
