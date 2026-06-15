/*
 * XREFs of AudioServerSetAllVolumes @ 0x18005D3B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetAllVolumes@CVADServer@@UEAAJIPEBMPEAH@Z @ 0x18005D570 (-SetAllVolumes@CVADServer@@UEAAJIPEBMPEAH@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 */

__int64 __fastcall AudioServerSetAllVolumes(CVADServer *this, unsigned int a2, const float *a3, int *a4)
{
  GUID v8; // xmm0
  struct _FILETIME v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v13; // eax
  unsigned int v14; // ebx
  _QWORD pv[2]; // [rsp+20h] [rbp-49h] BYREF
  DWORD CurrentThreadId; // [rsp+30h] [rbp-39h]
  const wchar_t *v18; // [rsp+38h] [rbp-31h]
  struct _FILETIME v19; // [rsp+40h] [rbp-29h]
  char v20; // [rsp+48h] [rbp-21h]
  int v21; // [rsp+4Ch] [rbp-1Dh]
  int v22; // [rsp+50h] [rbp-19h]
  struct _FILETIME pftDueTime[2]; // [rsp+58h] [rbp-11h] BYREF
  GUID v24; // [rsp+68h] [rbp-1h]
  GUID v25; // [rsp+78h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  if ( this )
    v8 = (GUID)*((_OWORD *)this + 16);
  else
    v8 = GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)&pftDueTime[0].dwLowDateTime = v8;
  v24 = v8;
  v25 = v8;
  EtwEventActivityIdControl(4LL, &v25);
  v9 = g_AudioHealthMonitor;
  v10 = g_AudioSrvWatchDogTimerInMs;
  v11 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  pv[1] = v11;
  v21 = 0;
  v22 = 0;
  CurrentThreadId = GetCurrentThreadId();
  v18 = L"AudioServerSetAllVolumes";
  v19 = v9;
  v20 = 0;
  if ( (unsigned int)v10 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime[0] = (struct _FILETIME)(-10000 * v10 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, pftDueTime, (unsigned int)v10 / 3, 0);
    }
  }
  v13 = CVADServer::SetAllVolumes(this, a2, a3, a4);
  v14 = v13;
  if ( v13 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD7A,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v13);
  else
    v14 = 0;
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, &v25);
  return v14;
}
