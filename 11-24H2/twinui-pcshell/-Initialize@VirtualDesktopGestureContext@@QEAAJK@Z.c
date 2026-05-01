/*
 * XREFs of ?Initialize@VirtualDesktopGestureContext@@QEAAJK@Z @ 0x180560A40
 * Callers:
 *     ?InitializeContext@VirtualDesktopGestureHandler@@AEAAJI@Z @ 0x18056105C (-InitializeContext@VirtualDesktopGestureHandler@@AEAAJI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18004D04C (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800C9E90 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??DIterator@?$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V?$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@@details@@QEAA?AV?$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@XZ @ 0x18017EBD0 (--DIterator@-$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V-$ComPtr@UIApplicationVie.c)
 *     ??0?$ObjectArrayAdapterImpl@UIGameFocusEvents@@V?$ComPtr@UIGameFocusEvents@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1801B3A74 (--0-$ObjectArrayAdapterImpl@UIGameFocusEvents@@V-$ComPtr@UIGameFocusEvents@@@WRL@Microsoft@@@det.c)
 *     ?Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z @ 0x18026AA58 (-Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z.c)
 *     ?begin@?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA?AVIterator@12@XZ @ 0x1802A2724 (-begin@-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft.c)
 *     ?end@?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA?AVIterator@12@XZ @ 0x1802A274C (-end@-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1802A27A4 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMon.c)
 *     ??$Make@VVirtualDesktopGestureWindow@@PEAUIVirtualDesktopManagerInternal@@PEAUISwitchThumbnailDeviceManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@AEAUCRect@Geometry@@AEAPEAUHMONITOR__@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VVirtualDesktopGestureWindow@@@12@$$QEAPEAUIVirtualDesktopManagerInternal@@$$QEAPEAUISwitchThumbnailDeviceManager@@$$QEAPEAUIApplicationViewCollection@@$$QEAPEAUIImmersiveSettingsCache@@AEAUCRect@Geometry@@AEAPEAUHMONITOR__@@@Z @ 0x1802B5F70 (--$Make@VVirtualDesktopGestureWindow@@PEAUIVirtualDesktopManagerInternal@@PEAUISwitchThumbnailDe.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?CreateHideWallpaperIconsObject@@YAJPEAPEAUIUnknown@@@Z @ 0x180682D68 (-CreateHideWallpaperIconsObject@@YAJPEAPEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall VirtualDesktopGestureContext::Initialize(VirtualDesktopGestureContext *this, int a2)
{
  struct IUnknown **v4; // rbx
  int HideWallpaperIconsObject; // eax
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, __int64 *); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rbx
  int v11; // eax
  int v12; // eax
  unsigned int v13; // edi
  int v14; // eax
  unsigned int v15; // edi
  int v16; // eax
  void *v17; // r8
  const char *v18; // r9
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rdx
  VirtualDesktopGestureWindow **v22; // r8
  VirtualDesktopGestureWindow *v23; // rcx
  VirtualDesktopGestureWindow *v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rdi
  VirtualDesktopGestureWindow *v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rsi
  VirtualDesktopGestureWindow *v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rdi
  __int64 v34; // rbx
  __int64 v35; // rsi
  __int64 v36; // rbx
  __int64 v37; // rsi
  VirtualDesktopGestureWindow *v38; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v39; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v40; // [rsp+50h] [rbp-B0h] BYREF
  int v41; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v42[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v43; // [rsp+70h] [rbp-90h] BYREF
  __int64 v44[2]; // [rsp+78h] [rbp-88h] BYREF
  HMONITOR v45; // [rsp+88h] [rbp-78h] BYREF
  int v46[2]; // [rsp+90h] [rbp-70h] BYREF
  struct IApplicationViewCollection *v47; // [rsp+98h] [rbp-68h] BYREF
  struct ISwitchThumbnailDeviceManager *v48; // [rsp+A0h] [rbp-60h] BYREF
  struct IVirtualDesktopManagerInternal *v49[2]; // [rsp+A8h] [rbp-58h] BYREF
  char v50; // [rsp+B8h] [rbp-48h]
  __int128 pvParam; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v52; // [rsp+D0h] [rbp-30h]
  __int128 v53; // [rsp+E0h] [rbp-20h]
  struct tagRECT v54; // [rsp+F0h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+38h]

  *((_DWORD *)this + 44) = a2;
  v4 = (struct IUnknown **)((char *)this + 184);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 23);
  HideWallpaperIconsObject = CreateHideWallpaperIconsObject(v4);
  if ( HideWallpaperIconsObject < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x536,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)HideWallpaperIconsObject);
  v40 = 0LL;
  v6 = *((_QWORD *)this + 4);
  v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 112LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v40);
  v8 = v7(v6, &v40);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v49[1] = this;
    v50 = 1;
    if ( a2 == 5 )
    {
      pvParam = 0LL;
      v52 = 0LL;
      v53 = 0LL;
      LODWORD(pvParam) = 2;
      if ( SystemParametersInfoW(0xAEu, 0x30u, &pvParam, 0) )
        *((_BYTE *)this + 66) = (unsigned __int16)(v52 & 0x200) >> 9;
    }
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 1) + 184LL))(*((_QWORD *)this + 1), 2LL);
    details::ObjectArrayAdapterImpl<IGameFocusEvents,Microsoft::WRL::ComPtr<IGameFocusEvents>>::ObjectArrayAdapterImpl<IGameFocusEvents,Microsoft::WRL::ComPtr<IGameFocusEvents>>(
      (__int64)v42,
      v40);
    details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::begin(
      (__int64)v42,
      (__int64)&v43);
    details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::end(
      (__int64)v42,
      (__int64)&pvParam);
    while ( 1 )
    {
      if ( v43 == (_DWORD)pvParam && v44[1] == (_QWORD)v52 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&pvParam + 1);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v44);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v42);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v40);
        return 0LL;
      }
      details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::Iterator::operator*(
        (__int64)&v43,
        &v39);
      v41 = 0;
      v10 = v39;
      v11 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v39 + 48LL))(v39, &v41);
      if ( v11 >= 0 )
      {
        if ( v41 )
        {
          v45 = 0LL;
          v12 = (*(__int64 (__fastcall **)(__int64, HMONITOR *))(*(_QWORD *)v10 + 40LL))(v10, &v45);
          v13 = v12;
          if ( v12 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x557,
              (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
              (const char *)(unsigned int)v12);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v39);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&pvParam + 1);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v44);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v42);
            v36 = *((_QWORD *)this + 9);
            v37 = v36 + 8LL * *((_QWORD *)this + 10);
            while ( v36 != v37 )
            {
              DestroyWindow(*(HWND *)(*(_QWORD *)v36 + 8LL));
              v36 += 8LL;
            }
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v40);
            return v13;
          }
          v54 = 0LL;
          v14 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v10 + 72LL))(v10, &v54);
          v15 = v14;
          if ( v14 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x55B,
              (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
              (const char *)(unsigned int)v14);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v39);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&pvParam + 1);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v44);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v42);
            v34 = *((_QWORD *)this + 9);
            v35 = v34 + 8LL * *((_QWORD *)this + 10);
            while ( v34 != v35 )
            {
              DestroyWindow(*(HWND *)(*(_QWORD *)v34 + 8LL));
              v34 += 8LL;
            }
LABEL_50:
            v9 = v15;
            goto LABEL_51;
          }
          *(_QWORD *)v46 = *((_QWORD *)this + 5);
          v47 = (struct IApplicationViewCollection *)*((_QWORD *)this + 2);
          v48 = (struct ISwitchThumbnailDeviceManager *)*((_QWORD *)this + 1);
          v49[0] = *(struct IVirtualDesktopManagerInternal **)this;
          Microsoft::WRL::Details::Make<VirtualDesktopGestureWindow,IVirtualDesktopManagerInternal *,ISwitchThumbnailDeviceManager *,IApplicationViewCollection *,IImmersiveSettingsCache *,Geometry::CRect &,HMONITOR__ * &>(
            (__int64)&v38,
            v49,
            &v48,
            &v47,
            (struct IImmersiveSettingsCache **)v46,
            &v54,
            &v45);
          if ( !v38 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x55F,
              (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
              (const char *)0x8007000ELL);
            v31 = v38;
            if ( v38 )
            {
              v38 = 0LL;
              (*(void (__fastcall **)(__int64))(*((_QWORD *)v31 + 2) + 16LL))((__int64)v31 + 16);
            }
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v39);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&pvParam + 1);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v44);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v42);
            v32 = *((_QWORD *)this + 9);
            v33 = v32 + 8LL * *((_QWORD *)this + 10);
            while ( v32 != v33 )
            {
              DestroyWindow(*(HWND *)(*(_QWORD *)v32 + 8LL));
              v32 += 8LL;
            }
            goto LABEL_46;
          }
          v16 = VirtualDesktopGestureWindow::Initialize(v38, a2);
          v15 = v16;
          if ( v16 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x560,
              (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
              (const char *)(unsigned int)v16);
            v28 = v38;
            if ( v38 )
            {
              v38 = 0LL;
              (*(void (__fastcall **)(__int64))(*((_QWORD *)v28 + 2) + 16LL))((__int64)v28 + 16);
            }
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v39);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&pvParam + 1);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v44);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v42);
            v29 = *((_QWORD *)this + 9);
            v30 = v29 + 8LL * *((_QWORD *)this + 10);
            while ( v29 != v30 )
            {
              DestroyWindow(*(HWND *)(*(_QWORD *)v29 + 8LL));
              v29 += 8LL;
            }
            goto LABEL_50;
          }
          v18 = 0LL;
          v19 = *((_QWORD *)this + 10);
          if ( v19 == *((_QWORD *)this + 12)
            && (v20 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                        (__int64)this + 72,
                        v19 + 1,
                        v17),
                v18 = (const char *)(unsigned int)v20,
                v20 < 0)
            || (v21 = *((_QWORD *)this + 10),
                *((_QWORD *)this + 10) = v21 + 1,
                (v22 = (VirtualDesktopGestureWindow **)(*((_QWORD *)this + 9) + 8 * v21)) == 0LL)
            || (*v22 = 0LL, v22 == &v38) )
          {
            v23 = v38;
          }
          else
          {
            *v22 = v38;
            v23 = 0LL;
            v38 = 0LL;
          }
          if ( (int)v18 < 0 )
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x561,
              (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
              v18);
            DestroyWindow(*((HWND *)v38 + 1));
            v25 = v38;
            if ( v38 )
            {
              v38 = 0LL;
              (*(void (__fastcall **)(__int64))(*((_QWORD *)v25 + 2) + 16LL))((__int64)v25 + 16);
            }
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v39);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&pvParam + 1);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v44);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v42);
            v26 = *((_QWORD *)this + 9);
            v27 = v26 + 8LL * *((_QWORD *)this + 10);
            while ( v26 != v27 )
            {
              DestroyWindow(*(HWND *)(*(_QWORD *)v26 + 8LL));
              v26 += 8LL;
            }
LABEL_46:
            v9 = -2147024882;
            goto LABEL_51;
          }
          if ( v23 )
          {
            v38 = 0LL;
            (*(void (__fastcall **)(__int64))(*((_QWORD *)v23 + 2) + 16LL))((__int64)v23 + 16);
          }
        }
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x554,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v11);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v39);
      ++v43;
      details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::Iterator::GetCurrentObject(&v43);
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x539,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)(unsigned int)v8);
LABEL_51:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v40);
  return v9;
}
