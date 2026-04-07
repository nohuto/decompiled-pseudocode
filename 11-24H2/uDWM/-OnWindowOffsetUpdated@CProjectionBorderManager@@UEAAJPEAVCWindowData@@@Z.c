/*
 * XREFs of ?OnWindowOffsetUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180065270
 * Callers:
 *     <none>
 * Callees:
 *     ?SetOffset@CVisualProxy@@QEAAJNNN@Z @ 0x180021F0C (-SetOffset@CVisualProxy@@QEAAJNNN@Z.c)
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x1800405C0 (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     ?_EvaluateWindowForWindowCaptures@CProjectionBorderManager@@AEAAJPEAVCWindowData@@@Z @ 0x1800654A8 (-_EvaluateWindowForWindowCaptures@CProjectionBorderManager@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ?SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z @ 0x1800A867C (-SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z.c)
 *     ?_GetHostWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z @ 0x1800B3F60 (-_GetHostWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z.c)
 *     ?_UpdateCaptureControllerContentOffsetFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800CF9FC (-_UpdateCaptureControllerContentOffsetFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAV.c)
 */

__int64 __fastcall CProjectionBorderManager::OnWindowOffsetUpdated(
        struct _RTL_GENERIC_TABLE *this,
        struct CWindowData *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  HWND v7; // rdx
  int HostWindowHandle; // edi
  __int64 v9; // rdx
  HWND v10; // rdi
  struct CCaptureControllerProxy **v11; // rax
  CProjectionBorderManager *v12; // rcx
  int updated; // esi
  __int64 v14; // rdx
  PVOID v15; // rdi
  __int64 i; // rdx
  __int64 v17; // r14
  __int64 v18; // r8
  __int64 v19; // rcx
  int v20; // [rsp+20h] [rbp-58h]
  PVOID RestartKey; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT v22; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( !*((_QWORD *)a2 + 81) && *((_DWORD *)a2 + 114) )
  {
    v7 = (HWND)*((_QWORD *)a2 + 5);
    *(_QWORD *)&v22.left = 0LL;
    HostWindowHandle = CCaptureManager::_GetHostWindowHandle((CCaptureManager *)this, v7, (HWND *)&v22);
    if ( HostWindowHandle < 0 )
    {
      v9 = 1417LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)(unsigned int)HostWindowHandle,
        v20);
      return (unsigned int)HostWindowHandle;
    }
    v10 = *(HWND *)&v22.left;
    if ( !*(_QWORD *)&v22.left )
      v10 = (HWND)*((_QWORD *)a2 + 5);
    RestartKey = 0LL;
    while ( 1 )
    {
      v11 = (struct CCaptureControllerProxy **)RtlEnumerateGenericTableWithoutSplaying(this + 6, &RestartKey);
      if ( !v11 )
        break;
      if ( v11[2] == (struct CCaptureControllerProxy *)v10 )
      {
        updated = CProjectionBorderManager::_UpdateCaptureControllerContentOffsetFromWindow(v12, v10, v11[1]);
        if ( updated < 0 )
        {
          v14 = 1430LL;
LABEL_17:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v14,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
            (const char *)(unsigned int)updated,
            v20);
          return (unsigned int)updated;
        }
      }
    }
  }
  if ( *((_DWORD *)a2 + 115) )
  {
    RestartKey = 0LL;
LABEL_19:
    while ( 1 )
    {
      v15 = RtlEnumerateGenericTableWithoutSplaying(this + 8, &RestartKey);
      if ( !v15 )
        break;
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)v15 + 24); i = (unsigned int)(i + 1) )
      {
        v17 = (unsigned int)i;
        v18 = *(_QWORD *)(*((_QWORD *)v15 + 9) + 8 * i);
        if ( *(_QWORD *)v18 == *((_QWORD *)a2 + 5) )
        {
          v19 = *((_QWORD *)a2 + 55);
          if ( v19 )
          {
            updated = CVisualProxy::SetOffset(
                        *(CVisualProxy **)(v18 + 8),
                        (double)*(int *)(v19 + 64),
                        (double)(int)HIDWORD(*(_QWORD *)(v19 + 64)),
                        0.0);
            if ( updated < 0 )
            {
              v14 = 1446LL;
              goto LABEL_17;
            }
            *(struct tagRECT *)(32 * v17 + *((_QWORD *)v15 + 13) + 8) = *CTopLevelWindow::GetActualWindowRect(
                                                                           *((CTopLevelWindow **)a2 + 55),
                                                                           &v22,
                                                                           0,
                                                                           1,
                                                                           1);
            HostWindowHandle = CCaptureControllerProxy::SetWindowInfos(
                                 *((CCaptureControllerProxy **)v15 + 1),
                                 *((const struct _DWMCaptureWindowInformation **)v15 + 13),
                                 *((_DWORD *)v15 + 32));
            if ( HostWindowHandle < 0 )
            {
              v9 = 1449LL;
              goto LABEL_8;
            }
            goto LABEL_19;
          }
        }
      }
    }
  }
  v4 = CProjectionBorderManager::_EvaluateWindowForWindowCaptures((CProjectionBorderManager *)this, a2);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5B0,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
    (const char *)(unsigned int)v4,
    v20);
  return v5;
}
