/*
 * XREFs of ?ShellWindowChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE@@@Z @ 0x18007C694
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180090650 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindElement@?$CGenericTableMap@_KUCDesktop@@@@QEAAPEAUCDesktop@@_K@Z @ 0x18003318C (-FindElement@-$CGenericTableMap@_KUCDesktop@@@@QEAAPEAUCDesktop@@_K@Z.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18003E04C (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?PostActivateLivePreview@CDesktopManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z @ 0x1800943DC (-PostActivateLivePreview@CDesktopManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@.c)
 *     ?UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z @ 0x180098294 (-UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::ShellWindowChange(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rbp
  _QWORD *Element; // rax
  int v7; // eax
  int updated; // eax
  int v10; // [rsp+30h] [rbp-38h] BYREF
  __int128 v11; // [rsp+34h] [rbp-34h]
  __int64 v12; // [rsp+44h] [rbp-24h]
  int v13; // [rsp+4Ch] [rbp-1Ch]

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v5 = *(_QWORD *)((char *)a2 + 4);
  if ( CWindowList::GetShellWindowForDesktop(this, *(_QWORD *)((char *)a2 + 12)) != v5 )
  {
    Element = CGenericTableMap<unsigned __int64,CDesktop>::FindElement(
                (struct _RTL_GENERIC_TABLE *)((char *)this + 8),
                *(_QWORD *)((char *)a2 + 12));
    if ( Element )
      Element[8] = v5;
    if ( *(_QWORD *)((char *)a2 + 4)
      || (v10 = 1073741881,
          v11 = 0LL,
          v13 = 0,
          v12 = 1LL,
          v7 = CDesktopManager::PostActivateLivePreview(
                 CDesktopManager::s_pDesktopManagerInstance,
                 (const struct MILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW *)&v10),
          v4 = v7,
          v7 >= 0) )
    {
      updated = CWindowList::UpdateDesktopWindowReplacement(this, *(_QWORD *)((char *)a2 + 12));
      v4 = updated;
      if ( updated < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x1D85u, 0LL);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x1D82u, 0LL);
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v4;
}
