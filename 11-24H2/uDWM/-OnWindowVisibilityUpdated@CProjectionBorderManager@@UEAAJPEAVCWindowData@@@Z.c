/*
 * XREFs of ?OnWindowVisibilityUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180084730
 * Callers:
 *     ?OnWindowMinimized@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180084680 (-OnWindowMinimized@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowRestored@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180094AA0 (-OnWindowRestored@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?_EvaluateWindowForWindowCaptures@CProjectionBorderManager@@AEAAJPEAVCWindowData@@@Z @ 0x1800654A8 (-_EvaluateWindowForWindowCaptures@CProjectionBorderManager@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?SetExcludeSubtree@CVisualProxy@@QEAAJ_N@Z @ 0x1800778C8 (-SetExcludeSubtree@CVisualProxy@@QEAAJ_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z @ 0x1800A867C (-SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z.c)
 *     ?ShouldExcludeFromFilteredCaptures@CWindowData@@QEBA_NXZ @ 0x1800B06C0 (-ShouldExcludeFromFilteredCaptures@CWindowData@@QEBA_NXZ.c)
 *     ?_GetHostWindowHandleForProxyWindow@CProjectionBorderManager@@AEAAPEAUHWND__@@PEAVCWindowData@@@Z @ 0x1800B3FF0 (-_GetHostWindowHandleForProxyWindow@CProjectionBorderManager@@AEAAPEAUHWND__@@PEAVCWindowData@@@.c)
 *     ?_UpdateCaptureControllerCaptureState@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800CF8B8 (-_UpdateCaptureControllerCaptureState@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::OnWindowVisibilityUpdated(
        struct _RTL_GENERIC_TABLE *this,
        struct CWindowData *a2)
{
  HWND HostWindowHandleForProxyWindow; // rax
  bool v5; // r8
  int updated; // edi
  __int64 v7; // rdx
  __int64 v9; // rcx
  __int64 v10; // r14
  char ShouldExcludeFromFilteredCaptures; // r12
  int v12; // eax
  unsigned int v13; // esi
  _QWORD *v14; // rax
  _QWORD *v15; // rdi
  int v16; // eax
  unsigned int v17; // ebx
  int v18; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  PVOID RestartKey; // [rsp+58h] [rbp+10h] BYREF

  if ( !*((_DWORD *)a2 + 114)
    || *((_QWORD *)a2 + 81)
    || (HostWindowHandleForProxyWindow = CProjectionBorderManager::_GetHostWindowHandleForProxyWindow(
                                           (CProjectionBorderManager *)this,
                                           a2),
        updated = CProjectionBorderManager::_UpdateCaptureControllerCaptureState(
                    (CProjectionBorderManager *)this,
                    HostWindowHandleForProxyWindow,
                    v5),
        updated >= 0) )
  {
    if ( *((_DWORD *)a2 + 115) )
    {
      RestartKey = 0LL;
LABEL_16:
      while ( 1 )
      {
        v14 = RtlEnumerateGenericTableWithoutSplaying(this + 8, &RestartKey);
        v15 = v14;
        if ( !v14 )
          break;
        v9 = 0LL;
        if ( *((_DWORD *)v14 + 24) )
        {
          while ( 1 )
          {
            v10 = (unsigned int)v9;
            if ( **(_QWORD **)(v14[9] + 8 * v9) == *((_QWORD *)a2 + 5) )
            {
              if ( *((_QWORD *)a2 + 55) )
                break;
            }
            v9 = (unsigned int)(v9 + 1);
            if ( (unsigned int)v9 >= *((_DWORD *)v14 + 24) )
              goto LABEL_16;
          }
          if ( (int)v9 >= 0 )
          {
            _mm_lfence();
            ShouldExcludeFromFilteredCaptures = CWindowData::ShouldExcludeFromFilteredCaptures(a2);
            v12 = CVisualProxy::SetExcludeSubtree(
                    *(CVisualProxy **)(*(_QWORD *)(v15[9] + 8 * v10) + 8LL),
                    ShouldExcludeFromFilteredCaptures);
            v13 = v12;
            if ( v12 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x641,
                (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
                (const char *)(unsigned int)v12,
                v18);
              return v13;
            }
            *(_BYTE *)(32 * v10 + v15[13] + 24) = ShouldExcludeFromFilteredCaptures ^ 1;
            updated = CCaptureControllerProxy::SetWindowInfos(
                        (CCaptureControllerProxy *)v15[1],
                        (const struct _DWMCaptureWindowInformation *)v15[13],
                        *((_DWORD *)v15 + 32));
            if ( updated < 0 )
            {
              v7 = 1605LL;
              goto LABEL_5;
            }
          }
        }
      }
    }
    v16 = CProjectionBorderManager::_EvaluateWindowForWindowCaptures(this, a2);
    v17 = v16;
    if ( v16 >= 0 )
    {
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x64A,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)(unsigned int)v16,
        v18);
      return v17;
    }
  }
  else
  {
    v7 = 1578LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)(unsigned int)updated,
      v18);
    return (unsigned int)updated;
  }
}
