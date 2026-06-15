/*
 * XREFs of s_pbmRegisterAppClosureNotification @ 0x1800FF910
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180049380 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 */

__int64 __fastcall s_pbmRegisterAppClosureNotification(__int64 a1)
{
  __int64 pftDueTime; // rbx
  unsigned int v3; // edi
  struct AudioSrvTelemetryProvider *v4; // rax
  unsigned int v5; // ebx
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF

  pftDueTime = (__int64)g_AudioHealthMonitor;
  v3 = g_AudioSrvWatchDogTimerInMs;
  v4 = AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)v4 + 1),
    v3,
    (struct _TP_TIMER *)L"s_pbmRegisterAppClosureNotification",
    pftDueTime);
  if ( (unsigned int)IsPbmRegisterAppClosureNotificationSupported() )
    v5 = PbmRegisterAppClosureNotification(a1);
  else
    v5 = 0;
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v5;
}
