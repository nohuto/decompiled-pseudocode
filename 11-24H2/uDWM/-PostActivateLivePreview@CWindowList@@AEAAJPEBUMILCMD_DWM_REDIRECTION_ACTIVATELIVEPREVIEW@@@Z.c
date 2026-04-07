/*
 * XREFs of ?PostActivateLivePreview@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z @ 0x1800F19A8
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800915A0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x180008798 (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180093C5C (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?PostActivateLivePreview@CDesktopManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z @ 0x1800943DC (-PostActivateLivePreview@CDesktopManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::PostActivateLivePreview(CWindowList *this, HWND *a2)
{
  __int64 i; // rsi
  CWindowData *v5; // rbx
  struct CWindowData *MDIOwner; // rax
  int v7; // eax
  unsigned int v8; // ebx
  CWindowData *v10; // [rsp+58h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v10 = 0LL;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 2); i = (unsigned int)(i + 1) )
  {
    CWindowList::GetSyncedWindowDataByHwnd(this, a2[i + 4], &v10);
    if ( !*((_DWORD *)a2 + 1) )
    {
      v5 = v10;
      if ( v10 )
      {
        if ( (*((_BYTE *)v10 + 737) & 1) != 0 )
        {
          MDIOwner = CWindowData::GetMDIOwner((HWND *)v10);
          if ( MDIOwner )
            v5 = MDIOwner;
          v10 = v5;
        }
        if ( (*((_DWORD *)v5 + 29) & 0x20000000) != 0 )
          *((_BYTE *)v5 + 739) |= 8u;
      }
    }
  }
  v7 = CDesktopManager::PostActivateLivePreview(
         CDesktopManager::s_pDesktopManagerInstance,
         (const struct MILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW *)a2);
  v8 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x1EBFu, 0LL);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  return v8;
}
