/*
 * XREFs of ?PostActivateLivePreview@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z @ 0x18000946C
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18001AF70 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?PostActivateLivePreview@CDesktopManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z @ 0x18001C9E4 (-PostActivateLivePreview@CDesktopManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x18004CE14 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x180107D44 (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::PostActivateLivePreview(CWindowList *this, HWND *a2)
{
  __int64 v4; // rsi
  int SyncedWindowDataByHwnd; // eax
  unsigned int v6; // ebx
  CWindowData *v7; // rbx
  int v8; // eax
  struct CWindowData *MDIOwner; // rax
  CWindowData *v11; // [rsp+58h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v11 = 0LL;
  v4 = 0LL;
  if ( *((_DWORD *)a2 + 2) )
  {
    while ( 1 )
    {
      SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a2[v4 + 4], &v11);
      v6 = SyncedWindowDataByHwnd;
      if ( SyncedWindowDataByHwnd < 0 )
        break;
      if ( !*((_DWORD *)a2 + 1) )
      {
        v7 = v11;
        if ( v11 )
        {
          if ( (*((_BYTE *)v11 + 673) & 1) != 0 )
          {
            MDIOwner = CWindowData::GetMDIOwner(v11);
            if ( MDIOwner )
              v7 = MDIOwner;
            v11 = v7;
          }
          if ( (*((_DWORD *)v7 + 29) & 0x20000000) != 0 )
            *((_BYTE *)v7 + 675) |= 8u;
        }
      }
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= *((_DWORD *)a2 + 2) )
        goto LABEL_6;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowDataByHwnd, 0x1D87u, 0LL);
  }
  else
  {
LABEL_6:
    v8 = CDesktopManager::PostActivateLivePreview(
           CDesktopManager::s_pDesktopManagerInstance,
           (const struct MILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW *)a2);
    v6 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x1D9Eu, 0LL);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  return v6;
}
