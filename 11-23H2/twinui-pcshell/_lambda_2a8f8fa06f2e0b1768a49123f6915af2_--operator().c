/*
 * XREFs of _lambda_2a8f8fa06f2e0b1768a49123f6915af2_::operator() @ 0x1800A3798
 * Callers:
 *     std::thread::_Invoke_std::tuple__lambda_2a8f8fa06f2e0b1768a49123f6915af2____0_ @ 0x1801B3BA0 (std--thread--_Invoke_std--tuple__lambda_2a8f8fa06f2e0b1768a49123f6915af2____0_.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CoInitializeEx@wil@@YA?AV?$unique_call@P6AXXZ$1?CoUninitialize@@YAXXZ$00@1@K@Z @ 0x1800A3448 (-CoInitializeEx@wil@@YA-AV-$unique_call@P6AXXZ$1-CoUninitialize@@YAXXZ$00@1@K@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ShouldMoveUWLMIntoShellProcess@UwpWindowLifecycleManagement@Shell@Internal@Windows@@YA_NXZ @ 0x18016F88C (-ShouldMoveUWLMIntoShellProcess@UwpWindowLifecycleManagement@Shell@Internal@Windows@@YA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_UwpWindowLifecycleManager@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18016FB70 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_UwpWindowLifecycleManager@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CShellOnWindowManagerIDK@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18016FD7C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CShellOnWindowManagerIDK@@@details@wil@@Q.c)
 *     ?IsWindowManagerIDKEnabledForSKU@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x180170144 (-IsWindowManagerIDKEnabledForSKU@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180177BB4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??$GetActivationFactory@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1801B5DB4 (--$GetActivationFactory@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@@@wil.c)
 *     ??$GetActivationFactory@UIUwpWindowLifecycleManagerStatics@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIUwpWindowLifecycleManagerStatics@UwpWindowLifecycleManagement@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1801B5E40 (--$GetActivationFactory@UIUwpWindowLifecycleManagerStatics@UwpWindowLifecycleManagement@Shell@In.c)
 *     ??$GetActivationFactory@UIUniversalAppModelStatics@WindowManagement@ApplicationModel@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIUniversalAppModelStatics@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1801B5ECC (--$GetActivationFactory@UIUniversalAppModelStatics@WindowManagement@ApplicationModel@Internal@Wi.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801CF85C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_2a8f8fa06f2e0b1768a49123f6915af2_::operator()(__int64 a1)
{
  HANDLE CurrentThread; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 (__fastcall *v11)(__int64, _QWORD *); // r14
  _QWORD *v12; // rbx
  __int64 v13; // rcx
  int v14; // eax
  __int64 *v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rcx
  int v21; // eax
  bool v22; // bl
  __int64 v23; // rdx
  Windows::Internal::ApplicationModel::WindowManagement *v24; // rcx
  __int64 v25; // rdx
  Windows::Internal::Shell::UwpWindowLifecycleManagement *v26; // rcx
  int v27; // eax
  __int64 v28; // rbx
  __int64 (__fastcall *v29)(__int64, __int64); // r14
  __int64 v30; // rsi
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rsi
  __int64 (__fastcall *v35)(__int64, _QWORD *); // r14
  _QWORD *v36; // rbx
  __int64 v37; // rcx
  int v38; // eax
  void *v39; // rdx
  char v40; // al
  wil::details *v41; // rcx
  __int64 result; // rax
  int v43; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  char v45; // [rsp+68h] [rbp+10h] BYREF
  __int64 v46; // [rsp+70h] [rbp+18h] BYREF
  __int64 v47; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = GetCurrentThread();
  SetThreadDescription(CurrentThread, L"WindowManager BAMO Thread Desktop");
  wil::CoInitializeEx(&v45);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(v3 + 272);
  *(_QWORD *)(v3 + 272) = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = CoreUICreate(v3 + 272);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x49,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
      (const char *)(unsigned int)v5,
      v43);
  v6 = *(_QWORD *)wil::GetActivationFactory<Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>(&v46);
  v7 = *(_QWORD *)(a1 + 16);
  v8 = *(_QWORD *)(v7 + 168);
  *(_QWORD *)(v7 + 168) = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v46);
  v9 = *(_QWORD *)(a1 + 16);
  v10 = *(_QWORD *)(v9 + 168);
  v11 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v10 + 48LL);
  v12 = (_QWORD *)(v9 + 176);
  v13 = *(_QWORD *)(v9 + 176);
  *v12 = 0LL;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v14 = v11(v10, v12);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x4E,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
      (const char *)(unsigned int)v14,
      v43);
  v15 = (__int64 *)wil::GetActivationFactory<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelStatics>(&v46);
  v16 = *(_QWORD *)(a1 + 16);
  v17 = *v15;
  *v15 = 0LL;
  v18 = *(_QWORD *)(v16 + 48);
  *(_QWORD *)(v16 + 48) = v17;
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v46);
  v19 = *(_QWORD *)(a1 + 16);
  v20 = *(_QWORD *)(v19 + 184);
  *(_QWORD *)(v19 + 184) = 0LL;
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  v21 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64))(v19 + 176))(
          *(_QWORD *)(v19 + 176),
          &GUID_05794c5e_e0da_40a2_b42f_c6b109da71c2,
          v19 + 184);
  if ( v21 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1815,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v21,
      v43);
  wil::GetActivationFactory<Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowLifecycleManagerStatics>(&v47);
  LODWORD(v46) = 17;
  RtlGetDeviceFamilyInfoEnum(0LL, &v46, 0LL);
  v22 = (_DWORD)v46 == 16;
  LOBYTE(v23) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_UwpWindowLifecycleManager>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_UwpWindowLifecycleManager>::GetImpl'::`2'::impl,
    v23);
  if ( Windows::Internal::ApplicationModel::WindowManagement::IsWindowManagerIDKEnabledForSKU(v24) )
  {
    if ( v22 )
    {
      LOBYTE(v25) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_CShellOnWindowManagerIDK>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_CShellOnWindowManagerIDK>::GetImpl'::`2'::impl,
        v25);
    }
    if ( Windows::Internal::Shell::UwpWindowLifecycleManagement::ShouldMoveUWLMIntoShellProcess(v26) )
    {
      v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v47 + 56LL))(v47);
      if ( v27 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x58,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
          (const char *)(unsigned int)v27,
          v43);
    }
  }
  v28 = v47;
  v29 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v47 + 48LL);
  v30 = *(_QWORD *)(a1 + 16);
  v31 = *(_QWORD *)(v30 + 232);
  *(_QWORD *)(v30 + 232) = 0LL;
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  v32 = v29(v28, v30 + 232);
  if ( v32 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x5A,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
      (const char *)(unsigned int)v32,
      v43);
  v33 = *(_QWORD *)(a1 + 16);
  v34 = *(_QWORD *)(v33 + 232);
  v35 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v34 + 120LL);
  v36 = (_QWORD *)(v33 + 240);
  v37 = *(_QWORD *)(v33 + 240);
  *v36 = 0LL;
  if ( v37 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  v38 = v35(v34, v36);
  if ( v38 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x5D,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
      (const char *)(unsigned int)v38,
      v43);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v47);
  v40 = v45;
  v45 = 0;
  if ( v40 )
    CoUninitialize();
  if ( *(_QWORD *)a1 )
    v41 = **(wil::details ***)a1;
  else
    v41 = 0LL;
  wil::details::SetEvent(v41, v39);
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 272LL) + 232LL))(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 272LL));
  if ( (int)result < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x6E,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
      (const char *)(unsigned int)result,
      v43);
  return result;
}
