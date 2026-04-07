/*
 * XREFs of ?IsWCOSContainer@@YA_NXZ @ 0x1800F4EA0
 * Callers:
 *     ?HitTestQuery@CTopLevelWindow@@QEAAXAEBUtagPOINT@@_NIPEAI@Z @ 0x180020A20 (-HitTestQuery@CTopLevelWindow@@QEAAXAEBUtagPOINT@@_NIPEAI@Z.c)
 *     ?UpdateRemoteAppRenderTargetBounds@CTopLevelWindow@@QEAAJXZ @ 0x180029774 (-UpdateRemoteAppRenderTargetBounds@CTopLevelWindow@@QEAAJXZ.c)
 *     ?GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x180064E20 (-GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z.c)
 *     ?UpdateRemoteAppRenderTargetRoot@CTopLevelWindow@@QEAAJXZ @ 0x180088030 (-UpdateRemoteAppRenderTargetRoot@CTopLevelWindow@@QEAAJXZ.c)
 *     ?MonitorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800F0E70 (-MonitorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x1800F5020 (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
 */

bool IsWCOSContainer(void)
{
  int v0; // eax
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = dword_180129BB8;
  if ( !dword_180129BB8 )
  {
    v2 = 0;
    if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows", L"IsVailContainer", &v2) )
      v0 = 2 - (v2 != 0);
    else
      v0 = 2;
    dword_180129BB8 = v0;
  }
  return v0 == 1;
}
