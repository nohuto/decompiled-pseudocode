/*
 * XREFs of ?InvalidateIconicBitmaps@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS@@@Z @ 0x180093B7C
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800915A0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001C5C4 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z @ 0x180077678 (-InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180093C5C (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x180098C50 (McTemplateU0p_EtwEventWriteTransfer.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::InvalidateIconicBitmaps(
        CWindowList *this,
        int a2,
        const struct MILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS *a3)
{
  __int64 v6; // rcx
  HWND v7; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rcx
  HWND *v10; // rsi
  CWindowData *v12; // [rsp+50h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+58h] [rbp+20h]

  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v7 = *(HWND *)((char *)a3 + 4);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0p_EtwEventWriteTransfer(v6, &UdwmProcessInvalidateIconicBitmaps_Start, *(_QWORD *)((char *)a3 + 4));
  v8 = 0;
  v12 = 0LL;
  CWindowList::GetSyncedWindowDataByHwnd(this, v7, &v12);
  v10 = (HWND *)v12;
  if ( v12 && !CWindowData::IsImmersiveWindow(v12) )
    v8 = CIconicBitmapRegistry::InvalidateBitmaps(
           *((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 28),
           v10,
           a2);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0p_EtwEventWriteTransfer(v9, &UdwmProcessInvalidateIconicBitmaps_Stop, v7);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v8;
}
