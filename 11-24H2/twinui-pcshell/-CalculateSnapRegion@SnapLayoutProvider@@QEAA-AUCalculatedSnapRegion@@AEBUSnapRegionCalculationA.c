/*
 * XREFs of ?CalculateSnapRegion@SnapLayoutProvider@@QEAA?AUCalculatedSnapRegion@@AEBUSnapRegionCalculationArgs@@@Z @ 0x18016F840
 * Callers:
 *     ?OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAK2PEAUtagRECT@@3@Z @ 0x180270510 (-OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAK2P.c)
 * Callees:
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180026C3C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x1800BAC80 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ?UpdateMonitorDataFromPoint@SnapLayoutProvider@@AEAA_NAEBUCPoint@Geometry@@PEAUIApplicationView@@PEAUISnappedWindowModel@@@Z @ 0x18016FFA8 (-UpdateMonitorDataFromPoint@SnapLayoutProvider@@AEAA_NAEBUCPoint@Geometry@@PEAUIApplicationView@.c)
 *     ??1?$unique_ptr@V_Facet_base@std@@U?$default_delete@V_Facet_base@std@@@2@@std@@QEAA@XZ @ 0x1801701F4 (--1-$unique_ptr@V_Facet_base@std@@U-$default_delete@V_Facet_base@std@@@2@@std@@QEAA@XZ.c)
 *     ??4?$unique_ptr@UAsyncEventWorkItemBase@details@wil@@U?$default_delete@UAsyncEventWorkItemBase@details@wil@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x18017021C (--4-$unique_ptr@UAsyncEventWorkItemBase@details@wil@@U-$default_delete@UAsyncEventWorkItemBase@d.c)
 *     ?complete_without_lock@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180288ABC (-complete_without_lock@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028A6E4 (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?begin_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ @ 0x18028B450 (-begin_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18029721C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18029CF38 (--1-$test_watcher@V-$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x18029CF60 (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@t.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18029CFCC (--1-$com_ptr_t@V-$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@Uerr_returncode_po.c)
 *     ?CreateInitialTopScrubbingResult@SnapLayoutProvider@@AEBA?AUCalculatedSnapRegion@@AEBUSnapRegionCalculationArgs@@@Z @ 0x1802B73B0 (-CreateInitialTopScrubbingResult@SnapLayoutProvider@@AEBA-AUCalculatedSnapRegion@@AEBUSnapRegion.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802C8AE4 (--1-$test_data_control@V-$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@@tip2@@QEA.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     ??1?$unique_ptr@VDefaultSnapLayout@@U?$default_delete@VDefaultSnapLayout@@@std@@@std@@QEAA@XZ @ 0x1805B4D98 (--1-$unique_ptr@VDefaultSnapLayout@@U-$default_delete@VDefaultSnapLayout@@@std@@@std@@QEAA@XZ.c)
 *     _anonymous_namespace_::CreateDefaultLayout @ 0x1805B54A0 (_anonymous_namespace_--CreateDefaultLayout.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1805B573C (-reset@-$com_ptr_t@V-$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@Uerr_returncod.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SnapLayoutProvider::CalculateSnapRegion(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rdx
  _DWORD *v9; // r12
  __int64 v10; // rdi
  __int128 v11; // xmm6
  __int64 v12; // rdi
  _DWORD *v13; // r13
  __int128 v14; // xmm6
  __int64 v15; // rdi
  __int64 v16; // rdx
  int v17; // eax
  _QWORD *v18; // rax
  void (__fastcall ***v19)(_QWORD, __int64); // rcx
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 *v23; // rcx
  __int64 DefaultLayout; // rax
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rbx
  __int64 v32; // rbx
  __int64 *v33; // rcx
  __int64 v34; // rax
  int v35; // eax
  int v36; // ecx
  int v37; // eax
  _QWORD *v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rbx
  int v41; // [rsp+28h] [rbp-E0h]
  _BYTE v42[8]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v43[48]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v44; // [rsp+70h] [rbp-98h] BYREF
  __int64 v45; // [rsp+78h] [rbp-90h] BYREF
  __int64 v46; // [rsp+80h] [rbp-88h] BYREF
  __int64 v47; // [rsp+88h] [rbp-80h] BYREF
  __int64 v48; // [rsp+90h] [rbp-78h] BYREF
  __int64 v49; // [rsp+98h] [rbp-70h] BYREF
  __int64 v50; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v51; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD *v52; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v53[8]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v54[8]; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE v55[8]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v56; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v57; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v58; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v59; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v60; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v61; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v62; // [rsp+100h] [rbp-8h] BYREF
  __int64 v63; // [rsp+108h] [rbp+0h] BYREF
  __int64 v64[3]; // [rsp+110h] [rbp+8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]
  __int64 v66; // [rsp+168h] [rbp+60h] BYREF
  __int64 v67; // [rsp+178h] [rbp+70h] BYREF
  __int64 v68; // [rsp+180h] [rbp+78h] BYREF

  tip2::start_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>>((struct wil::details::IFailureCallback *)v42);
  v6 = *(_QWORD *)(a3 + 16);
  v7 = v44;
  v66 = v44;
  if ( v44 )
    _InterlockedIncrement((volatile signed __int32 *)(v44 + 352));
  tip2::details::shared_data<0,0,1>::begin_update(v7 + 8);
  *(_QWORD *)(v7 + 276) = v6;
  tip2::details::shared_data<0,0,0>::end_update(v7 + 8);
  wil::com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>::reset(&v66);
  wil::com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>(&v66);
  if ( SnapLayoutProvider::UpdateMonitorDataFromPoint(
         (SnapLayoutProvider *)a1,
         (const struct Geometry::CPoint *)(a3 + 16),
         *(struct IApplicationView **)a3,
         *(struct ISnappedWindowModel **)(a3 + 8))
    || !*(_QWORD *)(a1 + 136) )
  {
    LOBYTE(v8) = *(_BYTE *)(a1 + 128);
    DefaultLayout = anonymous_namespace_::CreateDefaultLayout(v53, v8);
    wistd::unique_ptr<wil::details::AsyncEventWorkItemBase,wistd::default_delete<wil::details::AsyncEventWorkItemBase>>::operator=(
      a1 + 136,
      DefaultLayout);
    std::unique_ptr<std::_Facet_base>::~unique_ptr<std::_Facet_base>(v53);
    v9 = (_DWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 24) = 1;
  }
  else
  {
    v9 = (_DWORD *)(a1 + 24);
  }
  v10 = v44;
  v67 = v44;
  if ( v44 )
    _InterlockedIncrement((volatile signed __int32 *)(v44 + 352));
  tip2::details::shared_data<0,0,1>::begin_update(v10 + 8);
  *(_BYTE *)(v10 + 272) = 1;
  tip2::details::shared_data<0,0,0>::end_update(v10 + 8);
  wil::com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>::reset(&v67);
  wil::com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>(&v67);
  v11 = *(_OWORD *)(a1 + 56);
  v12 = v44;
  v68 = v44;
  v13 = v9;
  if ( v44 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v44 + 352));
    v13 = (_DWORD *)(a1 + 24);
  }
  tip2::details::shared_data<0,0,1>::begin_update(v12 + 8);
  *(_OWORD *)(v12 + 284) = v11;
  tip2::details::shared_data<0,0,0>::end_update(v12 + 8);
  wil::com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>::reset(&v68);
  wil::com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>(&v68);
  v14 = *(_OWORD *)(a1 + 72);
  v15 = v44;
  v45 = v44;
  if ( v44 )
    _InterlockedIncrement((volatile signed __int32 *)(v44 + 352));
  tip2::details::shared_data<0,0,1>::begin_update(v15 + 8);
  *(_OWORD *)(v15 + 300) = v14;
  tip2::details::shared_data<0,0,0>::end_update(v15 + 8);
  wil::com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>::reset(&v45);
  wil::com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>(&v45);
  if ( *v9 != 1 )
  {
    if ( *v9 == 2 )
    {
      if ( *(_DWORD *)(a3 + 32) == 2 )
      {
        if ( 1000000LL * *(_QWORD *)(a1 + 152) >= *std::chrono::steady_clock::now(&v63) - *(_QWORD *)(a1 + 144) )
        {
          SnapLayoutProvider::CreateInitialTopScrubbingResult(a1, a2, a3);
          v26 = v44;
          v46 = v44;
          if ( v44 )
            _InterlockedIncrement((volatile signed __int32 *)(v44 + 352));
          tip2::details::shared_data<0,0,1>::begin_update(v26 + 8);
          *(_BYTE *)(v26 + 273) = 0;
          tip2::details::shared_data<0,0,0>::end_update(v26 + 8);
          wil::com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>::reset(&v46);
          wil::com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>(&v46);
          v27 = v44;
          v47 = v44;
          if ( v44 )
            _InterlockedIncrement((volatile signed __int32 *)(v44 + 352));
          tip2::details::shared_data<0,0,1>::begin_update(v27 + 8);
          *(_OWORD *)(v27 + 332) = *(_OWORD *)(a2 + 20);
          tip2::details::shared_data<0,0,0>::end_update(v27 + 8);
          wil::com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>::reset(&v47);
          wil::com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>(&v47);
          v28 = v44;
          v48 = v44;
          if ( v44 )
            _InterlockedIncrement((volatile signed __int32 *)(v44 + 352));
          tip2::details::shared_data<0,0,1>::begin_update(v28 + 8);
          *(_BYTE *)(v28 + 274) = 1;
          tip2::details::shared_data<0,0,0>::end_update(v28 + 8);
          wil::com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>::reset(&v48);
          v23 = &v48;
          goto LABEL_24;
        }
      }
      else
      {
        LOBYTE(v16) = *(_BYTE *)(a1 + 128);
        v34 = anonymous_namespace_::CreateDefaultLayout(v55, v16);
        wistd::unique_ptr<wil::details::AsyncEventWorkItemBase,wistd::default_delete<wil::details::AsyncEventWorkItemBase>>::operator=(
          a1 + 136,
          v34);
        std::unique_ptr<std::_Facet_base>::~unique_ptr<std::_Facet_base>(v55);
        *v13 = 1;
      }
    }
    else
    {
      if ( *v9 != 3 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x1C2,
          (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayoutprovider.cpp",
          (const char *)0x8007139FLL,
          v41);
      if ( *(_DWORD *)(a3 + 32) != 8 && *(_DWORD *)(a3 + 32) != 4 )
      {
        LOBYTE(v16) = *(_BYTE *)(a1 + 128);
        v29 = anonymous_namespace_::CreateDefaultLayout(v54, v16);
        wistd::unique_ptr<wil::details::AsyncEventWorkItemBase,wistd::default_delete<wil::details::AsyncEventWorkItemBase>>::operator=(
          a1 + 136,
          v29);
        std::unique_ptr<std::_Facet_base>::~unique_ptr<std::_Facet_base>(v54);
        *(_DWORD *)(a1 + 24) = 1;
      }
    }
    goto LABEL_42;
  }
  v17 = *(_DWORD *)(a3 + 32);
  if ( v17 != 2 )
  {
    if ( *(_BYTE *)(a1 + 128) && ((v17 - 4) & 0xFFFFFFFB) == 0 )
    {
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64, __int64))(**(_QWORD **)(a1 + 136) + 8LL))(
        *(_QWORD *)(a1 + 136),
        a2,
        *(_QWORD *)(a1 + 32),
        a1 + 48,
        a3);
      v35 = MulDiv(100, *(_DWORD *)(a1 + 88), 96);
      v36 = *(_DWORD *)(a3 + 20) - v35;
      if ( *(_DWORD *)(a2 + 24) >= v36 )
        v36 = *(_DWORD *)(a2 + 24);
      *(_DWORD *)(a2 + 24) = v36;
      v37 = *(_DWORD *)(a3 + 20) + v35;
      if ( v37 >= *(_DWORD *)(a2 + 32) )
        v37 = *(_DWORD *)(a2 + 32);
      *(_DWORD *)(a2 + 32) = v37;
      v38 = operator new(8uLL);
      *v38 = &RowSnapLayout::`vftable';
      v56 = 0LL;
      v52 = v38;
      std::unique_ptr<DefaultSnapLayout>::~unique_ptr<DefaultSnapLayout>(&v56);
      wistd::unique_ptr<wil::details::AsyncEventWorkItemBase,wistd::default_delete<wil::details::AsyncEventWorkItemBase>>::operator=(
        a1 + 136,
        &v52);
      std::unique_ptr<std::_Facet_base>::~unique_ptr<std::_Facet_base>(&v52);
      *(_DWORD *)(a1 + 24) = 3;
      v39 = v44;
      v57 = v44;
      if ( v44 )
        _InterlockedIncrement((volatile signed __int32 *)(v44 + 352));
      tip2::details::shared_data<0,0,1>::begin_update(v39 + 8);
      *(_BYTE *)(v39 + 273) = 0;
      tip2::test_data_control<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>(&v57);
      v40 = v44;
      v58 = v44;
      if ( v44 )
        _InterlockedIncrement((volatile signed __int32 *)(v44 + 352));
      tip2::details::shared_data<0,0,1>::begin_update(v40 + 8);
      *(_OWORD *)(v40 + 316) = *(_OWORD *)(a2 + 4);
      tip2::test_data_control<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>(&v58);
      v32 = v44;
      v59 = v44;
      if ( v44 )
        _InterlockedIncrement((volatile signed __int32 *)(v44 + 352));
      tip2::details::shared_data<0,0,1>::begin_update(v32 + 8);
      v33 = &v59;
      goto LABEL_49;
    }
LABEL_42:
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64, __int64))(**(_QWORD **)(a1 + 136) + 8LL))(
      *(_QWORD *)(a1 + 136),
      a2,
      *(_QWORD *)(a1 + 32),
      a1 + 48,
      a3);
    v30 = v44;
    v60 = v44;
    if ( v44 )
      _InterlockedIncrement((volatile signed __int32 *)(v44 + 352));
    tip2::details::shared_data<0,0,1>::begin_update(v30 + 8);
    *(_BYTE *)(v30 + 273) = 0;
    tip2::test_data_control<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>(&v60);
    v31 = v44;
    v61 = v44;
    if ( v44 )
      _InterlockedIncrement((volatile signed __int32 *)(v44 + 352));
    tip2::details::shared_data<0,0,1>::begin_update(v31 + 8);
    *(_OWORD *)(v31 + 316) = *(_OWORD *)(a2 + 4);
    tip2::test_data_control<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>(&v61);
    v32 = v44;
    v62 = v44;
    if ( v44 )
      _InterlockedIncrement((volatile signed __int32 *)(v44 + 352));
    tip2::details::shared_data<0,0,1>::begin_update(v32 + 8);
    v33 = &v62;
LABEL_49:
    *(_OWORD *)(v32 + 332) = *(_OWORD *)(a2 + 20);
    tip2::test_data_control<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>(v33);
    tip2::details::shared_data<0,0,0>::complete_without_lock(v44 + 8);
    tip2::test_watcher<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>::~test_watcher<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>(v42);
    return a2;
  }
  v18 = operator new(8uLL);
  *v18 = &ColumnSnapLayout::`vftable';
  v19 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 136);
  *(_QWORD *)(a1 + 136) = v18;
  if ( v19 )
    (**v19)(v19, 1LL);
  *v13 = 2;
  if ( (*(_BYTE *)(a3 + 24) & 1) != 0 )
    goto LABEL_42;
  *(_QWORD *)(a1 + 144) = *std::chrono::steady_clock::now(v64);
  SnapLayoutProvider::CreateInitialTopScrubbingResult(a1, a2, a3);
  v20 = v44;
  v49 = v44;
  if ( v44 )
    _InterlockedIncrement((volatile signed __int32 *)(v44 + 352));
  tip2::details::shared_data<0,0,1>::begin_update(v20 + 8);
  *(_BYTE *)(v20 + 273) = 0;
  tip2::details::shared_data<0,0,0>::end_update(v20 + 8);
  wil::com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>::reset(&v49);
  wil::com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>(&v49);
  v21 = v44;
  v50 = v44;
  if ( v44 )
    _InterlockedIncrement((volatile signed __int32 *)(v44 + 352));
  tip2::details::shared_data<0,0,1>::begin_update(v21 + 8);
  *(_OWORD *)(v21 + 332) = *(_OWORD *)(a2 + 20);
  tip2::details::shared_data<0,0,0>::end_update(v21 + 8);
  wil::com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>::reset(&v50);
  wil::com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>(&v50);
  v22 = v44;
  v51 = v44;
  if ( v44 )
    _InterlockedIncrement((volatile signed __int32 *)(v44 + 352));
  tip2::details::shared_data<0,0,1>::begin_update(v22 + 8);
  *(_BYTE *)(v22 + 274) = 1;
  tip2::details::shared_data<0,0,0>::end_update(v22 + 8);
  wil::com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>::reset(&v51);
  v23 = &v51;
LABEL_24:
  wil::com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>(v23);
  tip2::details::shared_data<0,0,0>::complete_without_lock(v44 + 8);
  wil::com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>(&v44);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v43);
  return a2;
}
