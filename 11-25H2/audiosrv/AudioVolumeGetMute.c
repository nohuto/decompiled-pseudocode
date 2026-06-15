/*
 * XREFs of AudioVolumeGetMute @ 0x180011380
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     atexit @ 0x1800A7F5C (atexit.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1800AE2AC (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioVolumeGetMute(_QWORD *a1, __int64 a2)
{
  struct _FILETIME v2; // rdi
  __int64 v3; // rbx
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  unsigned int v8; // ebx
  union _RTL_RUN_ONCE *v10; // [rsp+20h] [rbp-50h] BYREF
  int v11; // [rsp+28h] [rbp-48h]
  _QWORD pv[2]; // [rsp+30h] [rbp-40h] BYREF
  DWORD v13; // [rsp+40h] [rbp-30h]
  const wchar_t *v14; // [rsp+48h] [rbp-28h]
  struct _FILETIME v15; // [rsp+50h] [rbp-20h]
  char v16; // [rsp+58h] [rbp-18h]
  __int64 v17; // [rsp+5Ch] [rbp-14h]
  __int64 fPending; // [rsp+A0h] [rbp+30h] BYREF
  LPVOID Context; // [rsp+B0h] [rbp+40h] BYREF

  v2 = g_AudioHealthMonitor;
  v3 = g_AudioSrvWatchDogTimerInMs;
  Context = 0LL;
  LODWORD(fPending) = 0;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
    && (_DWORD)fPending )
  {
    v10 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1801CF7B0;
    qword_1801CF7B0 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    qword_1801CF7B8 = 0LL;
    byte_1801CF7C0 = 0;
    dword_1801CF7C4 = 0;
    qword_1801CF7C8 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v11 = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v10);
  }
  pv[1] = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v15 = v2;
  v13 = CurrentThreadId;
  v14 = L"AudioVolumeGetMute";
  v16 = 0;
  v17 = 0LL;
  if ( (unsigned int)v3 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      fPending = -10000 * v3 / 3;
      SetThreadpoolTimer(ThreadpoolTimer, (PFILETIME)&fPending, (unsigned int)v3 / 3, 0);
    }
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 152LL))(*a1, a2);
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return v8;
}
