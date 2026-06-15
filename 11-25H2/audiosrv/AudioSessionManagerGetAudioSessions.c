/*
 * XREFs of AudioSessionManagerGetAudioSessions @ 0x180010990
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     atexit @ 0x1800A7F5C (atexit.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1800AE2AC (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioSessionManagerGetAudioSessions(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  struct _FILETIME v4; // rdi
  __int64 v6; // rbx
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  _QWORD *v12; // rbx
  int v13; // eax
  unsigned int v14; // ebx
  int v16; // [rsp+20h] [rbp-60h]
  LPVOID Context; // [rsp+30h] [rbp-50h] BYREF
  union _RTL_RUN_ONCE *v18; // [rsp+38h] [rbp-48h] BYREF
  int v19; // [rsp+40h] [rbp-40h]
  _QWORD pv[2]; // [rsp+48h] [rbp-38h] BYREF
  DWORD v21; // [rsp+58h] [rbp-28h]
  const wchar_t *v22; // [rsp+60h] [rbp-20h]
  struct _FILETIME v23; // [rsp+68h] [rbp-18h]
  char v24; // [rsp+70h] [rbp-10h]
  __int64 v25; // [rsp+74h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  __int64 fPending; // [rsp+B0h] [rbp+30h] BYREF

  v4 = g_AudioHealthMonitor;
  v6 = g_AudioSrvWatchDogTimerInMs;
  Context = 0LL;
  LODWORD(fPending) = 0;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
    && (_DWORD)fPending )
  {
    qword_1801CF7B8 = 0LL;
    v18 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1801CF7B0;
    qword_1801CF7B0 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    byte_1801CF7C0 = 0;
    dword_1801CF7C4 = 0;
    qword_1801CF7C8 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v19 = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v18);
  }
  pv[1] = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v23 = v4;
  v21 = CurrentThreadId;
  v22 = L"AudioSessionManagerGetAudioSessions";
  v24 = 0;
  v25 = 0LL;
  if ( (unsigned int)v6 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      fPending = -10000 * v6 / 3;
      SetThreadpoolTimer(ThreadpoolTimer, (PFILETIME)&fPending, (unsigned int)v6 / 3, 0);
    }
  }
  v12 = *(_QWORD **)a1;
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 8LL) + 112LL))(*(_QWORD *)(*(_QWORD *)a1 + 8LL)) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5BB,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)0x80070005LL,
      v16);
    CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
    return 2147942405LL;
  }
  else
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**(_QWORD **)(*v12 + 96LL) + 32LL))(
            *(_QWORD *)(*v12 + 96LL),
            v12[1],
            a2,
            a3);
    v14 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5BD,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)v13,
        a4);
      CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
      return v14;
    }
    else
    {
      CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
      return 0LL;
    }
  }
}
