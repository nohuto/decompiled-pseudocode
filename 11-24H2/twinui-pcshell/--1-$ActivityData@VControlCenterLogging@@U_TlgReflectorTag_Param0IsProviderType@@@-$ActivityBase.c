/*
 * XREFs of ??1?$ActivityData@VControlCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800E5280
 * Callers:
 *     ?OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800E4500 (-OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING.c)
 *     ??1?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800E513C (--1-$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?reset@?$shared_object@V?$ActivityData@VControlCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800E5174 (-reset@-$shared_object@V-$ActivityData@VControlCenterLogging@@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?RaisePropertyChangedEvent@CControlCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x1801220A8 (-RaisePropertyChangedEvent@CControlCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?RaiseHideExperienceRequestedEvent@CControlCenterExperienceManager@@AEAAJ_N_K11@Z @ 0x1801228CC (-RaiseHideExperienceRequestedEvent@CControlCenterExperienceManager@@AEAAJ_N_K11@Z.c)
 *     ?OnViewShown@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801F55D0 (-OnViewShown@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewDestroyed@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801F5700 (-OnViewDestroyed@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnPriorityBoostRequested@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180204FA0 (-OnPriorityBoostRequested@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@.c)
 *     ?RaiseHideDeepLinkRequestedEvent@CControlCenterExperienceManager@@AEAAJPEAUHSTRING__@@_N@Z @ 0x18020EC28 (-RaiseHideDeepLinkRequestedEvent@CControlCenterExperienceManager@@AEAAJPEAUHSTRING__@@_N@Z.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18002694C (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x1800269B0 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 */

__int64 __fastcall wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ControlCenterLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ControlCenterLogging,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_buffer::reset((volatile signed __int32 **)(a1 + 232));
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)(a1 + 40));
  return _TlgActivityBase<wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ControlCenterLogging,_TlgReflectorTag_Param0IsProviderType>,0,5>::~_TlgActivityBase<wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ControlCenterLogging,_TlgReflectorTag_Param0IsProviderType>,0,5>(a1);
}
