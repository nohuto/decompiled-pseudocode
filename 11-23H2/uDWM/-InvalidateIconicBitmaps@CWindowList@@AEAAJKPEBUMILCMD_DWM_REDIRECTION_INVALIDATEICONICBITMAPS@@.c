/*
 * XREFs of ?InvalidateIconicBitmaps@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS@@@Z @ 0x1800033C8
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18001AF70 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z @ 0x18000351C (-InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180035620 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18003CC40 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x18004CE14 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::InvalidateIconicBitmaps(
        CWindowList *this,
        unsigned int a2,
        const struct MILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS *a3)
{
  int v6; // r8d
  CWindowData *v7; // rsi
  int SyncedWindowDataByHwnd; // eax
  int v9; // r8d
  unsigned int v10; // ebx
  struct CWindowData *v11; // rdi
  CWindowData *v13[2]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v14[16]; // [rsp+40h] [rbp-30h] BYREF
  CWindowData **v15; // [rsp+50h] [rbp-20h]
  int v16; // [rsp+58h] [rbp-18h]
  int v17; // [rsp+5Ch] [rbp-14h]

  v13[1] = (CWindowData *)&CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v7 = *(CWindowData **)((char *)a3 + 4);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
  {
    v13[0] = *(CWindowData **)((char *)a3 + 4);
    v15 = v13;
    v16 = 8;
    v17 = 0;
    McGenEventWrite_EtwEventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (unsigned int)&UdwmProcessInvalidateIconicBitmaps_Start,
      v6,
      2,
      (__int64)v14);
  }
  v13[0] = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, (HWND)v7, v13);
  v10 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowDataByHwnd, 0x1481u, 0LL);
  }
  else
  {
    v11 = v13[0];
    if ( v13[0] && !CWindowData::IsImmersiveWindow(v13[0]) )
      v10 = CIconicBitmapRegistry::InvalidateBitmaps(
              *((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 29),
              v11,
              a2);
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      v13[0] = v7;
      v15 = v13;
      v16 = 8;
      v17 = 0;
      McGenEventWrite_EtwEventWriteTransfer(
        (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
        (unsigned int)&UdwmProcessInvalidateIconicBitmaps_Stop,
        v9,
        2,
        (__int64)v14);
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v10;
}
