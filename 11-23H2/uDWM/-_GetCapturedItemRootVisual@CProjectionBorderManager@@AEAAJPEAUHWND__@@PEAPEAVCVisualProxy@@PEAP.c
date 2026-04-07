/*
 * XREFs of ?_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAPEAVCapturedWindowSWRVisual@@@Z @ 0x1800D42A0
 * Callers:
 *     ?StartWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D1620 (-StartWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?UpdateProxyWindowForCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@00@Z @ 0x1800D3010 (-UpdateProxyWindowForCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@00@Z.c)
 *     ?UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D32E0 (-UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180008E50 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A14C8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CapturedWindowSWRVisual@@SAJPEAUHWND__@@PEAPEAV1@@Z @ 0x1800CFDCC (-Create@CapturedWindowSWRVisual@@SAJPEAUHWND__@@PEAPEAV1@@Z.c)
 *     ?_GetWindowRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@@Z @ 0x1800D4624 (-_GetWindowRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CProjectionBorderManager::_GetCapturedItemRootVisual(
        CProjectionBorderManager *this,
        HWND a2,
        struct CVisualProxy **a3,
        struct CapturedWindowSWRVisual **a4)
{
  int v7; // eax
  struct CapturedWindowSWRVisual *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int WindowRootVisual; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CapturedWindowSWRVisual *v14; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+40h] [rbp+18h] BYREF

  v14 = this;
  v15 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  *a3 = 0LL;
  *a4 = 0LL;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v14);
  v7 = CapturedWindowSWRVisual::Create(a2, &v14);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4C7,
      (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)(unsigned int)v7);
  v8 = v14;
  if ( v14 )
  {
    v9 = *((_QWORD *)v14 + 3);
    if ( v9 )
    {
      v10 = *(_QWORD *)(v9 + 48);
      if ( v10 )
        *a3 = *(struct CVisualProxy **)(v10 + 16);
    }
  }
  if ( *a3 )
  {
    v14 = 0LL;
    *a4 = v8;
    WindowRootVisual = 0;
  }
  else
  {
    WindowRootVisual = CProjectionBorderManager::_GetWindowRootVisual(v8, a2, a3);
  }
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v14);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
  return WindowRootVisual;
}
