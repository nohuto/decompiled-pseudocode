/*
 * XREFs of _lambda_017e4516d3db66192a06ba57bc482270_::operator() @ 0x180687984
 * Callers:
 *     CMultitaskingViewTaskCallback__lambda_017e4516d3db66192a06ba57bc482270___::RunTask @ 0x180688330 (CMultitaskingViewTaskCallback__lambda_017e4516d3db66192a06ba57bc482270___--RunTask.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180223E10 (--1-$test_data_control@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180223E80 (--1-$test_watcher@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??C?$test_watcher@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@1@XZ @ 0x180223F1C (--C-$test_watcher@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$t.c)
 *     ??$query@UISnapAssistCallback@@@?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UISnapAssistCallback@@Uerr_exception_policy@wil@@@1@XZ @ 0x18022B830 (--$query@UISnapAssistCallback@@@-$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@Q.c)
 *     ?open_and_watch_errors@?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@2@XZ @ 0x18022BA64 (-open_and_watch_errors@-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$convert_from_abi@UIGuidedSnapAssistHost@WindowSnapping@Shell@Internal@Windows@winrt@@@wil@@YA?AUIGuidedSnapAssistHost@WindowSnapping@Shell@Internal@Windows@winrt@@PEAUIUnknown@@@Z @ 0x180669964 (--$convert_from_abi@UIGuidedSnapAssistHost@WindowSnapping@Shell@Internal@Windows@winrt@@@wil@@YA.c)
 *     ?PreviousActiveWindow@?$consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistHost@UIGuidedSnapAssistHost@WindowSnapping@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@_K@Z @ 0x18066B544 (-PreviousActiveWindow@-$consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistHost@UIGu.c)
 *     ?SetRegions@?$consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistHost@UIGuidedSnapAssistHost@WindowSnapping@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@U?$array_view@$$CBUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@3@@Z @ 0x18066B890 (-SetRegions@-$consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistHost@UIGuidedSnapAs.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall lambda_017e4516d3db66192a06ba57bc482270_::operator()(unsigned int *a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  int v6; // eax
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rcx
  __m128 v10; // xmm3
  float v11; // xmm2_4
  const char *v12; // r9
  __int64 v13; // rax
  __int64 v14; // [rsp+30h] [rbp-98h] BYREF
  int v15[2]; // [rsp+38h] [rbp-90h] BYREF
  __int64 v16; // [rsp+40h] [rbp-88h] BYREF
  __int64 (__fastcall ***v17)(_QWORD, void *, _QWORD *); // [rsp+48h] [rbp-80h] BYREF
  __m128i v18; // [rsp+50h] [rbp-78h] BYREF
  __int64 *v19; // [rsp+60h] [rbp-68h]
  _BYTE v20[56]; // [rsp+68h] [rbp-60h] BYREF
  __int128 v21; // [rsp+A0h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v19 = (__int64 *)a1;
  tip2::tip_test<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::open_and_watch_errors(
    (void **)a1 + 5,
    (__int64)v20);
  wil::com_ptr_t<IAgileReference,wil::err_exception_policy>::query<ISnapAssistCallback>((__int64 *)a1 + 2, &v17);
  try
  {
    v4 = *a2;
    v16 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, __int64, GUID *, __int64 *))(v4 + 40))(
           a2,
           4LL,
           &GUID_b63cb15a_d1aa_4a39_bc06_78e9843bf5c4,
           &v16) >= 0 )
    {
      *(_BYTE *)(*tip2::test_watcher<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::operator->(
                    (__int64)v20,
                    v18.m128i_i64)
               + 281) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::~test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>((void **)&v18);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 40LL))(v16);
    }
    v5 = *a2;
    *(_QWORD *)v15 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, GUID *))(v5 + 32))(
           a2,
           4LL,
           *((_QWORD *)a1 + 1),
           &GUID_b63cb15a_d1aa_4a39_bc06_78e9843bf5c4);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x59,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\guidedsnapassistcontrol.cpp",
        (const char *)(unsigned int)v6,
        (int)v15);
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ***)(_QWORD, void *, _QWORD *)))(**(_QWORD **)v15 + 56LL))(
           *(_QWORD *)v15,
           v17);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5B,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\guidedsnapassistcontrol.cpp",
        (const char *)(unsigned int)v7,
        (int)v15);
    wil::convert_from_abi<winrt::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistHost>(
      &v14,
      *(__int64 (__fastcall ****)(_QWORD, void *, _QWORD *))v15);
    v8 = *((_QWORD *)a1 + 3);
    v9 = (__int64)(*(_QWORD *)(v8 + 8) - *(_QWORD *)v8) >> 5;
    v18.m128i_i64[0] = *(_QWORD *)v8;
    v18.m128i_i32[2] = v9;
    winrt::impl::consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistHost<winrt::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistHost>::SetRegions(
      &v14,
      &v18);
    winrt::impl::consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistHost<winrt::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistHost>::PreviousActiveWindow(&v14);
    v10 = (__m128)_mm_loadu_si128((const __m128i *)(v8 + 24));
    v11 = _mm_shuffle_ps(v10, v10, 85).m128_f32[0];
    LODWORD(v21) = (int)v10.m128_f32[0];
    DWORD1(v21) = (int)v11;
    DWORD2(v21) = (int)(float)(v10.m128_f32[0] + _mm_shuffle_ps(v10, v10, 170).m128_f32[0]);
    HIDWORD(v21) = (int)(float)(v11 + _mm_shuffle_ps(v10, v10, 255).m128_f32[0]);
    (*(void (__fastcall **)(_QWORD, __int128 *, _QWORD))(**(_QWORD **)v15 + 48LL))(*(_QWORD *)v15, &v21, *a1);
    if ( v14 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v14);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v15);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v16);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x68,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\guidedsnapassistcontrol.cpp",
      v12);
    tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>>::complete(v19 + 5);
    wil::convert_from_abi<winrt::Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2>(&v14, v17);
    v13 = v14;
    if ( v14 )
    {
      v21 = 0LL;
      *(_QWORD *)&v21 = 0LL;
      DWORD2(v21) = 0;
      v15[0] = 0;
      winrt::impl::consume_Windows_Internal_Shell_WindowSnapping_ISnapAssistCallback2<winrt::Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2>::SnapAssistCompleted(
        &v14,
        v15,
        &v21);
      v13 = v14;
    }
    if ( v13 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v14);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v17);
  tip2::test_watcher<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::~test_watcher<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>((__int64)v20);
}
