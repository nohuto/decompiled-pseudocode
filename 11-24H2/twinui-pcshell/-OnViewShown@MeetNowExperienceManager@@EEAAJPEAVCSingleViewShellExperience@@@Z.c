/*
 * XREFs of ?OnViewShown@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803CAD60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18003ED20 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A5D64 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MACFlyout@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801EA19C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MACFlyout@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJPEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801FFD78 (-RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJPEAUILightDismissNotification@@PEAU.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$query_to@UIMeetAndChatManager@Shell@Internal@Windows@@@?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIMeetAndChatManager@Shell@Internal@Windows@@@Z @ 0x1803C7634 (--$query_to@UIMeetAndChatManager@Shell@Internal@Windows@@@-$com_ptr_t@UIWeakReference@@Uerr_retu.c)
 *     ??1ShowFlyoutActivity@MeetNowTelemetry@@QEAA@XZ @ 0x1803C7DB0 (--1ShowFlyoutActivity@MeetNowTelemetry@@QEAA@XZ.c)
 *     ?CancelShowFlyoutActivityTimeout@MeetNowExperienceManager@@AEAAXXZ @ 0x1803C8750 (-CancelShowFlyoutActivityTimeout@MeetNowExperienceManager@@AEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VMeetNowTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803CC430 (-Stop@-$ActivityBase@VMeetNowTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_.c)
 *     ?TransferToCurrentThread@ShowFlyoutActivity@MeetNowTelemetry@@QEAA?AV12@XZ @ 0x1803CC758 (-TransferToCurrentThread@ShowFlyoutActivity@MeetNowTelemetry@@QEAA-AV12@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MeetNowExperienceManager::OnViewShown(MeetNowExperienceManager *this, ExperienceManagerUtils **a2)
{
  char *v4; // rsi
  __int64 v5; // r9
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v10; // rdx
  const char *v11; // r9
  HWND v12; // rax
  const char *v13; // r9
  int v14; // eax
  int v15; // eax
  __int64 v16; // rdx
  const char *v17; // r9
  __int64 v18; // rax
  __int64 result; // rax
  __int64 v20; // [rsp+20h] [rbp-1A8h] BYREF
  _QWORD v21[3]; // [rsp+28h] [rbp-1A0h] BYREF
  __int128 v22; // [rsp+40h] [rbp-188h] BYREF
  _BYTE v23[336]; // [rsp+50h] [rbp-178h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+0h]

  v4 = (char *)this - 56;
  MeetNowExperienceManager::CancelShowFlyoutActivityTimeout((MeetNowExperienceManager *)((char *)this - 56));
  try
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_MACFlyout>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_MACFlyout>::GetImpl'::`2'::impl,
      1u,
      3u,
      v5);
    v7 = ExperienceManagerUtils::WindowFromViewWrapper(a2[3], v6);
    v22 = 0LL;
    v21[0] = 19LL;
    v21[1] = &v22;
    v21[2] = 16LL;
    if ( !(unsigned int)SetWindowCompositionAttribute(v7, v21, v8, v9) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x115,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
        v11);
    v12 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(a2[3], v10);
    if ( !SetPropW(v12, L"MeetAndChatFallback", HANDLE_FLAG_INHERIT) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x118,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
        v13);
    v14 = SingleViewLightDismissHelper::RegisterWithLightDismiss(
            (MeetNowExperienceManager *)((char *)this + 112),
            (struct ILightDismissNotification *)(((unsigned __int64)this - 40) & -(__int64)(v4 != 0LL)),
            a2[3]);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x11A,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
        (const char *)(unsigned int)v14);
    v20 = 0LL;
    v15 = wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>::query_to<Windows::Internal::Shell::IMeetAndChatManager>(
            (_QWORD *)this + 93,
            &v20);
    if ( v15 >= 0 )
    {
      LOBYTE(v16) = 1;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 56LL))(v20, v16);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x11D,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
        (const char *)(unsigned int)v15);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v20);
    if ( **((_DWORD **)this + 83) == 1 )
    {
      v18 = MeetNowTelemetry::ShowFlyoutActivity::TransferToCurrentThread((char *)this + 392, v23);
      wil::ActivityBase<MeetNowTelemetryLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::Stop(v18);
      MeetNowTelemetry::ShowFlyoutActivity::~ShowFlyoutActivity((MeetNowTelemetry::ShowFlyoutActivity *)v23);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x127,
                           (int)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
                           v17);
  }
  return result;
}
