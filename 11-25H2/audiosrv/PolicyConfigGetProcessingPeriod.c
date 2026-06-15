/*
 * XREFs of PolicyConfigGetProcessingPeriod @ 0x1801023C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180049380 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall PolicyConfigGetProcessingPeriod(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 pftDueTime; // rbx
  unsigned int v7; // edi
  struct AudioSrvTelemetryProvider *v10; // rax
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF

  pftDueTime = (__int64)g_AudioHealthMonitor;
  v7 = g_AudioSrvWatchDogTimerInMs;
  v10 = AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)v10 + 1),
    v7,
    (struct _TP_TIMER *)L"PolicyConfigGetProcessingPeriod",
    pftDueTime);
  LODWORD(pftDueTime) = (*(__int64 (__fastcall **)(CPolicyConfig *, __int64, _QWORD, __int64, __int64))(*(_QWORD *)g_PolicyConfig + 56LL))(
                          g_PolicyConfig,
                          a2,
                          a3,
                          a4,
                          a5);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)pftDueTime;
}
