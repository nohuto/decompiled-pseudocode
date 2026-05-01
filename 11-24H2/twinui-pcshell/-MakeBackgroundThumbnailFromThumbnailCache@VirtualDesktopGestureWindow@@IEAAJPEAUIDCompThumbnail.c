/*
 * XREFs of ?MakeBackgroundThumbnailFromThumbnailCache@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@PEAUIVirtualDesktop@@PEAUHSTRING__@@UtagRECT@@PEAPEAU2@@Z @ 0x1805614B4
 * Callers:
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@IEAAJPEA_NIUtagRECT@@@Z @ 0x18055E7A4 (-CreateAdjacentDesktop@VirtualDesktopGestureWindow@@IEAAJPEA_NIUtagRECT@@@Z.c)
 *     ?CreateAdjacentDesktop@VirtualDesktopHotKeyWindow@@AEAAJPEA_NPEAUIVirtualDesktop@@V?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@IUtagRECT@@@Z @ 0x180569E88 (-CreateAdjacentDesktop@VirtualDesktopHotKeyWindow@@AEAAJPEA_NPEAUIVirtualDesktop@@V-$shared_any_.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18004D04C (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAAXXZ @ 0x180288A98 (-complete@-$tip_test@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@d.c)
 *     _o_ceilf_0 @ 0x1802D2524 (_o_ceilf_0.c)
 *     ??$copy_to@UIApplicationView@@@?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIApplicationView@@@Z @ 0x1804A4E80 (--$copy_to@UIApplicationView@@@-$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x18055C0FC (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfT.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18055CBC4 (--1-$test_data_control@V-$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@detail.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18055CBFC (--1-$test_watcher@V-$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@@1@XZ @ 0x18055CDF0 (--C-$tip_test@V-$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@@.c)
 *     BindCtx_CreateWithObjectParam @ 0x18055DC08 (BindCtx_CreateWithObjectParam.c)
 *     ?GetWallpaperPositionData@VirtualDesktopGestureWindow@@IEAAJHHAEAUWallpaperPositionData@1@@Z @ 0x18056075C (-GetWallpaperPositionData@VirtualDesktopGestureWindow@@IEAAJHHAEAUWallpaperPositionData@1@@Z.c)
 *     ?Release@?$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@AEAAKXZ @ 0x180562000 (-Release@-$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@AEAAKXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDAnimationWallpaperJumpBugFix@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18056228C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDAni.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall VirtualDesktopGestureWindow::MakeBackgroundThumbnailFromThumbnailCache(
        VirtualDesktopGestureWindow *this,
        struct IDCompThumbnail *a2,
        __int64 (__fastcall ***a3)(struct IVirtualDesktop *, GUID *, __int64 *),
        HSTRING a4,
        struct tagRECT *a5,
        struct IDCompThumbnail **a6)
{
  void **v9; // r15
  volatile signed __int32 *v10; // rdx
  void *v11; // rcx
  int v12; // ebx
  HRESULT v13; // eax
  __int64 v14; // rdx
  CDummyUnknown *v15; // rcx
  unsigned int v16; // ebx
  int v17; // eax
  const WCHAR *StringRawBuffer; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 (__fastcall *v24)(__int64, struct IDCompThumbnail *, unsigned __int64, __int64, GUID *, __int64 *); // rbx
  __int64 v25; // rdi
  __int64 (__fastcall *v26)(__int64, struct IDCompThumbnail *, _QWORD, unsigned __int64, GUID *, __int64 *); // rbx
  int v27; // edx
  DWORD SysColor; // eax
  int v29; // eax
  __int64 v30; // rdx
  __int64 (__fastcall **v31)(struct IVirtualDesktop *, GUID *, __int64 *); // rax
  int v32; // eax
  int v33; // eax
  __int64 v35; // [rsp+40h] [rbp-C0h] BYREF
  IBindCtx *pbc; // [rsp+48h] [rbp-B8h] BYREF
  void *v37; // [rsp+50h] [rbp-B0h] BYREF
  int v38[2]; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v39; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+68h] [rbp-98h] BYREF
  UINT32 length; // [rsp+70h] [rbp-90h] BYREF
  int v42; // [rsp+74h] [rbp-8Ch] BYREF
  int v43; // [rsp+78h] [rbp-88h] BYREF
  HANDLE h; // [rsp+80h] [rbp-80h] BYREF
  LPVOID ppv; // [rsp+88h] [rbp-78h] BYREF
  float v46; // [rsp+90h] [rbp-70h] BYREF
  __int64 v47; // [rsp+94h] [rbp-6Ch]
  int v48; // [rsp+9Ch] [rbp-64h]
  struct IDCompThumbnail *v49; // [rsp+A0h] [rbp-60h]
  _QWORD *v50; // [rsp+A8h] [rbp-58h]
  _OWORD pv[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v52[16]; // [rsp+D0h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]

  v49 = a2;
  v50 = a6;
  *a6 = 0LL;
  v9 = (void **)((char *)this + 312);
  v10 = (volatile signed __int32 *)*((_QWORD *)tip2::start_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_LoadCustomVDWallpaperWithGesturePerfTest,_tip_LoadCustomVDWallpaperWithGesturePerfTest>>>((struct wil::details::IFailureCallback *)v52)
                                   + 7);
  v11 = *v9;
  *v9 = (void *)v10;
  if ( v10 )
    _InterlockedIncrement(v10 + 70);
  if ( v11 )
    tip2::details::merged_data<_tip_LoadCustomVDWallpaperWithGesturePerfTest,_tip_LoadCustomVDWallpaperWithGesturePerfTest>::Release(v11);
  tip2::test_watcher<tip2::details::merged_data<_tip_LoadCustomVDWallpaperWithGesturePerfTest,_tip_LoadCustomVDWallpaperWithGesturePerfTest>>::~test_watcher<tip2::details::merged_data<_tip_LoadCustomVDWallpaperWithGesturePerfTest,_tip_LoadCustomVDWallpaperWithGesturePerfTest>>((__int64)v52);
  *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_LoadCustomVDWallpaperWithGesturePerfTest,_tip_LoadCustomVDWallpaperWithGesturePerfTest>>::operator->(
                 (__int64)this + 312,
                 (__int64 *)&v39)
            + 272) = 0;
  tip2::test_data_control<tip2::details::merged_data<_tip_LoadCustomVDWallpaperWithGesturePerfTest,_tip_LoadCustomVDWallpaperWithGesturePerfTest>>::~test_data_control<tip2::details::merged_data<_tip_LoadCustomVDWallpaperWithGesturePerfTest,_tip_LoadCustomVDWallpaperWithGesturePerfTest>>((void **)&v39);
  v12 = *((_DWORD *)this + 57);
  *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_LoadCustomVDWallpaperWithGesturePerfTest,_tip_LoadCustomVDWallpaperWithGesturePerfTest>>::operator->(
                 (__int64)this + 312,
                 (__int64 *)&pbc)
            + 276) = v12 != 2;
  tip2::test_data_control<tip2::details::merged_data<_tip_LoadCustomVDWallpaperWithGesturePerfTest,_tip_LoadCustomVDWallpaperWithGesturePerfTest>>::~test_data_control<tip2::details::merged_data<_tip_LoadCustomVDWallpaperWithGesturePerfTest,_tip_LoadCustomVDWallpaperWithGesturePerfTest>>((void **)&pbc);
  ppv = 0LL;
  v13 = CoCreateInstance(
          &GUID_50ef4544_ac9f_4a8e_b21b_8a26180db13f,
          0LL,
          1u,
          &GUID_f676c15d_596a_4ce2_8234_33996f445db1,
          &ppv);
  v16 = v13;
  if ( v13 >= 0 )
  {
    pbc = 0LL;
    v17 = BindCtx_CreateWithObjectParam(v15, v14, &pbc);
    v16 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x47C,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v17);
LABEL_9:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&pbc);
      goto LABEL_37;
    }
    v35 = 0LL;
    length = 0;
    v37 = 0LL;
    StringRawBuffer = WindowsGetStringRawBuffer(a4, &length);
    if ( SHCreateItemFromParsingName(StringRawBuffer, pbc, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, &v37) < 0 )
    {
      v25 = *((_QWORD *)this + 7);
      v26 = *(__int64 (__fastcall **)(__int64, struct IDCompThumbnail *, _QWORD, unsigned __int64, GUID *, __int64 *))(*(_QWORD *)v25 + 104LL);
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v35);
      v27 = *((_DWORD *)this + 49) - *((_DWORD *)this + 47);
      LODWORD(v39) = *((_DWORD *)this + 48) - *((_DWORD *)this + 46);
      HIDWORD(v39) = v27;
      SysColor = GetSysColor(1);
      v29 = v26(v25, v49, SysColor, v39, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v35);
      v16 = v29;
      if ( v29 < 0 )
      {
        v30 = 1233LL;
LABEL_25:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v30,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v29);
        goto LABEL_15;
      }
      v31 = *a3;
      v40 = 0LL;
      v32 = (*v31)((struct IVirtualDesktop *)a3, &GUID_c9be252c_e386_425e_b33c_ca422112f51f, &v40);
      v16 = v32;
      if ( v32 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4D3,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v32);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v40);
        goto LABEL_15;
      }
      v33 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v40 + 40LL))(v40, 0LL);
      if ( v33 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x4D4,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v33);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v40);
    }
    else
    {
      *(_QWORD *)v38 = 0LL;
      v19 = (*(__int64 (__fastcall **)(LPVOID, void *, _QWORD, _QWORD, int *, _QWORD, _QWORD))(*(_QWORD *)ppv + 24LL))(
              ppv,
              v37,
              (unsigned int)(*((_DWORD *)this + 48) - *((_DWORD *)this + 46)),
              0LL,
              v38,
              0LL,
              0LL);
      v16 = v19;
      if ( v19 < 0 )
      {
        v20 = 1156LL;
LABEL_13:
        v21 = (unsigned int)v19;
LABEL_14:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v20,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)v21);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v38);
LABEL_15:
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v37);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v35);
        goto LABEL_9;
      }
      h = 0LL;
      v19 = (*(__int64 (__fastcall **)(_QWORD, HANDLE *))(**(_QWORD **)v38 + 24LL))(*(_QWORD *)v38, &h);
      v16 = v19;
      if ( v19 < 0 )
      {
        v20 = 1159LL;
        goto LABEL_13;
      }
      memset(pv, 0, sizeof(pv));
      if ( !GetObjectW(h, 32, pv) )
      {
        v16 = -2147467259;
        v21 = 2147500037LL;
        v20 = 1162LL;
        goto LABEL_14;
      }
      LOBYTE(v22) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDAnimationWallpaperJumpBugFix>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDAnimationWallpaperJumpBugFix>::GetImpl'::`2'::impl,
        v22);
      v46 = 1.0;
      v47 = 1065353216LL;
      v48 = 0;
      VirtualDesktopGestureWindow::GetWallpaperPositionData(
        this,
        SDWORD1(pv[0]),
        SDWORD2(pv[0]),
        (struct VirtualDesktopGestureWindow::WallpaperPositionData *)&v46);
      v42 = (int)o_ceilf_0((float)SDWORD1(pv[0]) * v46);
      v43 = (int)o_ceilf_0((float)SDWORD2(pv[0]) * *(float *)&v47);
      v23 = *((_QWORD *)this + 7);
      v24 = *(__int64 (__fastcall **)(__int64, struct IDCompThumbnail *, unsigned __int64, __int64, GUID *, __int64 *))(*(_QWORD *)v23 + 72LL);
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v35);
      v39 = __PAIR64__(*((_DWORD *)this + 49) - *((_DWORD *)this + 47), *((_DWORD *)this + 48) - *((_DWORD *)this + 46));
      v19 = v24(v23, v49, v39, 1LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v35);
      v16 = v19;
      if ( v19 < 0 )
      {
        v20 = 1174LL;
        goto LABEL_13;
      }
      v52[0] = &h;
      v52[1] = &v46;
      v52[2] = &v42;
      v52[3] = &v43;
      v52[4] = pv;
      v52[5] = this;
      (*(void (__fastcall **)(__int64, __int64 (__fastcall *)(__int64, __int64, __int64), _QWORD *))(*(_QWORD *)v35 + 88LL))(
        v35,
        LambdaCustomPaintProc__lambda_f2ca46843af7fe20e5ddf713755dabab__HDC___,
        v52);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v38);
    }
    v29 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)v35 + 24LL))(
            v35,
            a5,
            0LL,
            0LL);
    v16 = v29;
    if ( v29 >= 0 )
    {
      if ( *((_DWORD *)this + 57) != 5
        || (v29 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)v35 + 40LL))(
                    v35,
                    a5,
                    0LL,
                    0LL),
            v16 = v29,
            v29 >= 0) )
      {
        wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>::copy_to<IApplicationView>(&v35, v50);
        tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::complete((__int64 *)this + 39);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v37);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v35);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&pbc);
        v16 = 0;
        goto LABEL_37;
      }
      v30 = 1245LL;
    }
    else
    {
      v30 = 1239LL;
    }
    goto LABEL_25;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x479,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)(unsigned int)v13);
LABEL_37:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&ppv);
  return v16;
}
