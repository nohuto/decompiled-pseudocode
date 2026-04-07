/*
 * XREFs of ?OnWindowSizeUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800AF6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x1800405C0 (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ?SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z @ 0x1800A867C (-SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z.c)
 *     ?_EvaluateWindowForWindowCaptures@CCaptureManager@@AEAAJPEAVCWindowData@@@Z @ 0x1800B37C8 (-_EvaluateWindowForWindowCaptures@CCaptureManager@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?_GetHostWindowHandleForProxyWindow@CProjectionBorderManager@@AEAAPEAUHWND__@@PEAVCWindowData@@@Z @ 0x1800B3FF0 (-_GetHostWindowHandleForProxyWindow@CProjectionBorderManager@@AEAAPEAUHWND__@@PEAVCWindowData@@@.c)
 *     ?_UpdateCaptureControllerSize@CCaptureManager@@AEAAJPEAUHWND__@@@Z @ 0x1800B4F2C (-_UpdateCaptureControllerSize@CCaptureManager@@AEAAJPEAUHWND__@@@Z.c)
 *     ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z @ 0x1800D02C8 (-UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CCaptureManager::OnWindowSizeUpdated(__int64 ****this, struct CWindowData *a2)
{
  CProjectionBorderVisual *v4; // rcx
  HWND HostWindowHandleForProxyWindow; // rax
  int updated; // ebx
  __int64 v7; // rdx
  __int64 ***v9; // rdi
  __int64 **i; // rbx
  char *v11; // rcx
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rax
  CTopLevelWindow *v14; // r10
  int v15; // eax
  unsigned int v16; // ebp
  struct tagRECT v17; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( *((_DWORD *)a2 + 114) )
  {
    v4 = (CProjectionBorderVisual *)*((_QWORD *)a2 + 58);
    if ( v4 )
      CProjectionBorderVisual::UpdateRectFromWindow(v4, a2);
    if ( !*((_QWORD *)a2 + 81) )
    {
      HostWindowHandleForProxyWindow = CProjectionBorderManager::_GetHostWindowHandleForProxyWindow(v4, a2);
      updated = CCaptureManager::_UpdateCaptureControllerSize((CCaptureManager *)this, HostWindowHandleForProxyWindow);
      if ( updated < 0 )
      {
        v7 = 629LL;
LABEL_7:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v7,
          (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
          (const char *)(unsigned int)updated);
        return (unsigned int)updated;
      }
    }
  }
  if ( *((_DWORD *)a2 + 115) )
  {
    v9 = this[18];
    for ( i = *v9; i != (__int64 **)v9; i = (__int64 **)*i )
    {
      v11 = (char *)i[11];
      v12 = 0LL;
      v13 = ((char *)i[12] - v11) >> 4;
      if ( v13 )
      {
        while ( 1 )
        {
          if ( *(_QWORD *)v11 == *((_QWORD *)a2 + 5) )
          {
            v14 = (CTopLevelWindow *)*((_QWORD *)a2 + 55);
            if ( v14 )
              break;
          }
          ++v12;
          v11 += 16;
          if ( v12 >= v13 )
            goto LABEL_17;
        }
        *(struct tagRECT *)&i[14][4 * v12 + 1] = *CTopLevelWindow::GetActualWindowRect(v14, &v17, 0, 1, 1);
        v15 = CCaptureControllerProxy::SetWindowInfos(
                (CCaptureControllerProxy *)i[4],
                (const struct _DWMCaptureWindowInformation *)i[14],
                ((char *)i[15] - (char *)i[14]) >> 5);
        v16 = v15;
        if ( v15 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x283,
            (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
            (const char *)(unsigned int)v15);
          return v16;
        }
      }
LABEL_17:
      ;
    }
  }
  updated = CCaptureManager::_EvaluateWindowForWindowCaptures((CCaptureManager *)this, a2);
  if ( updated < 0 )
  {
    v7 = 650LL;
    goto LABEL_7;
  }
  return 0LL;
}
