/*
 * XREFs of ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002EB90
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x180007C08 (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?Add@?$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z @ 0x180009400 (-Add@-$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?UpdateRemoteAppRenderTargetRoot@CTopLevelWindow@@QEAAJXZ @ 0x18000A698 (-UpdateRemoteAppRenderTargetRoot@CTopLevelWindow@@QEAAJXZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18000FCB0 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18002B8A0 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA?AU1345@XZ @ 0x18002E7F0 (-GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA-AU1345@XZ.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18002F810 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SnapToSnapAnimation@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180036A00 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SnapToSnapAnimation@@@details@wil@@QEAAX_.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180036A90 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800470D0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180047F08 (--0CWindowData@@QEAA@XZ.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x18004B2C0 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18004E40C (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ @ 0x18004EDF0 (-ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ.c)
 *     ?PropertiesAllowAutoParenting@CWindowData@@QEBA_NXZ @ 0x18004FAD8 (-PropertiesAllowAutoParenting@CWindowData@@QEBA_NXZ.c)
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x180051680 (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_ItemClosedEventOnVisibility@@@details@wil@@QEAA_NXZ @ 0x1800656F8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_ItemClosedEventOnVisibili.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A14C8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace@AEAPEAVCWindowData@@@?$_Tree@V?$_Tset_traits@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@@std@@_N@1@AEAPEAVCWindowData@@@Z @ 0x1800B6EEC (--$emplace@AEAPEAVCWindowData@@@-$_Tree@V-$_Tset_traits@PEAVCWindowData@@U-$less@PEAVCWindowData.c)
 *     ?erase@?$_Tree@V?$_Tset_traits@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@@2@V32@@Z @ 0x1800B8850 (-erase@-$_Tree@V-$_Tset_traits@PEAVCWindowData@@U-$less@PEAVCWindowData@@@std@@V-$allocator@PEAV.c)
 *     ?find@?$_Tree@V?$_Tset_traits@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@@2@AEBQEAVCWindowData@@@Z @ 0x1800B88A0 (-find@-$_Tree@V-$_Tset_traits@PEAVCWindowData@@U-$less@PEAVCWindowData@@@std@@V-$allocator@PEAVC.c)
 *     ?unconditional_release_ref@?$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@@AEAAXXZ @ 0x1800F3C24 (-unconditional_release_ref@-$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180106FD8 (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ??$as@UITransitionManagerNativePrivate@Transitions@Udwm@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UITransitionManagerNativePrivate@Transitions@Udwm@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x180108508 (--$as@UITransitionManagerNativePrivate@Transitions@Udwm@@Utype@-$abi@UIUnknown@Foundation@Window.c)
 *     ?ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z @ 0x18010C02C (-ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z.c)
 *     ?ToggleAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18010CC54 (-ToggleAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWindowList::StyleChange(CWindowList *this, struct IDwmWindow *a2)
{
  char *v4; // r14
  int v5; // edi
  __int64 v6; // r15
  CWindowData *v7; // rax
  CWindowData *v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  int v12; // r12d
  __int64 v13; // r8
  int v14; // edi
  int v15; // eax
  __int64 v16; // rsi
  int v17; // eax
  unsigned int v18; // r12d
  int v19; // eax
  char v20; // al
  __int64 v21; // rdx
  bool v22; // zf
  bool v23; // di
  char v24; // r12
  __int64 v25; // rdx
  char v26; // al
  unsigned int v27; // r12d
  __int64 v28; // rdi
  __int64 v29; // rbx
  const char *v30; // r9
  unsigned int v31; // r12d
  CTopLevelWindow *v32; // rdi
  int v33; // eax
  __int64 i; // rbx
  int v35; // ebx
  __int64 v36; // rcx
  __int64 v37; // rax
  int v38; // eax
  int v39; // eax
  int v40; // r9d
  CWindowIconic *v41; // rcx
  int v42; // eax
  __int64 v43; // rdi
  CTopLevelWindow3D **v44; // rcx
  __int64 v45; // rdx
  int v46; // eax
  _QWORD *v47; // rdi
  int v48; // eax
  unsigned int v49; // ebx
  __int64 v50; // rax
  bool v51; // al
  char v52; // bl
  bool v53; // di
  char v54; // bl
  CWindowList *v55; // rcx
  unsigned __int8 v56; // r15
  struct _LIST_ENTRY *WindowListForDesktop; // rdi
  struct _LIST_ENTRY *j; // rbx
  int v59; // eax
  __int64 v60; // rdx
  __int64 v61; // rax
  char *v62; // rax
  __int64 v63; // rbx
  __int64 v64; // rax
  CWindowList *v65; // rcx
  __int64 v66; // rdx
  __int64 k; // rax
  unsigned int v68; // [rsp+20h] [rbp-F8h]
  unsigned int v69; // [rsp+20h] [rbp-F8h]
  char v70; // [rsp+30h] [rbp-E8h]
  int v71; // [rsp+34h] [rbp-E4h]
  struct _RTL_CRITICAL_SECTION *v72; // [rsp+38h] [rbp-E0h] BYREF
  int v73; // [rsp+40h] [rbp-D8h]
  int v74; // [rsp+44h] [rbp-D4h]
  int v75; // [rsp+48h] [rbp-D0h]
  _DWORD *v76; // [rsp+50h] [rbp-C8h]
  CTopLevelWindow **v77; // [rsp+58h] [rbp-C0h]
  _QWORD v78[2]; // [rsp+70h] [rbp-A8h] BYREF
  __int128 v79; // [rsp+80h] [rbp-98h]
  __int128 v80; // [rsp+90h] [rbp-88h]
  __int128 v81; // [rsp+A0h] [rbp-78h]
  __int64 v82; // [rsp+B0h] [rbp-68h]
  char v83; // [rsp+B8h] [rbp-60h]
  char v84[72]; // [rsp+D0h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+0h]
  __int64 v86; // [rsp+128h] [rbp+10h] BYREF
  __int64 Buffer; // [rsp+130h] [rbp+18h] BYREF
  __int64 v88; // [rsp+138h] [rbp+20h] BYREF

  v4 = 0LL;
  v72 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v5 = 0;
  v6 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( !v6 && (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
  {
    v7 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                          WPF::g_pProcessHeap,
                          864LL);
    v86 = (__int64)v7;
    if ( !v7 || (v8 = CWindowData::CWindowData(v7), (v6 = (__int64)v8) == 0) )
    {
      v5 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x822u, 0LL);
      goto LABEL_9;
    }
    *((_QWORD *)v8 + 3) = a2;
    (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v8);
    *(_QWORD *)(v6 + 40) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
    v9 = CWindowList::SyncWindowData(this, a2, (struct CWindowData *)v6);
    v5 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x826u, 0LL);
LABEL_9:
      v10 = 4219LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v5,
        v68);
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&v72);
      return (unsigned int)v5;
    }
  }
  if ( v5 < 0 )
    goto LABEL_9;
  if ( !v6 )
    goto LABEL_159;
  v76 = (_DWORD *)(v6 + 116);
  v75 = *(_DWORD *)(v6 + 116);
  v12 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 32LL))(a2);
  v71 = v12;
  v74 = *(_DWORD *)(v6 + 128);
  v73 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 344LL))(a2);
  LOBYTE(Buffer) = 0;
  LODWORD(v86) = v75 & 0x20000000;
  if ( (v75 & 0x20000000) != 0 )
  {
    v14 = v12 & 0x20000000;
    if ( (v12 & 0x20000000) == 0 )
    {
      LOBYTE(Buffer) = 1;
      CWindowData::ClearSnapshot((CWindowData *)v6, 0, v13, 0);
      v15 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 58)
                                                       + 128LL))(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58),
              v6);
      if ( v15 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x108D,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
          (const char *)(unsigned int)v15,
          v68);
    }
    v16 = v6;
  }
  else
  {
    v14 = v12 & 0x20000000;
    v16 = v6;
    if ( (v12 & 0x20000000) != 0 )
    {
      LOBYTE(Buffer) = 1;
      if ( v6 == *((_QWORD *)this + 88) )
      {
        v17 = CWindowList::ReleaseAcrylicSheetAndOwnerIfNotUsed(this, 1);
        v18 = v17;
        if ( v17 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1095,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
            (const char *)(unsigned int)v17,
            v68);
          CGuard<CDwmCS>::~CGuard<CDwmCS>(&v72);
          return v18;
        }
        v12 = v71;
      }
      v19 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 58)
                                                       + 120LL))(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58),
              v6);
      if ( v19 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1098,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
          (const char *)(unsigned int)v19,
          v68);
    }
    else
    {
      v14 = 0;
    }
  }
  *v76 = v12;
  *(_DWORD *)(v16 + 120) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 40LL))(a2);
  *(_DWORD *)(v16 + 124) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 48LL))(a2);
  *(_DWORD *)(v6 + 128) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 344LL))(a2);
  *(_BYTE *)(v16 + 672) ^= (*(_BYTE *)(v16 + 672) ^ (8
                                                   * (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 168LL))(a2))) & 8;
  v20 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 176LL))(a2);
  *(_BYTE *)(v16 + 672) &= ~0x80u;
  *(_BYTE *)(v16 + 672) |= v20 << 7;
  v77 = (CTopLevelWindow **)(v16 + 440);
  if ( *(_QWORD *)(v16 + 440) )
  {
    if ( (_DWORD)v86 || v14 || (v22 = *(_BYTE *)(*(_QWORD *)(v16 + 448) + 536LL) == 0, LOBYTE(v88) = 0, !v22) )
      LOBYTE(v88) = 1;
    if ( (v75 & 0x1000000) != 0 )
    {
      v23 = 0;
      LOBYTE(v86) = 1;
      if ( (v12 & 0x1000000) == 0 )
        goto LABEL_34;
    }
    else
    {
      v23 = (v12 & 0x1000000) != 0;
    }
    LOBYTE(v86) = 0;
LABEL_34:
    if ( (v74 & 0x1000) == 0 || (v70 = 1, (v73 & 0x1000) != 0) )
      v70 = 0;
    v24 = 0;
    LOBYTE(v21) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapToSnapAnimation>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_SnapToSnapAnimation>::GetImpl'::`2'::impl,
      v21);
    if ( *((_BYTE *)this + 682)
      && (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2) == *((_QWORD *)this + 86) )
    {
      v24 = 1;
      *((_BYTE *)this + 682) = 0;
    }
    LOBYTE(v25) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_XTests>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_XTests>::GetImpl'::`2'::impl,
      v25);
    if ( !(_BYTE)v88 && ((v26 = v86, v23) || (_BYTE)v86 || v24 || v70) )
    {
      try
      {
        *((_BYTE *)this + 681) = 1;
        if ( v23 )
        {
          v27 = 2;
        }
        else if ( v26 )
        {
          v27 = 3;
        }
        else
        {
          v27 = 5 - (v24 != 0);
        }
        *((_QWORD *)this + 86) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
        winrt::Udwm::Transitions::implementation::TransitionManager::GetCurrent((winrt::Udwm::Transitions::implementation::TransitionManager *)&v88);
        v28 = v88;
        winrt::impl::as<Udwm::Transitions::ITransitionManagerNativePrivate,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
          &v86,
          v88);
        v29 = v86;
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v86 + 48LL))(v86, *(_QWORD *)(v16 + 448), v27);
        if ( v29 )
          winrt::com_ptr<Udwm::Transitions::ITransitionAnimationVisualNative>::unconditional_release_ref(&v86);
        if ( v28 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v88);
        v31 = 3;
      }
      catch ( ... )
      {
        LODWORD(v86) = wil::details::in1diag3::Return_CaughtException(
                         retaddr,
                         (void *)0x10E9,
                         (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
                         v30);
        CGuard<CDwmCS>::~CGuard<CDwmCS>(&v72);
        return (unsigned int)v86;
      }
    }
    else
    {
      v31 = 3;
    }
    v32 = *v77;
    if ( *v77 )
    {
      v33 = *((_DWORD *)v32 + 22);
      if ( (v33 & 0x8000) == 0 )
      {
        *((_DWORD *)v32 + 22) = v33 | 0x8000;
        for ( i = *((_QWORD *)v32 + 3); i; i = *(_QWORD *)(i + 24) )
        {
          if ( (*(_BYTE *)(i + 88) & 1) != 0 )
            break;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)i + 32LL))(i);
        }
      }
      v35 = 0;
      v36 = *((_QWORD *)v32 + 106);
      if ( v36 )
      {
        v37 = *((_QWORD *)v32 + 94);
        if ( v37 )
        {
          if ( *(_QWORD *)(v37 + 424) || (*(_BYTE *)(v37 + 673) & 0x40) == 0 || (*(_DWORD *)(v37 + 120) & 0x200000) != 0 )
            v31 = 1;
          v38 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v36 + 32LL))(v36, v31);
          v35 = v38;
          if ( v38 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0x182Cu, 0LL);
            v5 = v35;
LABEL_73:
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0x64Fu, 0LL);
            v69 = 778;
            v40 = v35;
LABEL_81:
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, v69, 0LL);
            v10 = 4332LL;
            goto LABEL_10;
          }
          v39 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                  + 6)
                                                                + 32LL)
                                                  + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                       + 6)
                                                                     + 32LL));
          v35 = v39;
          v5 = v39;
          if ( v39 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, 0x182Du, 0LL);
            goto LABEL_73;
          }
        }
      }
      v5 = v35;
      if ( v35 < 0 )
        goto LABEL_73;
    }
    v41 = *(CWindowIconic **)(v16 + 488);
    if ( v41 )
    {
      v42 = CWindowIconic::OnWindowStyleUpdated(v41, 1);
      v5 = v42;
      if ( v42 < 0 )
      {
        v69 = 783;
LABEL_80:
        v40 = v42;
        goto LABEL_81;
      }
    }
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_ItemClosedEventOnVisibility>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_ItemClosedEventOnVisibility>::GetImpl'::`2'::impl) )
    {
      v42 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 58)
                                                       + 160LL))(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58),
              v16);
      v5 = v42;
      if ( v42 < 0 )
      {
        v69 = 788;
        goto LABEL_80;
      }
    }
    if ( (((unsigned __int16)v74 ^ (unsigned __int16)v73) & 0x1000) != 0 )
      CWindowData::OnColorizationUpdated((CWindowData *)v16);
    v43 = *((_QWORD *)this + 71);
    if ( v43 )
    {
      v45 = *(_QWORD *)(v16 + 448);
      v44 = (CTopLevelWindow3D **)(v16 + 448);
      if ( v45 )
      {
        v46 = *v76 & 0x20000000;
        v86 = v16;
        if ( !*(_BYTE *)(v43 + 313) && *(_BYTE *)(v45 + 296) != (v46 != 0) )
        {
          v47 = (_QWORD *)(v43 + 400);
          if ( v46 )
          {
            std::_Tree<std::_Tset_traits<CWindowData *,std::less<CWindowData *>,std::allocator<CWindowData *>,0>>::emplace<CWindowData * &>(
              v47,
              v84,
              &v86);
          }
          else
          {
            std::_Tree<std::_Tset_traits<CWindowData *,std::less<CWindowData *>,std::allocator<CWindowData *>,0>>::find(
              v47,
              &v88,
              &v86);
            if ( v88 != *v47 )
              std::_Tree<std::_Tset_traits<CWindowData *,std::less<CWindowData *>,std::allocator<CWindowData *>,0>>::erase(
                v47,
                &v86);
          }
          v44 = (CTopLevelWindow3D **)(v16 + 448);
        }
      }
    }
    else
    {
      v44 = (CTopLevelWindow3D **)(v6 + 448);
    }
    v48 = CTopLevelWindow3D::OnWindowStyleUpdated(*v44);
    v49 = v48;
    if ( v48 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10FB,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v48,
        v68);
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&v72);
      return v49;
    }
    if ( (_BYTE)Buffer )
      CTopLevelWindow::UpdateRemoteAppRenderTargetRoot(*v77);
    v12 = v71;
  }
  v50 = *(_QWORD *)(v16 + 600);
  v51 = v50 && *(char *)(v50 + 673) < 0 && CWindowData::ShouldBeIncludedInOwnerSWR((CWindowData *)v16);
  if ( (*(_BYTE *)(v16 + 674) & 1) != v51 )
    CWindowData::UpdateOwnerLists((CWindowData *)v16, !(*(_BYTE *)(v16 + 674) & 1));
  v52 = *(_BYTE *)(v16 + 673);
  v53 = (*v76 & 0x11000000) == 0x11000000 && *(_QWORD *)(v16 + 32);
  LOBYTE(v86) = RtlIsGenericTableEmpty((PRTL_GENERIC_TABLE)((char *)this + 424)) == 0;
  *(_BYTE *)(v16 + 673) &= ~2u;
  *(_BYTE *)(v16 + 673) |= 2 * v53;
  if ( !v53 )
  {
    v54 = v52 & 2;
    goto LABEL_114;
  }
  v54 = v52 & 2;
  if ( v54 )
  {
LABEL_114:
    if ( v54 && !v53 )
    {
      Buffer = v16;
      RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 424), &Buffer);
    }
    goto LABEL_117;
  }
  CGenericSet<CWindowData *>::Add((struct _RTL_GENERIC_TABLE *)((char *)this + 424), v16);
LABEL_117:
  v56 = RtlIsGenericTableEmpty((PRTL_GENERIC_TABLE)((char *)this + 424)) == 0;
  if ( (_BYTE)v86 != v56 )
  {
    WindowListForDesktop = CWindowList::GetWindowListForDesktop(this, *(_QWORD *)(v16 + 136));
    v55 = CDesktopManager::s_pDesktopManagerInstance;
    *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 21) = v56;
    for ( j = WindowListForDesktop->Flink; j != WindowListForDesktop; j = j->Flink )
    {
      if ( (BYTE1(j[42].Flink) & 8) != 0 )
      {
        CWindowData::OnColorizationUpdated((CWindowData *)j);
        PostMessageW((HWND)j[2].Blink, 0x321u, v56, 0LL);
      }
    }
  }
  if ( ((v75 ^ v12) & 0x20000000) != 0 )
    CWindowData::NotifyRepresentationChanged((CWindowData *)v16);
  if ( *(_QWORD *)v16 != v16 )
  {
    v61 = *(_QWORD *)(v16 + 136);
    v78[1] = 0LL;
    v79 = 0LL;
    v82 = -1LL;
    v83 = 0;
    v80 = 0LL;
    v81 = 0LL;
    v78[0] = v61;
    v62 = (char *)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), v78);
    if ( v62 )
      v4 = v62 + 80;
    v63 = v16;
    while ( 1 )
    {
      if ( (*(_BYTE *)(v63 + 672) & 1) != 0 )
      {
        v64 = *(_QWORD *)(v63 + 440);
        if ( v64 )
        {
          if ( *(_QWORD *)(v64 + 24) )
          {
            v65 = *(CWindowList **)(v63 + 24);
            if ( v65 )
            {
              if ( (*(unsigned __int8 (__fastcall **)(CWindowList *))(*(_QWORD *)v65 + 440LL))(v65) )
              {
                if ( CWindowData::PropertiesAllowAutoParenting((CWindowData *)v63)
                  && (*(_BYTE *)(v63 + 677) & 0x10) == 0
                  && !*(_QWORD *)(v63 + 464)
                  && (*(_BYTE *)(v63 + 676) & 2) == 0 )
                {
                  v66 = *(_QWORD *)(v63 + 600);
                  if ( (*(_BYTE *)(v66 + 672) & 1) != 0 && *(_QWORD *)(v66 + 440) && (*(_BYTE *)(v66 + 678) & 0x10) == 0 )
                  {
                    for ( k = *(_QWORD *)(v63 + 8); (char *)k != v4; k = *(_QWORD *)(k + 8) )
                    {
                      if ( k == v66 )
                        goto LABEL_152;
                      if ( (*(_BYTE *)(k + 672) & 1) != 0 )
                      {
                        v65 = *(CWindowList **)(k + 440);
                        if ( v65 )
                        {
                          if ( *((_QWORD *)v65 + 3) )
                          {
                            if ( *(_QWORD *)(k + 600) == v66 && (*(_BYTE *)(k + 678) & 0x10) != 0 )
                            {
LABEL_152:
                              LOBYTE(v65) = 1;
                              goto LABEL_154;
                            }
                            break;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            LOBYTE(v65) = 0;
LABEL_154:
            if ( (_BYTE)v65 == ((*(_BYTE *)(v63 + 678) & 0x10) != 0) )
              goto LABEL_159;
            v59 = CWindowList::ToggleAutoParenting(v65, (struct CWindowData *)v63);
            v5 = v59;
            if ( v59 < 0 )
              break;
          }
        }
      }
      v63 = *(_QWORD *)v63;
      if ( !v63 || (char *)v63 == v4 || v63 == v16 )
        goto LABEL_159;
    }
    v60 = 8184LL;
    goto LABEL_161;
  }
  if ( (*(_BYTE *)(v16 + 678) & 0x10) != 0 )
  {
    v59 = CWindowList::ToggleAutoParenting(v55, (struct CWindowData *)v16);
    v5 = v59;
    if ( v59 < 0 )
    {
      v60 = 8168LL;
LABEL_161:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v60,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v59,
        v68);
      v10 = 4372LL;
      goto LABEL_10;
    }
  }
LABEL_159:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return 0LL;
}
