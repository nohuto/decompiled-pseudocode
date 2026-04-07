/*
 * XREFs of ?OnMagnifierSyncApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEAX_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18006B50C
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800915A0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?LookupAndValidateMagnifier@CMagnifierControl@@AEAAJ_KPEAPEAVCMagnifier@@@Z @ 0x18006B640 (-LookupAndValidateMagnifier@CMagnifierControl@@AEAAJ_KPEAPEAVCMagnifier@@@Z.c)
 *     ?OnCaptureRTBits@CMagnifier@@QEAAX_KKPEBUMAGN_UPDATE_TEXTURES_PARAM@@PEAUMILCMD_DWM_CAPTURE_METARENDERTARGET_BITSREPLY@@PEAJ@Z @ 0x18006B6E4 (-OnCaptureRTBits@CMagnifier@@QEAAX_KKPEBUMAGN_UPDATE_TEXTURES_PARAM@@PEAUMILCMD_DWM_CAPTURE_META.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMagnifierControl::OnMagnifierSyncApiMessage(
        CMagnifierControl *a1,
        int a2,
        __int64 a3,
        char a4,
        __int64 a5,
        struct CMagnifier *a6,
        int *a7,
        _DWORD *a8)
{
  int v12; // edi
  int v13; // eax
  int v15; // [rsp+68h] [rbp+10h] BYREF

  v12 = 0;
  v15 = -2147467259;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( a2 == 1073741935 && a4 )
  {
    *a8 = 40;
    a6 = 0LL;
    v12 = CMagnifierControl::LookupAndValidateMagnifier(a1, *(_QWORD *)(a3 + 48), &a6);
    if ( v12 < 0 )
    {
      v13 = -2147023728;
      if ( v12 != -2147023728 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180105630, 1LL, v12, 0x1B5u, 0LL);
        goto LABEL_8;
      }
      v12 = 0;
    }
    else
    {
      CMagnifier::OnCaptureRTBits(
        a6,
        *(_QWORD *)(a3 + 64),
        *(_DWORD *)(a3 + 4),
        (const struct MAGN_UPDATE_TEXTURES_PARAM *)(a3 + 8),
        (struct MILCMD_DWM_CAPTURE_METARENDERTARGET_BITSREPLY *)a3,
        &v15);
      v13 = v15;
    }
    if ( a7 )
      *a7 = v13;
    *(_DWORD *)a3 = 1073741936;
    *(_DWORD *)(a3 + 4) = v13;
  }
LABEL_8:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v12;
}
