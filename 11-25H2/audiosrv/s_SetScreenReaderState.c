/*
 * XREFs of s_SetScreenReaderState @ 0x1800FEBE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180049380 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 */

__int64 __fastcall s_SetScreenReaderState(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 pftDueTime; // rbx
  unsigned int v5; // edi
  struct AudioSrvTelemetryProvider *v8; // rax
  unsigned int v9; // ebx
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF

  pftDueTime = (__int64)g_AudioHealthMonitor;
  v5 = g_AudioSrvWatchDogTimerInMs;
  v8 = AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)v8 + 1),
    v5,
    (struct _TP_TIMER *)L"s_SetScreenReaderState",
    pftDueTime);
  if ( (unsigned int)IsScreenReaderStateSupported() )
    v9 = PbmSetScreenReaderState(a1, a2, a3);
  else
    v9 = 0;
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v9;
}
