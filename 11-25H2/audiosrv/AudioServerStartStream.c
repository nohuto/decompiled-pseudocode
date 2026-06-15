/*
 * XREFs of AudioServerStartStream @ 0x180063370
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z @ 0x180063540 (-StartStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 */

__int64 __fastcall AudioServerStartStream(GUID *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edi
  GUID v7; // xmm0
  struct _FILETIME v8; // rbx
  __int64 v9; // r12
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int started; // eax
  unsigned int v12; // ebx
  _QWORD pv[2]; // [rsp+20h] [rbp-39h] BYREF
  DWORD CurrentThreadId; // [rsp+30h] [rbp-29h]
  const wchar_t *v16; // [rsp+38h] [rbp-21h]
  struct _FILETIME v17; // [rsp+40h] [rbp-19h]
  char v18; // [rsp+48h] [rbp-11h]
  __int64 v19; // [rsp+4Ch] [rbp-Dh]
  struct _FILETIME pftDueTime[2]; // [rsp+58h] [rbp-1h] BYREF
  GUID v21; // [rsp+68h] [rbp+Fh]
  GUID v22; // [rsp+78h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v3 = 0;
  if ( a1 )
    v7 = a1[16];
  else
    v7 = GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)&pftDueTime[0].dwLowDateTime = v7;
  v21 = v7;
  v22 = v7;
  EtwEventActivityIdControl(4LL, &v22);
  v8 = g_AudioHealthMonitor;
  v9 = g_AudioSrvWatchDogTimerInMs;
  pv[1] = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  v17 = v8;
  CurrentThreadId = GetCurrentThreadId();
  v16 = L"AudioServerStartStream";
  v18 = 0;
  v19 = 0LL;
  if ( (unsigned int)v9 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime[0] = (struct _FILETIME)(-10000 * v9 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, pftDueTime, (unsigned int)v9 / 3, 0);
    }
  }
  started = CVADServer::StartStream(a1, a2, a3);
  v12 = started;
  if ( started < 0 )
  {
    v3 = -2005139336;
    if ( started != -2005139336 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC64,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)started);
      v3 = v12;
    }
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, &v22);
  return v3;
}
