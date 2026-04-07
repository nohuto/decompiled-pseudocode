/*
 * XREFs of ?ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800EF6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x18001A1E0 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 *     ?ForceDisconnectClientNode@CWindowData@@QEAAXXZ @ 0x18001C258 (-ForceDisconnectClientNode@CWindowData@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18003340C (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?CommitDwmChannel@CCompositor@@QEAAJXZ @ 0x18003EF80 (-CommitDwmChannel@CCompositor@@QEAAJXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x1800865C8 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093CB4 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::ForceDisconnectClientNode(CWindowList *this, struct IDwmWindow *a2)
{
  unsigned int v4; // edi
  CWindowData *v5; // rbx
  struct CVisual *RootVisualForDesktop; // rax
  CDesktopManager *v7; // rcx
  int updated; // eax
  __int64 v9; // r8
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+30h] [rbp-28h] BYREF
  CWindowData *v12[2]; // [rsp+38h] [rbp-20h] BYREF

  v11 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v12[0] = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, v12);
  v5 = v12[0];
  if ( v12[0] )
  {
    CWindowData::ForceDisconnectClientNode(v12[0]);
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, *((_QWORD *)v5 + 17));
    updated = CDesktopManager::UpdateSceneImpl(v7, RootVisualForDesktop);
    v4 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x1AADu, 0LL);
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McGenEventWrite_EtwEventWriteTransfer(
          Microsoft_Windows_Dwm_Udwm_Provider_Context,
          (__int64)&CommitChannel_Disconnect,
          v9,
          1LL,
          (__int64)v12);
      CCompositor::CommitDwmChannel(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  return v4;
}
