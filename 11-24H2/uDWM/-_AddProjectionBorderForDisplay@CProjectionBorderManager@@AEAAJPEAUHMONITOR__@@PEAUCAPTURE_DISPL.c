/*
 * XREFs of ?_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x18008C24C
 * Callers:
 *     ?_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x180097868 (-_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY.c)
 *     ?UpdateDisplayCaptureBorder@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z @ 0x1800CD780 (-UpdateDisplayCaptureBorder@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z.c)
 *     ?UpdateFilteredDisplayCaptureBorder@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z @ 0x1800CD840 (-UpdateFilteredDisplayCaptureBorder@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z.c)
 *     ?_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@_N@Z @ 0x1800CE0F8 (-_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerPr.c)
 *     ?_AddFilteredDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@_NPEAVCContainerVisualProxy@@@Z @ 0x1800CE31C (-_AddFilteredDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureCont.c)
 *     ?_UpdateDisplayCaptureControllerProperties@CProjectionBorderManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800CFF2C (-_UpdateDisplayCaptureControllerProperties@CProjectionBorderManager@@AEAAJPEAUCAPTURE_DISPLAY_MA.c)
 * Callees:
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K_N@Z @ 0x1800205F4 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180025C28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x180032DDC (-InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18003340C (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x180094D18 (-GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSI.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ?Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z @ 0x1800AD7CC (-Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z.c)
 *     ?UpdateRect@CSolidRectangleVisual@@QEAAXAEBUtagRECT@@@Z @ 0x1800D0264 (-UpdateRect@CSolidRectangleVisual@@QEAAXAEBUtagRECT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProjectionBorderManager::_AddProjectionBorderForDisplay(
        CProjectionBorderManager *this,
        HMONITOR a2,
        struct CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY *a3)
{
  int DisplayRect; // eax
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  int inserted; // eax
  CContainerVisual *OverlayRootVisualForDesktop; // rax
  unsigned int v11; // eax
  unsigned int v12; // r8d
  int v13; // r9d
  unsigned int v14; // eax
  unsigned int v16; // [rsp+20h] [rbp-60h]
  CSolidRectangleVisual *v17; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-48h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+40h] [rbp-40h] BYREF
  struct tagRECT v20; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT v21; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v19 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  DisplayRect = CDesktopManager::GetDisplayRect(CDesktopManager::s_pDesktopManagerInstance, a2, &v20);
  v6 = DisplayRect;
  if ( DisplayRect >= 0 )
  {
    v21 = v20;
    v18 = 0LL;
    if ( !(unsigned int)GetDesktopID(1LL, &v18) )
    {
      v6 = -2147467259;
      v7 = 2147500037LL;
      v8 = 2323LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)v7,
        v16);
LABEL_19:
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&v19);
      return v6;
    }
    v17 = 0LL;
    inserted = CProjectionBorderVisual::Create(&v17);
    v6 = inserted;
    if ( inserted < 0 )
    {
      v8 = 2326LL;
LABEL_7:
      v7 = (unsigned int)inserted;
      goto LABEL_8;
    }
    *((_DWORD *)v17 + 65) = 1;
    OverlayRootVisualForDesktop = CWindowList::GetOverlayRootVisualForDesktop(
                                    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                                    v18,
                                    1);
    if ( !OverlayRootVisualForDesktop )
    {
      OverlayRootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                                      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                                      v18);
      if ( !OverlayRootVisualForDesktop )
      {
        v6 = -2147467261;
        v7 = 2147500035LL;
        v8 = 2336LL;
        goto LABEL_8;
      }
    }
    inserted = CContainerVisual::InsertChildBefore(OverlayRootVisualForDesktop, (CMILRefCountBase ***)v17, 0LL);
    v6 = inserted;
    if ( inserted < 0 )
    {
      v8 = 2337LL;
      goto LABEL_7;
    }
    CSolidRectangleVisual::UpdateRect(v17, &v21);
    (*(void (__fastcall **)(CSolidRectangleVisual *))(*(_QWORD *)v17 + 88LL))(v17);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v17 + 3) + 48LL))(*((_QWORD *)v17 + 3));
    v11 = *((_DWORD *)a3 + 12);
    v12 = v11 + 1;
    if ( v11 + 1 < v11 )
    {
      v6 = -2147024362;
      v13 = -2147024362;
      v14 = 179;
LABEL_23:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, v14, 0LL);
      v7 = v6;
      v8 = 2342LL;
      goto LABEL_8;
    }
    if ( v12 > *((_DWORD *)a3 + 11) )
    {
      v6 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a3 + 24, 8, 1, &v17);
      v13 = v6;
      if ( (v6 & 0x80000000) != 0 )
      {
        v14 = 190;
        goto LABEL_23;
      }
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)a3 + 3) + 8LL * *((unsigned int *)a3 + 12)) = v17;
      *((_DWORD *)a3 + 12) = v12;
    }
    v6 = 0;
    goto LABEL_19;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x90A,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
    (const char *)(unsigned int)DisplayRect,
    v16);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v6;
}
