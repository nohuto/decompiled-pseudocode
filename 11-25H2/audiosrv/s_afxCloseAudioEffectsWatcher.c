/*
 * XREFs of s_afxCloseAudioEffectsWatcher @ 0x1800B5220
 * Callers:
 *     HAUDIOEFFECTSWATCHER_rundown @ 0x1800B5200 (HAUDIOEFFECTSWATCHER_rundown.c)
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180049380 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?attach@?$com_ptr_t@VDialogSession@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAVDialogSession@@@Z @ 0x1800B51C0 (-attach@-$com_ptr_t@VDialogSession@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAVDialogSession@@@Z.c)
 */

__int64 __fastcall s_afxCloseAudioEffectsWatcher(unsigned __int64 *a1)
{
  __int64 pftDueTime; // rbx
  unsigned int v3; // edi
  struct AudioSrvTelemetryProvider *v4; // rax
  unsigned __int64 v5; // rax
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v8; // [rsp+80h] [rbp+8h] BYREF

  pftDueTime = (__int64)g_AudioHealthMonitor;
  v3 = g_AudioSrvWatchDogTimerInMs;
  v4 = AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)v4 + 1),
    v3,
    (struct _TP_TIMER *)L"s_afxCloseAudioEffectsWatcher",
    pftDueTime);
  if ( CoInitializeEx(0LL, 0) >= 0 )
  {
    v5 = *a1;
    v8 = 0LL;
    wil::com_ptr_t<DialogSession,wil::err_returncode_policy>::attach(
      &v8,
      (v5 + 8) & ((unsigned __int128)-(__int128)v5 >> 64));
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v8);
    CoUninitialize();
  }
  *a1 = 0LL;
  return CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
}
