/*
 * XREFs of ?WindowTransitionChange@CWindowList@@UEAAJPEAUIDwmWindow@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x18001D760
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0pd_EtwEventWriteTransfer @ 0x180009F4C (McTemplateU0pd_EtwEventWriteTransfer.c)
 *     ?OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x18001D85C (-OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARG.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x18004BBA8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::WindowTransitionChange(
        CWindowList *a1,
        struct IDwmWindow *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  int SyncedWindowData; // eax
  __int64 v13; // rcx
  unsigned int v14; // edi
  struct CWindowData *v15; // rbx
  struct CWindowData *v17; // [rsp+40h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+48h] [rbp-10h] BYREF

  v18 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v17 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(a1, a2, 1, &v17);
  v14 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, 0x193Du, 0LL);
  }
  else
  {
    v15 = v17;
    if ( v17 )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0pd_EtwEventWriteTransfer(v13, (int)&UdwmTransitionTarget_Info, *((_QWORD *)v17 + 5), a3);
      CAnimationScheduler::OnWindowTransitionTargetChanged(
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23),
        v15,
        a3,
        a4,
        a5,
        a6,
        a7,
        a8);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v18);
  return v14;
}
