/*
 * XREFs of ?ComputeConstraints@CVirtualTouchpadExperienceManager@@AEAAJAEBUTouchpadPositionAnchorInternal@@_N@Z @ 0x18039DCB0
 * Callers:
 *     ?Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Internal@Windows@@URect@Foundation@6@@Z @ 0x18039FEE0 (-Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Interna.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$function@$$A6A_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@Z@std@@QEAA@XZ @ 0x18001A78C (--1-$function@$$A6A_NAEBU-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802916C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?ComputeDesiredSize@CVirtualTouchpadExperienceManager@@AEAAJPEAUHMONITOR__@@PEBUtagRECT@@PEBW4DEVICE_SCALE_FACTOR@@@Z @ 0x18039E084 (-ComputeDesiredSize@CVirtualTouchpadExperienceManager@@AEAAJPEAUHMONITOR__@@PEBUtagRECT@@PEBW4DE.c)
 *     ?FindMonitor@@YAPEAUHMONITOR__@@$$QEAV?$function@$$A6A_NPEAUHMONITOR__@@@Z@std@@@Z @ 0x18039E654 (-FindMonitor@@YAPEAUHMONITOR__@@$$QEAV-$function@$$A6A_NPEAUHMONITOR__@@@Z@std@@@Z.c)
 *     ?IsPointerDeviceSupportedOnMonitor@CVirtualTouchpadExperienceManager@@CA_NPEAUHMONITOR__@@W4tagPOINTER_DEVICE_TYPE@@@Z @ 0x18039ED4C (-IsPointerDeviceSupportedOnMonitor@CVirtualTouchpadExperienceManager@@CA_NPEAUHMONITOR__@@W4tagP.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualTouchpadExperienceManager::ComputeConstraints(
        CVirtualTouchpadExperienceManager *this,
        HMONITOR *a2,
        char a3)
{
  char v6; // r15
  HMONITOR Monitor; // r14
  __int64 v8; // rdx
  const char *v9; // r9
  __int64 v10; // rdx
  int ScaleFactorForMonitor; // ebx
  __int64 v13; // rdx
  int v14; // r8d
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(__int64, SID *, GUID *, __int64 *); // rbx
  int v17; // eax
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, HMONITOR, SID *, GUID *, int *); // rdi
  int v20; // eax
  __int64 v21; // rdx
  int v22; // edi
  int v23; // r14d
  int v24; // ecx
  enum DEVICE_SCALE_FACTOR v25; // [rsp+30h] [rbp-69h] BYREF
  int v26[2]; // [rsp+38h] [rbp-61h] BYREF
  int v27; // [rsp+40h] [rbp-59h] BYREF
  __int64 v28; // [rsp+48h] [rbp-51h] BYREF
  struct tagMONITORINFO mi; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v30[8]; // [rsp+80h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v6 = 0;
  Monitor = *a2;
  if ( !(unsigned __int8)CVirtualTouchpadExperienceManager::IsPointerDeviceSupportedOnMonitor(*a2) )
  {
    v6 = 1;
    v30[0] = off_180734DC8;
    v30[7] = v30;
    Monitor = (HMONITOR)FindMonitor(v30);
    std::function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>::~function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>(
      (__int64)v30,
      v8);
    if ( !Monitor )
    {
      v10 = 298LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v10,
               (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
               v9);
    }
  }
  mi.cbSize = 40;
  memset(&mi.rcMonitor, 0, 36);
  if ( !GetMonitorInfoW(Monitor, &mi) )
  {
    v10 = 302LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v10,
             (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
             v9);
  }
  v25 = DEVICE_SCALE_FACTOR_INVALID;
  ScaleFactorForMonitor = GetScaleFactorForMonitor(Monitor, &v25);
  if ( ScaleFactorForMonitor < 0 )
  {
    v13 = 304LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)ScaleFactorForMonitor);
    return (unsigned int)ScaleFactorForMonitor;
  }
  ScaleFactorForMonitor = CVirtualTouchpadExperienceManager::ComputeDesiredSize(this, Monitor, &mi.rcMonitor, &v25);
  if ( ScaleFactorForMonitor < 0 )
  {
    v13 = 305LL;
    goto LABEL_9;
  }
  if ( v6 || !a3 )
  {
    v28 = 0LL;
    v15 = *((_QWORD *)this + 41);
    v16 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v15 + 24LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
    v17 = v16(v15, &SID_IImmersiveMonitorService, &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2, &v28);
    ScaleFactorForMonitor = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x136,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v17);
LABEL_23:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
      return (unsigned int)ScaleFactorForMonitor;
    }
    *(_QWORD *)v26 = 0LL;
    v18 = v28;
    v19 = *(__int64 (__fastcall **)(__int64, HMONITOR, SID *, GUID *, int *))(*(_QWORD *)v28 + 72LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v26);
    v20 = v19(v18, Monitor, &SID_EdgeUi, &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e, v26);
    ScaleFactorForMonitor = v20;
    if ( v20 < 0 )
    {
      v21 = 313LL;
LABEL_22:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v21,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v20);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v26);
      goto LABEL_23;
    }
    v22 = (int)(float)((float)(*((_DWORD *)this + 73) * v25) / 100.0);
    v23 = (int)(float)((float)(*((_DWORD *)this + 74) * v25) / 100.0);
    *((_BYTE *)this + 316) = v6;
    v27 = 0;
    v20 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)v26 + 80LL))(*(_QWORD *)v26, &v27);
    ScaleFactorForMonitor = v20;
    if ( v20 < 0 )
    {
      v21 = 321LL;
      goto LABEL_22;
    }
    if ( !v27 )
    {
      *((_DWORD *)this + 81) = mi.rcWork.bottom - *((_DWORD *)this + 76) / 2;
      *((_DWORD *)this + 80) = v22 + mi.rcWork.left + *((_DWORD *)this + 75) / 2;
      goto LABEL_34;
    }
    if ( v27 == 1 )
    {
      *((_DWORD *)this + 81) = v23 + mi.rcWork.top + *((_DWORD *)this + 76) / 2;
    }
    else
    {
      if ( v27 == 2 )
      {
        v24 = mi.rcWork.bottom - *((_DWORD *)this + 76) / 2;
      }
      else
      {
        if ( v27 != 3 )
        {
LABEL_34:
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v26);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
          return 0LL;
        }
        v24 = mi.rcWork.bottom - *((_DWORD *)this + 76) / 2 - v23;
      }
      *((_DWORD *)this + 81) = v24;
    }
    *((_DWORD *)this + 80) = mi.rcWork.right - *((_DWORD *)this + 75) / 2 - v22;
    goto LABEL_34;
  }
  v14 = (int)(float)((float)(*((_DWORD *)a2 + 3) * v25) / 100.0);
  *((_DWORD *)this + 80) = mi.rcMonitor.right
                         + *((_DWORD *)this + 75) / -2
                         - (int)(float)((float)(*((_DWORD *)a2 + 2) * v25) / 100.0);
  *((_DWORD *)this + 81) = mi.rcMonitor.bottom - *((_DWORD *)this + 76) / 2 - v14;
  return 0LL;
}
