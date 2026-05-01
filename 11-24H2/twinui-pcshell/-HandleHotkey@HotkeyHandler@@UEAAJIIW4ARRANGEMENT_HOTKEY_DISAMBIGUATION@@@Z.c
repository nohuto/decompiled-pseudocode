/*
 * XREFs of ?HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x1805AE210
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017AE8 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsSnappedWindow@SnapLayoutHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180048BC0 (-IsSnappedWindow@SnapLayoutHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationView@@@Z @ 0x18006E894 (-GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationVie.c)
 *     ?s_CreateInstance@CSnappedWindow@@SAJPEAUIImmersiveMonitor@@PEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x18008C72C (-s_CreateInstance@CSnappedWindow@@SAJPEAUIImmersiveMonitor@@PEAUIApplicationView@@AEBU_GUID@@PEA.c)
 *     ?CSnappedWindowModel_CreateInstance@@YAJPEAUIApplicationView@@PEAUIApplicationViewCollection@@PEAUIImmersiveMonitorManager@@W4SnappedWindowOcclusionModel@@AEBU_GUID@@PEAPEAX@Z @ 0x180090D50 (-CSnappedWindowModel_CreateInstance@@YAJPEAUIApplicationView@@PEAUIApplicationViewCollection@@PE.c)
 *     ?IsEmpty@CRect@Geometry@@QEBA_NXZ @ 0x1800B6B84 (-IsEmpty@CRect@Geometry@@QEBA_NXZ.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180186520 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18018698C (--0-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ?StartActivity@WindowArrangementHotkeyProcessing@CSnapComponentTelemetry@@QEAAXXZ @ 0x1802AD03C (-StartActivity@WindowArrangementHotkeyProcessing@CSnapComponentTelemetry@@QEAAXXZ.c)
 *     ??1WindowArrangementHotkeyProcessing@CSnapComponentTelemetry@@QEAA@XZ @ 0x1802CCD7C (--1WindowArrangementHotkeyProcessing@CSnapComponentTelemetry@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ @ 0x1802EDA58 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnouncement@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1805A0894 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnouncement@@@details@.c)
 *     ??$HotkeyPressed@I@WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAAX$$QEAI@Z @ 0x1805ACE2C (--$HotkeyPressed@I@WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAAX$$QEAI@Z.c)
 *     ??$StartEndWindowStates@II@WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAAX$$QEAI0@Z @ 0x1805ACE9C (--$StartEndWindowStates@II@WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAAX$$QEAI0@Z.c)
 *     ??$TraversedMonitors@I@WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAAX$$QEAI@Z @ 0x1805ACF3C (--$TraversedMonitors@I@WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAAX$$QEAI@Z.c)
 *     ??$_Emplace_reallocate@AEBUIntendedHotKeySnapInfo@HotkeyHandler@@@?$vector@UIntendedHotKeySnapInfo@HotkeyHandler@@V?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@AEAAPEAUIntendedHotKeySnapInfo@HotkeyHandler@@QEAU23@AEBU23@@Z @ 0x1805ACFF8 (--$_Emplace_reallocate@AEBUIntendedHotKeySnapInfo@HotkeyHandler@@@-$vector@UIntendedHotKeySnapIn.c)
 *     ??0IntendedHotKeySnapInfo@HotkeyHandler@@QEAA@AEBU01@@Z @ 0x1805AD324 (--0IntendedHotKeySnapInfo@HotkeyHandler@@QEAA@AEBU01@@Z.c)
 *     ??1IntendedHotKeySnapInfo@HotkeyHandler@@QEAA@XZ @ 0x1805AD4A4 (--1IntendedHotKeySnapInfo@HotkeyHandler@@QEAA@XZ.c)
 *     ??1WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAA@XZ @ 0x1805AD514 (--1WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAA@XZ.c)
 *     ??4WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1805AD598 (--4WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?DetermineCurrentSnapState@HotkeyHandler@@AEBA?AW4SnapAction@1@PEAUISnappedWindow@@@Z @ 0x1805AD65C (-DetermineCurrentSnapState@HotkeyHandler@@AEBA-AW4SnapAction@1@PEAUISnappedWindow@@@Z.c)
 *     ?DetermineNewSnapState@HotkeyHandler@@AEBA?AUSNAP_STATE@1@W4SnapAction@1@W4HotkeyCommand@1@IPEAUIImmersiveMonitor@@PEAUISnappedWindow@@@Z @ 0x1805AD874 (-DetermineNewSnapState@HotkeyHandler@@AEBA-AUSNAP_STATE@1@W4SnapAction@1@W4HotkeyCommand@1@IPEAU.c)
 *     ?DetermineRectForSnapAction@HotkeyHandler@@AEBA?AUCRect@Geometry@@PEAUISnappedWindow@@PEAUIImmersiveMonitor@@W4SnapAction@1@AEBU23@I@Z @ 0x1805AD988 (-DetermineRectForSnapAction@HotkeyHandler@@AEBA-AUCRect@Geometry@@PEAUISnappedWindow@@PEAUIImmer.c)
 *     ?IsWindowVerticallySnapped@HotkeyHandler@@AEBA_NPEAUHWND__@@@Z @ 0x1805AF268 (-IsWindowVerticallySnapped@HotkeyHandler@@AEBA_NPEAUHWND__@@@Z.c)
 *     ?RaiseUiaNotificationForMonitorMove@HotkeyHandler@@AEAAXPEAUHWND__@@IUIntendedHotKeySnapInfo@1@@Z @ 0x1805AF3E4 (-RaiseUiaNotificationForMonitorMove@HotkeyHandler@@AEAAXPEAUHWND__@@IUIntendedHotKeySnapInfo@1@@.c)
 *     ?RaiseUiaNotificationForWindowArrangement@HotkeyHandler@@AEAAXPEAUHWND__@@I@Z @ 0x1805AF5BC (-RaiseUiaNotificationForWindowArrangement@HotkeyHandler@@AEAAXPEAUHWND__@@I@Z.c)
 *     ?SnappingModeForAction@HotkeyHandler@@AEAA?AW4WINDOW_SNAPPING_MODE@@W4SnapAction@1@@Z @ 0x1805AF920 (-SnappingModeForAction@HotkeyHandler@@AEAA-AW4WINDOW_SNAPPING_MODE@@W4SnapAction@1@@Z.c)
 *     ?StartActivity@WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAAXXZ @ 0x1805AF988 (-StartActivity@WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAAXXZ.c)
 *     ?TransferToCurrentThread@WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAA?AV12@XZ @ 0x1805B00F0 (-TransferToCurrentThread@WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAA-AV12@XZ.c)
 *     ?TransferToMember@WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAA?AV12@XZ @ 0x1805B012C (-TransferToMember@WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAA-AV12@XZ.c)
 *     ?WindowArrangementHotkeyIgnoredForDeviceLockdown@CSnapComponentTelemetry@@SAXXZ @ 0x1805B0160 (-WindowArrangementHotkeyIgnoredForDeviceLockdown@CSnapComponentTelemetry@@SAXXZ.c)
 *     ?WindowArrangementHotkeyIgnoredForTabletMode@CSnapComponentTelemetry@@SAXXZ @ 0x1805B01A0 (-WindowArrangementHotkeyIgnoredForTabletMode@CSnapComponentTelemetry@@SAXXZ.c)
 *     ?_OnHotkeyModeEnd@HotkeyHandler@@AEAAXPEAUISnappedWindow@@W4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x1805B01E0 (-_OnHotkeyModeEnd@HotkeyHandler@@AEAAXPEAUISnappedWindow@@W4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@.c)
 *     ?_ResetState@HotkeyHandler@@AEAAXXZ @ 0x1805B02F0 (-_ResetState@HotkeyHandler@@AEAAXXZ.c)
 *     ?IsMaximizedView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18067F56C (-IsMaximizedView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall HotkeyHandler::HandleHotkey(__int64 a1, int a2, int a3, unsigned int a4)
{
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, struct IImmersiveMonitor **); // rbx
  int v13; // eax
  const struct _GUID *v14; // r8
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // r9
  void *v20; // rbx
  DWORD v21; // edx
  HWND v22; // rbx
  __int64 (__fastcall ****v23)(ApplicationViewHelpers *, GUID *, __int64 *); // rax
  struct IApplicationView *v24; // rdx
  bool IsSnappedWindow; // di
  ApplicationViewHelpers **v26; // rax
  struct IApplicationView *v27; // rdx
  bool IsMaximizedView; // si
  bool IsWindowVerticallySnapped; // r12
  HotkeyHandler::IntendedHotKeySnapInfo *v30; // rax
  __int64 v31; // r8
  unsigned int v32; // r8d
  int Instance; // eax
  __int64 v34; // rax
  unsigned int v35; // ebx
  HWND v36; // r13
  char v37; // si
  __int64 v38; // rcx
  char v39; // di
  int v40; // r12d
  __int64 v41; // r8
  __int64 v42; // r9
  SnapLayoutHelpers *v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  BOOL v46; // esi
  __int64 v47; // rdi
  __int64 (__fastcall *v48)(__int64, BOOL, _QWORD, ApplicationViewHelpers **); // rbx
  _QWORD *v49; // rax
  int v50; // eax
  int v51; // ebx
  int v52; // edi
  unsigned int v53; // ebx
  int v54; // eax
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // r8
  __int64 v58; // r9
  unsigned int v59; // r8d
  __int64 v60; // rdi
  int (__fastcall *v61)(__int64, HWND, ApplicationViewHelpers **); // rbx
  struct IApplicationView *v62; // rdx
  struct IImmersiveApplication *ApplicationFromView; // rbx
  int v64; // eax
  int v65; // eax
  __int64 v66; // r8
  __int64 v67; // r9
  int v68; // eax
  unsigned int v69; // edi
  int v70; // eax
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rcx
  int v74; // eax
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rax
  DWORD v78; // edx
  __int64 v80; // [rsp+20h] [rbp-E0h]
  char v81; // [rsp+40h] [rbp-C0h]
  int v82; // [rsp+44h] [rbp-BCh] BYREF
  void *v83; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v84; // [rsp+50h] [rbp-B0h] BYREF
  ApplicationViewHelpers *v85; // [rsp+58h] [rbp-A8h] BYREF
  struct IImmersiveMonitor *v86; // [rsp+60h] [rbp-A0h] BYREF
  char v87; // [rsp+68h] [rbp-98h]
  char v88; // [rsp+69h] [rbp-97h]
  void *ppvOut; // [rsp+70h] [rbp-90h] BYREF
  IUnknown *punk; // [rsp+78h] [rbp-88h] BYREF
  int v91; // [rsp+80h] [rbp-80h] BYREF
  struct IImmersiveApplication *v92; // [rsp+88h] [rbp-78h] BYREF
  int pvParam; // [rsp+90h] [rbp-70h] BYREF
  __int64 v94; // [rsp+98h] [rbp-68h]
  char v95; // [rsp+A0h] [rbp-60h]
  _BYTE v96[56]; // [rsp+A8h] [rbp-58h] BYREF
  void *v97; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v98; // [rsp+E8h] [rbp-18h]
  _BYTE v99[24]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v100; // [rsp+110h] [rbp+10h] BYREF
  __int128 v101; // [rsp+118h] [rbp+18h] BYREF
  __int128 v102; // [rsp+128h] [rbp+28h] BYREF
  _BYTE v103[336]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v104[42]; // [rsp+290h] [rbp+190h] BYREF
  _QWORD v105[42]; // [rsp+3E0h] [rbp+2E0h] BYREF
  _BYTE v106[336]; // [rsp+530h] [rbp+430h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+6C8h] [rbp+5C8h]

  v82 = a3;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl)
    && (unsigned int)IsGamingFullScreenExperienceActive(v8) )
  {
    return 0LL;
  }
  v91 = 0;
  v9 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 72) + 24LL))(*(_QWORD *)(a1 + 72), &v91);
  v10 = v9;
  if ( v9 >= 0 )
  {
    if ( v91 == 1 )
    {
      CSnapComponentTelemetry::WindowArrangementHotkeyIgnoredForTabletMode();
      return 0LL;
    }
    if ( *(_BYTE *)(a1 + 424) )
    {
      CSnapComponentTelemetry::WindowArrangementHotkeyIgnoredForDeviceLockdown();
      return 0LL;
    }
    wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v104,
      (__int64)"WindowArrangementHotkeyProcessing");
    v104[0] = &CSnapComponentTelemetry::WindowArrangementHotkeyProcessing::`vftable';
    CSnapComponentTelemetry::WindowArrangementHotkeyProcessing::StartActivity((CSnapComponentTelemetry::WindowArrangementHotkeyProcessing *)v104);
    v94 = a1;
    v95 = 1;
    v86 = 0LL;
    v11 = *(_QWORD *)(a1 + 40);
    v12 = *(__int64 (__fastcall **)(__int64, struct IImmersiveMonitor **))(*(_QWORD *)v11 + 80LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v86);
    v13 = v12(v11, &v86);
    v10 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x16F,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
        (const char *)(unsigned int)v13);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v86);
      HotkeyHandler::_ResetState((HotkeyHandler *)a1);
LABEL_114:
      CSnapComponentTelemetry::WindowArrangementHotkeyProcessing::~WindowArrangementHotkeyProcessing((CSnapComponentTelemetry::WindowArrangementHotkeyProcessing *)v104);
      return v10;
    }
    v83 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v83);
    v15 = CSnappedWindow::s_CreateInstance(v86, *(struct IApplicationView **)(a1 + 40), v14, &v83);
    v10 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x172,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
        (const char *)(unsigned int)v15);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v83);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v86);
      HotkeyHandler::_ResetState((HotkeyHandler *)a1);
      goto LABEL_114;
    }
    v97 = 0LL;
    v98 = 0LL;
    memset(v99, 0, sizeof(v99));
    v100 = 0LL;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnouncement>::ReportUsage(
      (__int64)&`wil::Feature<__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnouncement>::GetImpl'::`2'::impl,
      1u,
      v16,
      v17);
    v20 = v83;
    if ( v83 )
    {
      (*(void (__fastcall **)(void *))(*(_QWORD *)v83 + 8LL))(v83);
      v85 = 0LL;
      v97 = v20;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v85);
    }
    if ( !a2 && a3 == 8 || a4 == 1 )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnouncement>::ReportUsage(
        (__int64)&`wil::Feature<__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnouncement>::GetImpl'::`2'::impl,
        1u,
        v18,
        v19);
      if ( a4 != 2 )
        goto LABEL_35;
      if ( *(_BYTE *)(a1 + 80) )
        goto LABEL_36;
      v22 = (HWND)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v83 + 80LL))(v83);
      v23 = (__int64 (__fastcall ****)(ApplicationViewHelpers *, GUID *, __int64 *))(*(__int64 (__fastcall **)(void *, ApplicationViewHelpers **))(*(_QWORD *)v83 + 112LL))(
                                                                                      v83,
                                                                                      &v85);
      IsSnappedWindow = SnapLayoutHelpers::IsSnappedWindow(*v23, v24);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v85);
      v26 = (ApplicationViewHelpers **)(*(__int64 (__fastcall **)(void *, ApplicationViewHelpers **))(*(_QWORD *)v83 + 112LL))(
                                         v83,
                                         &v85);
      IsMaximizedView = ApplicationViewHelpers::IsMaximizedView(*v26, v27);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v85);
      IsWindowVerticallySnapped = HotkeyHandler::IsWindowVerticallySnapped((HotkeyHandler *)a1, v22);
      v82 = 0;
      if ( (*(int (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 48) + 32LL))(*(_QWORD *)(a1 + 48), &v82) < 0
        || (unsigned int)v82 <= 1 )
      {
        if ( IsWindowVerticallySnapped )
        {
          v32 = 15019;
        }
        else if ( IsSnappedWindow || (v32 = 15002, IsMaximizedView) )
        {
          v32 = 15025;
        }
        HotkeyHandler::RaiseUiaNotificationForWindowArrangement((HotkeyHandler *)a1, v22, v32);
      }
      else
      {
        Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v100, &v86);
        *(_DWORD *)&v99[4] = 1;
        if ( IsWindowVerticallySnapped )
        {
          v30 = HotkeyHandler::IntendedHotKeySnapInfo::IntendedHotKeySnapInfo(
                  (HotkeyHandler::IntendedHotKeySnapInfo *)v96,
                  (const struct HotkeyHandler::IntendedHotKeySnapInfo *)&v97);
          v31 = 15048LL;
        }
        else if ( IsMaximizedView )
        {
          v30 = HotkeyHandler::IntendedHotKeySnapInfo::IntendedHotKeySnapInfo(
                  (HotkeyHandler::IntendedHotKeySnapInfo *)v96,
                  (const struct HotkeyHandler::IntendedHotKeySnapInfo *)&v97);
          v31 = 15032LL;
        }
        else
        {
          if ( IsSnappedWindow )
            goto LABEL_35;
          v30 = HotkeyHandler::IntendedHotKeySnapInfo::IntendedHotKeySnapInfo(
                  (HotkeyHandler::IntendedHotKeySnapInfo *)v96,
                  (const struct HotkeyHandler::IntendedHotKeySnapInfo *)&v97);
          v31 = 15033LL;
        }
        HotkeyHandler::RaiseUiaNotificationForMonitorMove(a1, v22, v31, v30);
      }
LABEL_35:
      if ( !*(_BYTE *)(a1 + 80) )
      {
LABEL_37:
        wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
          v104,
          v21);
        HotkeyHandler::IntendedHotKeySnapInfo::~IntendedHotKeySnapInfo((HotkeyHandler::IntendedHotKeySnapInfo *)&v97);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v83);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v86);
        v10 = 0;
        goto LABEL_114;
      }
LABEL_36:
      HotkeyHandler::_OnHotkeyModeEnd(a1, v83, a4);
      goto LABEL_37;
    }
    if ( !*(_BYTE *)(a1 + 80) )
    {
      wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)v105,
        (__int64)"WindowArrangementHotkeyMode");
      v105[0] = &CSnapComponentTelemetry::WindowArrangementHotkeyMode::`vftable';
      CSnapComponentTelemetry::WindowArrangementHotkeyMode::StartActivity((CSnapComponentTelemetry::WindowArrangementHotkeyMode *)v105);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 32));
      Instance = CSnappedWindowModel_CreateInstance(
                   *(_QWORD *)(a1 + 40),
                   *(_QWORD *)(a1 + 56),
                   *(_QWORD *)(a1 + 48),
                   1,
                   v80,
                   (_QWORD *)(a1 + 32));
      if ( Instance < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1D4,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
          (const char *)(unsigned int)Instance);
      *(_BYTE *)(a1 + 80) = 1;
      v34 = CSnapComponentTelemetry::WindowArrangementHotkeyMode::TransferToMember(v105, v106);
      CSnapComponentTelemetry::WindowArrangementHotkeyMode::operator=((_QWORD *)(a1 + 88), v34);
      CSnapComponentTelemetry::WindowArrangementHotkeyMode::~WindowArrangementHotkeyMode((CSnapComponentTelemetry::WindowArrangementHotkeyMode *)v106);
      CSnapComponentTelemetry::WindowArrangementHotkeyMode::~WindowArrangementHotkeyMode((CSnapComponentTelemetry::WindowArrangementHotkeyMode *)v105);
    }
    CSnapComponentTelemetry::WindowArrangementHotkeyMode::TransferToCurrentThread(a1 + 88, v103);
    switch ( a2 )
    {
      case '%':
        v35 = 0;
        break;
      case '\'':
        v35 = 1;
        break;
      case '&':
        v35 = 2;
        break;
      case '(':
        v35 = 3;
        break;
      default:
        v10 = -2147024809;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1DC,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
          (const char *)0x80070057LL);
        CSnapComponentTelemetry::WindowArrangementHotkeyMode::~WindowArrangementHotkeyMode((CSnapComponentTelemetry::WindowArrangementHotkeyMode *)v103);
        HotkeyHandler::IntendedHotKeySnapInfo::~IntendedHotKeySnapInfo((HotkeyHandler::IntendedHotKeySnapInfo *)&v97);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v83);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v86);
        HotkeyHandler::_ResetState((HotkeyHandler *)a1);
        goto LABEL_114;
    }
    v84 = v35;
    CSnapComponentTelemetry::WindowArrangementHotkeyMode::HotkeyPressed<unsigned int>((__int64)v103, (int *)&v84);
    v36 = (HWND)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v83 + 80LL))(v83);
    if ( !v36 )
    {
      v10 = -2147019873;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1E0,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
        (const char *)0x8007139FLL);
      CSnapComponentTelemetry::WindowArrangementHotkeyMode::~WindowArrangementHotkeyMode((CSnapComponentTelemetry::WindowArrangementHotkeyMode *)v103);
      HotkeyHandler::IntendedHotKeySnapInfo::~IntendedHotKeySnapInfo((HotkeyHandler::IntendedHotKeySnapInfo *)&v97);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v83);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v86);
      HotkeyHandler::_ResetState((HotkeyHandler *)a1);
      goto LABEL_114;
    }
    v88 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v83 + 32LL))(v83);
    v37 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v83 + 40LL))(v83);
    v87 = v37;
    v39 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v83 + 24LL))(v83);
    v81 = v39;
    pvParam = 0;
    if ( v39 && SystemParametersInfoW(0x82u, 0, &pvParam, 0) )
    {
      v38 = (unsigned int)-pvParam;
      v81 = pvParam != 0 ? v39 : 0;
    }
    v40 = HotkeyHandler::DetermineCurrentSnapState(v38, (__int64)v83);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnouncement>::ReportUsage(
      (__int64)&`wil::Feature<__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnouncement>::GetImpl'::`2'::impl,
      1u,
      v41,
      v42);
    *(_OWORD *)&v99[8] = *(_OWORD *)(*(__int64 (__fastcall **)(void *, __int128 *))(*(_QWORD *)v83 + 48LL))(v83, &v102);
    if ( !v40 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)v83 + 96LL))(v83) )
        v40 = 17;
      else
        v40 = ((*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)v83 + 104LL))(v83) != 0) + 15;
    }
    ppvOut = *(void **)HotkeyHandler::DetermineNewSnapState(v43, (__int64)&v85, v40, v35, v82, (__int64 *)v86);
    (*(void (__fastcall **)(void *, IUnknown **))(*(_QWORD *)v83 + 64LL))(v83, &punk);
    if ( HIDWORD(ppvOut) )
    {
      v46 = HIDWORD(ppvOut) == 1;
      v85 = 0LL;
      v47 = *(_QWORD *)(a1 + 48);
      v48 = *(__int64 (__fastcall **)(__int64, BOOL, _QWORD, ApplicationViewHelpers **))(*(_QWORD *)v47 + 104LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v85);
      v49 = (_QWORD *)(*(__int64 (__fastcall **)(void *, struct IImmersiveApplication **))(*(_QWORD *)v83 + 64LL))(
                        v83,
                        &v92);
      v50 = v48(v47, v46, *v49, &v85);
      v51 = v50;
      if ( v50 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x21D,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
          (const char *)(unsigned int)v50);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v92);
      if ( v51 < 0 )
      {
        v52 = HIDWORD(ppvOut);
      }
      else
      {
        Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&punk, &v85);
        v52 = HIDWORD(ppvOut);
        v84 = HIDWORD(ppvOut);
        CSnapComponentTelemetry::WindowArrangementHotkeyMode::TraversedMonitors<unsigned int>(
          (__int64)v103,
          (int *)&v84);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v85);
      v37 = v87;
    }
    else
    {
      v52 = 0;
    }
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnouncement>::ReportUsage(
      (__int64)&`wil::Feature<__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnouncement>::GetImpl'::`2'::impl,
      1u,
      v44,
      v45);
    v53 = (unsigned int)ppvOut;
    *(_DWORD *)v99 = (_DWORD)ppvOut;
    *(_DWORD *)&v99[4] = v52;
    Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v100, &punk);
    if ( !v53 )
      goto LABEL_111;
    if ( v40 == 15 && v53 == 6 )
    {
      if ( v81 )
        goto LABEL_98;
      v53 = 16;
    }
    switch ( v53 )
    {
      case 0x11u:
        if ( v37 )
        {
          if ( v91 != 1 )
          {
            v54 = (*(__int64 (__fastcall **)(_QWORD, HWND))(**(_QWORD **)(a1 + 16) + 32LL))(*(_QWORD *)(a1 + 16), v36);
            if ( v54 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x23F,
                (int)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
                (const char *)(unsigned int)v54);
            wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnouncement>::ReportUsage(
              (__int64)&`wil::Feature<__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnouncement>::GetImpl'::`2'::impl,
              1u,
              v55,
              v56);
            HotkeyHandler::RaiseUiaNotificationForWindowArrangement((HotkeyHandler *)a1, v36, 0x3A99u);
          }
          v84 = 17;
          v82 = v40;
          CSnapComponentTelemetry::WindowArrangementHotkeyMode::StartEndWindowStates<unsigned int,unsigned int>(
            (__int64)v103,
            &v82,
            (int *)&v84);
        }
        goto LABEL_111;
      case 0x10u:
        if ( v91 != 1 )
        {
          if ( v88 )
          {
            PostMessageW(v36, 0x112u, 0xF020uLL, 0LL);
            v84 = 16;
            v82 = v40;
            CSnapComponentTelemetry::WindowArrangementHotkeyMode::StartEndWindowStates<unsigned int,unsigned int>(
              (__int64)v103,
              &v82,
              (int *)&v84);
            wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnouncement>::ReportUsage(
              (__int64)&`wil::Feature<__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnouncement>::GetImpl'::`2'::impl,
              1u,
              v57,
              v58);
            v59 = 15003;
LABEL_96:
            HotkeyHandler::RaiseUiaNotificationForWindowArrangement((HotkeyHandler *)a1, v36, v59);
            goto LABEL_111;
          }
          v85 = 0LL;
          v60 = *(_QWORD *)(a1 + 56);
          v61 = *(int (__fastcall **)(__int64, HWND, ApplicationViewHelpers **))(*(_QWORD *)v60 + 48LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v85);
          if ( v61(v60, v36, &v85) >= 0 )
          {
            ppvOut = 0LL;
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
            if ( IUnknown_QueryService(
                   punk,
                   (const GUID *const)&SID_FullScreenManager,
                   &GUID_f0093591_bfa3_471f_b9f0_f17f8a979c6d,
                   &ppvOut) >= 0 )
            {
              ApplicationFromView = ApplicationViewHelpers::GetApplicationFromView(v85, v62);
              v92 = ApplicationFromView;
              Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v92);
              v82 = 0;
              if ( ApplicationFromView )
              {
                v64 = (*(__int64 (__fastcall **)(void *, struct IImmersiveApplication *, int *))(*(_QWORD *)ppvOut + 64LL))(
                        ppvOut,
                        ApplicationFromView,
                        &v82);
                if ( v64 >= 0 )
                {
                  if ( v82 )
                  {
                    v65 = (*(__int64 (__fastcall **)(void *, struct IImmersiveApplication *, __int64))(*(_QWORD *)ppvOut + 56LL))(
                            ppvOut,
                            ApplicationFromView,
                            5LL);
                    v10 = v65;
                    if ( v65 < 0 )
                    {
                      wil::details::in1diag3::Return_Hr(
                        retaddr,
                        (void *)0x265,
                        (int)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
                        (const char *)(unsigned int)v65);
                      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v92);
                      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
                      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v85);
                      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
                      CSnapComponentTelemetry::WindowArrangementHotkeyMode::~WindowArrangementHotkeyMode((CSnapComponentTelemetry::WindowArrangementHotkeyMode *)v103);
                      HotkeyHandler::IntendedHotKeySnapInfo::~IntendedHotKeySnapInfo((HotkeyHandler::IntendedHotKeySnapInfo *)&v97);
                      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v83);
                      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v86);
                      HotkeyHandler::_ResetState((HotkeyHandler *)a1);
                      goto LABEL_114;
                    }
                  }
                }
                else
                {
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x263,
                    (int)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
                    (const char *)(unsigned int)v64);
                }
              }
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v92);
            }
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v85);
        }
LABEL_111:
        v77 = CSnapComponentTelemetry::WindowArrangementHotkeyMode::TransferToMember(v103, v106);
        CSnapComponentTelemetry::WindowArrangementHotkeyMode::operator=((_QWORD *)(a1 + 88), v77);
        CSnapComponentTelemetry::WindowArrangementHotkeyMode::~WindowArrangementHotkeyMode((CSnapComponentTelemetry::WindowArrangementHotkeyMode *)v106);
        wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
          v104,
          v78);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
        CSnapComponentTelemetry::WindowArrangementHotkeyMode::~WindowArrangementHotkeyMode((CSnapComponentTelemetry::WindowArrangementHotkeyMode *)v103);
        HotkeyHandler::IntendedHotKeySnapInfo::~IntendedHotKeySnapInfo((HotkeyHandler::IntendedHotKeySnapInfo *)&v97);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v83);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v86);
        CSnapComponentTelemetry::WindowArrangementHotkeyProcessing::~WindowArrangementHotkeyProcessing((CSnapComponentTelemetry::WindowArrangementHotkeyProcessing *)v104);
        return 0LL;
      case 0xFu:
        PostMessageW(v36, 0x112u, 0xF120uLL, 0LL);
        v84 = 15;
        v82 = v40;
        CSnapComponentTelemetry::WindowArrangementHotkeyMode::StartEndWindowStates<unsigned int,unsigned int>(
          (__int64)v103,
          &v82,
          (int *)&v84);
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnouncement>::ReportUsage(
          (__int64)&`wil::Feature<__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnouncement>::GetImpl'::`2'::impl,
          1u,
          v66,
          v67);
        v59 = 15002;
        goto LABEL_96;
    }
    if ( !v81 )
      goto LABEL_111;
LABEL_98:
    v102 = 0LL;
    v84 = 0;
    LODWORD(v92) = 0;
    v68 = ((__int64 (__fastcall *)(IUnknown *, __int128 *))punk->lpVtbl[3].Release)(punk, &v102);
    v69 = v68;
    if ( v68 >= 0 )
    {
      v70 = ((__int64 (__fastcall *)(IUnknown *, unsigned int *, struct IImmersiveApplication **))punk->lpVtbl[4].Release)(
              punk,
              &v84,
              &v92);
      v69 = v70;
      if ( v70 >= 0 )
      {
        HotkeyHandler::DetermineRectForSnapAction(
          a1,
          (__int64)&v101,
          (__int64)v83,
          (SnapRectHelpers *)punk,
          v53,
          (const struct Geometry::CRect *)&v102,
          v84);
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnouncement>::ReportUsage(
          (__int64)&`wil::Feature<__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnouncement>::GetImpl'::`2'::impl,
          1u,
          v71,
          v72);
        v98 = v101;
        if ( Geometry::CRect::IsEmpty((Geometry::CRect *)&v101) )
        {
          v10 = -2147467259;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x288,
            (int)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
            (const char *)0x80004005LL);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
          CSnapComponentTelemetry::WindowArrangementHotkeyMode::~WindowArrangementHotkeyMode((CSnapComponentTelemetry::WindowArrangementHotkeyMode *)v103);
          HotkeyHandler::IntendedHotKeySnapInfo::~IntendedHotKeySnapInfo((HotkeyHandler::IntendedHotKeySnapInfo *)&v97);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v83);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v86);
          HotkeyHandler::_ResetState((HotkeyHandler *)a1);
          goto LABEL_114;
        }
        *(_DWORD *)(a1 + 428) = HotkeyHandler::SnappingModeForAction(v73, v53);
        if ( v91 == 1
          || (v74 = (*(__int64 (__fastcall **)(_QWORD, HWND, __int128 *, _QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(
                      *(_QWORD *)(a1 + 16),
                      v36,
                      &v101,
                      0LL),
              v69 = v74,
              v74 >= 0) )
        {
          v82 = v53;
          LODWORD(ppvOut) = v40;
          CSnapComponentTelemetry::WindowArrangementHotkeyMode::StartEndWindowStates<unsigned int,unsigned int>(
            (__int64)v103,
            (int *)&ppvOut,
            &v82);
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnouncement>::ReportUsage(
            (__int64)&`wil::Feature<__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnouncement>::GetImpl'::`2'::impl,
            1u,
            v75,
            v76);
          if ( *(_QWORD *)(a1 + 448) == *(_QWORD *)(a1 + 456) )
          {
            std::vector<HotkeyHandler::IntendedHotKeySnapInfo>::_Emplace_reallocate<HotkeyHandler::IntendedHotKeySnapInfo const &>(
              (HotkeyHandler::IntendedHotKeySnapInfo **)(a1 + 440),
              *(HotkeyHandler::IntendedHotKeySnapInfo **)(a1 + 448),
              (const struct HotkeyHandler::IntendedHotKeySnapInfo *)&v97);
          }
          else
          {
            HotkeyHandler::IntendedHotKeySnapInfo::IntendedHotKeySnapInfo(
              *(HotkeyHandler::IntendedHotKeySnapInfo **)(a1 + 448),
              (const struct HotkeyHandler::IntendedHotKeySnapInfo *)&v97);
            *(_QWORD *)(a1 + 448) += 56LL;
          }
          goto LABEL_111;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x292,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
          (const char *)(unsigned int)v74);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
        CSnapComponentTelemetry::WindowArrangementHotkeyMode::~WindowArrangementHotkeyMode((CSnapComponentTelemetry::WindowArrangementHotkeyMode *)v103);
        HotkeyHandler::IntendedHotKeySnapInfo::~IntendedHotKeySnapInfo((HotkeyHandler::IntendedHotKeySnapInfo *)&v97);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v83);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v86);
        HotkeyHandler::_ResetState((HotkeyHandler *)a1);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x27D,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
          (const char *)(unsigned int)v70);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
        CSnapComponentTelemetry::WindowArrangementHotkeyMode::~WindowArrangementHotkeyMode((CSnapComponentTelemetry::WindowArrangementHotkeyMode *)v103);
        HotkeyHandler::IntendedHotKeySnapInfo::~IntendedHotKeySnapInfo((HotkeyHandler::IntendedHotKeySnapInfo *)&v97);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v83);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v86);
        HotkeyHandler::_ResetState((HotkeyHandler *)a1);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x27C,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
        (const char *)(unsigned int)v68);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
      CSnapComponentTelemetry::WindowArrangementHotkeyMode::~WindowArrangementHotkeyMode((CSnapComponentTelemetry::WindowArrangementHotkeyMode *)v103);
      HotkeyHandler::IntendedHotKeySnapInfo::~IntendedHotKeySnapInfo((HotkeyHandler::IntendedHotKeySnapInfo *)&v97);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v83);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v86);
      HotkeyHandler::_ResetState((HotkeyHandler *)a1);
    }
    v10 = v69;
    goto LABEL_114;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x15A,
    (int)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
    (const char *)(unsigned int)v9);
  return v10;
}
