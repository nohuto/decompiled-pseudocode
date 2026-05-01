/*
 * XREFs of ?Commit@VirtualDesktopGestureWindow@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@IM_N@Z @ 0x18055E2D8
 * Callers:
 *     ?Commit@VirtualDesktopGestureContext@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@H_N@Z @ 0x18055DE98 (-Commit@VirtualDesktopGestureContext@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@H_N@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_&__lambda_6a2847f209d66b4d08d504655ca3e0ac___lambda_c0d8e1709f705684b7fc3b88b56d28ed___ @ 0x18055B7E0 (DCompThumbnailHelpers--DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_-__lambda_6a.c)
 *     DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_&__lambda_7bba5397718b556fa4d56bb755ea96c8___lambda_3f2017e679634d121ef035a0678ae2ba___ @ 0x18055B89C (DCompThumbnailHelpers--DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_-__lambda_7b.c)
 *     DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_&__lambda_8b6332ece26b147aeb862ef6a363e0b0___lambda_b380b0a81cd678091ab35ee1fc3cc242___ @ 0x18055B95C (DCompThumbnailHelpers--DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_-__lambda_8b.c)
 *     ?GetScaleFactor@VirtualDesktopGestureWindow@@QEAAIXZ @ 0x1805603B0 (-GetScaleFactor@VirtualDesktopGestureWindow@@QEAAIXZ.c)
 *     ?ShowAndAnimateCustomWallpapers@VirtualDesktopGestureWindow@@IEAA_NXZ @ 0x180563000 (-ShowAndAnimateCustomWallpapers@VirtualDesktopGestureWindow@@IEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall VirtualDesktopGestureWindow::Commit(
        VirtualDesktopGestureWindow *this,
        struct IVirtualDesktopGestureHandlerPrivate *a2,
        int a3,
        float a4,
        bool a5)
{
  __int64 v8; // rdx
  VirtualDesktopGestureWindow *v9; // rcx
  int v10; // eax
  unsigned int v11; // r15d
  int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  int v15; // ebx
  VirtualDesktopGestureWindow *v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // r9
  int v19; // ebx
  __int64 v20; // rcx
  __int64 v22; // rbx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  struct IVirtualDesktopGestureHandlerPrivate *v30; // [rsp+48h] [rbp-31h] BYREF
  int v31; // [rsp+50h] [rbp-29h]
  struct IVirtualDesktopGestureHandlerPrivate **v32; // [rsp+58h] [rbp-21h] BYREF
  int v33; // [rsp+60h] [rbp-19h]
  struct IVirtualDesktopGestureHandlerPrivate **v34; // [rsp+68h] [rbp-11h]
  struct IVirtualDesktopGestureHandlerPrivate *v35; // [rsp+70h] [rbp-9h] BYREF
  struct IVirtualDesktopGestureHandlerPrivate *v36; // [rsp+78h] [rbp-1h] BYREF
  int v37; // [rsp+80h] [rbp+7h]
  int v38; // [rsp+84h] [rbp+Bh]
  struct IVirtualDesktopGestureHandlerPrivate *v39; // [rsp+88h] [rbp+Fh] BYREF
  int v40; // [rsp+90h] [rbp+17h]
  int v41; // [rsp+94h] [rbp+1Bh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+57h]

  v35 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v35);
  v10 = *((_DWORD *)this + 57);
  if ( v10 == 2 )
  {
    v11 = a5 + 35;
    v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 21) + 184LL))(
            *((_QWORD *)this + 21),
            v8,
            v11);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1D0,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v12);
    v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 22) + 184LL))(
            *((_QWORD *)this + 22),
            v13,
            v11);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1D1,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v14);
    v30 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v30);
    v31 = a3;
    v34 = &v30;
    v15 = *((_DWORD *)this + 48) - *((_DWORD *)this + 46);
    LODWORD(v36) = (int)(float)((float)((float)((float)(int)VirtualDesktopGestureWindow::GetScaleFactor(v16) * 28.0)
                                      + (float)v15)
                              * a4);
    HIDWORD(v36) = 0;
    v37 = (_DWORD)v36 + 1;
    v38 = 1;
    v17 = *((_QWORD *)this + 20);
    v32 = (struct IVirtualDesktopGestureHandlerPrivate **)v30;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v32);
    v33 = v31;
    v19 = DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const____lambda_6a2847f209d66b4d08d504655ca3e0ac___lambda_c0d8e1709f705684b7fc3b88b56d28ed___(
            v17,
            (__int64)&v36,
            v11,
            v18,
            0,
            (__int64 *)&v32);
    v20 = (__int64)v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D9,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v19);
      if ( a2 )
        (*(void (__fastcall **)(struct IVirtualDesktopGestureHandlerPrivate *))(*(_QWORD *)a2 + 16LL))(a2);
      return (unsigned int)v19;
    }
  }
  else if ( v10 == 5 && VirtualDesktopGestureWindow::ShowAndAnimateCustomWallpapers(v9) )
  {
    v30 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v30);
    v31 = a3;
    v32 = &v30;
    LODWORD(v39) = (int)(float)((float)(*((_DWORD *)this + 48) - *((_DWORD *)this + 46)) * a4);
    HIDWORD(v39) = 0;
    v40 = (_DWORD)v39 + 1;
    v41 = 1;
    v22 = *((_QWORD *)this + 20);
    v36 = v30;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v36);
    v37 = v31;
    v19 = DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const____lambda_8b6332ece26b147aeb862ef6a363e0b0___lambda_b380b0a81cd678091ab35ee1fc3cc242___(
            v22,
            (__int64)&v39,
            v23,
            v24,
            0,
            (__int64 *)&v36);
    v25 = (__int64)v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1E3,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v19);
      if ( a2 )
        (*(void (__fastcall **)(struct IVirtualDesktopGestureHandlerPrivate *))(*(_QWORD *)a2 + 16LL))(a2);
      return (unsigned int)v19;
    }
  }
  else
  {
    v30 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v30);
    v31 = a3;
    v32 = &v30;
    LODWORD(v36) = (int)(float)((float)(*((_DWORD *)this + 48) - *((_DWORD *)this + 46)) * a4);
    HIDWORD(v36) = 0;
    v37 = (_DWORD)v36 + 1;
    v38 = 1;
    v26 = *((_QWORD *)this + 20);
    v39 = v30;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v39);
    v40 = v31;
    v19 = DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const____lambda_7bba5397718b556fa4d56bb755ea96c8___lambda_3f2017e679634d121ef035a0678ae2ba___(
            v26,
            (__int64)&v36,
            v27,
            v28,
            0,
            (__int64 *)&v39);
    v29 = (__int64)v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    }
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1ED,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v19);
      if ( a2 )
        (*(void (__fastcall **)(struct IVirtualDesktopGestureHandlerPrivate *))(*(_QWORD *)a2 + 16LL))(a2);
      return (unsigned int)v19;
    }
  }
  if ( a2 )
    (*(void (__fastcall **)(struct IVirtualDesktopGestureHandlerPrivate *))(*(_QWORD *)a2 + 16LL))(a2);
  return 0LL;
}
