/*
 * XREFs of ?FinalizeWindowPlacement@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z @ 0x180398F9C
 * Callers:
 *     ?UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18039C860 (-UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$ExperienceManager_FinalizeWindowPlacement_Finalized@AEAW4Placement@Popups@UI@Windows@@@ExperienceManager_FinalizeWindowPlacement@QuickConnectTelemetry@@QEAAXAEAW4Placement@Popups@UI@Windows@@@Z @ 0x1803969AC (--$ExperienceManager_FinalizeWindowPlacement_Finalized@AEAW4Placement@Popups@UI@Windows@@@Experi.c)
 *     ??$ExperienceManager_FinalizeWindowPlacement_Prefered@AEAW4Placement@Popups@UI@Windows@@@ExperienceManager_FinalizeWindowPlacement@QuickConnectTelemetry@@QEAAXAEAW4Placement@Popups@UI@Windows@@@Z @ 0x180396A1C (--$ExperienceManager_FinalizeWindowPlacement_Prefered@AEAW4Placement@Popups@UI@Windows@@@Experie.c)
 *     ??0?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1803978EC (--0-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle_ea_1803978EC.c)
 *     ??1ExperienceManager_FinalizeWindowPlacement@QuickConnectTelemetry@@QEAA@XZ @ 0x180397D50 (--1ExperienceManager_FinalizeWindowPlacement@QuickConnectTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@ExperienceManager_FinalizeWindowPlacement@QuickConnectTelemetry@@QEAAXXZ @ 0x18039AEC4 (-StartActivity@ExperienceManager_FinalizeWindowPlacement@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18039B3C4 (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?ValidateBoundary@CQuickConnectExperienceManager@@AEAAJW4Placement@Popups@UI@Windows@@HHAEBUtagRECT@@AEA_N@Z @ 0x18039CBD4 (-ValidateBoundary@CQuickConnectExperienceManager@@AEAAJW4Placement@Popups@UI@Windows@@HHAEBUtagR.c)
 */

__int64 __fastcall CQuickConnectExperienceManager::FinalizeWindowPlacement(
        CQuickConnectExperienceManager *this,
        unsigned int a2,
        unsigned int a3,
        const struct tagRECT *a4)
{
  int v9; // r14d
  unsigned int v10; // r11d
  unsigned int *v11; // rbx
  int v12; // esi
  _BYTE v13[16]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v14[42]; // [rsp+48h] [rbp-C0h] BYREF
  int v15; // [rsp+198h] [rbp+90h] BYREF
  __m128i si128; // [rsp+19Ch] [rbp+94h]
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v14,
    (__int64)"ExperienceManager_FinalizeWindowPlacement");
  v14[0] = &QuickConnectTelemetry::ExperienceManager_FinalizeWindowPlacement::`vftable';
  QuickConnectTelemetry::ExperienceManager_FinalizeWindowPlacement::StartActivity((QuickConnectTelemetry::ExperienceManager_FinalizeWindowPlacement *)v14);
  if ( *((_BYTE *)this + 388) )
  {
LABEL_2:
    QuickConnectTelemetry::ExperienceManager_FinalizeWindowPlacement::~ExperienceManager_FinalizeWindowPlacement((QuickConnectTelemetry::ExperienceManager_FinalizeWindowPlacement *)v14);
    return 0LL;
  }
  else
  {
    QuickConnectTelemetry::ExperienceManager_FinalizeWindowPlacement::ExperienceManager_FinalizeWindowPlacement_Prefered<enum Windows::UI::Popups::Placement &>(
      (__int64)v14,
      (int *)this + 90);
    v9 = *((_DWORD *)this + 90);
    v10 = 0;
    v11 = (unsigned int *)&v15;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v15 = v9;
    v13[0] = 0;
    while ( v10 < 5 )
    {
      if ( !v10 || *v11 != v9 )
      {
        v12 = *v11;
        CQuickConnectExperienceManager::ValidateBoundary(this, *v11, a2, a3, a4, v13);
        if ( v13[0] )
        {
          *((_DWORD *)this + 90) = v12;
          QuickConnectTelemetry::ExperienceManager_FinalizeWindowPlacement::ExperienceManager_FinalizeWindowPlacement_Finalized<enum Windows::UI::Popups::Placement &>(
            (__int64)v14,
            (int *)this + 90);
          wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v14);
          goto LABEL_2;
        }
      }
      ++v10;
      ++v11;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x394,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
      (const char *)0x80004005LL);
    QuickConnectTelemetry::ExperienceManager_FinalizeWindowPlacement::~ExperienceManager_FinalizeWindowPlacement((QuickConnectTelemetry::ExperienceManager_FinalizeWindowPlacement *)v14);
    return 2147500037LL;
  }
}
