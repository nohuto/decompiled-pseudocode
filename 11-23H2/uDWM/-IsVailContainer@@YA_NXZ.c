/*
 * XREFs of ?IsVailContainer@@YA_NXZ @ 0x18010DE28
 * Callers:
 *     ?GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x18000802C (-GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z.c)
 *     ?UpdateRemoteAppRenderTargetRoot@CTopLevelWindow@@QEAAJXZ @ 0x18000A698 (-UpdateRemoteAppRenderTargetRoot@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x18003CCA0 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?MonitorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003CF00 (-MonitorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?HitTestQuery@CTopLevelWindow@@QEAAXAEBUtagPOINT@@_NIPEAI@Z @ 0x1800E5DAC (-HitTestQuery@CTopLevelWindow@@QEAAXAEBUtagPOINT@@_NIPEAI@Z.c)
 * Callees:
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x18010E134 (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
 */

bool IsVailContainer(void)
{
  int v0; // eax
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = dword_18014C110;
  if ( !dword_18014C110 )
  {
    if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows", L"IsVailContainer", &v2) )
      v0 = 2 - (v2 != 0);
    else
      v0 = 2;
    dword_18014C110 = v0;
  }
  return v0 == 1;
}
