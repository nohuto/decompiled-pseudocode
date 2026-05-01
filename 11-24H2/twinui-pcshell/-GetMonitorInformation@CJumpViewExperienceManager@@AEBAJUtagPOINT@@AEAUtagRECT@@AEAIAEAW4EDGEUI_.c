/*
 * XREFs of ?GetMonitorInformation@CJumpViewExperienceManager@@AEBAJUtagPOINT@@AEAUtagRECT@@AEAIAEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x1802423AC
 * Callers:
 *     ?EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180393DB8 (-EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802916C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarJumplistOnHover@@@details@wil@@QEAA_NXZ @ 0x1803963F8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarJumplistOnHover@@@details@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CJumpViewExperienceManager::GetMonitorInformation(
        CJumpViewExperienceManager *this,
        POINT a2,
        struct tagRECT *a3,
        unsigned int *a4,
        enum EDGEUI_TRAYSTUCKPLACE *a5)
{
  HMONITOR v8; // rsi
  const char *v9; // r9
  __int64 v10; // rdx
  int DpiForMonitor; // eax
  unsigned int v13; // ebx
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, HMONITOR, SID *, GUID *, int *); // rbx
  int v16; // eax
  __int64 v17; // rdx
  int v18[2]; // [rsp+30h] [rbp-31h] BYREF
  int v19; // [rsp+38h] [rbp-29h] BYREF
  __int128 v20; // [rsp+40h] [rbp-21h] BYREF
  struct tagMONITORINFO mi; // [rsp+50h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+57h]

  v8 = MonitorFromPoint(a2, 2u);
  if ( v8 == (HMONITOR)-1LL )
  {
    v10 = 1035LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v10,
             (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
             v9);
  }
  mi.cbSize = 40;
  memset(&mi.rcMonitor, 0, 36);
  if ( !GetMonitorInfoW(v8, &mi) )
  {
    v10 = 1038LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v10,
             (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
             v9);
  }
  *a3 = mi.rcWork;
  v19 = 0;
  DpiForMonitor = GetDpiForMonitor(v8, 0LL, a4, &v19);
  v13 = DpiForMonitor;
  if ( DpiForMonitor >= 0 )
  {
    *(_QWORD *)v18 = 0LL;
    v14 = *((_QWORD *)this + 48);
    v15 = *(__int64 (__fastcall **)(__int64, HMONITOR, SID *, GUID *, int *))(*(_QWORD *)v14 + 72LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v18);
    v16 = v15(v14, v8, &SID_EdgeUi, &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e, v18);
    v13 = v16;
    if ( v16 >= 0 )
    {
      v16 = (*(__int64 (__fastcall **)(_QWORD, enum EDGEUI_TRAYSTUCKPLACE *))(**(_QWORD **)v18 + 80LL))(
              *(_QWORD *)v18,
              a5);
      v13 = v16;
      if ( v16 >= 0 )
      {
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_TaskbarJumplistOnHover>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_TaskbarJumplistOnHover>::GetImpl'::`2'::impl) )
        {
          v20 = 0LL;
          v16 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)v18 + 168LL))(*(_QWORD *)v18, &v20);
          v13 = v16;
          if ( v16 < 0 )
          {
            v17 = 1051LL;
            goto LABEL_12;
          }
          *(__int128 *)((char *)&xmmword_1808CAC60 + 4) = v20;
        }
        v13 = 0;
        goto LABEL_18;
      }
      v17 = 1046LL;
    }
    else
    {
      v17 = 1045LL;
    }
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v16);
LABEL_18:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v18);
    return v13;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x412,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
    (const char *)(unsigned int)DpiForMonitor);
  return v13;
}
