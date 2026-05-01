/*
 * XREFs of ?PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@1@@Z @ 0x1800B5D74
 * Callers:
 *     ?WorkAreaMayHaveChanged@CStartExperienceManager@@UEAAJXZ @ 0x1800B4450 (-WorkAreaMayHaveChanged@CStartExperienceManager@@UEAAJXZ.c)
 *     ?InputHostShowing@CStartExperienceManager@@UEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z @ 0x180201EF0 (-InputHostShowing@CStartExperienceManager@@UEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@.c)
 *     ?OnViewPropertiesChanging@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1802183D0 (-OnViewPropertiesChanging@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?InputHostHiding@CStartExperienceManager@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z @ 0x18021BC00 (-InputHostHiding@CStartExperienceManager@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z.c)
 * Callees:
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180026C3C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800B4E18 (-Stop@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??0?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800B6034 (--0-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_NPEAPEAUHMONITOR__@@@Z @ 0x1800B60E0 (-GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT.c)
 *     ?StartActivity@StartMenuReposition@StartMenuExperienceTelemetry@@QEAAXXZ @ 0x1800B67CC (-StartActivity@StartMenuReposition@StartMenuExperienceTelemetry@@QEAAXXZ.c)
 *     ?Destroy@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800B6A54 (-Destroy@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ??1?$ActivityData@VStartMenuExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800B6AF8 (--1-$ActivityData@VStartMenuExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activi.c)
 *     ?reset@?$shared_object@V?$ActivityData@VStartMenuExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800B6B2C (-reset@-$shared_object@V-$ActivityData@VStartMenuExperienceLogging@@U_TlgReflectorTag_Param0IsPr.c)
 *     ?IsEmpty@CRect@Geometry@@QEBA_NXZ @ 0x1800B6B84 (-IsEmpty@CRect@Geometry@@QEBA_NXZ.c)
 *     ??$ReportWindowPosition@AEAJAEAJJJAEAE_NAEAW4PositionMenuFlags@CStartExperienceManager@@@StartMenuReposition@StartMenuExperienceTelemetry@@QEAAXAEAJ0$$QEAJ1AEAE$$QEA_NAEAW4PositionMenuFlags@CStartExperienceManager@@@Z @ 0x1800B6BA4 (--$ReportWindowPosition@AEAJAEAJJJAEAE_NAEAW4PositionMenuFlags@CStartExperienceManager@@@StartMe.c)
 *     ?Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z @ 0x180209CC4 (-Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStartExperienceManager::PositionMenu(__int64 a1, __int64 a2, int a3)
{
  char v3; // r14
  struct CSingleViewShellExperience *v6; // rdx
  int MonitorInformation; // esi
  DWORD v8; // edx
  Geometry::CRect *v9; // rcx
  float v10; // xmm0_4
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // r8d
  bool v15[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v16; // [rsp+44h] [rbp-BCh] BYREF
  int v17; // [rsp+48h] [rbp-B8h] BYREF
  int v18; // [rsp+50h] [rbp-B0h] BYREF
  int v19; // [rsp+54h] [rbp-ACh] BYREF
  struct tagRECT v20; // [rsp+58h] [rbp-A8h] BYREF
  int v21; // [rsp+68h] [rbp-98h] BYREF
  __int16 v22; // [rsp+6Ch] [rbp-94h]
  __int16 v23; // [rsp+6Eh] [rbp-92h]
  __int64 v24; // [rsp+70h] [rbp-90h]
  __int64 v25; // [rsp+78h] [rbp-88h]
  __int64 v26; // [rsp+80h] [rbp-80h]
  void **v27; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v28[272]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v29[8]; // [rsp+1A8h] [rbp+A8h] BYREF
  _BYTE v30[48]; // [rsp+1B0h] [rbp+B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+128h]

  v3 = a3;
  v17 = a3;
  wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)&v27);
  v27 = &StartMenuExperienceTelemetry::StartMenuReposition::`vftable';
  StartMenuExperienceTelemetry::StartMenuReposition::StartActivity((StartMenuExperienceTelemetry::StartMenuReposition *)&v27);
  v20 = 0LL;
  v16 = 0;
  v15[0] = 0;
  MonitorInformation = CStartExperienceManager::GetMonitorInformation(
                         (CStartExperienceManager *)a1,
                         v6,
                         &v20,
                         (enum EDGEUI_TRAYSTUCKPLACE *)&v16,
                         v15,
                         0LL);
  if ( MonitorInformation < 0 )
    goto LABEL_8;
  v15[0] = 1;
  v18 = v20.bottom - v20.top;
  v19 = v20.right - v20.left;
  StartMenuExperienceTelemetry::StartMenuReposition::ReportWindowPosition<long &,long &,long,long,unsigned char &,bool,enum CStartExperienceManager::PositionMenuFlags &>(
    (unsigned int)&v27,
    (unsigned int)&v20,
    (unsigned int)&v20.top,
    (unsigned int)&v19,
    (__int64)&v18,
    a2 + 52,
    (__int64)v15,
    (__int64)&v17);
  if ( !Geometry::CRect::IsEmpty((Geometry::CRect *)(a1 + 744)) && Geometry::CRect::Intersects(v9, &v20) )
  {
    *(_DWORD *)(a1 + 736) = *(_DWORD *)(a2 + 44);
    v8 = *(_DWORD *)(a1 + 748);
    v14 = (int)*(float *)(a2 + 48) - (v20.bottom - v8);
    v10 = FLOAT_306_0;
    if ( *(float *)(a2 + 48) < 306.0 )
    {
LABEL_13:
      v20.bottom -= 306;
      goto LABEL_4;
    }
    if ( (int)*(float *)(a2 + 48) >= *(_DWORD *)(a1 + 748) - v20.top )
    {
      if ( v14 < 306 )
        goto LABEL_13;
      v10 = (float)v14;
    }
    else
    {
      v10 = *(float *)(a2 + 48);
    }
    v20.bottom = *(_DWORD *)(a1 + 748);
    goto LABEL_4;
  }
  *(_DWORD *)(a1 + 736) = *(_DWORD *)(a2 + 44);
  v10 = *(float *)(a2 + 48);
LABEL_4:
  *(float *)(a1 + 740) = v10;
  if ( *(_QWORD *)(a2 + 24)
    && (v12 = (*(__int64 (__fastcall **)(_QWORD, struct tagRECT *))(**(_QWORD **)(a2 + 80) + 96LL))(
                *(_QWORD *)(a2 + 80),
                &v20),
        v13 = v12,
        v12 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20D,
      (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v12);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x46D,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)v13);
    MonitorInformation = v13;
  }
  else
  {
    if ( (v3 & 1) != 0 )
    {
      v21 = 4;
      v22 = v16;
      v23 = 0;
      v24 = 0LL;
      v25 = 0LL;
      v26 = 0LL;
      RtlPublishWnfStateData(WNF_SHEL_START_VISIBILITY_CHANGED, 0LL, &v21, 32LL);
    }
    wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v27, v8);
    MonitorInformation = 0;
  }
LABEL_8:
  v27 = &StartMenuExperienceTelemetry::StartMenuReposition::`vftable';
  wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v27);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v30);
  wil::details::shared_object<wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<StartMenuExperienceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v29);
  wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<StartMenuExperienceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<StartMenuExperienceLogging,_TlgReflectorTag_Param0IsProviderType>(v28);
  return (unsigned int)MonitorInformation;
}
