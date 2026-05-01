/*
 * XREFs of ??0SnapAssistState@@QEAA@AEBUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBV?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@AEBURect@Foundation@56@HPEAUHWND__@@3AEBUISnapAssistCallback2@WindowSnapping@Shell@456@@Z @ 0x180286310
 * Callers:
 *     ??$make_shared@VSnapAssistState@@AEAUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@AEAV?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@AEBURect@Foundation@67@HAEAPEAUHWND__@@AEAPEAUHWND__@@AEAUISnapAssistCallback2@WindowSnapping@Shell@567@@std@@YA?AV?$shared_ptr@VSnapAssistState@@@0@AEAUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@AEAV?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@0@AEBURect@Foundation@67@$$QEAHAEAPEAUHWND__@@4AEAUISnapAssistCallback2@WindowSnapping@Shell@567@@Z @ 0x1806A66A4 (--$make_shared@VSnapAssistState@@AEAUISwitchItemDataSource@Multitasking@ComposableShell@Internal.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$tip_make_shared_nothrow@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@AEAPEAU_GUID@@@details@tip2@@YA?AV?$com_ptr_t@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@AEAPEAU_GUID@@@Z @ 0x180289538 (--$tip_make_shared_nothrow@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@AEAPEAU_.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@1@XZ @ 0x18028C6B4 (--C-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18028D724 (--1-$com_ptr_t@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@Uerr_returncode_poli.c)
 *     ??0?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1802AFA64 (--0-$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V-$allocator@USnapAss.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802C766C (--4-$com_ptr_t@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@Uerr_returncode_poli.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802C88A8 (--1-$test_data_control@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@.c)
 *     ?has_ever_started@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802CDF64 (-has_ever_started@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802DDF04 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x1805A8AC0 (-start@-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA-AU_GU.c)
 *     ??0hresult_invalid_argument@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1806BD800 (--0hresult_invalid_argument@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall SnapAssistState::SnapAssistState(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _OWORD *a4,
        int a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8)
{
  __int64 v11; // rax
  __int64 v12; // rax
  const struct winrt::impl::slim_source_location *v14; // rax
  _BYTE pExceptionObject[24]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v16[24]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v17; // [rsp+70h] [rbp+8h] BYREF

  v17 = a1;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>(
    a1 + 48,
    a3);
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_OWORD *)(a1 + 120) = *a4;
  *(_DWORD *)(a1 + 136) = a5;
  v11 = a6;
  *(_QWORD *)(a1 + 144) = a6;
  *(_QWORD *)(a1 + 152) = v11;
  *(_QWORD *)(a1 + 160) = a7;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_BYTE *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 184) = *a2;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)(a1 + 184));
  *(_QWORD *)(a1 + 192) = *a8;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)(a1 + 192));
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  if ( *(_QWORD *)(a1 + 48) == *(_QWORD *)(a1 + 56) )
  {
    v14 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(v16);
    winrt::hresult_invalid_argument::hresult_invalid_argument((winrt::hresult_invalid_argument *)pExceptionObject, v14);
    throw (winrt::hresult_invalid_argument *)pExceptionObject;
  }
  v17 = 0LL;
  v12 = tip2::details::tip_make_shared_nothrow<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>,_GUID * &>(
          &a6,
          &v17);
  wil::com_ptr_t<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>,wil::err_returncode_policy>::operator=(
    a1 + 200,
    v12);
  wil::com_ptr_t<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>,wil::err_returncode_policy>(&a6);
  if ( !(unsigned __int8)tip2::details::shared_data<1,0,0>::has_ever_started(*(_QWORD *)(a1 + 200) + 8LL) )
    tip2::tip_test<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::start(
      a1 + 200,
      pExceptionObject);
  *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::operator->(
                          a1 + 200,
                          &v17)
           + 290LL) = 1;
  tip2::test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::~test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>(&v17);
  return a1;
}
