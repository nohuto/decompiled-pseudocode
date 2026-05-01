/*
 * XREFs of ?OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAUIArrangedWindowResizeStartedEventArgs@3456@@Z @ 0x18053A5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180029D9C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18009B530 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?CalculateSecondaryViews@JointResize@@AEAAJXZ @ 0x1800EB8DC (-CalculateSecondaryViews@JointResize@@AEAAJXZ.c)
 *     ?GetViewForWindow@JointResize@@AEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x1800ED5E0 (-GetViewForWindow@JointResize@@AEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z.c)
 *     ?Cleanup@JointResize@@AEAAXXZ @ 0x18017C390 (-Cleanup@JointResize@@AEAAXXZ.c)
 *     ?RegisterRawInput@JointResize@@AEAAX_N@Z @ 0x18018D254 (-RegisterRawInput@JointResize@@AEAAX_N@Z.c)
 *     ?RegisterViewChanges@JointResize@@AEAAX_N@Z @ 0x1801C1308 (-RegisterViewChanges@JointResize@@AEAAX_N@Z.c)
 *     ?DestroyGhostDivider@JointResize@@AEAAXXZ @ 0x1801D2E38 (-DestroyGhostDivider@JointResize@@AEAAXXZ.c)
 *     ?ComputeExtendedViewRect@JointResize@@AEAA?AUtagRECT@@PEAUIApplicationView@@U2@@Z @ 0x180238FA0 (-ComputeExtendedViewRect@JointResize@@AEAA-AUtagRECT@@PEAUIApplicationView@@U2@@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180296A94 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18029721C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1JointResize@JointResizeTelemetry@@QEAA@XZ @ 0x18029F1B4 (--1JointResize@JointResizeTelemetry@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18050DAE4 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_af26cd4e336a58c3fc15d2bb79fbb070__&_ @ 0x1805381B8 (Windows--Internal--ComTaskPool--QueueTask__lambda_af26cd4e336a58c3fc15d2bb79fbb070__-_.c)
 *     ??4JointResize@JointResizeTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x180539188 (--4JointResize@JointResizeTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?StartActivity@JointResize@JointResizeTelemetry@@QEAAXXZ @ 0x18053B4F0 (-StartActivity@JointResize@JointResizeTelemetry@@QEAAXXZ.c)
 *     ?TagWindowsForResize@JointResize@@AEAAXXZ @ 0x18053C014 (-TagWindowsForResize@JointResize@@AEAAXXZ.c)
 *     ?TransferToMember@JointResize@JointResizeTelemetry@@QEAA?AV12@XZ @ 0x18053C220 (-TransferToMember@JointResize@JointResizeTelemetry@@QEAA-AV12@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall JointResize::OnArrangedWindowResizeStarted(
        JointResize *this,
        struct Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *a2,
        struct Windows::Internal::Shell::WindowManagementEvents::IArrangedWindowResizeStartedEventArgs *a3)
{
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  int ViewForWindow; // eax
  int v9; // eax
  struct IUnknown **v10; // r15
  struct IUnknown *v11; // rdi
  ULONG (__stdcall *AddRef)(IUnknown *); // rbx
  int v13; // eax
  int v14; // eax
  struct IApplicationView *v15; // rdx
  int v16; // eax
  JointResize *v17; // rcx
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  __int64 v23; // rax
  struct IUnknown *v24; // [rsp+20h] [rbp-E0h] BYREF
  int v25; // [rsp+28h] [rbp-D8h] BYREF
  int v26; // [rsp+2Ch] [rbp-D4h] BYREF
  _DWORD v27[4]; // [rsp+30h] [rbp-D0h] BYREF
  struct tagRECT v28; // [rsp+40h] [rbp-C0h] BYREF
  HWND v29; // [rsp+50h] [rbp-B0h] BYREF
  struct tagRECT v30; // [rsp+58h] [rbp-A8h] BYREF
  JointResize *v31; // [rsp+68h] [rbp-98h]
  __int64 *v32; // [rsp+70h] [rbp-90h]
  char v33; // [rsp+78h] [rbp-88h]
  __int128 v34; // [rsp+80h] [rbp-80h] BYREF
  JointResize *v35; // [rsp+90h] [rbp-70h] BYREF
  JointResize *v36; // [rsp+98h] [rbp-68h] BYREF
  struct tagRECT v37; // [rsp+A0h] [rbp-60h]
  __int64 v38[42]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v39[336]; // [rsp+200h] [rbp+100h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+388h] [rbp+288h]

  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v38,
    (__int64)"JointResize");
  v38[0] = (__int64)&JointResizeTelemetry::JointResize::`vftable';
  JointResizeTelemetry::JointResize::StartActivity((JointResizeTelemetry::JointResize *)v38);
  v31 = this;
  v32 = v38;
  v33 = 1;
  v27[0] = 0;
  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::WindowManagementEvents::IArrangedWindowResizeStartedEventArgs *, _DWORD *))(*(_QWORD *)a3 + 72LL))(
         a3,
         v27);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3D4,
      (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)(unsigned int)v5);
    JointResize::DestroyGhostDivider(this);
    JointResize::Cleanup(this);
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v38,
      0);
LABEL_30:
    JointResizeTelemetry::JointResize::~JointResize((JointResizeTelemetry::JointResize *)v38);
    return (unsigned int)v6;
  }
  if ( (v27[0] & 2) != 0 )
  {
    JointResize::DestroyGhostDivider(this);
    JointResize::Cleanup(this);
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v38,
      0);
    v6 = -2147467259;
    goto LABEL_30;
  }
  v24 = 0LL;
  v29 = 0LL;
  v7 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::WindowManagementEvents::IArrangedWindowResizeStartedEventArgs *, HWND *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v29);
  v6 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3D9,
      (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)(unsigned int)v7);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v24);
    JointResize::DestroyGhostDivider(this);
    JointResize::Cleanup(this);
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v38,
      0);
    goto LABEL_30;
  }
  v24 = 0LL;
  ViewForWindow = JointResize::GetViewForWindow(this, v29, (struct IApplicationView **)&v24);
  v6 = ViewForWindow;
  if ( ViewForWindow < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3DA,
      (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)(unsigned int)ViewForWindow);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v24);
    JointResize::DestroyGhostDivider(this);
    JointResize::Cleanup(this);
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v38,
      0);
    goto LABEL_30;
  }
  v25 = 0;
  v9 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::WindowManagementEvents::IArrangedWindowResizeStartedEventArgs *, int *))(*(_QWORD *)a3 + 64LL))(
         a3,
         &v25);
  v6 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3DC,
      (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)(unsigned int)v9);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v24);
    JointResize::DestroyGhostDivider(this);
    JointResize::Cleanup(this);
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v38,
      0);
    goto LABEL_30;
  }
  v10 = (struct IUnknown **)((char *)this + 208);
  if ( !*((_QWORD *)this + 26) )
  {
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 26, (__int64)v24);
    v11 = *v10;
    AddRef = (*v10)->lpVtbl[3].AddRef;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 25);
    v13 = ((__int64 (__fastcall *)(struct IUnknown *, char *))AddRef)(v11, (char *)this + 200);
    v6 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3E3,
        (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
        (const char *)(unsigned int)v13);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v24);
      JointResize::DestroyGhostDivider(this);
      JointResize::Cleanup(this);
      wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
        v38,
        0);
      goto LABEL_30;
    }
    v14 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 25) + 88LL))(
            *((_QWORD *)this + 25),
            (char *)this + 296);
    v6 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3E4,
        (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
        (const char *)(unsigned int)v14);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v24);
      JointResize::DestroyGhostDivider(this);
      JointResize::Cleanup(this);
      wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
        v38,
        0);
      goto LABEL_30;
    }
    *((_QWORD *)this + 36) = ApplicationViewHelpers::GetWindowForView(
                               (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v24,
                               v15);
    *((_DWORD *)this + 80) = v25;
    v6 = JointResize::CalculateSecondaryViews(this);
    if ( v6 < 0 )
    {
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v24);
      JointResize::DestroyGhostDivider(this);
      JointResize::Cleanup(this);
      wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
        v38,
        0);
      goto LABEL_30;
    }
  }
  if ( !SHIsSameObject(*v10, v24) )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3ED,
      (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)0x8000FFFFLL,
      (int)v24);
  if ( *((_DWORD *)this + 80) != v25 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3EE,
      (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)0x8000FFFFLL,
      (int)v24);
  *((_BYTE *)this + 280) = 1;
  JointResize::RegisterRawInput(this, 0);
  JointResize::RegisterViewChanges(this, 1);
  v34 = 0LL;
  v16 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::WindowManagementEvents::IArrangedWindowResizeStartedEventArgs *, __int128 *))(*(_QWORD *)a3 + 56LL))(
          a3,
          &v34);
  v6 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3F5,
      (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)(unsigned int)v16);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v24);
    JointResize::DestroyGhostDivider(this);
    JointResize::Cleanup(this);
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v38,
      0);
    goto LABEL_30;
  }
  v28.left = (int)*(float *)&v34;
  v28.top = (int)*((float *)&v34 + 1);
  v28.right = (int)(float)(*((float *)&v34 + 2) + *(float *)&v34);
  v28.bottom = (int)(float)(*((float *)&v34 + 1) + *((float *)&v34 + 3));
  JointResize::ComputeExtendedViewRect(
    v17,
    &v30,
    (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))*v10,
    &v28);
  *(_QWORD *)&v28.left = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v28.left);
  v35 = this;
  v36 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v36);
  v37 = v30;
  v19 = Windows::Internal::ComTaskPool::QueueTask__lambda_af26cd4e336a58c3fc15d2bb79fbb070____(v18, (__int64)&v35);
  v6 = v19;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x40E,
      (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)(unsigned int)v19);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v36);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v28.left);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v24);
    JointResize::DestroyGhostDivider(this);
    JointResize::Cleanup(this);
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v38,
      0);
    goto LABEL_30;
  }
  v26 = 0;
  v20 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::WindowManagementEvents::IArrangedWindowResizeStartedEventArgs *, int *))(*(_QWORD *)a3 + 80LL))(
          a3,
          &v26);
  v6 = v20;
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x412,
      (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)(unsigned int)v20);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v36);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v28.left);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v24);
    JointResize::DestroyGhostDivider(this);
    JointResize::Cleanup(this);
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v38,
      0);
    goto LABEL_30;
  }
  v26 |= 3u;
  v21 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::WindowManagementEvents::IArrangedWindowResizeStartedEventArgs *))(*(_QWORD *)a3 + 88LL))(a3);
  v6 = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x414,
      (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)(unsigned int)v21);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v36);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v28.left);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v24);
    JointResize::DestroyGhostDivider(this);
    JointResize::Cleanup(this);
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v38,
      0);
    goto LABEL_30;
  }
  v23 = JointResizeTelemetry::JointResize::TransferToMember(v38, v39);
  JointResizeTelemetry::JointResize::operator=((_QWORD *)this + 62, v23);
  JointResizeTelemetry::JointResize::~JointResize((JointResizeTelemetry::JointResize *)v39);
  JointResize::TagWindowsForResize(this);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v36);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v28.left);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v24);
  JointResizeTelemetry::JointResize::~JointResize((JointResizeTelemetry::JointResize *)v38);
  return 0LL;
}
