/*
 * XREFs of _lambda_201adf67891f12ccd8a16b46f471aeff_::operator() @ 0x1800D11FC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_76ebab358cbfe9072c97f7416da7a23a___::Run @ 0x1800D0240 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_76ebab358cbfe9072c97f7416da7a23a___--Run.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180031F14 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     WPP_SF_qd @ 0x180035750 (WPP_SF_qd.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x18003F64C (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?SetPresentingWindow@PresentedWindow@CFrameApplicationPresentation@@QEAAXPEAV2@PEAUITaskWindow@@PEAUHWND__@@@Z @ 0x1800D0F08 (-SetPresentingWindow@PresentedWindow@CFrameApplicationPresentation@@QEAAXPEAV2@PEAUITaskWindow@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PresentationStateBugFix@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800D1058 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PresentationStateBugFix@@@details@wil@@QE.c)
 *     ?_DestroyFrameIfPossible@CFrameApplicationPresentation@@AEAAXXZ @ 0x1800D10E0 (-_DestroyFrameIfPossible@CFrameApplicationPresentation@@AEAAXXZ.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800D25C0 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x1800D2A64 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_201adf67891f12ccd8a16b46f471aeff_::operator()(_QWORD *a1)
{
  _DWORD *v2; // r8
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // ebx
  __int64 v6; // rax
  _OWORD v7[2]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v8[48]; // [rsp+50h] [rbp-38h] BYREF

  v2 = (_DWORD *)a1[36];
  if ( *v2 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      (wil::ActivityThreadWatcher *)v7,
      (struct wil::details::IFailureCallback *)(a1 + 2),
      (const struct wil::details::StoredCallContextInfo *)(v2 + 10));
  }
  else
  {
    memset(v7, 0, sizeof(v7));
    wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
      (wil::details::ThreadFailureCallbackHolder *)v8,
      0LL,
      0LL,
      0);
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1[1] + 120LL) + 48LL))(*(_QWORD *)(a1[1] + 120LL), 0LL);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PresentationStateBugFix>::ReportUsage(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_PresentationStateBugFix>::GetImpl'::`2'::impl,
    1u,
    v3,
    v4);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(***(_QWORD ***)(a1[1] + 104LL) + 208LL))(
    **(_QWORD **)(a1[1] + 104LL),
    *(_QWORD *)(a1[1] + 128LL),
    0LL);
  CFrameApplicationPresentation::PresentedWindow::SetPresentingWindow(
    (CFrameApplicationPresentation::PresentedWindow *)(a1[1] + 64LL),
    (struct CFrameApplicationPresentation *)a1[1],
    0LL,
    **(HWND **)(a1[1] + 112LL));
  if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    v5 = *(_DWORD *)(a1[1] + 48LL);
    v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 32LL))(*a1);
    WPP_SF_qd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0xEu,
      &WPP_2c90db7e24993e53cb0c5ea1cdf0809e_Traceguids,
      v6,
      v5);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  ShowWindowAsync(*(HWND *)(a1[1] + 128LL), 0);
  CFrameApplicationPresentation::_DestroyFrameIfPossible((CFrameApplicationPresentation *)a1[1]);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)(a1 + 2), 0);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v7);
}
