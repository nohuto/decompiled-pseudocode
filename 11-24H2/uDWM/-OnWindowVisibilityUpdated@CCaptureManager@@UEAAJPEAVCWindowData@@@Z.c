/*
 * XREFs of ?OnWindowVisibilityUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800AF970
 * Callers:
 *     ?OnWindowMinimized@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800AF2A0 (-OnWindowMinimized@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowRestored@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800AF640 (-OnWindowRestored@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?SetExcludeSubtree@CVisualProxy@@QEAAJ_N@Z @ 0x1800778C8 (-SetExcludeSubtree@CVisualProxy@@QEAAJ_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z @ 0x1800A867C (-SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z.c)
 *     ?ShouldExcludeFromFilteredCaptures@CWindowData@@QEBA_NXZ @ 0x1800B06C0 (-ShouldExcludeFromFilteredCaptures@CWindowData@@QEBA_NXZ.c)
 *     ?_EvaluateWindowForWindowCaptures@CCaptureManager@@AEAAJPEAVCWindowData@@@Z @ 0x1800B37C8 (-_EvaluateWindowForWindowCaptures@CCaptureManager@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?_GetHostWindowHandleForProxyWindow@CProjectionBorderManager@@AEAAPEAUHWND__@@PEAVCWindowData@@@Z @ 0x1800B3FF0 (-_GetHostWindowHandleForProxyWindow@CProjectionBorderManager@@AEAAPEAUHWND__@@PEAVCWindowData@@@.c)
 *     ?_UpdateCaptureControllerCaptureState@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800B4AF0 (-_UpdateCaptureControllerCaptureState@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z.c)
 */

__int64 __fastcall CCaptureManager::OnWindowVisibilityUpdated(__int64 ****this, struct CWindowData *a2)
{
  HWND HostWindowHandleForProxyWindow; // rax
  bool v5; // r8
  int updated; // ebx
  __int64 v7; // rdx
  __int64 ***v9; // rdi
  __int64 **i; // rbx
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rax
  __int64 *v13; // rcx
  char ShouldExcludeFromFilteredCaptures; // al
  int v15; // r9d
  __int64 v16; // r12
  char v17; // r15
  __int64 v18; // r10
  int v19; // ebp
  __int64 v20; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *((_DWORD *)a2 + 114) )
  {
    if ( !*((_QWORD *)a2 + 81) )
    {
      HostWindowHandleForProxyWindow = CProjectionBorderManager::_GetHostWindowHandleForProxyWindow(
                                         (CProjectionBorderManager *)this,
                                         a2);
      updated = CCaptureManager::_UpdateCaptureControllerCaptureState(
                  (CCaptureManager *)this,
                  HostWindowHandleForProxyWindow,
                  v5);
      if ( updated < 0 )
      {
        v7 = 1193LL;
LABEL_5:
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
      v11 = 0LL;
      v12 = ((char *)i[12] - (char *)i[11]) >> 4;
      if ( v12 )
      {
        v13 = i[11];
        while ( *v13 != *((_QWORD *)a2 + 5) || !*((_QWORD *)a2 + 55) )
        {
          ++v11;
          v13 += 2;
          if ( v11 >= v12 )
            goto LABEL_18;
        }
        if ( (v11 & 0x80000000) == 0LL )
        {
          ShouldExcludeFromFilteredCaptures = CWindowData::ShouldExcludeFromFilteredCaptures(a2);
          v16 = v15;
          v17 = ShouldExcludeFromFilteredCaptures;
          v19 = CVisualProxy::SetExcludeSubtree(
                  *(CVisualProxy **)(v18 + 16LL * v15 + 8),
                  ShouldExcludeFromFilteredCaptures);
          if ( v19 < 0 )
          {
            v20 = 1214LL;
            goto LABEL_21;
          }
          LOBYTE(i[14][4 * v16 + 3]) = v17 ^ 1;
          v19 = CCaptureControllerProxy::SetWindowInfos(
                  (CCaptureControllerProxy *)i[4],
                  (const struct _DWMCaptureWindowInformation *)i[14],
                  ((char *)i[15] - (char *)i[14]) >> 5);
          if ( v19 < 0 )
          {
            v20 = 1218LL;
LABEL_21:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v20,
              (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
              (const char *)(unsigned int)v19);
            return (unsigned int)v19;
          }
        }
      }
LABEL_18:
      ;
    }
  }
  updated = CCaptureManager::_EvaluateWindowForWindowCaptures((CCaptureManager *)this, a2);
  if ( updated < 0 )
  {
    v7 = 1223LL;
    goto LABEL_5;
  }
  return 0LL;
}
