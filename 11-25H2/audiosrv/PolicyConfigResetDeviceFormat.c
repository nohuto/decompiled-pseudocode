/*
 * XREFs of PolicyConfigResetDeviceFormat @ 0x180102520
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180049380 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall PolicyConfigResetDeviceFormat(__int64 a1, __int128 *a2, __int64 a3)
{
  __int64 pftDueTime; // rbx
  unsigned int v5; // edi
  struct AudioSrvTelemetryProvider *v6; // rax
  struct _TP_TIMER *pv[7]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v9; // [rsp+68h] [rbp-30h]
  __int128 v10; // [rsp+78h] [rbp-20h] BYREF

  v9 = *a2;
  v10 = v9;
  EtwEventActivityIdControl(4LL, &v10);
  pftDueTime = (__int64)g_AudioHealthMonitor;
  v5 = g_AudioSrvWatchDogTimerInMs;
  v6 = AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)v6 + 1),
    v5,
    (struct _TP_TIMER *)L"PolicyConfigResetDeviceFormat",
    pftDueTime);
  LODWORD(pftDueTime) = (*(__int64 (__fastcall **)(CPolicyConfig *, __int64))(*(_QWORD *)g_PolicyConfig + 40LL))(
                          g_PolicyConfig,
                          a3);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, &v10);
  return (unsigned int)pftDueTime;
}
