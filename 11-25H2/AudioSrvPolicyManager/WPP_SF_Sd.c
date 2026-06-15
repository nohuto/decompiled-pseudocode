/*
 * XREFs of WPP_SF_Sd @ 0x180038478
 * Callers:
 *     ?OnAppStateChanged@CApplicationManager@@QEAAXPEBG_KHK@Z @ 0x18000B9A8 (-OnAppStateChanged@CApplicationManager@@QEAAXPEBG_KHK@Z.c)
 *     ?IsMutedForSleep@CApplication@@QEAAHXZ @ 0x180035420 (-IsMutedForSleep@CApplication@@QEAAHXZ.c)
 *     ?SendAppClosureNotification@CApplication@@QEAAXXZ @ 0x180036BC4 (-SendAppClosureNotification@CApplication@@QEAAXXZ.c)
 *     ?OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0007@@@Z @ 0x18003A9A0 (-OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0.c)
 *     ?OnDialogSessionStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@_N@Z @ 0x18003AAA8 (-OnDialogSessionStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@_N@Z.c)
 *     ?OnVoipCallStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@_N@Z @ 0x18003ADFC (-OnVoipCallStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@_N@Z.c)
 *     ?UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z @ 0x18003C0E4 (-UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_Sd(TRACEHANDLE a1, USHORT a2, const GUID *a3, const wchar_t *a4, ...)
{
  __int64 v4; // rax
  __int64 v5; // rax
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
    v5 = 2 * v4 + 2;
  }
  else
  {
    v5 = 10LL;
  }
  if ( !a4 )
    a4 = L"NULL";
  return TraceMessage(a1, 0x2Bu, a3, a2, a4, v5, va, 4LL, 0LL);
}
