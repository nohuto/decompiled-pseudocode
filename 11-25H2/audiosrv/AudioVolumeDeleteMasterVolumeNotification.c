/*
 * XREFs of AudioVolumeDeleteMasterVolumeNotification @ 0x180066E10
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioVolumeDeleteMasterVolumeNotification(__int64 *a1)
{
  struct _FILETIME v1; // rbx
  __int64 v3; // rdi
  __int64 v4; // rdx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  __int64 v6; // rdi
  RPC_STATUS v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  _QWORD pv[2]; // [rsp+20h] [rbp-40h] BYREF
  DWORD CurrentThreadId; // [rsp+30h] [rbp-30h]
  const wchar_t *v15; // [rsp+38h] [rbp-28h]
  struct _FILETIME v16; // [rsp+40h] [rbp-20h]
  char v17; // [rsp+48h] [rbp-18h]
  int v18; // [rsp+4Ch] [rbp-14h]
  int v19; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  unsigned int Pid; // [rsp+80h] [rbp+20h] BYREF
  struct _FILETIME pftDueTime; // [rsp+88h] [rbp+28h] BYREF

  v1 = g_AudioHealthMonitor;
  v3 = g_AudioSrvWatchDogTimerInMs;
  v4 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  pv[1] = v4;
  v18 = 0;
  v19 = 0;
  CurrentThreadId = GetCurrentThreadId();
  v15 = L"AudioVolumeDeleteMasterVolumeNotification";
  v16 = v1;
  v17 = 0;
  if ( (unsigned int)v3 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v3 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v3 / 3, 0);
    }
  }
  v6 = *a1;
  Pid = 0;
  v7 = I_RpcBindingInqLocalClientPID(0LL, &Pid);
  v8 = v7 != 0 ? v7 | 0x80010000 : 0;
  if ( (v8 & 0x80000000) != 0 )
  {
    v10 = v8;
    v11 = 417LL;
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 256LL))(v6, Pid);
    v8 = v9;
    if ( v9 >= 0 )
    {
      v8 = 0;
      goto LABEL_9;
    }
    v10 = (unsigned int)v9;
    v11 = 418LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumeprovider.cpp",
    (const char *)v10);
LABEL_9:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v8;
}
