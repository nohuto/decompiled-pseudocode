/*
 * XREFs of ?OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z @ 0x18004F10C
 * Callers:
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180043580 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x180048060 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 *     ?ShowHide@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18004EFB0 (-ShowHide@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z @ 0x180008294 (-OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z.c)
 *     ?_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z @ 0x180008C38 (-_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z.c)
 *     ?RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z @ 0x18000AAD0 (-RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18003CC40 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationScheduler::OnWindowCloakChange(
        CAnimationScheduler *this,
        CTopLevelWindow **a2,
        unsigned __int8 a3,
        bool a4,
        bool *a5)
{
  int v5; // r15d
  CAnimationScheduler *v8; // rcx
  __int64 v9; // r8
  signed int v10; // esi
  __int64 i; // rbx
  const struct CStoryboard *v13; // r13
  int v15; // [rsp+38h] [rbp-49h] BYREF
  BOOL v16; // [rsp+40h] [rbp-41h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+48h] [rbp-39h] BYREF
  _BYTE v18[16]; // [rsp+50h] [rbp-31h] BYREF
  struct _RTL_CRITICAL_SECTION **v19; // [rsp+60h] [rbp-21h]
  int v20; // [rsp+68h] [rbp-19h]
  int v21; // [rsp+6Ch] [rbp-15h]
  int *v22; // [rsp+70h] [rbp-11h]
  int v23; // [rsp+78h] [rbp-9h]
  int v24; // [rsp+7Ch] [rbp-5h]
  BOOL *v25; // [rsp+80h] [rbp-1h]
  int v26; // [rsp+88h] [rbp+7h]
  int v27; // [rsp+8Ch] [rbp+Bh]

  v5 = a3;
  v17 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v10 = 0;
  *a5 = 0;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 10); i = (unsigned int)(i + 1) )
  {
    v13 = *(const struct CStoryboard **)(*((_QWORD *)this + 2) + 8 * i);
    if ( CAnimationScheduler::_ShouldTrack(v8, (HWND *)a2, v13, 1) )
    {
      v10 = CWindowPropertyTracker::OnWindowCloakChange((CAnimationScheduler *)((char *)this + 48), v13, a2, v5, a4);
      LOBYTE(v8) = v10 >= 0;
      *a5 |= v10 >= 0;
    }
    else if ( (_BYTE)v5 )
    {
      CTransitionVisualController::RemoveTLWClone(
        *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
        a2[55],
        0,
        0);
    }
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
  {
    v16 = *a5;
    v15 = v5;
    v17 = (struct _RTL_CRITICAL_SECTION *)a2[5];
    v19 = &v17;
    v20 = 8;
    v21 = 0;
    v22 = &v15;
    v23 = 4;
    v24 = 0;
    v25 = &v16;
    v26 = 4;
    v27 = 0;
    McGenEventWrite_EtwEventWriteTransfer(
      Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (__int64)&UdwmSystemAnimation_WindowCloak,
      v9,
      4LL,
      (__int64)v18);
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v10;
}
