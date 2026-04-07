/*
 * XREFs of ?OnWindowSizeUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800650D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x1800405C0 (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     ?_EvaluateWindowForWindowCaptures@CProjectionBorderManager@@AEAAJPEAVCWindowData@@@Z @ 0x1800654A8 (-_EvaluateWindowForWindowCaptures@CProjectionBorderManager@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ?SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z @ 0x1800A867C (-SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z.c)
 *     ?_GetHostWindowHandleForProxyWindow@CProjectionBorderManager@@AEAAPEAUHWND__@@PEAVCWindowData@@@Z @ 0x1800B3FF0 (-_GetHostWindowHandleForProxyWindow@CProjectionBorderManager@@AEAAPEAUHWND__@@PEAVCWindowData@@@.c)
 *     ?_UpdateCaptureControllerSize@CProjectionBorderManager@@AEAAJPEAUHWND__@@@Z @ 0x1800CFDAC (-_UpdateCaptureControllerSize@CProjectionBorderManager@@AEAAJPEAUHWND__@@@Z.c)
 *     ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z @ 0x1800D02C8 (-UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::OnWindowSizeUpdated(
        struct _RTL_GENERIC_TABLE *this,
        struct CWindowData *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  CProjectionBorderVisual *v7; // rcx
  HWND HostWindowHandleForProxyWindow; // rax
  int updated; // edi
  __int64 v10; // rdx
  PVOID v11; // rdi
  __int64 i; // r8
  CTopLevelWindow *v13; // rcx
  int v14; // [rsp+20h] [rbp-48h]
  PVOID RestartKey; // [rsp+30h] [rbp-38h] BYREF
  struct tagRECT v16; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( !*((_DWORD *)a2 + 114) )
    goto LABEL_23;
  v7 = (CProjectionBorderVisual *)*((_QWORD *)a2 + 58);
  if ( v7 )
    CProjectionBorderVisual::UpdateRectFromWindow(v7, a2);
  if ( *((_QWORD *)a2 + 81)
    || (HostWindowHandleForProxyWindow = CProjectionBorderManager::_GetHostWindowHandleForProxyWindow(v7, a2),
        updated = CProjectionBorderManager::_UpdateCaptureControllerSize(
                    (CProjectionBorderManager *)this,
                    HostWindowHandleForProxyWindow),
        updated >= 0) )
  {
LABEL_23:
    if ( *((_DWORD *)a2 + 115) )
    {
      RestartKey = 0LL;
LABEL_13:
      while ( 1 )
      {
        v11 = RtlEnumerateGenericTableWithoutSplaying(this + 8, &RestartKey);
        if ( !v11 )
          break;
        for ( i = 0LL; (unsigned int)i < *((_DWORD *)v11 + 24); i = (unsigned int)(i + 1) )
        {
          if ( **(_QWORD **)(*((_QWORD *)v11 + 9) + 8 * i) == *((_QWORD *)a2 + 5) )
          {
            v13 = (CTopLevelWindow *)*((_QWORD *)a2 + 55);
            if ( v13 )
            {
              *(struct tagRECT *)(*((_QWORD *)v11 + 13) + 32LL * (unsigned int)i + 8) = *CTopLevelWindow::GetActualWindowRect(
                                                                                           v13,
                                                                                           &v16,
                                                                                           0,
                                                                                           1,
                                                                                           1);
              updated = CCaptureControllerProxy::SetWindowInfos(
                          *((CCaptureControllerProxy **)v11 + 1),
                          *((const struct _DWMCaptureWindowInformation **)v11 + 13),
                          *((_DWORD *)v11 + 32));
              if ( updated >= 0 )
                goto LABEL_13;
              v10 = 1026LL;
              goto LABEL_11;
            }
          }
        }
      }
    }
    v4 = CProjectionBorderManager::_EvaluateWindowForWindowCaptures((CProjectionBorderManager *)this, a2);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x409,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)(unsigned int)v4,
        v14);
      return v5;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    v10 = 1010LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)(unsigned int)updated,
      v14);
    return (unsigned int)updated;
  }
}
