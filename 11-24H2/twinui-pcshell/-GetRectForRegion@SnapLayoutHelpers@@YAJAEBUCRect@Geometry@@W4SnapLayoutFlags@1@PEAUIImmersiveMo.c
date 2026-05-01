/*
 * XREFs of ?GetRectForRegion@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@1@PEAUIImmersiveMonitor@@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@PEAUtagRECT@@PEAUSMART_FILL_OUTPUT@1@@Z @ 0x18008CA28
 * Callers:
 *     ?GetSnapRectForDesktopMode@SnapServiceProvider@@AEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@PEAUCRect@Geometry@@@Z @ 0x1805A8B9C (-GetSnapRectForDesktopMode@SnapServiceProvider@@AEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@PEAU.c)
 *     ?DetermineRectForSnapAction@HotkeyHandler@@AEBA?AUCRect@Geometry@@PEAUISnappedWindow@@PEAUIImmersiveMonitor@@W4SnapAction@1@AEBU23@I@Z @ 0x1805AD988 (-DetermineRectForSnapAction@HotkeyHandler@@AEBA-AUCRect@Geometry@@PEAUISnappedWindow@@PEAUIImmer.c)
 *     ?CalculateSnapRegion@DefaultSnapLayout@@UEAA?AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUSnapRegionCalculationMonitorData@@AEBUSnapRegionCalculationArgs@@@Z @ 0x1805B4F00 (-CalculateSnapRegion@DefaultSnapLayout@@UEAA-AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUSna.c)
 *     ?CalculateSnapRegion@TopBottomSnapLayout@@UEAA?AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUSnapRegionCalculationMonitorData@@AEBUSnapRegionCalculationArgs@@@Z @ 0x1805B51C0 (-CalculateSnapRegion@TopBottomSnapLayout@@UEAA-AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUS.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180026C3C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x18003F64C (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?ComputeSnapErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z @ 0x18008B40C (-ComputeSnapErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z.c)
 *     ?complete_without_lock@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180288ABC (-complete_without_lock@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@@1@XZ @ 0x18028A1A0 (--C-$tip_test@V-$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_data_co.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18028A1DC (-ensure_data@-$tip_test@V-$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@@tip2@@AEBAAEAV-$c.c)
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028A6E4 (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?start@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x18028B034 (-start@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ?begin_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ @ 0x18028B450 (-begin_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ.c)
 *     ??4?$com_ptr_t@UISnappedWindow@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x18028DEDC (--4-$com_ptr_t@UISnappedWindow@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?GetSnapRegionAnchorLocations@SnapLayoutHelpers@@YA?AW4SnapRegionAnchorLocations@1@AEBUCRect@Geometry@@0H@Z @ 0x1802B620C (-GetSnapRegionAnchorLocations@SnapLayoutHelpers@@YA-AW4SnapRegionAnchorLocations@1@AEBUCRect@Geo.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802C69C0 (--1-$test_watcher@V-$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802C69E8 (--1-$com_ptr_t@V-$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802C88E0 (--1-$test_data_control@V-$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ?has_ever_started@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802CDF64 (-has_ever_started@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?DetermineFillWindow@SnapLayoutHelpers@@YAJW4SnapRegionAnchorLocations@1@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@P6A_NW4Edge@1@@ZP6A_N00PEAW441@@ZAEBUCRect@Geometry@@HPEAUFillCandidate@1@@Z @ 0x1805AA3AC (-DetermineFillWindow@SnapLayoutHelpers@@YAJW4SnapRegionAnchorLocations@1@AEBV-$CCoSimpleArray@V-.c)
 *     ?HasNonComplementaryEdge@SnapLayoutHelpers@@YA_NW4SnapRegionAnchorLocations@1@0PEAW4Edge@1@@Z @ 0x1805AC20C (-HasNonComplementaryEdge@SnapLayoutHelpers@@YA_NW4SnapRegionAnchorLocations@1@0PEAW4Edge@1@@Z.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1805ACC5C (-reset@-$com_ptr_t@V-$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@Uerr_returncode_policy@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SnapLayoutHelpers::GetRectForRegion(
        RECT *a1,
        char a2,
        SnapRectHelpers *a3,
        RECT *a4,
        struct tagRECT *lprc,
        __int64 a6)
{
  int v6; // r12d
  int v10; // r13d
  RECT v11; // xmm0
  RECT *v12; // rsi
  _QWORD *v13; // rax
  int v14; // eax
  unsigned int v15; // ebx
  __int128 v17; // xmm6
  __int64 v18; // rsi
  struct IImmersiveMonitor *v19; // rdx
  unsigned int SnapRegionAnchorLocations; // esi
  __int64 v21; // r14
  int v22; // r14d
  int v23; // eax
  __int64 v24; // rbx
  int v25; // r15d
  int v26; // r12d
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned int v30; // eax
  LONG v31; // eax
  LONG v32; // eax
  __int64 v33; // rcx
  int v34; // ebx
  LONG v35; // eax
  LONG v36; // eax
  __int64 v37; // rcx
  int v38; // ebx
  RECT v39; // xmm6
  RECT *v40; // rdi
  __int64 v41; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v42; // [rsp+50h] [rbp-B8h]
  __int64 v43; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v44; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v45; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v46; // [rsp+70h] [rbp-98h] BYREF
  RECT *v47; // [rsp+78h] [rbp-90h] BYREF
  RECT *v48; // [rsp+80h] [rbp-88h] BYREF
  __int64 v49; // [rsp+88h] [rbp-80h] BYREF
  __int64 v50; // [rsp+90h] [rbp-78h] BYREF
  char v51[8]; // [rsp+98h] [rbp-70h] BYREF
  char v52[8]; // [rsp+A0h] [rbp-68h] BYREF
  char v53[8]; // [rsp+A8h] [rbp-60h] BYREF
  char v54[8]; // [rsp+B0h] [rbp-58h] BYREF
  RECT *v55; // [rsp+B8h] [rbp-50h]
  LPRECT lprcDst; // [rsp+C0h] [rbp-48h]
  void **v57; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v58[48]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v59; // [rsp+100h] [rbp-8h] BYREF
  char v60[16]; // [rsp+108h] [rbp+0h] BYREF
  __int128 v61; // [rsp+118h] [rbp+10h] BYREF
  __int128 v62; // [rsp+128h] [rbp+20h] BYREF
  __int128 v63; // [rsp+138h] [rbp+30h] BYREF
  RECT rcSrc; // [rsp+148h] [rbp+40h] BYREF
  char v65[16]; // [rsp+158h] [rbp+50h] BYREF
  char v66[16]; // [rsp+168h] [rbp+60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  v6 = (int)a4;
  v47 = a4;
  v55 = a1;
  lprcDst = lprc;
  SetRectEmpty(lprc);
  v10 = 0;
  if ( a6 )
  {
    *(_OWORD *)a6 = 0LL;
    *(_OWORD *)(a6 + 16) = 0LL;
    *(_OWORD *)(a6 + 32) = 0LL;
  }
  v11 = *a1;
  rcSrc = *a1;
  if ( (a2 & 1) == 0 )
  {
    v41 = 0LL;
    v12 = *(RECT **)tip2::tip_test<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>>::ensure_data(&v41);
    v48 = v12;
    if ( v12 )
      _InterlockedIncrement(&v12[23].right);
    tip2::details::shared_data<0,0,1>::begin_update(&v12->right);
    v12[17] = v11;
    tip2::details::shared_data<0,0,0>::end_update(&v12->right);
    wil::com_ptr_t<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>,wil::err_returncode_policy>::reset(&v48);
    wil::com_ptr_t<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>,wil::err_returncode_policy>(&v48);
    if ( v41 && (unsigned __int8)tip2::details::shared_data<1,0,0>::has_ever_started(v41 + 8) )
      wil::com_ptr_t<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>,wil::err_returncode_policy>::reset(&v41);
    v13 = (_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>>::ensure_data(&v41);
    tip2::details::shared_data<0,0,0>::start(*v13 + 8LL, v60);
    v57 = &tip2::test_watcher<tip2::details::merged_data<XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest,XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest>>::`vftable';
    wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
      (wil::details::ThreadFailureCallbackHolder *)v58,
      (struct wil::details::IFailureCallback *)&v57,
      0LL,
      1);
    v59 = v41;
    if ( v41 )
      _InterlockedIncrement((volatile signed __int32 *)(v41 + 376));
    v62 = 0LL;
    v14 = (*(__int64 (__fastcall **)(SnapRectHelpers *, __int128 *))(*(_QWORD *)a3 + 88LL))(a3, &v62);
    v15 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5A4,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
        (const char *)(unsigned int)v14);
      tip2::test_watcher<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>>::~test_watcher<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>>(&v57);
      wil::com_ptr_t<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>,wil::err_returncode_policy>(&v41);
      return v15;
    }
    v17 = v62;
    v18 = *(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>>::ensure_data(&v41);
    v49 = v18;
    if ( v18 )
      _InterlockedIncrement((volatile signed __int32 *)(v18 + 376));
    tip2::details::shared_data<0,0,1>::begin_update(v18 + 8);
    *(_OWORD *)(v18 + 288) = v17;
    tip2::details::shared_data<0,0,0>::end_update(v18 + 8);
    wil::com_ptr_t<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>,wil::err_returncode_policy>::reset(&v49);
    wil::com_ptr_t<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>,wil::err_returncode_policy>(&v49);
    LODWORD(v42) = SnapRectHelpers::ComputeSnapErrorThresholdForMonitor(a3, v19);
    SnapRegionAnchorLocations = SnapLayoutHelpers::GetSnapRegionAnchorLocations(a1, &v62, (unsigned int)v42);
    v21 = *(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>>::ensure_data(&v41);
    v50 = v21;
    if ( v21 )
      _InterlockedIncrement((volatile signed __int32 *)(v21 + 376));
    tip2::details::shared_data<0,0,1>::begin_update(v21 + 8);
    *(_DWORD *)(v21 + 320) = SnapRegionAnchorLocations;
    tip2::details::shared_data<0,0,0>::end_update(v21 + 8);
    wil::com_ptr_t<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>,wil::err_returncode_policy>::reset(&v50);
    wil::com_ptr_t<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>,wil::err_returncode_policy>(&v50);
    v45 = 0LL;
    v22 = 0;
    v46 = 0LL;
    if ( (SnapRegionAnchorLocations & 0xA) != 0xA )
    {
      v23 = SnapLayoutHelpers::DetermineFillWindow(
              SnapRegionAnchorLocations,
              v6,
              (unsigned int)&SnapLayoutHelpers::IsVerticalEdge,
              (unsigned int)&SnapLayoutHelpers::HasComplementaryVerticalEdge);
      v22 = v46;
      if ( v23 < 0 )
        v22 = 0;
      LODWORD(v46) = v22;
      v10 = HIDWORD(v46);
    }
    v24 = 0LL;
    v43 = 0LL;
    v25 = 0;
    v44 = 0LL;
    v26 = 0;
    if ( (SnapRegionAnchorLocations & 5) != 5 )
    {
      v27 = SnapLayoutHelpers::DetermineFillWindow(
              SnapRegionAnchorLocations,
              (_DWORD)v47,
              (unsigned int)&SnapLayoutHelpers::IsHorizontalEdge,
              (unsigned int)&SnapLayoutHelpers::HasComplementaryHorizontalEdge);
      v25 = v44;
      if ( v27 < 0 )
        v25 = 0;
      LODWORD(v44) = v25;
      v26 = HIDWORD(v44);
      v24 = v43;
    }
    if ( v22 == 1 && v25 == 1 )
    {
      v28 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v45 + 48LL))(v45, v65);
      LODWORD(v47) = SnapLayoutHelpers::GetSnapRegionAnchorLocations(v28, &v62, (unsigned int)v42);
      v29 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v24 + 48LL))(v24, v66);
      v30 = SnapLayoutHelpers::GetSnapRegionAnchorLocations(v29, &v62, (unsigned int)v42);
      if ( (v30 & 0xA) == 0xA )
      {
        SnapLayoutHelpers::HasNonComplementaryEdge(SnapRegionAnchorLocations, (unsigned int)v47, (char *)&v44 + 4);
        wil::com_ptr_t<ISnappedWindow,wil::err_returncode_policy>::operator=(&v43, &v45);
        v26 = HIDWORD(v44);
        v25 = v44;
        v24 = v43;
      }
      else
      {
        SnapLayoutHelpers::HasNonComplementaryEdge(SnapRegionAnchorLocations, v30, (char *)&v46 + 4);
        wil::com_ptr_t<ISnappedWindow,wil::err_returncode_policy>::operator=(&v45, &v43);
        v10 = HIDWORD(v46);
        v22 = v46;
      }
    }
    if ( v25 )
    {
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v24 + 48LL))(v24, &v61);
      if ( (SnapRegionAnchorLocations & 1) != 0 )
      {
        v31 = HIDWORD(v61);
        if ( v26 == 1 )
          v31 = DWORD1(v61);
        rcSrc.bottom = v31;
      }
      else if ( (SnapRegionAnchorLocations & 4) != 0 )
      {
        v32 = HIDWORD(v61);
        if ( v26 == 1 )
          v32 = DWORD1(v61);
        rcSrc.top = v32;
      }
      v33 = *(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>>::operator->(
                         &v41,
                         v51);
      *(_OWORD *)(v33 + 348) = v61;
      if ( !*(_BYTE *)(v33 + 364) )
        *(_BYTE *)(v33 + 364) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>>::~test_data_control<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>>(v51);
      v34 = SnapLayoutHelpers::GetSnapRegionAnchorLocations(&v61, &v62, (unsigned int)v42);
      *(_DWORD *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>>::operator->(
                               &v41,
                               v52)
                + 368LL) = v34;
      tip2::test_data_control<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>>::~test_data_control<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>>(v52);
    }
    if ( v22 )
    {
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v45 + 48LL))(v45, &v63);
      if ( (SnapRegionAnchorLocations & 2) != 0 )
      {
        v35 = DWORD2(v63);
        if ( v10 == 2 )
          v35 = v63;
        rcSrc.right = v35;
      }
      else if ( (SnapRegionAnchorLocations & 8) != 0 )
      {
        v36 = DWORD2(v63);
        if ( v10 == 2 )
          v36 = v63;
        rcSrc.left = v36;
      }
      v37 = *(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>>::operator->(
                         &v41,
                         v53);
      *(_OWORD *)(v37 + 324) = v63;
      if ( !*(_BYTE *)(v37 + 340) )
        *(_BYTE *)(v37 + 340) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>>::~test_data_control<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>>(v53);
      v38 = SnapLayoutHelpers::GetSnapRegionAnchorLocations(&v63, &v62, (unsigned int)v42);
      *(_DWORD *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>>::operator->(
                               &v41,
                               v54)
                + 344LL) = v38;
      tip2::test_data_control<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>>::~test_data_control<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>>(v54);
    }
    v39 = rcSrc;
    if ( a6 )
    {
      *(_DWORD *)a6 = v22;
      *(_DWORD *)(a6 + 4) = v25;
      *(_DWORD *)(a6 + 8) = v10;
      *(_DWORD *)(a6 + 12) = v26;
      *(RECT *)(a6 + 16) = *v55;
      *(RECT *)(a6 + 32) = v39;
    }
    v40 = *(RECT **)tip2::tip_test<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>>::ensure_data(&v41);
    v47 = v40;
    if ( v40 )
      _InterlockedIncrement(&v40[23].right);
    tip2::details::shared_data<0,0,1>::begin_update(&v40->right);
    v40[19] = v39;
    tip2::details::shared_data<0,0,0>::end_update(&v40->right);
    wil::com_ptr_t<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>,wil::err_returncode_policy>::reset(&v47);
    wil::com_ptr_t<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>,wil::err_returncode_policy>(&v47);
    if ( v41 )
      tip2::details::shared_data<0,0,0>::complete_without_lock(v41 + 8);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v43);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v45);
    wil::com_ptr_t<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>,wil::err_returncode_policy>(&v59);
    wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v58);
    wil::com_ptr_t<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>,wil::err_returncode_policy>(&v41);
  }
  CopyRect(lprcDst, &rcSrc);
  return 0LL;
}
