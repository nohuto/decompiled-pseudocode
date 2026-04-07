/*
 * XREFs of ?OnWindowOffsetUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800AF400
 * Callers:
 *     <none>
 * Callees:
 *     ?SetOffset@CVisualProxy@@QEAAJNNN@Z @ 0x180021F0C (-SetOffset@CVisualProxy@@QEAAJNNN@Z.c)
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x1800405C0 (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ?SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z @ 0x1800A867C (-SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z.c)
 *     ?_EvaluateWindowForWindowCaptures@CCaptureManager@@AEAAJPEAVCWindowData@@@Z @ 0x1800B37C8 (-_EvaluateWindowForWindowCaptures@CCaptureManager@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?_GetHostWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z @ 0x1800B3F60 (-_GetHostWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z.c)
 *     ?_UpdateCaptureControllerContentOffsetFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800B4C54 (-_UpdateCaptureControllerContentOffsetFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@PEAVCCaptureC.c)
 */

__int64 __fastcall CCaptureManager::OnWindowOffsetUpdated(__int64 ****this, struct CWindowData *a2)
{
  HWND v4; // rdx
  CCaptureManager *v5; // rcx
  int HostWindowHandle; // ebx
  __int64 v7; // rdx
  HWND v9; // rbp
  __int64 ***v10; // rdi
  __int64 **i; // rbx
  int updated; // r14d
  __int64 v13; // rdx
  __int64 ***v14; // rdi
  __int64 **j; // rbx
  __int64 *v16; // rcx
  unsigned __int64 v17; // rbp
  __int64 *v18; // rdx
  __int64 v19; // r8
  int v20; // eax
  unsigned int v21; // ebp
  struct tagRECT v22; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( !*((_QWORD *)a2 + 81) && *((_DWORD *)a2 + 114) )
  {
    v4 = (HWND)*((_QWORD *)a2 + 5);
    *(_QWORD *)&v22.left = 0LL;
    HostWindowHandle = CCaptureManager::_GetHostWindowHandle((CCaptureManager *)this, v4, (HWND *)&v22);
    if ( HostWindowHandle < 0 )
    {
      v7 = 1043LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
        (const char *)(unsigned int)HostWindowHandle);
      return (unsigned int)HostWindowHandle;
    }
    v9 = *(HWND *)&v22.left;
    if ( !*(_QWORD *)&v22.left )
      v9 = (HWND)*((_QWORD *)a2 + 5);
    v10 = this[2];
    for ( i = *v10; i != (__int64 **)v10; i = (__int64 **)*i )
    {
      if ( i[5] == (__int64 *)v9 )
      {
        updated = CCaptureManager::_UpdateCaptureControllerContentOffsetFromWindow(
                    v5,
                    v9,
                    (struct CCaptureControllerProxy *)i[4]);
        if ( updated < 0 )
        {
          v13 = 1054LL;
LABEL_14:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v13,
            (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
            (const char *)(unsigned int)updated);
          return (unsigned int)updated;
        }
      }
    }
  }
  if ( *((_DWORD *)a2 + 115) )
  {
    v14 = this[18];
    for ( j = *v14; j != (__int64 **)v14; j = (__int64 **)*j )
    {
      v16 = j[11];
      v17 = 0LL;
      if ( ((char *)j[12] - (char *)v16) >> 4 )
      {
        v18 = j[11];
        while ( 1 )
        {
          if ( *v18 == *((_QWORD *)a2 + 5) )
          {
            v19 = *((_QWORD *)a2 + 55);
            if ( v19 )
              break;
          }
          ++v17;
          v18 += 2;
          if ( v17 >= ((char *)j[12] - (char *)v16) >> 4 )
            goto LABEL_26;
        }
        updated = CVisualProxy::SetOffset(
                    (CVisualProxy *)v16[2 * v17 + 1],
                    (double)*(int *)(v19 + 64),
                    (double)(int)HIDWORD(*(_QWORD *)(v19 + 64)),
                    0.0);
        if ( updated < 0 )
        {
          v13 = 1068LL;
          goto LABEL_14;
        }
        *(struct tagRECT *)&j[14][4 * v17 + 1] = *CTopLevelWindow::GetActualWindowRect(
                                                    *((CTopLevelWindow **)a2 + 55),
                                                    &v22,
                                                    0,
                                                    1,
                                                    1);
        v20 = CCaptureControllerProxy::SetWindowInfos(
                (CCaptureControllerProxy *)j[4],
                (const struct _DWMCaptureWindowInformation *)j[14],
                ((char *)j[15] - (char *)j[14]) >> 5);
        v21 = v20;
        if ( v20 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x42F,
            (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
            (const char *)(unsigned int)v20);
          return v21;
        }
      }
LABEL_26:
      ;
    }
  }
  HostWindowHandle = CCaptureManager::_EvaluateWindowForWindowCaptures((CCaptureManager *)this, a2);
  if ( HostWindowHandle < 0 )
  {
    v7 = 1078LL;
    goto LABEL_5;
  }
  return 0LL;
}
