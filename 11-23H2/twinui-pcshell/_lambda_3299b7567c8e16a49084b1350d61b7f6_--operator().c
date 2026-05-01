/*
 * XREFs of _lambda_3299b7567c8e16a49084b1350d61b7f6_::operator() @ 0x180026D3C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d0da97affcf0ee4e8d5f1623cb8d936b___::Run @ 0x180028DB0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d0da97affcf0ee4e8d5f1623cb8d936b___--Run.c)
 * Callees:
 *     ?ContinueOnCurrentThread@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18001D128 (-ContinueOnCurrentThread@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@PEAV1@@Z @ 0x1800244F8 (--0PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@PEAV1@@Z.c)
 *     ??1PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@XZ @ 0x1800245A4 (--1PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@XZ.c)
 *     ?_FixDialogsIfNeeded@CFrameApplicationPresentation@@AEAAXXZ @ 0x18002527C (-_FixDialogsIfNeeded@CFrameApplicationPresentation@@AEAAXXZ.c)
 *     ?SetPresentingWindow@PresentedWindow@CFrameApplicationPresentation@@QEAAXPEAV2@PEAUITaskWindow@@PEAUHWND__@@@Z @ 0x1800253E8 (-SetPresentingWindow@PresentedWindow@CFrameApplicationPresentation@@QEAAXPEAV2@PEAUITaskWindow@@.c)
 *     ?_UpdateMinSizePreferences@CFrameApplicationPresentation@@AEAAJPEAUHWND__@@@Z @ 0x180028BF8 (-_UpdateMinSizePreferences@CFrameApplicationPresentation@@AEAAJPEAUHWND__@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_8c1dabe8f4de7f4305212773c342f192___ @ 0x18005F1D4 (CIAMGlobals--QueueViewManagementTask__lambda_8c1dabe8f4de7f4305212773c342f192___.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180132FE0 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x18016CF38 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_qd @ 0x1803A4DBC (WPP_SF_qd.c)
 *     ??$FailedSettingPresentedWindowOnFrame@AEBJPEBG@CFramePresentationTelemetry@@SAXAEBJ$$QEAPEBG@Z @ 0x1803C8C08 (--$FailedSettingPresentedWindowOnFrame@AEBJPEBG@CFramePresentationTelemetry@@SAXAEBJ$$QEAPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_3299b7567c8e16a49084b1350d61b7f6_::operator()(_QWORD *a1)
{
  _QWORD *v2; // r15
  bool v3; // r14
  unsigned __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rbx
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  struct CFrameApplicationPresentation *v9; // rbx
  int v10; // ebx
  __int64 v11; // rax
  int v12; // [rsp+20h] [rbp-49h]
  _BYTE v13[16]; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v14[32]; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v15[24]; // [rsp+60h] [rbp-9h] BYREF
  int v16; // [rsp+78h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  unsigned int v18; // [rsp+D0h] [rbp+67h] BYREF
  unsigned __int64 v19; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v20; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v21; // [rsp+E8h] [rbp+7Fh] BYREF

  v2 = a1 + 2;
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 2),
    (wil::ActivityThreadWatcher *)v14);
  v3 = (unsigned int)SHIsSameObject((struct IUnknown *)*a1, **(struct IUnknown ***)(a1[1] + 104LL)) != 0;
  v4 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 32LL))(*a1);
  v5 = a1[1];
  if ( v4 == **(_QWORD **)(v5 + 112) && v3 )
  {
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v2, 0LL);
  }
  else
  {
    if ( !IsWindowVisible(*(HWND *)(v5 + 128)) )
      ShowWindowAsync(*(HWND *)(a1[1] + 128LL), 4);
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v10 = *(_DWORD *)(a1[1] + 48LL);
      v11 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 32LL))(*a1);
      WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_2c90db7e24993e53cb0c5ea1cdf0809e_Traceguids, v11, v10);
    }
    v6 = **(_QWORD **)(a1[1] + 104LL);
    v20 = v6;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v20);
    CFrameApplicationPresentation::PresentedWindow::SetPresentingWindow(
      (CFrameApplicationPresentation::PresentedWindow *)(a1[1] + 64LL),
      (struct CFrameApplicationPresentation *)a1[1],
      (struct ITaskWindow *)*a1,
      v4);
    if ( (unsigned int)GetWindowBand(*(_QWORD *)(a1[1] + 128LL), &v18) )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 24LL))(*a1, v18);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v7 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**(_QWORD **)(a1[1] + 120LL) + 48LL))(
           *(_QWORD *)(a1[1] + 120LL),
           v4);
    LODWORD(v19) = v7;
    v8 = retaddr;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2BC,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
        (const char *)(unsigned int)v7,
        v12);
      v21 = *(_QWORD *)(a1[1] + 608LL);
      CFramePresentationTelemetry::FailedSettingPresentedWindowOnFrame<long const &,unsigned short const *>(&v19, &v21);
    }
    if ( v4 )
    {
      v19 = v4;
      CIAMGlobals::QueueViewManagementTask__lambda_8c1dabe8f4de7f4305212773c342f192___(v8, &v19);
    }
    CFrameApplicationPresentation::_UpdateMinSizePreferences(
      (CFrameApplicationPresentation *)a1[1],
      **(HWND **)(a1[1] + 112LL));
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*a1 + 208LL))(
      *a1,
      *(_QWORD *)(a1[1] + 128LL),
      (unsigned int)(*(_DWORD *)(a1[1] + 224LL) != 0) + 4);
    if ( v6 && !v3 )
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v6 + 208LL))(v6, *(_QWORD *)(a1[1] + 128LL), 0LL);
    v9 = (struct CFrameApplicationPresentation *)a1[1];
    CFrameApplicationPresentation::PresentedWindowChangeHandler::PresentedWindowChangeHandler(
      (CFrameApplicationPresentation::PresentedWindowChangeHandler *)v13,
      v9);
    *((_BYTE *)v9 + 96) = 1;
    CFrameApplicationPresentation::PresentedWindowChangeHandler::~PresentedWindowChangeHandler((CFrameApplicationPresentation::PresentedWindowChangeHandler *)v13);
    CFrameApplicationPresentation::_FixDialogsIfNeeded((CFrameApplicationPresentation *)a1[1]);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v2, 0LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v20);
  }
  if ( v16 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v15);
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v14);
}
