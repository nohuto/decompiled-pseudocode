/*
 * XREFs of AudioServerSetAudioEffect @ 0x18010B2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x180047C8C (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180049380 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ?SetAudioEffect@CVADServer@@QEAAJU_GUID@@H@Z @ 0x180107670 (-SetAudioEffect@CVADServer@@QEAAJU_GUID@@H@Z.c)
 */

__int64 __fastcall AudioServerSetAudioEffect(CVADServer *this, struct _GUID *a2, int a3)
{
  __int64 pftDueTime; // rbx
  unsigned int v7; // edi
  struct AudioSrvTelemetryProvider *v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  struct _GUID v12; // [rsp+30h] [rbp-98h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v14[16]; // [rsp+78h] [rbp-50h] BYREF
  _BYTE v15[16]; // [rsp+88h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v14, this);
  pftDueTime = (__int64)g_AudioHealthMonitor;
  v7 = g_AudioSrvWatchDogTimerInMs;
  v8 = AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)v8 + 1),
    v7,
    (struct _TP_TIMER *)L"AudioServerSetAudioEffect",
    pftDueTime);
  v12 = *a2;
  v9 = CVADServer::SetAudioEffect(this, &v12, a3);
  v10 = v9;
  if ( v9 >= 0 )
    v10 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1558,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v9);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, v15);
  return v10;
}
