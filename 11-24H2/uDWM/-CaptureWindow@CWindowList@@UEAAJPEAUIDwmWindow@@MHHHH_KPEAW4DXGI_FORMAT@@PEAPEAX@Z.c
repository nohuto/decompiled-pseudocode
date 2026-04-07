/*
 * XREFs of ?CaptureWindow@CWindowList@@UEAAJPEAUIDwmWindow@@MHHHH_KPEAW4DXGI_FORMAT@@PEAPEAX@Z @ 0x1800EE470
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180021E28 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SyncCaptureBits@CLegacyVisualCaptureRenderTargetProxy@@QEAAJPEBVCVisualProxy@@MHHHH_KPEAW4DXGI_FORMAT@@PEAPEAX@Z @ 0x180082714 (-SyncCaptureBits@CLegacyVisualCaptureRenderTargetProxy@@QEAAJPEBVCVisualProxy@@MHHHH_KPEAW4DXGI_.c)
 *     ?GetCanvasRootVisualProxy@CTopLevelWindow@@QEAAPEAVCVisualProxy@@XZ @ 0x18008880C (-GetCanvasRootVisualProxy@CTopLevelWindow@@QEAAPEAVCVisualProxy@@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093CB4 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?CreateLegacyVisualCaptureRenderTargetProxy@CCompositor@@QEAAJPEAPEAVCLegacyVisualCaptureRenderTargetProxy@@@Z @ 0x18009B40C (-CreateLegacyVisualCaptureRenderTargetProxy@CCompositor@@QEAAJPEAPEAVCLegacyVisualCaptureRenderT.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWindowList::CaptureWindow(CWindowList *this, struct IDwmWindow *a2, float a3)
{
  CTopLevelWindow *v5; // rcx
  const struct CVisualProxy *CanvasRootVisualProxy; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // r9d
  unsigned int v11; // [rsp+20h] [rbp-68h]
  CLegacyVisualCaptureRenderTargetProxy *v12; // [rsp+50h] [rbp-38h] BYREF
  struct CWindowData *v13; // [rsp+58h] [rbp-30h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+60h] [rbp-28h] BYREF

  v14 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v12 = 0LL;
  v13 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, &v13);
  if ( !v13
    || (v5 = (CTopLevelWindow *)*((_QWORD *)v13 + 55)) == 0LL
    || (CanvasRootVisualProxy = CTopLevelWindow::GetCanvasRootVisualProxy(v5)) == 0LL )
  {
    v8 = -2147024890;
    v11 = 6587;
    v9 = -2147024890;
    goto LABEL_10;
  }
  v7 = CCompositor::CreateLegacyVisualCaptureRenderTargetProxy(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
         &v12);
  v8 = v7;
  if ( v7 < 0 )
  {
    v11 = 6588;
    goto LABEL_7;
  }
  v7 = CLegacyVisualCaptureRenderTargetProxy::SyncCaptureBits(v12, CanvasRootVisualProxy, a3);
  v8 = v7;
  if ( v7 < 0 )
  {
    v11 = 6589;
LABEL_7:
    v9 = v7;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, v11, 0LL);
  }
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v12);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return v8;
}
