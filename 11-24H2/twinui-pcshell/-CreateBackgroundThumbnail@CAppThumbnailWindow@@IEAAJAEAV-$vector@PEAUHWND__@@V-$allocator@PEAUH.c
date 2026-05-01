/*
 * XREFs of ?CreateBackgroundThumbnail@CAppThumbnailWindow@@IEAAJAEAV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x1804A64A0
 * Callers:
 *     ?CreateAppThumbnail@CAppThumbnailWindow@@IEAAJXZ @ 0x1804A5630 (-CreateAppThumbnail@CAppThumbnailWindow@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18004D04C (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800D6010 (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ @ 0x1802EDA58 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ.c)
 *     ?CreateThumbnailsFromWindows@CAppThumbnailWindow@@IEAAJV?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@AEAV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@AEAV?$vector@V?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@@Z @ 0x1804A71F4 (-CreateThumbnailsFromWindows@CAppThumbnailWindow@@IEAAJV-$com_ptr_t@UIDCompThumbnail@@Uerr_retur.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppThumbnailWindow::CreateBackgroundThumbnail(__int64 a1, _QWORD *a2)
{
  __int64 *v4; // r14
  __int64 *v5; // rbx
  __int64 v6; // rdi
  int v7; // edx
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, _QWORD, unsigned __int64, GUID *, __int64 *); // rbx
  char IsEnabled; // al
  __int64 v14; // rdx
  int v15; // eax
  unsigned __int64 v16; // [rsp+40h] [rbp-20h] BYREF
  _DWORD v17[4]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v17[0] = 0;
  v17[1] = 0;
  v17[2] = *(_DWORD *)(a1 + 144) - *(_DWORD *)(a1 + 136);
  v17[3] = *(_DWORD *)(a1 + 148) - *(_DWORD *)(a1 + 140);
  v4 = (__int64 *)(a1 + 48);
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl) )
  {
    v5 = *(__int64 **)(a1 + 16);
    v6 = *v5;
    if ( *a2 == a2[1] )
    {
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(v4);
      v7 = *(_DWORD *)(a1 + 148) - *(_DWORD *)(a1 + 140);
      LODWORD(v16) = *(_DWORD *)(a1 + 144) - *(_DWORD *)(a1 + 136);
      HIDWORD(v16) = v7;
      v8 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, unsigned __int64, GUID *, __int64 *))(v6 + 104))(
             v5,
             *(_QWORD *)(a1 + 40),
             0LL,
             v16,
             &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
             v4);
      if ( v8 < 0 )
      {
        v9 = 734LL;
LABEL_5:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
          (const char *)(unsigned int)v8);
        return (unsigned int)v8;
      }
    }
    else
    {
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(v4);
      v16 = __PAIR64__(*(_DWORD *)(a1 + 148) - *(_DWORD *)(a1 + 140), *(_DWORD *)(a1 + 144) - *(_DWORD *)(a1 + 136));
      v8 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, unsigned __int64, GUID *, __int64 *))(v6 + 112))(
             v5,
             *(_QWORD *)(a1 + 40),
             v16,
             &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
             v4);
      if ( v8 < 0 )
      {
        v9 = 740LL;
        goto LABEL_5;
      }
    }
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 16);
    v12 = *(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, GUID *, __int64 *))(*(_QWORD *)v11 + 112LL);
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(v4);
    v16 = __PAIR64__(*(_DWORD *)(a1 + 148) - *(_DWORD *)(a1 + 140), *(_DWORD *)(a1 + 144) - *(_DWORD *)(a1 + 136));
    v8 = v12(v11, *(_QWORD *)(a1 + 40), v16, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, v4);
    if ( v8 < 0 )
    {
      v9 = 747LL;
      goto LABEL_5;
    }
  }
  v8 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD, _QWORD))(*(_QWORD *)*v4 + 24LL))(*v4, v17, 0LL, 0LL);
  if ( v8 < 0 )
  {
    v9 = 750LL;
    goto LABEL_5;
  }
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl);
  v14 = *(_QWORD *)(a1 + 56);
  if ( IsEnabled )
  {
    if ( !v14 )
      v14 = *(_QWORD *)(a1 + 64);
    wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
      &v16,
      v14);
    v15 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)*v4 + 152LL))(*v4, v16, 0LL);
    v8 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F4,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
        (const char *)(unsigned int)v15);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v16);
      return (unsigned int)v8;
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v16);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)*v4 + 152LL))(*v4, v14, 0LL);
    if ( v8 < 0 )
    {
      v9 = 760LL;
      goto LABEL_5;
    }
  }
  wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(&v16, *v4);
  v8 = CAppThumbnailWindow::CreateThumbnailsFromWindows(a1, &v16, a2, a1 + 72);
  if ( v8 < 0 )
  {
    v9 = 766LL;
    goto LABEL_5;
  }
  return 0LL;
}
