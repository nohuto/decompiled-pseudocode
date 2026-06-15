/*
 * XREFs of AudioMeterGetChannelsPeakValues @ 0x180010620
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     atexit @ 0x1800A7F5C (atexit.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1800AE2AC (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioMeterGetChannelsPeakValues(_QWORD *a1, unsigned int a2, __int64 a3)
{
  struct _FILETIME v3; // rdi
  __int64 v4; // rbx
  __int64 v8; // rcx
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  unsigned int v11; // ebx
  union _RTL_RUN_ONCE *v13; // [rsp+20h] [rbp-50h] BYREF
  int v14; // [rsp+28h] [rbp-48h]
  _QWORD pv[2]; // [rsp+30h] [rbp-40h] BYREF
  DWORD v16; // [rsp+40h] [rbp-30h]
  const wchar_t *v17; // [rsp+48h] [rbp-28h]
  struct _FILETIME v18; // [rsp+50h] [rbp-20h]
  char v19; // [rsp+58h] [rbp-18h]
  int v20; // [rsp+5Ch] [rbp-14h]
  int v21; // [rsp+60h] [rbp-10h]
  __int64 fPending; // [rsp+A0h] [rbp+30h] BYREF
  LPVOID Context; // [rsp+B8h] [rbp+48h] BYREF

  v3 = g_AudioHealthMonitor;
  v4 = g_AudioSrvWatchDogTimerInMs;
  Context = 0LL;
  LODWORD(fPending) = 0;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
    && (_DWORD)fPending )
  {
    qword_1801CF7B8 = 0LL;
    dword_1801CF7C4 = 0;
    Context = &qword_1801CF7B0;
    qword_1801CF7B0 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    v13 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    byte_1801CF7C0 = 0;
    qword_1801CF7C8 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v14 = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v13);
  }
  v8 = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  pv[1] = v8;
  CurrentThreadId = GetCurrentThreadId();
  v20 = 0;
  v21 = 0;
  v16 = CurrentThreadId;
  v17 = L"AudioMeterGetChannelsPeakValues";
  v18 = v3;
  v19 = 0;
  if ( (unsigned int)v4 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      fPending = -10000 * v4 / 3;
      SetThreadpoolTimer(ThreadpoolTimer, (PFILETIME)&fPending, (unsigned int)v4 / 3, 0);
    }
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*a1 + 176LL))(*a1, a2, a3);
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return v11;
}
