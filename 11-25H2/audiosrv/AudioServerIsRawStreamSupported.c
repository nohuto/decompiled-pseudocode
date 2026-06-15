/*
 * XREFs of AudioServerIsRawStreamSupported @ 0x18006EE90
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x180037B80 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?AllowRawStreamCreation@EffectPack@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18007A690 (-AllowRawStreamCreation@EffectPack@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioServerIsRawStreamSupported(
        __int64 a1,
        __int64 a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        _DWORD *a4)
{
  struct _FILETIME v4; // rbx
  __int64 v6; // rsi
  __int64 v9; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v11; // ebx
  struct _FILETIME pftDueTime; // [rsp+38h] [rbp-19h] BYREF
  EffectPack *v14[2]; // [rsp+40h] [rbp-11h] BYREF
  __int64 v15; // [rsp+50h] [rbp-1h]
  _QWORD pv[2]; // [rsp+58h] [rbp+7h] BYREF
  DWORD CurrentThreadId; // [rsp+68h] [rbp+17h]
  const wchar_t *v18; // [rsp+70h] [rbp+1Fh]
  struct _FILETIME v19; // [rsp+78h] [rbp+27h]
  char v20; // [rsp+80h] [rbp+2Fh]
  int v21; // [rsp+84h] [rbp+33h]
  int v22; // [rsp+88h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v15 = 0LL;
  v4 = g_AudioHealthMonitor;
  v6 = g_AudioSrvWatchDogTimerInMs;
  *(_OWORD *)v14 = 0LL;
  v9 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  pv[1] = v9;
  v21 = 0;
  v22 = 0;
  CurrentThreadId = GetCurrentThreadId();
  v18 = L"AudioServerIsRawStreamSupported";
  v19 = v4;
  v20 = 0;
  if ( (unsigned int)v6 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v6 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v6 / 3, 0);
    }
  }
  if ( (unsigned int)a3 <= eConnectorCount )
  {
    v11 = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD, EffectPack **))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                   + 40LL))(
            g_pEndpointCharacteristicsCache,
            a2,
            0LL,
            0LL,
            v14);
    if ( v11 >= 0 )
    {
      *a4 = EffectPack::AllowRawStreamCreation(v14[1], a3);
      goto LABEL_7;
    }
  }
  else
  {
    v11 = -2147024809;
  }
  AudSrvTraceLoggingErrorHelper("AudioServerIsRawStreamSupported", 4506, v11);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x119B,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)(unsigned int)v11);
LABEL_7:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v14);
  return (unsigned int)v11;
}
