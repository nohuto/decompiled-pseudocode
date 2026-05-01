/*
 * XREFs of ?CreateAndOpenAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ @ 0x18049D430
 * Callers:
 *     ?StartTouchSwipe@MultitaskingViewGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z @ 0x18049FB30 (-StartTouchSwipe@MultitaskingViewGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x18003F64C (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_EnableCloudPCTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18049C2B8 (--1-$com_ptr_t@V-$merged_data@U_tip_EnableCloudPCTipTest@@U1@@details@tip2@@Uerr_returncode_poli.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_AppThumbnailTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18049C38C (--1-$test_watcher@V-$merged_data@U_tip_AppThumbnailTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ?AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z @ 0x18049CF70 (-AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z.c)
 *     ?CreateAndOpenAppThumbnailWindows@MultitaskingViewTelemetry@@SAXXZ @ 0x18049D568 (-CreateAndOpenAppThumbnailWindows@MultitaskingViewTelemetry@@SAXXZ.c)
 *     ?CreateAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ @ 0x18049D5BC (-CreateAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_AppThumbnailTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x1804A06E8 (-start@-$tip_test@V-$merged_data@U_tip_AppThumbnailTest@@U1@@details@tip2@@@tip2@@QEAA-AU_GUID@@.c)
 *     ?Open@CAppThumbnailWindow@@QEAAJXZ @ 0x1804A8DB8 (-Open@CAppThumbnailWindow@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MultitaskingViewGestureHandler::CreateAndOpenAppThumbnailWindows(CAppThumbnailWindow ***this)
{
  int AppThumbnailWindows; // eax
  unsigned int v3; // ebx
  CAppThumbnailWindow **v4; // rbx
  CAppThumbnailWindow **v5; // r14
  unsigned int v6; // eax
  unsigned int v7; // esi
  MultitaskingViewGestureHandler *v9; // [rsp+20h] [rbp-50h] BYREF
  char v10; // [rsp+28h] [rbp-48h]
  void **v11; // [rsp+30h] [rbp-40h] BYREF
  char v12[48]; // [rsp+38h] [rbp-38h] BYREF
  volatile signed __int32 *v13; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  volatile signed __int32 *v15; // [rsp+90h] [rbp+20h] BYREF

  MultitaskingViewTelemetry::CreateAndOpenAppThumbnailWindows();
  v15 = 0LL;
  tip2::tip_test<tip2::details::merged_data<_tip_AppThumbnailTest,_tip_AppThumbnailTest>>::start(&v15, &v9);
  v11 = &tip2::test_watcher<tip2::details::merged_data<_tip_SetPhysicalDeviceAccessRegKeyTipTest,_tip_SetPhysicalDeviceAccessRegKeyTipTest>>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)v12,
    (struct wil::details::IFailureCallback *)&v11,
    0LL,
    1);
  v13 = v15;
  if ( v15 )
    _InterlockedIncrement(v15 + 68);
  wil::com_ptr_t<tip2::details::merged_data<_tip_EnableCloudPCTipTest,_tip_EnableCloudPCTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_EnableCloudPCTipTest,_tip_EnableCloudPCTipTest>,wil::err_returncode_policy>((void **)&v15);
  v9 = (MultitaskingViewGestureHandler *)this;
  v10 = 1;
  AppThumbnailWindows = MultitaskingViewGestureHandler::CreateAppThumbnailWindows((MultitaskingViewGestureHandler *)this);
  v3 = AppThumbnailWindows;
  if ( AppThumbnailWindows >= 0 )
  {
    v4 = this[12];
    v5 = this[13];
    while ( v4 != v5 )
    {
      v6 = CAppThumbnailWindow::Open(*v4);
      v7 = v6;
      if ( ((v6 + 0x80000000) & 0x80000000) == 0 && v6 != -2147467260 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x12B,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
          (const char *)v6);
        MultitaskingViewGestureHandler::AnimationComplete((__int64)this, 0);
        v3 = v7;
        goto LABEL_12;
      }
      v4 += 2;
    }
    v3 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11F,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
      (const char *)(unsigned int)AppThumbnailWindows);
    MultitaskingViewGestureHandler::AnimationComplete((__int64)this, 0);
  }
LABEL_12:
  tip2::test_watcher<tip2::details::merged_data<_tip_AppThumbnailTest,_tip_AppThumbnailTest>>::~test_watcher<tip2::details::merged_data<_tip_AppThumbnailTest,_tip_AppThumbnailTest>>((__int64)&v11);
  return v3;
}
