/*
 * XREFs of ?_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D3A84
 * Callers:
 *     ?UpdateCaptureControllerPropertiesFromDisplays@CProjectionBorderManager@@UEAAJXZ @ 0x180021930 (-UpdateCaptureControllerPropertiesFromDisplays@CProjectionBorderManager@@UEAAJXZ.c)
 *     ?UpdateDisplayCaptureBorder@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z @ 0x1800D2B70 (-UpdateDisplayCaptureBorder@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z.c)
 *     ?_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@_N@Z @ 0x1800D3784 (-_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerPr.c)
 *     ?_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D3958 (-_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180036F9C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18004DAFC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x180053CA0 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x1800B4800 (-GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 *     ?Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z @ 0x1800CFCAC (-Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x1800CFF94 (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderMan.c)
 *     ?UpdateRect@CSolidRectangleVisual@@QEAAXAEBUtagRECT@@@Z @ 0x1800D5800 (-UpdateRect@CSolidRectangleVisual@@QEAAXAEBUtagRECT@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProjectionBorderManager::_AddProjectionBorderForDisplay(
        struct _RTL_GENERIC_TABLE *this,
        HMONITOR a2,
        const struct DWM_CAPTURE_TOKEN *a3)
{
  unsigned int *Element; // r14
  int v7; // ebx
  int DisplayRect; // eax
  __int64 v9; // rdx
  __int64 v10; // r9
  struct CVisual *OverlayRootVisualForDesktop; // rax
  unsigned int v12; // eax
  unsigned int v13; // r8d
  int v14; // r9d
  unsigned int v15; // eax
  unsigned int v17; // [rsp+20h] [rbp-60h]
  CSolidRectangleVisual *v18; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v19; // [rsp+38h] [rbp-48h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+40h] [rbp-40h] BYREF
  struct tagRECT v21; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT v22; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v20 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  Element = (unsigned int *)CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY>::FindElement(
                              this + 7,
                              *(_QWORD *)a3);
  if ( Element )
  {
    DisplayRect = CDesktopManager::GetDisplayRect((__int64)CDesktopManager::s_pDesktopManagerInstance, a2, &v21);
    v7 = DisplayRect;
    if ( DisplayRect < 0 )
    {
      v9 = 1556LL;
LABEL_5:
      v10 = (unsigned int)DisplayRect;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)v10);
      goto LABEL_21;
    }
    v22 = v21;
    if ( !(unsigned int)GetDesktopID(1LL, &v19) )
    {
      v7 = -2147467259;
      v10 = 2147500037LL;
      v9 = 1565LL;
      goto LABEL_6;
    }
    DisplayRect = CProjectionBorderVisual::Create(&v18);
    v7 = DisplayRect;
    if ( DisplayRect < 0 )
    {
      v9 = 1568LL;
      goto LABEL_5;
    }
    *((_DWORD *)v18 + 77) = 1;
    OverlayRootVisualForDesktop = CWindowList::GetOverlayRootVisualForDesktop(
                                    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                                    v19,
                                    1);
    if ( !OverlayRootVisualForDesktop )
    {
      OverlayRootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                                      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                                      v19);
      if ( !OverlayRootVisualForDesktop )
      {
        v7 = -2147467261;
        v10 = 2147500035LL;
        v9 = 1578LL;
        goto LABEL_6;
      }
    }
    DisplayRect = VisualCollection::InsertRelative(
                    (struct CVisual *)((char *)OverlayRootVisualForDesktop + 32),
                    (unsigned __int64)v18,
                    0LL,
                    0,
                    v17);
    v7 = DisplayRect;
    if ( DisplayRect < 0 )
    {
      v9 = 1579LL;
      goto LABEL_5;
    }
    CSolidRectangleVisual::UpdateRect(v18, &v22);
    (*(void (__fastcall **)(CSolidRectangleVisual *))(*(_QWORD *)v18 + 112LL))(v18);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v18 + 3) + 64LL))(*((_QWORD *)v18 + 3));
    v12 = Element[12];
    v13 = v12 + 1;
    if ( v12 + 1 < v12 )
    {
      v7 = -2147024362;
      v14 = -2147024362;
      v15 = 181;
LABEL_24:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, v15);
      v10 = (unsigned int)v7;
      v9 = 1584LL;
      goto LABEL_6;
    }
    if ( v13 > Element[11] )
    {
      v7 = DynArrayImpl<0>::AddMultipleAndSet((__int64)(Element + 6), 8, 1, &v18);
      v14 = v7;
      if ( v7 < 0 )
      {
        v15 = 192;
        goto LABEL_24;
      }
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)Element + 3) + 8LL * Element[12]) = v18;
      Element[12] = v13;
    }
    v7 = 0;
    goto LABEL_21;
  }
  v7 = -2147418113;
LABEL_21:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v20);
  return (unsigned int)v7;
}
