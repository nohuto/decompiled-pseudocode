/*
 * XREFs of _lambda_2a8f8fa06f2e0b1768a49123f6915af2_::operator() @ 0x18004CBE8
 * Callers:
 *     std::thread::_Invoke_std::tuple__lambda_2a8f8fa06f2e0b1768a49123f6915af2____0_ @ 0x1802CE500 (std--thread--_Invoke_std--tuple__lambda_2a8f8fa06f2e0b1768a49123f6915af2____0_.c)
 * Callees:
 *     ?IsWindowManagerIDKEnabledForSKU@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x180019D6C (-IsWindowManagerIDKEnabledForSKU@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_UwpWindowLifecycleManager@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004CFC4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_UwpWindowLifecycleManager@@@details@wil@@.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18004D04C (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18004D078 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??$GetActivationFactory@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18004D0B0 (--$GetActivationFactory@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@@@wil.c)
 *     ??$GetActivationFactory@UIUniversalAppModelStatics@WindowManagement@ApplicationModel@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIUniversalAppModelStatics@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18004D150 (--$GetActivationFactory@UIUniversalAppModelStatics@WindowManagement@ApplicationModel@Internal@Wi.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CShellOnWindowManagerIDK@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18010EB80 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CShellOnWindowManagerIDK@@@details@wil@@Q.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18029721C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetActivationFactory@UIUwpWindowLifecycleManagerStatics@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIUwpWindowLifecycleManagerStatics@UwpWindowLifecycleManagement@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1802B30C0 (--$GetActivationFactory@UIUwpWindowLifecycleManagerStatics@UwpWindowLifecycleManagement@Shell@In.c)
 *     ?ShouldMoveUWLMIntoShellProcess@UwpWindowLifecycleManagement@Shell@Internal@Windows@@YA_NXZ @ 0x1802BFFEC (-ShouldMoveUWLMIntoShellProcess@UwpWindowLifecycleManagement@Shell@Internal@Windows@@YA_NXZ.c)
 *     ?CoInitializeEx@wil@@YA?AV?$unique_call@P6AXXZ$1?CoUninitialize@@YAXXZ$00@1@K@Z @ 0x1802C2D70 (-CoInitializeEx@wil@@YA-AV-$unique_call@P6AXXZ$1-CoUninitialize@@YAXXZ$00@1@K@Z.c)
 *     ??$query_to@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBAXPEAPEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1802C4DCC (--$query_to@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@@-$co.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall lambda_2a8f8fa06f2e0b1768a49123f6915af2_::operator()(__int64 a1)
{
  HANDLE CurrentThread; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 (__fastcall *v11)(__int64, __int64); // rdi
  __int64 v12; // rbx
  int v13; // eax
  __int64 *v14; // rax
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // rcx
  bool v22; // bl
  __int64 v23; // rdx
  Windows::Internal::ApplicationModel::WindowManagement *v24; // rcx
  __int64 v25; // rdx
  Windows::Internal::Shell::UwpWindowLifecycleManagement *v26; // rcx
  int v27; // eax
  __int64 v28; // rbx
  __int64 (__fastcall *v29)(__int64, __int64); // rsi
  __int64 v30; // rdi
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rsi
  __int64 (__fastcall *v35)(__int64, __int64); // rdi
  __int64 v36; // rbx
  int v37; // eax
  void *v38; // rdx
  char v39; // al
  wil::details *v40; // rcx
  int v41; // eax
  void *v42; // rdx
  wil::details *v43; // rcx
  _OWORD v44[3]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  char v47; // [rsp+68h] [rbp+10h] BYREF
  __int64 v48; // [rsp+70h] [rbp+18h] BYREF
  __int64 v49; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = GetCurrentThread();
  SetThreadDescription(CurrentThread, L"WindowManager BAMO Thread Desktop");
  try
  {
    wil::CoInitializeEx(&v47);
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
        v44[0]);
    v6 = *(_QWORD *)wil::GetActivationFactory<Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>(&v48);
    v7 = *(_QWORD *)(a1 + 16);
    v8 = *(_QWORD *)(v7 + 168);
    *(_QWORD *)(v7 + 168) = v6;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    if ( v48 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
    v9 = *(_QWORD *)(a1 + 16);
    v10 = *(_QWORD *)(v9 + 168);
    v11 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 48LL);
    v12 = v9 + 176;
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(v9 + 176);
    v13 = v11(v10, v12);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x4E,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v13,
        v44[0]);
    v14 = (__int64 *)wil::GetActivationFactory<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelStatics>(&v48);
    v15 = *(_QWORD *)(a1 + 16);
    v16 = *v14;
    *v14 = 0LL;
    v17 = *(_QWORD *)(v15 + 48);
    *(_QWORD *)(v15 + 48) = v16;
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    if ( v48 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
    v18 = *(_QWORD *)(a1 + 16);
    v19 = v18 + 176;
    v20 = v18 + 184;
    v21 = *(_QWORD *)(v18 + 184);
    *(_QWORD *)(v18 + 184) = 0LL;
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher,wil::err_exception_policy>::query_to<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher>(
      v19,
      v20);
    wil::GetActivationFactory<Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowLifecycleManagerStatics>(&v49);
    LODWORD(v48) = 17;
    RtlGetDeviceFamilyInfoEnum(0LL, &v48, 0LL);
    v22 = (_DWORD)v48 == 16;
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
        v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v49 + 56LL))(v49);
        if ( v27 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x58,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
            (const char *)(unsigned int)v27,
            v44[0]);
      }
    }
    v28 = v49;
    v29 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v49 + 48LL);
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
        v44[0]);
    v33 = *(_QWORD *)(a1 + 16);
    v34 = *(_QWORD *)(v33 + 232);
    v35 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v34 + 120LL);
    v36 = v33 + 240;
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(v33 + 240);
    v37 = v35(v34, v36);
    if ( v37 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5D,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v37,
        v44[0]);
    if ( v49 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
    v39 = v47;
    v47 = 0;
    if ( v39 )
      CoUninitialize();
    if ( *(_QWORD *)a1 )
      v40 = **(wil::details ***)a1;
    else
      v40 = 0LL;
    wil::details::SetEvent(v40, v38);
  }
  catch ( ... )
  {
    v44[0] = 0LL;
    __ExceptionPtrCreate(v44);
    __ExceptionPtrCurrentException(v44);
    __ExceptionPtrAssign(*(void **)(a1 + 32), v44);
    __ExceptionPtrDestroy(v44);
    if ( *(_QWORD *)a1 )
      v43 = **(wil::details ***)a1;
    else
      v43 = 0LL;
    wil::details::SetEvent(v43, v42);
    return;
  }
  v41 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 272LL) + 232LL))(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 272LL));
  if ( v41 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x6E,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
      (const char *)(unsigned int)v41,
      v44[0]);
}
