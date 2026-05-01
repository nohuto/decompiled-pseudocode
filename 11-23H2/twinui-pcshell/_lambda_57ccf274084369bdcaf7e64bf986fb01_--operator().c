/*
 * XREFs of _lambda_57ccf274084369bdcaf7e64bf986fb01_::operator() @ 0x1802175A0
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_bb0c2f0ed47fbf1d2251f1c7eebd5067___::Invoke @ 0x180217EB0 (CAsyncCallbackWithLambda__lambda_bb0c2f0ed47fbf1d2251f1c7eebd5067___--Invoke.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800731C4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?complete@?$tip_test@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@tip@@QEAAXXZ @ 0x18020C3B4 (-complete@-$tip_test@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@tip@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddThumbnailToThumbnailCollection@VirtualDesktopGestureWindow@@QEAAJIPEAUIDCompThumbnail@@@Z @ 0x18060B1B8 (-AddThumbnailToThumbnailCollection@VirtualDesktopGestureWindow@@QEAAJIPEAUIDCompThumbnail@@@Z.c)
 *     ?GetWallpaperPositionData@VirtualDesktopGestureWindow@@IEAAJHHAEAUWallpaperPositionData@1@@Z @ 0x18060DE88 (-GetWallpaperPositionData@VirtualDesktopGestureWindow@@IEAAJHHAEAUWallpaperPositionData@1@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDAnimationWallpaperJumpBugFix@@@details@wil@@QEAA_NXZ @ 0x180612B08 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Engineeri_ea_180612B08.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_57ccf274084369bdcaf7e64bf986fb01_::operator()(__int64 a1)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, _QWORD, _QWORD, unsigned __int64, GUID *, struct IDCompThumbnail **); // rbx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  _DWORD v13[4]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v15; // [rsp+70h] [rbp+20h] BYREF
  struct IDCompThumbnail *v16; // [rsp+78h] [rbp+28h] BYREF
  unsigned __int64 v17; // [rsp+80h] [rbp+30h]

  v15 = 0LL;
  v2 = *(__int64 **)(a1 + 56);
  v3 = *v2;
  v15 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v3 + 104))(v2, &v15);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDAnimationWallpaperJumpBugFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDAnimationWallpaperJumpBugFix>::GetImpl'::`2'::impl) )
    {
      v13[0] = 1065353216;
      v13[1] = 1065353216;
      v13[2] = 0;
      v13[3] = 0;
      VirtualDesktopGestureWindow::GetWallpaperPositionData(
        *(VirtualDesktopGestureWindow **)a1,
        *(_DWORD *)(a1 + 8),
        *(_DWORD *)(a1 + 12),
        (struct VirtualDesktopGestureWindow::WallpaperPositionData *)v13);
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 32LL))(v15);
      v5 = v4;
      if ( v4 < 0 )
      {
        v6 = 1048LL;
        goto LABEL_20;
      }
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 48LL))(v15);
      v5 = v4;
      if ( v4 < 0 )
      {
        v6 = 1049LL;
        goto LABEL_20;
      }
      v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 48) + 56LL))(*(_QWORD *)(a1 + 48), v15);
      v5 = v4;
      if ( v4 < 0 )
      {
        v6 = 1050LL;
        goto LABEL_20;
      }
      v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 32LL))(*(_QWORD *)(a1 + 48));
      v5 = v4;
      if ( v4 < 0 )
      {
        v6 = 1052LL;
        goto LABEL_20;
      }
      v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 48LL))(*(_QWORD *)(a1 + 48));
      v5 = v4;
      if ( v4 < 0 )
      {
        v6 = 1053LL;
        goto LABEL_20;
      }
    }
    else
    {
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 32LL))(v15);
      v5 = v4;
      if ( v4 < 0 )
      {
        v6 = 1057LL;
        goto LABEL_20;
      }
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 48LL))(v15);
      v5 = v4;
      if ( v4 < 0 )
      {
        v6 = 1058LL;
        goto LABEL_20;
      }
      v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 48) + 56LL))(*(_QWORD *)(a1 + 48), v15);
      v5 = v4;
      if ( v4 < 0 )
      {
        v6 = 1059LL;
        goto LABEL_20;
      }
    }
    v16 = 0LL;
    v7 = *(_QWORD *)(a1 + 72);
    v8 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, unsigned __int64, GUID *, struct IDCompThumbnail **))(*(_QWORD *)v7 + 128LL);
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)&v16);
    v17 = __PAIR64__(*(_DWORD *)(a1 + 44) - *(_DWORD *)(a1 + 36), *(_DWORD *)(a1 + 40) - *(_DWORD *)(a1 + 32));
    v9 = v8(v7, *(_QWORD *)(a1 + 64), *(_QWORD *)(a1 + 48), v17, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v16);
    v5 = v9;
    if ( v9 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(struct IDCompThumbnail *, __int64, _QWORD, _QWORD))(*(_QWORD *)v16 + 24LL))(
             v16,
             a1 + 16,
             0LL,
             0LL);
      v5 = v9;
      if ( v9 >= 0 )
      {
        LOBYTE(v11) = 1;
        v9 = (*(__int64 (__fastcall **)(struct IDCompThumbnail *, _QWORD, __int64))(*(_QWORD *)v16 + 152LL))(
               v16,
               *(_QWORD *)(a1 + 88),
               v11);
        v5 = v9;
        if ( v9 >= 0 )
        {
          v9 = VirtualDesktopGestureWindow::AddThumbnailToThumbnailCollection(
                 *(VirtualDesktopGestureWindow **)a1,
                 *(_DWORD *)(a1 + 80),
                 v16);
          v5 = v9;
          if ( v9 >= 0 )
          {
            tip::tip_test<_tip_LoadCustomVDWallpaperWithGesturePerfTest>::complete((__int64 *)(*(_QWORD *)a1 + 328LL));
            v5 = 0;
            goto LABEL_31;
          }
          v10 = 1074LL;
        }
        else
        {
          v10 = 1070LL;
        }
      }
      else
      {
        v10 = 1064LL;
      }
    }
    else
    {
      v10 = 1063LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v9);
LABEL_31:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v16);
    goto LABEL_32;
  }
  v6 = 1041LL;
LABEL_20:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)(unsigned int)v4);
LABEL_32:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
  return v5;
}
