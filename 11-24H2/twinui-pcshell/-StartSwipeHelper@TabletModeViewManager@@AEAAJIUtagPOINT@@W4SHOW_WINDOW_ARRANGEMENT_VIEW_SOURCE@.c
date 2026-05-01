/*
 * XREFs of ?StartSwipeHelper@TabletModeViewManager@@AEAAJIUtagPOINT@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@@Z @ 0x18052276C
 * Callers:
 *     ?StartDrag@TabletModeViewManager@@UEAAJUtagPOINT@@@Z @ 0x180522730 (-StartDrag@TabletModeViewManager@@UEAAJUtagPOINT@@@Z.c)
 *     ?StartExtendedSwipe@TabletModeViewManager@@UEAAJUtagPOINT@@I0@Z @ 0x180522750 (-StartExtendedSwipe@TabletModeViewManager@@UEAAJUtagPOINT@@I0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017AE8 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D498 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ?DismissAllLightDismiss@TabletModeViewManager@@AEAAJXZ @ 0x1805215D4 (-DismissAllLightDismiss@TabletModeViewManager@@AEAAJXZ.c)
 *     ?IsLauncherOrSwitcherVisibleOnThisMonitor@TabletModeViewManager@@AEAA_NXZ @ 0x1805219B0 (-IsLauncherOrSwitcherVisibleOnThisMonitor@TabletModeViewManager@@AEAA_NXZ.c)
 *     ?ShowWindowArrangementView@TabletModeViewManager@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUtagRECT@@PEAUtagPOINT@@2W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletModeInputSource@@@Z @ 0x1805220E0 (-ShowWindowArrangementView@TabletModeViewManager@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall TabletModeViewManager::StartSwipeHelper(__int64 a1, unsigned int a2, POINT a3, unsigned int a4)
{
  unsigned int v5; // esi
  unsigned int v7; // r12d
  HRESULT v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8
  bool *v13; // r9
  int v14; // eax
  void *v15; // rbx
  void (__fastcall *v16)(void *, __int64 *); // rdi
  __int64 v17; // rdi
  HRESULT v18; // eax
  void *v19; // rbx
  __int64 (__fastcall *v20)(void *, __int64 *); // rsi
  int v21; // eax
  LONG left; // eax
  LONG top; // eax
  __int64 v24; // rbx
  __int64 (__fastcall *v25)(__int64, __int64 *); // rsi
  int v26; // eax
  int v27; // eax
  POINT pt; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+60h] [rbp-A0h] BYREF
  void *v32; // [rsp+68h] [rbp-98h] BYREF
  __int64 v33; // [rsp+70h] [rbp-90h] BYREF
  void *v34; // [rsp+78h] [rbp-88h] BYREF
  int v35; // [rsp+80h] [rbp-80h] BYREF
  __int64 v36; // [rsp+88h] [rbp-78h] BYREF
  void *ppvOut; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v38; // [rsp+98h] [rbp-68h]
  _BYTE v39[16]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v40; // [rsp+B0h] [rbp-50h]
  RECT v41; // [rsp+C8h] [rbp-38h] BYREF
  RECT v42; // [rsp+E0h] [rbp-20h] BYREF
  RECT rc; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v44; // [rsp+100h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  v5 = a2;
  v38 = a2;
  pt = a3;
  v7 = 0;
  *(_BYTE *)(a1 + 184) = 0;
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  v8 = IUnknown_QueryService(
         *(IUnknown **)(a1 + 16),
         &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
         &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
         &ppvOut);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v35 = 0;
    v8 = (*(__int64 (__fastcall **)(void *, int *))(*(_QWORD *)ppvOut + 24LL))(ppvOut, &v35);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 637LL;
      goto LABEL_5;
    }
    if ( v35 != 1 )
      goto LABEL_48;
    if ( TabletModeViewManager::IsLauncherOrSwitcherVisibleOnThisMonitor((TabletModeViewManager *)a1, v11, v12, v13) )
    {
      *(_BYTE *)(a1 + 184) = 1;
      v9 = 0;
      goto LABEL_49;
    }
    v14 = TabletModeViewManager::DismissAllLightDismiss((IUnknown **)a1);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x28C,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
        (const char *)(unsigned int)v14);
    v31 = 0LL;
    v32 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v32);
    if ( IUnknown_QueryService(
           *(IUnknown **)(a1 + 16),
           &GUID_88ed940d_d632_4b84_9529_a3110b5af527,
           &GUID_88ed940d_d632_4b84_9529_a3110b5af527,
           &v32) >= 0 )
    {
      v15 = v32;
      v16 = *(void (__fastcall **)(void *, __int64 *))(*(_QWORD *)v32 + 80LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v31);
      v16(v15, &v31);
    }
    v17 = 0LL;
    v30 = 0LL;
    if ( v31 )
    {
      v7 = 1;
      Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v30, &v31);
      v17 = v30;
LABEL_43:
      if ( v17 )
      {
        v27 = TabletModeViewManager::ShowWindowArrangementView(a1, v17, 0LL, 0LL, &pt, 0LL, v7, a4, 0LL);
        v9 = v27;
        if ( v27 >= 0 )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, POINT))(**(_QWORD **)(a1 + 152) + 24LL))(
            *(_QWORD *)(a1 + 152),
            v5,
            pt);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v32);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v31);
          v9 = 0;
          goto LABEL_49;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2C7,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
          (const char *)(unsigned int)v27);
        goto LABEL_18;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v32);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v31);
LABEL_48:
      v9 = 1;
      goto LABEL_49;
    }
    v34 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v34);
    v18 = IUnknown_QueryService(
            *(IUnknown **)(a1 + 16),
            &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
            &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
            &v34);
    v9 = v18;
    if ( v18 >= 0 )
    {
      v33 = 0LL;
      v19 = v34;
      v20 = *(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)v34 + 72LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
      v21 = v20(v19, &v33);
      v9 = v21;
      if ( v21 >= 0 )
      {
        v42 = 0LL;
        rc = 0LL;
        v44 = 0LL;
        (*(void (__fastcall **)(__int64, RECT *))(*(_QWORD *)v33 + 24LL))(v33, &v42);
        if ( PtInRect((const RECT *)&rc.right, pt) && !PtInRect(&v42, pt) )
        {
          left = v42.left;
          if ( pt.x > v42.left )
            left = pt.x;
          if ( left >= v42.right )
          {
            pt.x = v42.right;
          }
          else if ( pt.x <= v42.left )
          {
            pt.x = v42.left;
          }
          top = v42.top;
          if ( pt.y > v42.top )
            top = pt.y;
          if ( top >= v42.bottom )
          {
            pt.y = v42.bottom;
          }
          else if ( pt.y <= v42.top )
          {
            pt.y = v42.top;
          }
        }
        v36 = 0LL;
        v24 = v33;
        v25 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v33 + 128LL);
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v36);
        v26 = v25(v24, &v36);
        v9 = v26;
        if ( v26 >= 0 )
        {
          memset_0(v39, 0, 0x40uLL);
          while ( (*(int (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v36 + 24LL))(v36, 1LL, v39) >= 0 )
          {
            if ( PtInRect(&v41, pt) )
            {
              Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(&v30, v40);
              v17 = v30;
              break;
            }
          }
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v36);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v34);
          v5 = v38;
          goto LABEL_43;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2B7,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
          (const char *)(unsigned int)v26);
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v36);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2A8,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
          (const char *)(unsigned int)v21);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2A5,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
        (const char *)(unsigned int)v18);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v34);
LABEL_18:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v32);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v31);
    goto LABEL_49;
  }
  v10 = 634LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
    (const char *)(unsigned int)v8);
LABEL_49:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  return v9;
}
