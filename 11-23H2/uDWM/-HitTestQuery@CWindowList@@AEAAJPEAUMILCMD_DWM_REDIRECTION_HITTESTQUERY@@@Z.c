/*
 * XREFs of ?HitTestQuery@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_HITTESTQUERY@@@Z @ 0x18010A7DC
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18001AF70 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x18004CE14 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HitTestQuery@CTopLevelWindow@@QEAAXAEBUtagPOINT@@_NIPEAI@Z @ 0x1800E5DAC (-HitTestQuery@CTopLevelWindow@@QEAAXAEBUtagPOINT@@_NIPEAI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::HitTestQuery(CWindowList *this, struct MILCMD_DWM_REDIRECTION_HITTESTQUERY *a2)
{
  unsigned int v4; // ebp
  int v5; // edi
  int SyncedWindowDataByHwnd; // eax
  unsigned int v7; // ebx
  struct CVisual **v8; // rcx
  char v9; // r8
  unsigned int v11; // [rsp+58h] [rbp+10h] BYREF
  struct CWindowData *v12; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = -2;
  v11 = -2;
  v5 = 0;
  v12 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, *(HWND *)((char *)a2 + 4), &v12);
  v7 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd >= 0 )
  {
    if ( v12 )
    {
      v8 = (struct CVisual **)*((_QWORD *)v12 + 55);
      if ( v8 )
      {
        v9 = 1;
        if ( (*((_BYTE *)a2 + 24) & 1) == 0 && *((_DWORD *)a2 + 3) != 513 )
          v9 = *((_DWORD *)a2 + 3) == 161;
        CTopLevelWindow::HitTestQuery(v8, (const struct tagPOINT *)a2 + 2, v9, *((_DWORD *)a2 + 10), &v11);
        v4 = v11;
      }
    }
    *((_DWORD *)a2 + 11) = v4;
    LOBYTE(v5) = v4 != -2;
    *((_DWORD *)a2 + 12) = v5;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowDataByHwnd, 0x1A31u);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return v7;
}
