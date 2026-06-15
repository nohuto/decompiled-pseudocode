/*
 * XREFs of AudioSessionManagerGetCurrentSession @ 0x18006A300
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180014F20 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioSessionManagerGetCurrentSession(_QWORD ***a1, __int64 a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  struct _FILETIME v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // r10
  struct _TP_TIMER *ThreadpoolTimer; // r10
  _QWORD **v11; // r15
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rax
  __int64 (__fastcall *v16)(__int64, __int64, __int64 *); // r9
  __int64 v17; // r10
  int v18; // eax
  int v19; // eax
  int v20; // eax
  __int64 v22; // rdx
  __int64 v23; // [rsp+50h] [rbp-31h] BYREF
  __int64 v24; // [rsp+58h] [rbp-29h] BYREF
  struct _FILETIME pftDueTime; // [rsp+60h] [rbp-21h] BYREF
  _QWORD pv[2]; // [rsp+68h] [rbp-19h] BYREF
  DWORD CurrentThreadId; // [rsp+78h] [rbp-9h]
  const wchar_t *v28; // [rsp+80h] [rbp-1h]
  struct _FILETIME v29; // [rsp+88h] [rbp+7h]
  char v30; // [rsp+90h] [rbp+Fh]
  __int64 v31; // [rsp+94h] [rbp+13h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+57h]
  int v33; // [rsp+E0h] [rbp+5Fh] BYREF
  __int64 v34; // [rsp+E8h] [rbp+67h]
  __int64 v35; // [rsp+F8h] [rbp+77h] BYREF

  v34 = a2;
  v7 = g_AudioHealthMonitor;
  v8 = g_AudioSrvWatchDogTimerInMs;
  v9 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  pv[1] = v9;
  CurrentThreadId = GetCurrentThreadId();
  v28 = L"AudioSessionManagerGetCurrentSession";
  v29 = v7;
  v30 = 0;
  v31 = 0LL;
  if ( (unsigned int)v8 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v8 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v8 / 3, 0);
    }
  }
  *a5 = 0LL;
  *a4 = 0LL;
  v11 = *a1;
  v12 = *(_QWORD *)g_PolicyManager;
  v24 = 0LL;
  v13 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64 *))(v12 + 32))(
          g_PolicyManager,
          0LL,
          &v24);
  v14 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5D1,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)v13);
LABEL_31:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v24);
    goto LABEL_17;
  }
  v35 = 0LL;
  v15 = std::wstring::c_str((__int64)(*v11 + 2));
  v18 = v16(v17, v15, &v35);
  v14 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5D4,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)v18);
LABEL_30:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v35);
    goto LABEL_31;
  }
  v23 = 0LL;
  v19 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v35)(
          v35,
          &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
          &v23);
  v14 = v19;
  if ( v19 < 0 )
  {
    v22 = 1495LL;
LABEL_29:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)v19);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v23);
    goto LABEL_30;
  }
  v33 = 0;
  v19 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v23 + 24LL))(v23, &v33);
  v14 = v19;
  if ( v19 < 0 )
  {
    v22 = 1498LL;
    goto LABEL_29;
  }
  if ( g_ADGProcess )
    (*(__int64 (__fastcall **)(_QWORD *))(*v11[1] + 40LL))(v11[1]);
  (*(void (__fastcall **)(_QWORD *))(*v11[1] + 88LL))(v11[1]);
  v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*v11)[12] + 8LL))((*v11)[12], v24, v34);
  v14 = v20;
  if ( v20 >= 0 )
  {
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    if ( v35 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    v14 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x601,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)v20);
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    if ( v35 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
LABEL_17:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v14;
}
