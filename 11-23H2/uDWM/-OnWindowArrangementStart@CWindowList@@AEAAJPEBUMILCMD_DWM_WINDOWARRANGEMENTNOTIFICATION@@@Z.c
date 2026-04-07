/*
 * XREFs of ?OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x18010B534
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180049B90 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800152B0 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEAVCWindowData@@AEBUtagRECT@@@Z @ 0x180105E64 (-OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEAVCWindowData@@AEBUtagRECT@@@Z.c)
 *     ?EnsureAcrylicSheet@CWindowList@@AEAAJXZ @ 0x180109EAC (-EnsureAcrylicSheet@CWindowList@@AEAAJXZ.c)
 *     ?EnsureWindowArrangementTransition@CWindowList@@AEAAJXZ @ 0x180109F64 (-EnsureWindowArrangementTransition@CWindowList@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::OnWindowArrangementStart(
        CWindowArrangementTransition **this,
        const struct MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION *a2)
{
  unsigned int v4; // ebx
  struct CWindowData *WindowDataByHwnd; // rax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v10 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( this[88]
    || (WindowDataByHwnd = CWindowList::FindWindowDataByHwnd((CWindowList *)this, *((HWND *)a2 + 1)),
        (this[88] = WindowDataByHwnd) != 0LL) )
  {
    v6 = CWindowList::EnsureAcrylicSheet((CWindowList *)this);
    v4 = v6;
    if ( v6 >= 0 )
    {
      v7 = CWindowList::EnsureWindowArrangementTransition((CWindowList *)this);
      v4 = v7;
      if ( v7 >= 0 )
      {
        v8 = CWindowArrangementTransition::OnWindowArrangementStart(this[67], this[88], (const struct tagRECT *)a2 + 1);
        v4 = v8;
        if ( v8 >= 0 )
          *((_BYTE *)this[88] + 677) |= 0x40u;
        else
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x1E54u);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x1E53u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x1E52u);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
  return v4;
}
