/*
 * XREFs of ?Stop@?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800E4FF4
 * Callers:
 *     ?OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800E4500 (-OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING.c)
 *     ?PositionView@CControlCenterExperienceManager@@AEAAJXZ @ 0x1800E5D14 (-PositionView@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?RaisePropertyChangedEvent@CControlCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x1801220A8 (-RaisePropertyChangedEvent@CControlCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?RaiseHideExperienceRequestedEvent@CControlCenterExperienceManager@@AEAAJ_N_K11@Z @ 0x1801228CC (-RaiseHideExperienceRequestedEvent@CControlCenterExperienceManager@@AEAAJ_N_K11@Z.c)
 *     ?OnViewShown@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801F55D0 (-OnViewShown@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewDestroyed@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801F5700 (-OnViewDestroyed@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnPriorityBoostRequested@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180204FA0 (-OnPriorityBoostRequested@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@.c)
 *     ?RaiseHideDeepLinkRequestedEvent@CControlCenterExperienceManager@@AEAAJPEAUHSTRING__@@_N@Z @ 0x18020EC28 (-RaiseHideDeepLinkRequestedEvent@CControlCenterExperienceManager@@AEAAJPEAUHSTRING__@@_N@Z.c)
 *     ?CompleteHide@CControlCenterExperienceManager@@AEAAJXZ @ 0x180374038 (-CompleteHide@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnPriorityUnboostRequested@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180375940 (-OnPriorityUnboostRequested@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience.c)
 *     ?OnViewHidden@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180375BE0 (-OnViewHidden@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewUncloaking@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180375C80 (-OnViewUncloaking@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?RaiseStartAnimationEvent@CControlCenterExperienceManager@@AEAAJ_K00@Z @ 0x180376150 (-RaiseStartAnimationEvent@CControlCenterExperienceManager@@AEAAJ_K00@Z.c)
 *     ?ReturnFocus@CControlCenterExperienceManager@@AEAAJXZ @ 0x1803765B0 (-ReturnFocus@CControlCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800E3E94 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?Provider@ControlCenterLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800E5C38 (-Provider@ControlCenterLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18029644C (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
        _QWORD *a1,
        int a2)
{
  RTL_SRWLOCK *v4; // rbx
  __int64 v5; // rax
  int v6; // esi
  const struct wil::FailureInfo *v7; // rdx
  int v8; // esi
  const struct _tlgProvider_t *v9; // rbx
  _BYTE v10[192]; // [rsp+40h] [rbp-69h] BYREF
  __int64 v11; // [rsp+110h] [rbp+67h] BYREF
  PSRWLOCK SRWLock; // [rsp+120h] [rbp+77h] BYREF
  __int64 v13; // [rsp+128h] [rbp+7Fh] BYREF

  v4 = (RTL_SRWLOCK *)a1[35];
  if ( v4 )
  {
    v4 += 33;
    AcquireSRWLockExclusive(v4);
    v11 = 0LL;
  }
  else
  {
    SRWLock = 0LL;
  }
  v5 = a1[34];
  v6 = *(_DWORD *)(v5 + 248);
  if ( v6 < 1 )
  {
    memset_0(v10, 0, 0x98uLL);
    wil::details::WilFailFast((wil::details *)v10, v7);
  }
  if ( *(int *)(v5 + 72) >= 0 )
    *(_DWORD *)(v5 + 72) = a2;
  v8 = v6 - 1;
  *(_DWORD *)(v5 + 248) = v8;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  if ( v8 )
  {
    v9 = ControlCenterLogging::Provider();
    if ( *(_DWORD *)v9 > 5u )
    {
      LODWORD(v11) = GetCurrentThreadId();
      LODWORD(SRWLock) = a2;
      v13 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v9,
        byte_1807E0E76,
        (const GUID *)(a1[34] + 8LL),
        0LL,
        (__int64)&v13,
        (__int64)&SRWLock,
        (__int64)&v11);
    }
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)a1);
}
