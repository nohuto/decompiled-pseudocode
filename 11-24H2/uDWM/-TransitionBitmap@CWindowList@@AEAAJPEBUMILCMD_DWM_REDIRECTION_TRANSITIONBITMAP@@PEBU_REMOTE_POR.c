/*
 * XREFs of ?TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x1800F36DC
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800915A0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ @ 0x18004A310 (-GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?RegisterTransitionBitmap@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@22PEAX_K@Z @ 0x1800DDA48 (-RegisterTransitionBitmap@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@.c)
 *     ?RegisterTransitionBitmap@TransitionManager@Transitions@Udwm@winrt@@QEAAJPEAUHWND__@@AEBUtagRECT@@PEAX_K@Z @ 0x1800E7170 (-RegisterTransitionBitmap@TransitionManager@Transitions@Udwm@winrt@@QEAAJPEAUHWND__@@AEBUtagRECT.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::TransitionBitmap(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_TRANSITIONBITMAP *a2,
        const struct _REMOTE_PORT_VIEW *a3)
{
  unsigned int v5; // ebx
  const struct std::nothrow_t *v6; // rdx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  PVOID ViewBase; // r11
  int v11; // r8d
  int v12; // eax
  winrt::Udwm::Transitions::TransitionManager *Current; // rax
  int v14; // eax
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+50h] [rbp+8h] BYREF

  v16 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v5 = -2147467259;
  v6 = *(const struct std::nothrow_t **)((char *)a2 + 4);
  if ( v6 )
  {
    v7 = 0;
    if ( *((_DWORD *)a2 + 14) - *((_DWORD *)a2 + 12) >= 0 )
      v7 = *((_DWORD *)a2 + 14) - *((_DWORD *)a2 + 12);
    if ( v7 > 0 )
    {
      v8 = (unsigned int)(*((_DWORD *)a2 + 15) - *((_DWORD *)a2 + 13));
      v9 = 0;
      if ( (int)v8 >= 0 )
        v9 = *((_DWORD *)a2 + 15) - *((_DWORD *)a2 + 13);
      if ( v9 > 0 )
      {
        if ( a3->ViewSize )
        {
          ViewBase = a3->ViewBase;
          if ( ViewBase )
          {
            v11 = *((_DWORD *)a2 + 3);
            if ( (unsigned int)(v11 - 95) <= 7 )
            {
              Current = winrt::Udwm::Transitions::TransitionManager::GetCurrent(v8, v6);
              v14 = winrt::Udwm::Transitions::TransitionManager::RegisterTransitionBitmap(
                      Current,
                      *(HWND *)((char *)a2 + 4),
                      (const struct tagRECT *)a2 + 3,
                      a3->ViewBase,
                      a3->ViewSize);
              v5 = v14;
              if ( v14 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x1612u, 0LL);
            }
            else
            {
              v12 = CTransitionVisualController::RegisterTransitionBitmap(
                      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24),
                      (__int64)v6,
                      v11,
                      (_DWORD *)a2 + 12,
                      (_OWORD *)a2 + 1,
                      (__int128 *)a2 + 2,
                      ViewBase,
                      a3->ViewSize);
              v5 = v12;
              if ( v12 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x161Eu, 0LL);
            }
          }
        }
      }
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v16);
  return v5;
}
