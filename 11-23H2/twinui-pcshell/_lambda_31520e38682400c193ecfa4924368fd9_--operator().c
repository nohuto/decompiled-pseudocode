/*
 * XREFs of _lambda_31520e38682400c193ecfa4924368fd9_::operator() @ 0x1800250F0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e77611733156e07a25f619698f3ee1ef___::Run @ 0x180025360 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e77611733156e07a25f619698f3ee1ef___--Run.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180020B14 (-Stop@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param.c)
 *     ??0PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@PEAV1@@Z @ 0x1800244F8 (--0PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@PEAV1@@Z.c)
 *     ??1PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@XZ @ 0x1800245A4 (--1PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@XZ.c)
 *     ?_FixDialogsIfNeeded@CFrameApplicationPresentation@@AEAAXXZ @ 0x18002527C (-_FixDialogsIfNeeded@CFrameApplicationPresentation@@AEAAXXZ.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x1800BBDE4 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x18016CF38 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_Ld @ 0x1803AA2E4 (WPP_SF_Ld.c)
 *     ??$ClosedFrameShown@PEBG@CFramePresentationTelemetry@@SAX$$QEAPEBG@Z @ 0x1803C8B2C (--$ClosedFrameShown@PEBG@CFramePresentationTelemetry@@SAX$$QEAPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_31520e38682400c193ecfa4924368fd9_::operator()(unsigned int *a1)
{
  _DWORD *v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rsi
  int v6; // ebx
  WINBOOL v7; // edx
  __int64 v8; // rcx
  _BYTE v9[16]; // [rsp+30h] [rbp-19h] BYREF
  _OWORD v10[2]; // [rsp+40h] [rbp-9h] BYREF
  __int128 v11; // [rsp+60h] [rbp+17h] BYREF
  __int64 v12; // [rsp+70h] [rbp+27h]
  int v13; // [rsp+78h] [rbp+2Fh]
  __int64 v14; // [rsp+80h] [rbp+37h]
  __int64 v15; // [rsp+B0h] [rbp+67h] BYREF

  v2 = (_DWORD *)*((_QWORD *)a1 + 8);
  if ( *v2 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      (wil::ActivityThreadWatcher *)v10,
      (struct wil::details::IFailureCallback *)(a1 + 4),
      (const struct wil::details::StoredCallContextInfo *)(v2 + 10));
  }
  else
  {
    memset(v10, 0, sizeof(v10));
    v11 = 0LL;
    v12 = 0LL;
    v13 = 0;
    v14 = 0LL;
  }
  if ( !IsWindowVisible(*(HWND *)(*((_QWORD *)a1 + 1) + 128LL)) )
  {
    v8 = *((_QWORD *)a1 + 1);
    if ( **(_QWORD **)(v8 + 104) )
    {
      if ( !*a1 )
      {
        v15 = *(_QWORD *)(v8 + 608);
        CFramePresentationTelemetry::ClosedFrameShown<unsigned short const *>(&v15);
        ShowWindowAsync(*(HWND *)(*((_QWORD *)a1 + 1) + 128LL), 4);
      }
    }
  }
  if ( *((_BYTE *)a1 + 5) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)a1 + 1) + 120LL) + 208LL))(
      *(_QWORD *)(*((_QWORD *)a1 + 1) + 120LL),
      0LL);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)a1 + 1) + 120LL) + 56LL))(
    *(_QWORD *)(*((_QWORD *)a1 + 1) + 120LL),
    *a1);
  if ( *((_BYTE *)a1 + 5) )
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)a1 + 1) + 120LL) + 208LL))(
      *(_QWORD *)(*((_QWORD *)a1 + 1) + 120LL),
      1LL);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_Ld(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      16LL,
      &WPP_2c90db7e24993e53cb0c5ea1cdf0809e_Traceguids,
      *a1,
      *(_DWORD *)(*((_QWORD *)a1 + 1) + 48LL));
  v3 = *((_QWORD *)a1 + 1);
  v4 = **(_QWORD **)(v3 + 104);
  if ( v4 )
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v4 + 208LL))(
      v4,
      *(_QWORD *)(v3 + 128),
      (unsigned int)(*(_DWORD *)(v3 + 224) != 0) + 4);
  v5 = *((_QWORD *)a1 + 1);
  v6 = *a1;
  CFrameApplicationPresentation::PresentedWindowChangeHandler::PresentedWindowChangeHandler(
    (CFrameApplicationPresentation::PresentedWindowChangeHandler *)v9,
    (struct CFrameApplicationPresentation *)v5);
  if ( v6 == *(_DWORD *)(v5 + 224) )
    *(_BYTE *)(v5 + 552) = 1;
  CFrameApplicationPresentation::PresentedWindowChangeHandler::~PresentedWindowChangeHandler((CFrameApplicationPresentation::PresentedWindowChangeHandler *)v9);
  CFrameApplicationPresentation::_FixDialogsIfNeeded(*((CFrameApplicationPresentation **)a1 + 1));
  if ( *((_BYTE *)a1 + 4) )
    (*(void (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr + 24LL))(
      CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
      *(_QWORD *)(*((_QWORD *)a1 + 1) + 128LL),
      0LL);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
    (__int64)(a1 + 4),
    v7);
  if ( v13 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)&v11);
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v10);
}
