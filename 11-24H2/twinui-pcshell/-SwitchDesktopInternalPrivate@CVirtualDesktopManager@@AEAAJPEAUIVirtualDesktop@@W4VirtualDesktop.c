/*
 * XREFs of ?SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x1805577C4
 * Callers:
 *     ?RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180554A40 (-RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?SwitchDesktop2@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x180557330 (-SwitchDesktop2@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z.c)
 *     ?SwitchDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x1805573E0 (-SwitchDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?SwitchDesktopAndMoveForegroundViewInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180557570 (-SwitchDesktopAndMoveForegroundViewInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?SwitchDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x1805577B0 (-SwitchDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?SwitchRemoteDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x1805582E0 (-SwitchRemoteDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchTyp.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18007D438 (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?GetCurrentDesktopCollection@CVirtualDesktopManager@@AEAA?AV?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@XZ @ 0x18007D618 (-GetCurrentDesktopCollection@CVirtualDesktopManager@@AEAA-AV-$vector@V-$com_ptr_t@UIVirtualDeskt.c)
 *     ?UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x18007D950 (-UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V-$vector@V-$com_ptr_t@.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x18007DAFC (-_Tidy@-$vector@V-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18007DB44 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ?_Buy_nonzero@?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAX_K@Z @ 0x18007DB8C (-_Buy_nonzero@-$vector@V-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V-$alloc.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180094FB8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18009B530 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?GetCurrentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x180191CC0 (-GetCurrentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x1801D3480 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x1801DB7F4 (--0last_error_context@wil@@QEAA@XZ.c)
 *     ?GetCurrentRenderedWallpaperPath@CVirtualDesktopManager@@AEAAJPEAPEAUHSTRING__@@@Z @ 0x1801EFC7C (-GetCurrentRenderedWallpaperPath@CVirtualDesktopManager@@AEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VwSotUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801EFD64 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VwSotUpdates@@@details@wil@@QEAAX_NW4Repo.c)
 *     ?StartActivity@VirtualDesktopSwitchedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x180205C4C (-StartActivity@VirtualDesktopSwitchedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 *     ?SetDesktopWallpaperInternal@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x180205F60 (-SetDesktopWallpaperInternal@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180211CD0 (--1-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDeleteString@@YAJ0@Z.c)
 *     ?AssignWallpaperToDesktop@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x18022263C (-AssignWallpaperToDesktop@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z.c)
 *     ?Stop@VirtualDesktopSwitchedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDesktop@@0W4SwitcherType@3@@Z @ 0x18026A5BC (-Stop@VirtualDesktopSwitchedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDe.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x18028B600 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180295BCC (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180296A94 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     ?is_running@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802A9958 (-is_running@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802C8224 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?GetSwitcherType@CVirtualDesktopManager@@AEAA?AW4SwitcherType@VirtualDesktop@@XZ @ 0x1802C87F0 (-GetSwitcherType@CVirtualDesktopManager@@AEAA-AW4SwitcherType@VirtualDesktop@@XZ.c)
 *     ??1VirtualDesktopSwitchedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x1802CCDA8 (--1VirtualDesktopSwitchedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ??1?$_Tidy_guard@V?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAA@XZ @ 0x1802CEA00 (--1-$_Tidy_guard@V-$vector@V-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V-$a.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180551358 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805525E8 (--1-$test_data_control@V-$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@Q.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180552620 (--1-$test_watcher@V-$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@QEAA@X.c)
 *     ?FireVirtualDesktopSwitchedEvent@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x180553860 (-FireVirtualDesktopSwitchedEvent@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesk.c)
 *     ?IsSlideShowEnabled@CVirtualDesktopManager@@CA_NXZ @ 0x180553E84 (-IsSlideShowEnabled@CVirtualDesktopManager@@CA_NXZ.c)
 *     ?UpdateCurrentDesktop@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@0@Z @ 0x1805585B8 (-UpdateCurrentDesktop@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall CVirtualDesktopManager::SwitchDesktopInternalPrivate(
        __int64 a1,
        struct IUnknown *a2,
        unsigned int a3)
{
  unsigned int v3; // r13d
  int CurrentDesktopInternal; // eax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  struct IVirtualDesktop *v10; // rdi
  __int64 *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r9
  unsigned int v16; // r12d
  __int64 v17; // rax
  int updated; // eax
  unsigned __int64 v19; // rdx
  __int64 *v20; // r13
  __int64 *v21; // rbx
  __int64 *i; // r15
  __int64 (__fastcall **v23)(struct IVirtualDesktop *, GUID *, __int64 *); // rax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  char v29; // bl
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  CVirtualDesktopManager *v34; // rcx
  int v35; // eax
  struct IUnknownVtbl *lpVtbl; // rax
  int v37; // eax
  __int64 v38; // rbx
  int (__fastcall *v39)(__int64, HSTRING *); // r12
  HSTRING v40; // r15
  int v41; // eax
  wil::details::in1diag3 *v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rbx
  __int64 (__fastcall *v45)(__int64, HSTRING *); // r12
  HSTRING v46; // r15
  int v47; // eax
  int v48; // r15d
  volatile signed __int32 *v49; // rbx
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int SwitcherType; // eax
  HSTRING v55; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v56; // [rsp+38h] [rbp-C8h] BYREF
  struct IVirtualDesktop *v57; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v58; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v59; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v60; // [rsp+58h] [rbp-A8h] BYREF
  HSTRING string; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v62; // [rsp+68h] [rbp-98h] BYREF
  struct IUnknown *v63; // [rsp+70h] [rbp-90h] BYREF
  HSTRING v64; // [rsp+78h] [rbp-88h] BYREF
  __int64 *v65; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v66; // [rsp+88h] [rbp-78h]
  volatile signed __int32 *v67; // [rsp+98h] [rbp-68h] BYREF
  __int128 v68; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v69; // [rsp+B0h] [rbp-50h]
  __int64 v70; // [rsp+B8h] [rbp-48h] BYREF
  char v71[8]; // [rsp+C0h] [rbp-40h] BYREF
  char v72[8]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v73[56]; // [rsp+D0h] [rbp-30h] BYREF
  volatile signed __int32 *v74; // [rsp+108h] [rbp+8h]
  _QWORD v75[42]; // [rsp+110h] [rbp+10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A8h] [rbp+1A8h]

  v3 = a3;
  LODWORD(v55) = a3;
  v63 = 0LL;
  CurrentDesktopInternal = CVirtualDesktopManager::GetCurrentDesktopInternal(
                             (CVirtualDesktopManager *)(a1 + 8),
                             (struct IVirtualDesktop **)&v63);
  v7 = CurrentDesktopInternal;
  if ( CurrentDesktopInternal < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x240,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)CurrentDesktopInternal);
    goto LABEL_76;
  }
  if ( SHIsSameObject(a2, v63) )
  {
    v8 = CVirtualDesktopManager::FireVirtualDesktopSwitchedEvent(a1, a2, v3);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x244,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)v8);
    v7 = 0;
    goto LABEL_76;
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v75,
    (__int64)"VirtualDesktopSwitchedActivity");
  v75[0] = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity::`vftable';
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity::StartActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity *)v75);
  if ( *(_DWORD *)(a1 + 204) )
  {
    v7 = -2147019873;
    v9 = 585LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)v7);
LABEL_10:
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity::~VirtualDesktopSwitchedActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity *)v75);
    goto LABEL_76;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, struct IUnknown *))(**(_QWORD **)(a1 + 104) + 32LL))(
          *(_QWORD *)(a1 + 104),
          a2) )
  {
    v7 = -2147024809;
    v9 = 586LL;
    goto LABEL_9;
  }
  if ( !*(_QWORD *)(a1 + 112) )
  {
    v7 = -2147417848;
    v9 = 587LL;
    goto LABEL_9;
  }
  wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
    (__int64 *)&v57,
    (__int64 *)&v63);
  v10 = v57;
  CVirtualDesktopManager::UpdateCurrentDesktop((CVirtualDesktopManager *)a1, v57, (struct IVirtualDesktop *)a2);
  v56 = 0LL;
  v11 = *(__int64 **)(a1 + 112);
  v12 = *v11;
  v56 = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v12 + 24))(v11, &v56);
  v7 = v13;
  if ( v13 < 0 )
  {
    v14 = 593LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v13);
LABEL_18:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v56);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v57);
    goto LABEL_10;
  }
  v58 = 0;
  v13 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v56 + 24))(v56, &v58);
  v7 = v13;
  if ( v13 < 0 )
  {
    v14 = 596LL;
    goto LABEL_17;
  }
  CVirtualDesktopManager::GetCurrentDesktopCollection(a1, (__int64 *)&v65);
  v16 = 0;
  if ( v58 )
  {
    while ( 1 )
    {
      v60 = 0LL;
      v17 = *v56;
      v60 = 0LL;
      updated = (*(__int64 (__fastcall **)(__int64 *, _QWORD, GUID *, __int64 *))(v17 + 32))(
                  v56,
                  v16,
                  &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
                  &v60);
      v7 = updated;
      if ( updated < 0 )
        break;
      v68 = 0LL;
      v69 = 0LL;
      v19 = v66 - v65;
      if ( v19 )
      {
        std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>::_Buy_nonzero(&v68, v19);
        v20 = v66;
        v21 = (__int64 *)v68;
        for ( i = v65; i != v20; ++i )
          wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
            v21++,
            i);
        std::_Destroy_range<std::allocator<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>>(v21, v21);
        *((_QWORD *)&v68 + 1) = v21;
        v70 = 0LL;
        std::_Tidy_guard<std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>>::~_Tidy_guard<std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>>(&v70);
      }
      updated = CVirtualDesktopManager::UpdateViewVisibility(a1, v60, &v68);
      v7 = updated;
      if ( updated < 0 )
      {
        v25 = 602LL;
        goto LABEL_36;
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v60);
      if ( ++v16 >= v58 )
      {
        v3 = (unsigned int)v55;
        goto LABEL_31;
      }
    }
    v25 = 601LL;
LABEL_36:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)updated);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v60);
    goto LABEL_37;
  }
LABEL_31:
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VwUpdates>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_VwUpdates>::GetImpl'::`2'::impl,
    1u,
    3u,
    v15);
  v59 = 0LL;
  v23 = *(__int64 (__fastcall ***)(struct IVirtualDesktop *, GUID *, __int64 *))v10;
  v59 = 0LL;
  v24 = (*v23)(v10, &GUID_c9be252c_e386_425e_b33c_ca422112f51f, (__int64 *)&v59);
  v7 = v24;
  if ( v24 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26A,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v24);
LABEL_33:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v59);
LABEL_37:
    std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>::_Tidy((__int64)&v65);
    goto LABEL_18;
  }
  v55 = 0LL;
  v26 = *v59;
  v55 = 0LL;
  if ( (*(int (__fastcall **)(__int64 *, HSTRING *))(v26 + 48))(v59, &v55) < 0 || (v29 = 1, v55) )
    v29 = 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VwSotUpdates>::ReportUsage(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_VwSotUpdates>::GetImpl'::`2'::impl,
    1u,
    v27,
    v28);
  if ( v29 && !CVirtualDesktopManager::IsSlideShowEnabled(v31, v30, v32, v33) )
  {
    v64 = 0LL;
    if ( (int)CVirtualDesktopManager::GetCurrentRenderedWallpaperPath(v34, &v64) >= 0 )
    {
      if ( v64 )
      {
        v35 = CVirtualDesktopManager::AssignWallpaperToDesktop((CVirtualDesktopManager *)a1, v10, v64);
        if ( v35 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x273,
            (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
            (const char *)(unsigned int)v35);
      }
    }
    wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&v64);
  }
  string = 0LL;
  lpVtbl = a2->lpVtbl;
  v62 = 0LL;
  v37 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
          a2,
          &GUID_c9be252c_e386_425e_b33c_ca422112f51f,
          &v62);
  v7 = v37;
  if ( v37 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x279,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v37);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v62);
    wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&string);
    wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&v55);
    goto LABEL_33;
  }
  v38 = v62;
  v39 = *(int (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v62 + 48LL);
  v40 = string;
  if ( string )
  {
    wil::last_error_context::last_error_context((wil::last_error_context *)v71);
    WindowsDeleteString(v40);
    wil::last_error_context::~last_error_context((wil::last_error_context *)v71);
  }
  string = 0LL;
  if ( v39(v38, &string) < 0 || !string )
  {
    v44 = (__int64)v59;
    v45 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*v59 + 48);
    v46 = v55;
    if ( v55 )
    {
      wil::last_error_context::last_error_context((wil::last_error_context *)v72);
      WindowsDeleteString(v46);
      wil::last_error_context::~last_error_context((wil::last_error_context *)v72);
    }
    v55 = 0LL;
    v47 = v45(v44, &v55);
    if ( v47 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x282,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)v47);
    v41 = CVirtualDesktopManager::AssignWallpaperToDesktop(
            (CVirtualDesktopManager *)a1,
            (struct IVirtualDesktop *)a2,
            v55);
    v42 = retaddr;
    if ( v41 >= 0 )
      goto LABEL_63;
    v43 = 643LL;
    goto LABEL_62;
  }
  v41 = CVirtualDesktopManager::SetDesktopWallpaperInternal(
          (CVirtualDesktopManager *)a1,
          (struct IVirtualDesktop *)a2,
          string);
  v42 = retaddr;
  if ( v41 < 0 )
  {
    v43 = 637LL;
LABEL_62:
    wil::details::in1diag3::_Log_Hr(
      v42,
      (void *)v43,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v41);
  }
LABEL_63:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v62);
  wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&string);
  wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&v55);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v59);
  LockSetForegroundWindow(2u);
  v48 = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *))(**(_QWORD **)(a1 + 136) + 24LL))(
          *(_QWORD *)(a1 + 136),
          a2);
  if ( v48 < 0 )
  {
    tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>>((struct wil::details::IFailureCallback *)v73);
    if ( tip2::details::shared_data<1,0,0>::is_running((__int64)(v74 + 2)) )
    {
      v49 = v74;
      v67 = v74;
      if ( v74 )
      {
        _InterlockedIncrement(v74 + 88);
        v10 = v57;
      }
      tip2::details::shared_data<1,0,0>::begin_update((__int64)(v49 + 2));
      *((_BYTE *)v49 + 280) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>::~test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>((void **)&v67);
      tip2::details::shared_data<1,0,0>::complete_without_lock((__int64)(v74 + 2));
    }
    tip2::test_watcher<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>::~test_watcher<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>((__int64)v73);
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x294,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v48);
  }
  v50 = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *))(**(_QWORD **)(a1 + 144) + 32LL))(
          *(_QWORD *)(a1 + 144),
          a2);
  if ( v50 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x297,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v50);
  v51 = (*(__int64 (__fastcall **)(_QWORD, struct IVirtualDesktop *, struct IUnknown *))(**(_QWORD **)(a1 + 128) + 80LL))(
          *(_QWORD *)(a1 + 128),
          v10,
          a2);
  if ( v51 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x298,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v51);
  v52 = CVirtualDesktopManager::FireVirtualDesktopSwitchedEvent(a1, a2, v3);
  if ( v52 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x29A,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v52);
  SwitcherType = CVirtualDesktopManager::GetSwitcherType(a1);
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity::Stop(
    (__int64)v75,
    (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v10,
    (__int64 (__fastcall ***)(__int64, GUID *, __int64 *))a2,
    SwitcherType);
  std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>::_Tidy((__int64)&v65);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v56);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v57);
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity::~VirtualDesktopSwitchedActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity *)v75);
  v7 = 0;
LABEL_76:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v63);
  return v7;
}
