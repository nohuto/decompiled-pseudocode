/*
 * XREFs of _lambda_3eaa93ba0c0aad2d24d7515d6dcae78e_::operator() @ 0x180217134
 * Callers:
 *     LambdaCustomPaintProc__lambda_3eaa93ba0c0aad2d24d7515d6dcae78e__HDC_____ @ 0x180216560 (LambdaCustomPaintProc__lambda_3eaa93ba0c0aad2d24d7515d6dcae78e__HDC_____.c)
 * Callees:
 *     ??1?$test_watcher@U_tip_DiscoverabilityManagerTipTest@@@tip@@QEAA@XZ @ 0x180072254 (--1-$test_watcher@U_tip_DiscoverabilityManagerTipTest@@@tip@@QEAA@XZ.c)
 *     ?complete@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180095B9C (-complete@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$test_data_control@U_tip_VDSlideAnimationPerfTest@@@tip@@QEAA@XZ @ 0x180276C00 (--1-$test_data_control@U_tip_VDSlideAnimationPerfTest@@@tip@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXUselect_result@wil@@@_E$1?close@12@SAX0@ZU?$integral_constant@_K$0A@@wistd@@U12@PEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1802E7358 (--1-$unique_storage@U-$resource_policy@PEAXP6AXUselect_result@wil@@@_E$1-close@12@SAX0@ZU-$integ.c)
 *     ?SelectObject@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXUselect_result@wil@@@_E$1?close@12@SAX0@ZU?$integral_constant@_K$0A@@wistd@@U12@PEAX$0A@$$T@details@wil@@@details@wil@@@1@PEAUHDC__@@PEAX@Z @ 0x1802E738C (-SelectObject@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAXP6AXUselect_resu.c)
 *     ??1?$CAutoHandle@PEAUHDC__@@@@QEAA@XZ @ 0x1805DA26C (--1-$CAutoHandle@PEAUHDC__@@@@QEAA@XZ.c)
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_VDSlideAnimationPerfTest@@@tip@@@tip@@YA?A_PXZ @ 0x1805FE91C (--$open_and_watch_errors@V-$tip_test@U_tip_VDSlideAnimationPerfTest@@@tip@@@tip@@YA-A_PXZ.c)
 *     ??B?$test_watcher@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEBA_NXZ @ 0x1806006B8 (--B-$test_watcher@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEBA_NXZ.c)
 *     ??C?$test_watcher@U_tip_VDSlideAnimationPerfTest@@@tip@@QEAA?AV?$test_data_control@U_tip_VDSlideAnimationPerfTest@@@1@XZ @ 0x1806006DC (--C-$test_watcher@U_tip_VDSlideAnimationPerfTest@@@tip@@QEAA-AV-$test_data_control@U_tip_VDSlide.c)
 */

__int64 __fastcall lambda_3eaa93ba0c0aad2d24d7515d6dcae78e_::operator()(__int64 a1, HDC a2, HDC a3)
{
  HDC CompatibleDC; // rax
  unsigned int v6; // edi
  HDC hdcSrc; // rbx
  int v8; // ebx
  _QWORD *v9; // rax
  bool v10; // zf
  __int64 v11; // rax
  int v12; // ebx
  _QWORD *v13; // rax
  __int64 v14; // rax
  int v15; // ebx
  _QWORD *v16; // rax
  __int64 v17; // rax
  int v18; // ebx
  _QWORD *v19; // rax
  __int64 v20; // rax
  int v21; // ebx
  _QWORD *v22; // rax
  __int64 v23; // rax
  int v24; // ebx
  _QWORD *v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rax
  _BYTE v30[16]; // [rsp+68h] [rbp-19h] BYREF
  _BYTE v31[16]; // [rsp+78h] [rbp-9h] BYREF
  _BYTE v32[48]; // [rsp+88h] [rbp+7h] BYREF
  __int64 v33; // [rsp+B8h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  HDC v35; // [rsp+F8h] [rbp+77h] BYREF

  v35 = a3;
  CompatibleDC = CreateCompatibleDC(a2);
  v6 = 0;
  v35 = CompatibleDC;
  hdcSrc = CompatibleDC;
  if ( CompatibleDC )
  {
    wil::SelectObject(v31, CompatibleDC, **(_QWORD **)a1);
    SetStretchBltMode(a2, 3);
    if ( !StretchBlt(
            a2,
            *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL),
            *(_DWORD *)(*(_QWORD *)(a1 + 8) + 12LL),
            **(_DWORD **)(a1 + 16),
            **(_DWORD **)(a1 + 24),
            hdcSrc,
            0,
            0,
            *(_DWORD *)(*(_QWORD *)(a1 + 32) + 4LL),
            *(_DWORD *)(*(_QWORD *)(a1 + 32) + 8LL),
            0xCC0020u) )
    {
      tip::open_and_watch_errors<tip::tip_test<_tip_VDSlideAnimationPerfTest>>((struct wil::details::IFailureCallback *)v32);
      if ( (unsigned __int8)tip::test_watcher<_tip_RemoteSessionOnStateChangedTipTest>::operator bool(v32) )
      {
        v8 = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 4LL);
        v9 = (_QWORD *)tip::test_watcher<_tip_VDSlideAnimationPerfTest>::operator->(v32, v30);
        v10 = *v9 == 0LL;
        v11 = *v9 + 244LL;
        if ( v10 )
          v11 = 68LL;
        *(_DWORD *)v11 = v8;
        tip::test_data_control<_tip_VDSlideAnimationPerfTest>::~test_data_control<_tip_VDSlideAnimationPerfTest>(v30);
        v12 = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 8LL);
        v13 = (_QWORD *)tip::test_watcher<_tip_VDSlideAnimationPerfTest>::operator->(v32, v30);
        v10 = *v13 == 0LL;
        v14 = *v13 + 248LL;
        if ( v10 )
          v14 = 72LL;
        *(_DWORD *)v14 = v12;
        tip::test_data_control<_tip_VDSlideAnimationPerfTest>::~test_data_control<_tip_VDSlideAnimationPerfTest>(v30);
        v15 = **(_DWORD **)(a1 + 16);
        v16 = (_QWORD *)tip::test_watcher<_tip_VDSlideAnimationPerfTest>::operator->(v32, v30);
        v10 = *v16 == 0LL;
        v17 = *v16 + 252LL;
        if ( v10 )
          v17 = 76LL;
        *(_DWORD *)v17 = v15;
        tip::test_data_control<_tip_VDSlideAnimationPerfTest>::~test_data_control<_tip_VDSlideAnimationPerfTest>(v30);
        v18 = **(_DWORD **)(a1 + 24);
        v19 = (_QWORD *)tip::test_watcher<_tip_VDSlideAnimationPerfTest>::operator->(v32, v30);
        v10 = *v19 == 0LL;
        v20 = *v19 + 256LL;
        if ( v10 )
          v20 = 80LL;
        *(_DWORD *)v20 = v18;
        tip::test_data_control<_tip_VDSlideAnimationPerfTest>::~test_data_control<_tip_VDSlideAnimationPerfTest>(v30);
        v21 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 192LL) - *(_DWORD *)(*(_QWORD *)(a1 + 40) + 184LL);
        v22 = (_QWORD *)tip::test_watcher<_tip_VDSlideAnimationPerfTest>::operator->(v32, v30);
        v10 = *v22 == 0LL;
        v23 = *v22 + 236LL;
        if ( v10 )
          v23 = 60LL;
        *(_DWORD *)v23 = v21;
        tip::test_data_control<_tip_VDSlideAnimationPerfTest>::~test_data_control<_tip_VDSlideAnimationPerfTest>(v30);
        v24 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 196LL) - *(_DWORD *)(*(_QWORD *)(a1 + 40) + 188LL);
        v25 = (_QWORD *)tip::test_watcher<_tip_VDSlideAnimationPerfTest>::operator->(v32, v30);
        v10 = *v25 == 0LL;
        v26 = *v25 + 240LL;
        if ( v10 )
          v26 = 64LL;
        *(_DWORD *)v26 = v24;
        tip::test_data_control<_tip_VDSlideAnimationPerfTest>::~test_data_control<_tip_VDSlideAnimationPerfTest>(v30);
        v27 = (_QWORD *)tip::test_watcher<_tip_VDSlideAnimationPerfTest>::operator->(v32, v30);
        v10 = *v27 == 0LL;
        v28 = *v27 + 194LL;
        if ( v10 )
          v28 = 18LL;
        *(_BYTE *)v28 = 1;
        tip::test_data_control<_tip_VDSlideAnimationPerfTest>::~test_data_control<_tip_VDSlideAnimationPerfTest>(v30);
        tip::details::test_common_data<1>::complete(v33 + 8);
      }
      tip::test_watcher<_tip_DiscoverabilityManagerTipTest>::~test_watcher<_tip_DiscoverabilityManagerTipTest>((__int64)v32);
    }
    __1__unique_storage_U__resource_policy_PEAXP6AXUselect_result_wil____E_1_close_12_SAX0_ZU__integral_constant__K_0A__wistd__U12_PEAX_0A___T_details_wil___details_wil__IEAA_XZ(v31);
  }
  else
  {
    v6 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x46F,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)0x8007000ELL);
  }
  CAutoHandle<HDC__ *>::~CAutoHandle<HDC__ *>(&v35);
  return v6;
}
