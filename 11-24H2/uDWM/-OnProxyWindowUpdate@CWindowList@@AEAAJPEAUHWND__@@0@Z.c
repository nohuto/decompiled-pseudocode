/*
 * XREFs of ?OnProxyWindowUpdate@CWindowList@@AEAAJPEAUHWND__@@0@Z @ 0x1800F15E4
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800915A0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800434E0 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_CaptureManagerBackport@@@details@wil@@QEAA_NXZ @ 0x1800BB690 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_CaptureManagerBackport@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::OnProxyWindowUpdate(CWindowList *this, HWND a2, HWND a3)
{
  __int64 v6; // rbp
  struct CWindowData *WindowDataByHwnd; // rbx
  unsigned int v8; // ebx
  __int64 v9; // r9
  __int64 v10; // rdx
  struct CWindowData *v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+68h] [rbp+20h] BYREF

  v6 = 0LL;
  v16 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(this, a2);
  if ( WindowDataByHwnd )
  {
    v11 = 0LL;
    if ( a3 )
    {
      v11 = CWindowList::FindWindowDataByHwnd(this, a3);
      if ( !v11 )
      {
        v8 = -2147024809;
        v9 = 2147942487LL;
        v10 = 8392LL;
        goto LABEL_18;
      }
    }
    v12 = *((_QWORD *)WindowDataByHwnd + 81);
    if ( v12 )
    {
      v6 = *(_QWORD *)(v12 + 40);
      *(_QWORD *)(v12 + 656) = 0LL;
    }
    if ( a3 )
    {
      if ( *((_QWORD *)v11 + 82) )
      {
        v8 = -2147024809;
        v9 = 2147942487LL;
        v10 = 8411LL;
        goto LABEL_18;
      }
      *((_QWORD *)WindowDataByHwnd + 81) = v11;
      *((_QWORD *)v11 + 82) = WindowDataByHwnd;
      if ( !*((_QWORD *)v11 + 55) )
        *((_BYTE *)v11 + 741) |= 8u;
    }
    else
    {
      *((_QWORD *)WindowDataByHwnd + 81) = 0LL;
    }
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_CaptureManagerBackport>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Capture_CaptureManagerBackport>::GetImpl'::`2'::impl) )
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD, HWND, HWND, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                      + 59)
                                                                   + 56LL))(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 59),
              a2,
              a3,
              v6);
      v8 = v13;
      if ( v13 < 0 )
      {
        v10 = 8428LL;
LABEL_17:
        v9 = (unsigned int)v13;
        goto LABEL_18;
      }
    }
    else
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD, HWND, HWND, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                      + 58)
                                                                   + 72LL))(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58),
              a2,
              a3,
              v6);
      v8 = v13;
      if ( v13 < 0 )
      {
        v10 = 8433LL;
        goto LABEL_17;
      }
    }
    v8 = 0;
    goto LABEL_22;
  }
  v8 = -2147024809;
  v9 = 2147942487LL;
  v10 = 8387LL;
LABEL_18:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)v9);
LABEL_22:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v16);
  return v8;
}
