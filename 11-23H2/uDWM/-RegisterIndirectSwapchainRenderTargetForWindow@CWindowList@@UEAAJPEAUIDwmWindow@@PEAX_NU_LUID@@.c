/*
 * XREFs of ?RegisterIndirectSwapchainRenderTargetForWindow@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX_NU_LUID@@@Z @ 0x18010BAC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x18004BBA8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z @ 0x1800E63DC (-RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::RegisterIndirectSwapchainRenderTargetForWindow(
        CWindowList *this,
        struct IDwmWindow *a2,
        HANDLE hObject,
        char a4,
        struct _LUID a5)
{
  int SyncedWindowData; // ebx
  unsigned int v10; // eax
  CTopLevelWindow *v11; // rcx
  int v12; // eax
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+30h] [rbp-18h] BYREF
  struct CWindowData *v15; // [rsp+60h] [rbp+18h] BYREF

  v14 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v15 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v15);
  if ( SyncedWindowData < 0 )
  {
    v10 = 6290;
    goto LABEL_8;
  }
  if ( !v15 || (v11 = (CTopLevelWindow *)*((_QWORD *)v15 + 55)) == 0LL )
  {
    SyncedWindowData = -2147467261;
    v10 = 6293;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowData, v10);
    if ( hObject )
      CloseHandle(hObject);
    goto LABEL_10;
  }
  v12 = CTopLevelWindow::RegisterIndirectSwapChainRenderTarget(v11, hObject, a4, a5);
  SyncedWindowData = v12;
  if ( v12 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x189Cu);
LABEL_10:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return (unsigned int)SyncedWindowData;
}
