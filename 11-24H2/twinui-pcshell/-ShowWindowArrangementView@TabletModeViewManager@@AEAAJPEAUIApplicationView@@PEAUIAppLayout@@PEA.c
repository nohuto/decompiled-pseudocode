/*
 * XREFs of ?ShowWindowArrangementView@TabletModeViewManager@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUtagRECT@@PEAUtagPOINT@@2W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletModeInputSource@@@Z @ 0x1805220E0
 * Callers:
 *     ?BeginDragVisualHandoff@TabletModeViewManager@@UEAAJPEAUIApplicationView@@PEAUtagRECT@@PEAUtagPOINT@@PEAUITabletModeInputSource@@@Z @ 0x1805211B0 (-BeginDragVisualHandoff@TabletModeViewManager@@UEAAJPEAUIApplicationView@@PEAUtagRECT@@PEAUtagPO.c)
 *     ?MoveSizeAttempted@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@@Z @ 0x180521BB0 (-MoveSizeAttempted@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@@Z.c)
 *     ?ShowPlaceMode@TabletModeViewManager@@UEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUtagRECT@@@Z @ 0x180522080 (-ShowPlaceMode@TabletModeViewManager@@UEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUtagRECT@@@Z.c)
 *     ?StartSwipeHelper@TabletModeViewManager@@AEAAJIUtagPOINT@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@@Z @ 0x18052276C (-StartSwipeHelper@TabletModeViewManager@@AEAAJIUtagPOINT@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18011F8B8 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180328954 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1804BB6FC (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??1WindowArrangementView_Show@TabletModeTelemetry@@QEAA@XZ @ 0x18052106C (--1WindowArrangementView_Show@TabletModeTelemetry@@QEAA@XZ.c)
 *     ?GetAppLayoutForDropFeedback@TabletModeViewManager@@AEAAJPEAUIApplicationView@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@PEAPEAUIAppLayout@@@Z @ 0x1805216E4 (-GetAppLayoutForDropFeedback@TabletModeViewManager@@AEAAJPEAUIApplicationView@@W4SHOW_WINDOW_ARR.c)
 *     ?StartActivity@WindowArrangementView_Show@TabletModeTelemetry@@QEAAXW4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@@Z @ 0x180522664 (-StartActivity@WindowArrangementView_Show@TabletModeTelemetry@@QEAAXW4SHOW_WINDOW_ARRANGEMENT_VI.c)
 *     ?UpdateLayoutItemsSizeConstraints@TabletModeViewManager@@AEAAXXZ @ 0x180522EA4 (-UpdateLayoutItemsSizeConstraints@TabletModeViewManager@@AEAAXXZ.c)
 *     ?WindowArrangementView_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18052E8CC (-WindowArrangementView_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?TabletModeInputHandler_CreateInstance@@YAJW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletModeInputCallback@@AEBU_GUID@@PEAPEAX@Z @ 0x1805314D4 (-TabletModeInputHandler_CreateInstance@@YAJW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletMod.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall TabletModeViewManager::ShowWindowArrangementView(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct tagPOINT *a5,
        __int64 a6,
        unsigned int a7,
        unsigned int a8,
        __int64 a9)
{
  int AppLayoutForDropFeedback; // eax
  unsigned int v13; // ebx
  __int64 v14; // rcx
  __int64 *v15; // rax
  IUnknown *v16; // rdx
  IUnknown *v17; // rcx
  IUnknown *v18; // rbx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rdi
  int v20; // eax
  __int64 v21; // rcx
  const struct _GUID *v22; // rcx
  int Instance; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  IUnknown *punk; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v36; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+40h] [rbp-C0h] BYREF
  struct tagPOINT Point; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v39; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v40; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+60h] [rbp-A0h]
  __int64 v42; // [rsp+68h] [rbp-98h]
  IUnknown **p_punk; // [rsp+70h] [rbp-90h]
  char v44; // [rsp+78h] [rbp-88h]
  volatile signed __int32 *v45[42]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+218h] [rbp+118h]

  v39 = a4;
  v41 = a6;
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v45,
    (__int64)"WindowArrangementView_Show");
  v45[0] = (volatile signed __int32 *)&TabletModeTelemetry::WindowArrangementView_Show::`vftable';
  TabletModeTelemetry::WindowArrangementView_Show::StartActivity(v45, a7, a8);
  v37 = 0LL;
  if ( a3 )
  {
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(&v37, a3);
  }
  else
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v37);
    AppLayoutForDropFeedback = TabletModeViewManager::GetAppLayoutForDropFeedback(a1, a2, a7, &v37);
    v13 = AppLayoutForDropFeedback;
    if ( AppLayoutForDropFeedback < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1E7,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
        (const char *)(unsigned int)AppLayoutForDropFeedback);
      goto LABEL_44;
    }
  }
  Point = 0LL;
  if ( a5 )
    Point = *a5;
  else
    GetPhysicalCursorPos(&Point);
  v14 = *(_QWORD *)(a1 + 128);
  if ( v14 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 48LL))(v14, 0LL);
  punk = 0LL;
  v42 = a1;
  p_punk = &punk;
  v44 = 1;
  v15 = (__int64 *)(a1 + 136);
  v16 = *(IUnknown **)(a1 + 136);
  if ( v16 )
  {
    v17 = 0LL;
    if ( &v40 != v15 )
    {
      *v15 = 0LL;
      v17 = v16;
    }
    v40 = 0LL;
    punk = v17;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v40);
  }
  else
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
    Instance = WindowArrangementView_CreateInstance(v22, (void **)&punk);
    v13 = Instance;
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x211,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
        (const char *)(unsigned int)Instance);
      v24 = *(_QWORD *)(a1 + 152);
      if ( v24 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 56LL))(v24);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 152));
      }
      goto LABEL_21;
    }
    IUnknown_SetSite(punk, (IUnknown *)a1);
    v25 = ((__int64 (__fastcall *)(IUnknown *, __int64, __int64, _QWORD, unsigned int))punk->lpVtbl[1].QueryInterface)(
            punk,
            a2,
            v37,
            a7,
            a8);
    v13 = v25;
    if ( v25 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x213,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
        (const char *)(unsigned int)v25);
      v26 = *(_QWORD *)(a1 + 152);
      if ( v26 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 56LL))(v26);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 152));
      }
      goto LABEL_21;
    }
  }
  v36 = 0LL;
  v18 = punk;
  QueryInterface = punk->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v36);
  v20 = ((__int64 (__fastcall *)(IUnknown *, GUID *, __int64 *))QueryInterface)(
          v18,
          &GUID_bf49be29_71c8_427e_a671_fec22c61e5f1,
          &v36);
  v13 = v20;
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x218,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
      (const char *)(unsigned int)v20);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v36);
    v21 = *(_QWORD *)(a1 + 152);
    if ( v21 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 56LL))(v21);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 152));
    }
LABEL_21:
    IUnknown_SetSite(punk, 0LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
    goto LABEL_44;
  }
  if ( a9 )
  {
    v27 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a9 + 24LL))(a9, v36);
    v13 = v27;
    if ( v27 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x21D,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
        (const char *)(unsigned int)v27);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v36);
      v28 = *(_QWORD *)(a1 + 152);
      if ( v28 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 56LL))(v28);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 152));
      }
      goto LABEL_21;
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 152));
    v30 = TabletModeInputHandler_CreateInstance(a8, v36, v29, a1 + 152);
    v13 = v30;
    if ( v30 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x222,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
        (const char *)(unsigned int)v30);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v36);
      v31 = *(_QWORD *)(a1 + 152);
      if ( v31 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 56LL))(v31);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 152));
      }
      goto LABEL_21;
    }
  }
  v32 = ((__int64 (__fastcall *)(IUnknown *, __int64, struct tagPOINT *, __int64))punk->lpVtbl[1].AddRef)(
          punk,
          v39,
          &Point,
          v41);
  v13 = v32;
  if ( v32 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x225,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
      (const char *)(unsigned int)v32);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v36);
    v33 = *(_QWORD *)(a1 + 152);
    if ( v33 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 56LL))(v33);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 152));
    }
    goto LABEL_21;
  }
  Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=((__int64 *)(a1 + 128), (__int64 *)&punk);
  if ( *(_QWORD *)(a1 + 160) != a9 )
  {
    if ( a9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a9 + 8LL))(a9);
    v39 = *(_QWORD *)(a1 + 160);
    *(_QWORD *)(a1 + 160) = a9;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v39);
  }
  TabletModeViewManager::UpdateLayoutItemsSizeConstraints((TabletModeViewManager *)a1);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64 *)v45);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v36);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
  v13 = 0;
LABEL_44:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v37);
  TabletModeTelemetry::WindowArrangementView_Show::~WindowArrangementView_Show(v45);
  return v13;
}
