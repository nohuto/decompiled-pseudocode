/*
 * XREFs of ?_AddProjectionBorderForDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800B2A88
 * Callers:
 *     ?StartDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800B09D0 (-StartDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StartFilteredDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800B0B80 (-StartFilteredDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?UpdateDisplayCaptureBorder@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z @ 0x1800B1EE0 (-UpdateDisplayCaptureBorder@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z.c)
 *     ?UpdateFilteredDisplayCaptureBorder@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z @ 0x1800B1FC0 (-UpdateFilteredDisplayCaptureBorder@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z.c)
 *     ?_AddProjectionBorderForAllDisplays@CCaptureManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800B2980 (-_AddProjectionBorderForAllDisplays@CCaptureManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z.c)
 *     ?_UpdateDisplayCaptureControllerProperties@CCaptureManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800B5214 (-_UpdateDisplayCaptureControllerProperties@CCaptureManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1.c)
 * Callees:
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K_N@Z @ 0x1800205F4 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K_N@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x180032DDC (-InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18003340C (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x180094D18 (-GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSI.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800ABFD4 (--$_Emplace_reallocate@AEBV-$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@-$vector@V-$ComPt.c)
 *     ?Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z @ 0x1800AD7CC (-Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z.c)
 *     ?UpdateRect@CSolidRectangleVisual@@QEAAXAEBUtagRECT@@@Z @ 0x1800D0264 (-UpdateRect@CSolidRectangleVisual@@QEAAXAEBUtagRECT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CCaptureManager::_AddProjectionBorderForDisplay(
        CCaptureManager *this,
        HMONITOR a2,
        struct CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY *a3)
{
  int DisplayRect; // eax
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  CMILRefCountBase *v10; // rbx
  CContainerVisual *OverlayRootVisualForDesktop; // rax
  int inserted; // edi
  __int64 v13; // rdx
  CMILRefCountBase **v14; // rdx
  CMILRefCountBase *v16[2]; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v17; // [rsp+30h] [rbp-30h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+38h] [rbp-28h] BYREF
  struct tagRECT v19; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v18 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  DisplayRect = CDesktopManager::GetDisplayRect((__int64)CDesktopManager::s_pDesktopManagerInstance, a2, v16);
  v6 = DisplayRect;
  if ( DisplayRect < 0 )
  {
    v7 = (unsigned int)DisplayRect;
    v8 = 1823LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      (const char *)v7);
    goto LABEL_21;
  }
  v19 = *(struct tagRECT *)v16;
  v17 = 0LL;
  if ( !(unsigned int)GetDesktopID(1LL, &v17) )
  {
    v6 = -2147467259;
    v7 = 2147500037LL;
    v8 = 1832LL;
    goto LABEL_5;
  }
  v16[0] = 0LL;
  v9 = CProjectionBorderVisual::Create(v16);
  v6 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x72B,
      (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      (const char *)(unsigned int)v9);
    if ( v16[0] )
      CBaseObject::Release(v16[0]);
    goto LABEL_21;
  }
  v10 = v16[0];
  *((_DWORD *)v16[0] + 65) = 1;
  OverlayRootVisualForDesktop = CWindowList::GetOverlayRootVisualForDesktop(
                                  *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                                  v17,
                                  1);
  if ( !OverlayRootVisualForDesktop )
  {
    OverlayRootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                                    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                                    v17);
    if ( !OverlayRootVisualForDesktop )
    {
      inserted = -2147467261;
      v13 = 1845LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
        (const char *)(unsigned int)inserted);
      CBaseObject::Release(v10);
      v6 = inserted;
      goto LABEL_21;
    }
  }
  inserted = CContainerVisual::InsertChildBefore(OverlayRootVisualForDesktop, (CMILRefCountBase ***)v10, 0LL);
  if ( inserted < 0 )
  {
    v13 = 1846LL;
    goto LABEL_12;
  }
  CSolidRectangleVisual::UpdateRect(v10, &v19);
  (*(void (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v10 + 88LL))(v10);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v10 + 3) + 48LL))(*((_QWORD *)v10 + 3));
  v14 = (CMILRefCountBase **)*((_QWORD *)a3 + 4);
  if ( v14 == *((CMILRefCountBase ***)a3 + 5) )
  {
    std::vector<Microsoft::WRL::ComPtr<CProjectionBorderVisual>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<CProjectionBorderVisual> const &>(
      (__int64 *)a3 + 3,
      (__int64)v14,
      v16);
    v10 = v16[0];
  }
  else
  {
    *v14 = v10;
    CMILRefCountBase::AddRef(v10);
    *((_QWORD *)a3 + 4) += 8LL;
  }
  if ( v10 )
    CBaseObject::Release(v10);
  v6 = 0;
LABEL_21:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v18);
  return v6;
}
