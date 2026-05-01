/*
 * XREFs of ?SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z @ 0x180392440
 * Callers:
 *     ?OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801645C0 (-OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAU.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_NPEAPEAUHMONITOR__@@@Z @ 0x1800B60E0 (-GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$MakeAndInitialize@VStartExperienceWallpaperBackground@@V1@AEAPEAUHWND__@@PEAUIDCompositionDevice@@@Details@WRL@Microsoft@@YAJPEAPEAVStartExperienceWallpaperBackground@@AEAPEAUHWND__@@$$QEAPEAUIDCompositionDevice@@@Z @ 0x18038E520 (--$MakeAndInitialize@VStartExperienceWallpaperBackground@@V1@AEAPEAUHWND__@@PEAUIDCompositionDev.c)
 *     ?CreateDCompDevice@DesktopWallpaperHelpers@@YAJPEAPEAUIDCompositionDevice@@@Z @ 0x18038F2F8 (-CreateDCompDevice@DesktopWallpaperHelpers@@YAJPEAPEAUIDCompositionDevice@@@Z.c)
 *     ?CreateDesktopWallpaperHWND@DesktopWallpaperHelpers@@YAJAEBUCRect@Geometry@@PEAPEAUHWND__@@@Z @ 0x18038F44C (-CreateDesktopWallpaperHWND@DesktopWallpaperHelpers@@YAJAEBUCRect@Geometry@@PEAPEAUHWND__@@@Z.c)
 *     ?UnsetBackgroundImage@CStartExperienceManager@@AEAAJXZ @ 0x1803929CC (-UnsetBackgroundImage@CStartExperienceManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CStartExperienceManager::SetBackgroundImage(CStartExperienceManager *this, void *a2)
{
  struct IDCompositionDevice **v4; // rdx
  int DCompDevice; // eax
  int MonitorInformation; // ebx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, GUID *, __int64 *); // rdi
  int DesktopWallpaperHWND; // eax
  struct CSingleViewShellExperience *v10; // rdx
  __int64 v11; // rdx
  HWND *v12; // r8
  HWND v13; // r14
  int started; // eax
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, void *, GUID *, __int64 *); // rdi
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  bool v23[8]; // [rsp+38h] [rbp-29h] BYREF
  __int64 v24; // [rsp+40h] [rbp-21h] BYREF
  __int64 v25; // [rsp+48h] [rbp-19h] BYREF
  __int64 v26; // [rsp+50h] [rbp-11h] BYREF
  __int64 v27; // [rsp+58h] [rbp-9h] BYREF
  HWND hWnd; // [rsp+60h] [rbp-1h] BYREF
  __int64 v29[2]; // [rsp+68h] [rbp+7h] BYREF
  struct tagRECT v30; // [rsp+78h] [rbp+17h] BYREF
  HWND v31; // [rsp+88h] [rbp+27h]
  char v32; // [rsp+90h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  if ( *((_QWORD *)this + 90) )
    CStartExperienceManager::UnsetBackgroundImage(this);
  v29[0] = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v29);
  DCompDevice = DesktopWallpaperHelpers::CreateDCompDevice((DesktopWallpaperHelpers *)v29, v4);
  MonitorInformation = DCompDevice;
  if ( DCompDevice >= 0 )
  {
    v24 = 0LL;
    v7 = v29[0];
    v8 = **(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v29[0];
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
    DesktopWallpaperHWND = v8(v7, &GUID_d14b6158_c3fa_4bce_9c1f_b61d8665eab0, &v24);
    MonitorInformation = DesktopWallpaperHWND;
    if ( DesktopWallpaperHWND >= 0 )
    {
      v30 = 0LL;
      LODWORD(hWnd) = 0;
      v23[0] = 0;
      MonitorInformation = CStartExperienceManager::GetMonitorInformation(
                             this,
                             v10,
                             &v30,
                             (enum EDGEUI_TRAYSTUCKPLACE *)&hWnd,
                             v23,
                             0LL);
      if ( MonitorInformation < 0 )
        goto LABEL_8;
      hWnd = 0LL;
      DesktopWallpaperHWND = DesktopWallpaperHelpers::CreateDesktopWallpaperHWND(
                               (DesktopWallpaperHelpers *)&v30,
                               (const struct Geometry::CRect *)&hWnd,
                               v12);
      MonitorInformation = DesktopWallpaperHWND;
      if ( DesktopWallpaperHWND >= 0 )
      {
        v13 = hWnd;
        v31 = hWnd;
        v32 = 1;
        v25 = 0LL;
        *(_QWORD *)&v30.left = v29[0];
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
        started = Microsoft::WRL::Details::MakeAndInitialize<StartExperienceWallpaperBackground,StartExperienceWallpaperBackground,HWND__ * &,IDCompositionDevice *>(
                    &v25,
                    &hWnd,
                    (struct IDCompositionDevice **)&v30);
        MonitorInformation = started;
        if ( started >= 0 )
        {
          v27 = 0LL;
          v15 = v25;
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
          v16 = *(_QWORD *)(v15 + 40);
          if ( v16 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
          v27 = *(_QWORD *)(v15 + 40);
          v26 = 0LL;
          v17 = v24;
          v18 = *(__int64 (__fastcall **)(__int64, void *, GUID *, __int64 *))(*(_QWORD *)v24 + 232LL);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
          v19 = v18(v17, a2, &GUID_eacdd04c_117e_4e17_88f4_d1b12b0e3d89, &v26);
          MonitorInformation = v19;
          if ( v19 >= 0 )
          {
            v19 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 24LL))(v26, v27);
            MonitorInformation = v19;
            if ( v19 >= 0 )
            {
              v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 24LL))(v24);
              MonitorInformation = v19;
              if ( v19 >= 0 )
              {
                v21 = v25;
                v25 = *((_QWORD *)this + 90);
                *((_QWORD *)this + 90) = v21;
                *((_QWORD *)this + 91) = v13;
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
                MonitorInformation = 0;
                goto LABEL_25;
              }
              v20 = 1335LL;
            }
            else
            {
              v20 = 1334LL;
            }
          }
          else
          {
            v20 = 1331LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v20,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
            (const char *)(unsigned int)v19);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x529,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
            (const char *)(unsigned int)started);
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
        DestroyWindow(v13);
        goto LABEL_8;
      }
      v11 = 1315LL;
    }
    else
    {
      v11 = 1301LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)DesktopWallpaperHWND);
LABEL_8:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
    goto LABEL_25;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x513,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
    (const char *)(unsigned int)DCompDevice);
LABEL_25:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v29);
  return (unsigned int)MonitorInformation;
}
