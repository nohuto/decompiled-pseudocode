/*
 * XREFs of ?AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z @ 0x18008BD80
 * Callers:
 *     <none>
 * Callees:
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180026C3C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?ComputeSnapErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z @ 0x18008B40C (-ComputeSnapErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z.c)
 *     ?AdjustRegionsForInitialSnapPosition@CSnapAssistControllerBase@@IEAAXPEAUHWND__@@AEAV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18008D340 (-AdjustRegionsForInitialSnapPosition@CSnapAssistControllerBase@@IEAAXPEAUHWND__@@AEAV-$deque@Uta.c)
 *     ?EndGuidedSnapAssist@CSnapAssistControllerBase@@IEAAXW4GuidedSnapAssistResult@1@V?$vector@_KV?$allocator@_K@std@@@std@@@Z @ 0x180091F74 (-EndGuidedSnapAssist@CSnapAssistControllerBase@@IEAAXW4GuidedSnapAssistResult@1@V-$vector@_KV-$a.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800923EC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@0@@Z @ 0x1800AA8E4 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows.c)
 *     ??$_Emplace_reallocate@PEAUHWND__@@@?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@AEAAPEAPEAUHWND__@@QEAPEAU2@$$QEAPEAU2@@Z @ 0x1801E6010 (--$_Emplace_reallocate@PEAUHWND__@@@-$vector@PEAUHWND__@@V-$allocator@PEAUHWND__@@@std@@@std@@AE.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x18028B600 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ??0?$test_data_control@V?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@IEAA@AEBV?$com_ptr_t@V?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18028BE68 (--0-$test_data_control@V-$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHost.c)
 *     ?watch_errors@?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@2@XZ @ 0x18028C74C (-watch_errors@-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEA.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18028D724 (--1-$com_ptr_t@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@Uerr_returncode_poli.c)
 *     ?end_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180291E38 (-end_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?IsVisible@GuidedSnapAssistControl@@QEAA_NXZ @ 0x18029FB88 (-IsVisible@GuidedSnapAssistControl@@QEAA_NXZ.c)
 *     ?_RetrieveSnappedWindowsForMonitor@CSnapAssistControllerBase@@IEAAJPEAUIImmersiveMonitor@@AEAV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1802C2730 (-_RetrieveSnappedWindowsForMonitor@CSnapAssistControllerBase@@IEAAJPEAUIImmersiveMonitor@@AEAV-$.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802C88A8 (--1-$test_data_control@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@.c)
 *     ?AdvanceGuidedSnapAssist@CSnapComponentTelemetry@@SAXXZ @ 0x1802CE700 (-AdvanceGuidedSnapAssist@CSnapComponentTelemetry@@SAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISnappedWindow_________lambda_a1608a121236b09cf8aed0d49703ab26___ @ 0x1805A5320 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_.c)
 *     ?_SnapAssistTriggered@CSnapAssistControllerBase@@IEAAJAEBUCRect@Geometry@@PEAUIImmersiveMonitor@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@PEAUIAppLayout@@W4SNAP_ASSIST_VIEW_FLAGS@@HPEA_N@Z @ 0x1805A7D70 (-_SnapAssistTriggered@CSnapAssistControllerBase@@IEAAJAEBUCRect@Geometry@@PEAUIImmersiveMonitor@.c)
 *     ?erase@?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x1805A8340 (-erase@-$vector@V-$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISnappedWindo.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1805A8934 (-reset@-$com_ptr_t@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@Uerr_returncode_.c)
 *     ?DoSnapRegionsOverlap@SnapLayoutHelpers@@YA_NW4RegionOverlapMode@1@AEBUCRect@Geometry@@1H@Z @ 0x1805AA838 (-DoSnapRegionsOverlap@SnapLayoutHelpers@@YA_NW4RegionOverlapMode@1@AEBUCRect@Geometry@@1H@Z.c)
 *     ?Advance@GuidedSnapAssistControl@@QEAAX_K@Z @ 0x1805BBAFC (-Advance@GuidedSnapAssistControl@@QEAAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6 #try_helpers=1
__int64 __fastcall CSnapAssistControllerBase::AdvanceGuidedSnapAssist(
        GuidedSnapAssistControl **this,
        unsigned __int64 a2)
{
  __int64 v4; // rdx
  RTL_SRWLOCK *v5; // rbx
  unsigned __int64 *v6; // rdx
  int *v7; // rdx
  _QWORD *v8; // rsi
  GuidedSnapAssistControl *v9; // r8
  int v10; // r11d
  int v11; // r14d
  int v12; // r10d
  int v13; // r9d
  GuidedSnapAssistControl *v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  int v17; // eax
  struct IImmersiveMonitor *v18; // rdx
  _QWORD *i; // r14
  __int64 v20; // r14
  _QWORD *v21; // rax
  int v22; // eax
  SnapRectHelpers **v24; // [rsp+20h] [rbp-158h]
  int v25; // [rsp+20h] [rbp-158h]
  char v26[4]; // [rsp+40h] [rbp-138h] BYREF
  unsigned int v27; // [rsp+44h] [rbp-134h] BYREF
  SnapRectHelpers *v28; // [rsp+48h] [rbp-130h] BYREF
  unsigned __int64 v29; // [rsp+50h] [rbp-128h] BYREF
  __int128 v30; // [rsp+58h] [rbp-120h] BYREF
  __int64 v31; // [rsp+68h] [rbp-110h]
  _DWORD v32[2]; // [rsp+70h] [rbp-108h] BYREF
  __int64 v33; // [rsp+78h] [rbp-100h] BYREF
  __int64 v34; // [rsp+80h] [rbp-F8h] BYREF
  RTL_SRWLOCK *v35; // [rsp+88h] [rbp-F0h] BYREF
  char v36[16]; // [rsp+90h] [rbp-E8h] BYREF
  _QWORD v37[2]; // [rsp+A0h] [rbp-D8h] BYREF
  __int128 v38; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v39; // [rsp+C0h] [rbp-B8h]
  char v40[8]; // [rsp+D0h] [rbp-A8h] BYREF
  char v41[48]; // [rsp+D8h] [rbp-A0h] BYREF
  __int64 v42; // [rsp+108h] [rbp-70h] BYREF
  __int128 v43; // [rsp+110h] [rbp-68h] BYREF
  __int128 v44; // [rsp+120h] [rbp-58h] BYREF
  _BYTE v45[16]; // [rsp+130h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  CSnapComponentTelemetry::AdvanceGuidedSnapAssist();
  LOBYTE(v4) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
    v4);
  if ( GuidedSnapAssistControl::IsVisible(this[31]) )
  {
    GuidedSnapAssistControl::Advance(this[31], a2);
    return 0LL;
  }
  tip2::tip_test<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::watch_errors(
    this + 25,
    v40);
  v30 = 0LL;
  v31 = 0LL;
  v28 = 0LL;
  v27 = 0;
  v43 = 0LL;
  v5 = (RTL_SRWLOCK *)(this + 16);
  AcquireSRWLockExclusive((PSRWLOCK)this + 16);
  v35 = (RTL_SRWLOCK *)(this + 16);
  v29 = a2;
  v6 = (unsigned __int64 *)this[23];
  if ( v6 == (unsigned __int64 *)this[24] )
  {
    std::vector<HWND__ *>::_Emplace_reallocate<HWND__ *>(this + 22, v6, &v29);
  }
  else
  {
    *v6 = a2;
    this[23] = (GuidedSnapAssistControl *)((char *)this[23] + 8);
  }
  CSnapAssistControllerBase::AdjustRegionsForInitialSnapPosition(this - 5, a2, this + 17);
  v8 = (_QWORD *)v30;
  while ( 1 )
  {
    v9 = this[21];
    if ( !v9 )
      break;
    v7 = (int *)*((_QWORD *)this[18] + ((unsigned __int64)this[20] & ((unsigned __int64)this[19] - 1)));
    v10 = *v7;
    LODWORD(v44) = *v7;
    v11 = v7[1];
    DWORD1(v44) = v11;
    v12 = v7[2];
    DWORD2(v44) = v12;
    v13 = v7[3];
    HIDWORD(v44) = v13;
    this[21] = (GuidedSnapAssistControl *)((char *)v9 - 1);
    if ( v9 == (GuidedSnapAssistControl *)1 )
      this[20] = 0LL;
    else
      this[20] = (GuidedSnapAssistControl *)((char *)this[20] + 1);
    if ( v28 )
    {
LABEL_18:
      for ( i = v8; ; ++i )
      {
        if ( i == *((_QWORD **)&v30 + 1) )
        {
          v43 = v44;
          goto LABEL_29;
        }
        (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*i + 56LL))(*i, v45);
        if ( (unsigned __int8)SnapLayoutHelpers::DoSnapRegionsOverlap(*((unsigned int *)this + 60), v45, &v44, v27, v24) )
          break;
      }
      v20 = v42;
      v34 = v42;
      if ( v42 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v42 + 296));
        v8 = (_QWORD *)v30;
        v5 = v35;
      }
      tip2::details::shared_data<1,0,0>::begin_update(v20 + 8);
      ++*(_DWORD *)(v20 + 276);
      if ( v20 )
      {
        tip2::details::shared_data<1,0,0>::end_update(v20 + 8);
        wil::com_ptr_t<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>,wil::err_returncode_policy>::reset(&v34);
      }
      wil::com_ptr_t<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>,wil::err_returncode_policy>(&v34);
    }
    else
    {
      v32[0] = v10 + (v12 - v10) / 2;
      v32[1] = (v13 - v11) / 2 + v11;
      v14 = this[3];
      v15 = *(_QWORD *)v14;
      v28 = 0LL;
      v24 = &v28;
      v16 = (*(__int64 (__fastcall **)(GuidedSnapAssistControl *, _DWORD *, GUID *, GUID *))(v15 + 96))(
              v14,
              v32,
              &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
              &GUID_880b26f8_9197_43d0_8045_8702d0d72000);
      if ( v16 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x27E,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
          (const char *)(unsigned int)v16);
      if ( v28 )
      {
        v17 = CSnapAssistControllerBase::_RetrieveSnappedWindowsForMonitor(this - 5, v28, &v30);
        if ( v17 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x281,
            (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
            (const char *)(unsigned int)v17,
            (int)&v28);
        v27 = SnapRectHelpers::ComputeSnapErrorThresholdForMonitor(v28, v18);
        v8 = (_QWORD *)v30;
        goto LABEL_18;
      }
      tip2::test_data_control<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2,KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>>::test_data_control<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2,KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>>(
        &v33,
        &v42);
      ++*(_DWORD *)(v33 + 276);
      tip2::test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::~test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>(&v33);
    }
  }
LABEL_29:
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  v26[0] = 0;
  if ( (int)v43 >= SDWORD2(v43) || SDWORD1(v43) >= SHIDWORD(v43) )
  {
    LOBYTE(v7) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
      v7);
    if ( !this[21] )
    {
      tip2::test_data_control<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2,KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>>::test_data_control<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2,KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>>(
        &v29,
        &v42);
      *(_BYTE *)(v29 + 291) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::~test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>(&v29);
    }
LABEL_40:
    v38 = 0LL;
    v39 = 0LL;
    CSnapAssistControllerBase::EndGuidedSnapAssist(this - 5, 1LL, &v38);
  }
  else
  {
    v37[0] = &v43;
    v37[1] = &v27;
    v21 = (_QWORD *)std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISnappedWindow_________lambda_a1608a121236b09cf8aed0d49703ab26___(
                      &v35,
                      v8,
                      *((_QWORD *)&v30 + 1),
                      v37,
                      v24);
    std::vector<Microsoft::WRL::ComPtr<ISnappedWindow>>::erase(&v30, v36, *v21, *((_QWORD *)&v30 + 1));
    v22 = CSnapAssistControllerBase::_SnapAssistTriggered(
            (int)this - 40,
            (unsigned int)&v43,
            (_DWORD)v28,
            (unsigned int)&v30,
            0,
            *((_DWORD *)this + 52),
            v27,
            (__int64)v26);
    if ( v22 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2B2,
        (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
        (const char *)(unsigned int)v22,
        v25);
    if ( !v26[0] )
    {
      tip2::test_data_control<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2,KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>>::test_data_control<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2,KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>>(
        &v29,
        &v42);
      *(_BYTE *)(v29 + 284) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::~test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>(&v29);
      v8 = (_QWORD *)v30;
      goto LABEL_40;
    }
    v8 = (_QWORD *)v30;
  }
  if ( v28 )
    (*(void (__fastcall **)(SnapRectHelpers *))(*(_QWORD *)v28 + 16LL))(v28);
  if ( v8 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>>(
      v8,
      *((_QWORD *)&v30 + 1));
    std::_Deallocate<16,0>(v8, (const struct std::nothrow_t *)((v31 - (_QWORD)v8) & 0xFFFFFFFFFFFFFFF8uLL));
  }
  wil::com_ptr_t<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>,wil::err_returncode_policy>(&v42);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v41);
  return 0LL;
}
