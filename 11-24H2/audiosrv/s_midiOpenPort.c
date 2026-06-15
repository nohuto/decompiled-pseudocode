/*
 * XREFs of s_midiOpenPort @ 0x1800FE050
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800150E8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800A4EB4 (memset_0.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z @ 0x1800AD550 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z.c)
 *     ??0?$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800AD630 (--0-$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$unique_ptr@V?$CWatchdogTimer@$00@@U?$default_delete@V?$CWatchdogTimer@$00@@@std@@@std@@QEAA@XZ @ 0x1800AD900 (--1-$unique_ptr@V-$CWatchdogTimer@$00@@U-$default_delete@V-$CWatchdogTimer@$00@@@std@@@std@@QEAA.c)
 *     ??1?$unique_ptr@V?$CWatchdogTimer_Old@$00@@U?$default_delete@V?$CWatchdogTimer_Old@$00@@@std@@@std@@QEAA@XZ @ 0x1800AD920 (--1-$unique_ptr@V-$CWatchdogTimer_Old@$00@@U-$default_delete@V-$CWatchdogTimer_Old@$00@@@std@@@s.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@details@wil@@QEAA_NXZ @ 0x1800B0A94 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@det.c)
 *     ?reset@?$unique_ptr@V?$CWatchdogTimer@$00@@U?$default_delete@V?$CWatchdogTimer@$00@@@std@@@std@@QEAAXPEAV?$CWatchdogTimer@$00@@@Z @ 0x1800B0B28 (-reset@-$unique_ptr@V-$CWatchdogTimer@$00@@U-$default_delete@V-$CWatchdogTimer@$00@@@std@@@std@@.c)
 *     ?reset@?$unique_ptr@V?$CWatchdogTimer_Old@$00@@U?$default_delete@V?$CWatchdogTimer_Old@$00@@@std@@@std@@QEAAXPEAV?$CWatchdogTimer_Old@$00@@@Z @ 0x1800B0B4C (-reset@-$unique_ptr@V-$CWatchdogTimer_Old@$00@@U-$default_delete@V-$CWatchdogTimer_Old@$00@@@std.c)
 *     ?GetKsMidiDeviceInfo@@YAJPEBGPEAPEAGPEAI@Z @ 0x1800FDE08 (-GetKsMidiDeviceInfo@@YAJPEBGPEAPEAGPEAI@Z.c)
 *     ?FilterInstantiate2@@YAJPEBGKPEAPEAX@Z @ 0x18012D1E0 (-FilterInstantiate2@@YAJPEBGKPEAPEAX@Z.c)
 */

__int64 __fastcall s_midiOpenPort(RPC_BINDING_HANDLE BindingHandle, unsigned __int16 *a2, HANDLE *a3)
{
  unsigned __int16 *v3; // r14
  const unsigned __int16 *v5; // rbx
  __int64 v7; // rsi
  struct _TP_TIMER **v8; // rax
  struct _TP_TIMER **v9; // r15
  __int64 v10; // rbx
  unsigned int v11; // edi
  struct AudioSrvTelemetryProvider *v12; // rax
  struct _TP_TIMER **v13; // rax
  struct _TP_TIMER **v14; // r15
  __int64 v15; // rbx
  unsigned int v16; // edi
  struct AudioSrvTelemetryProvider *v17; // rax
  signed int v18; // edi
  int KsMidiDeviceInfo; // eax
  unsigned int v20; // edx
  int v21; // eax
  char *v22; // r15
  HRESULT v23; // eax
  RPC_STATUS v24; // eax
  signed int LastError; // eax
  void *v26; // rbx
  HANDLE CurrentProcess; // rax
  unsigned __int16 *v29; // [rsp+40h] [rbp-99h] BYREF
  HANDLE FilterHandle; // [rsp+48h] [rbp-91h] BYREF
  void *ConnectionHandle; // [rsp+50h] [rbp-89h] BYREF
  HANDLE TargetHandle; // [rsp+58h] [rbp-81h] BYREF
  void *v33; // [rsp+60h] [rbp-79h] BYREF
  void *v34; // [rsp+68h] [rbp-71h] BYREF
  $58C2C1BF6568EE28BD9B872E6BA03976 Connect; // [rsp+70h] [rbp-69h] BYREF
  int v36; // [rsp+B8h] [rbp-21h]
  __int64 v37; // [rsp+BCh] [rbp-1Dh]
  int v38; // [rsp+C4h] [rbp-15h]
  GUID v39; // [rsp+C8h] [rbp-11h]
  GUID v40; // [rsp+D8h] [rbp-1h]
  GUID v41; // [rsp+E8h] [rbp+Fh]
  unsigned int v43; // [rsp+150h] [rbp+77h] BYREF
  unsigned int Pid; // [rsp+158h] [rbp+7Fh] BYREF

  v3 = 0LL;
  v43 = 0;
  v5 = a2;
  ConnectionHandle = 0LL;
  v7 = -1LL;
  v29 = 0LL;
  FilterHandle = (HANDLE)-1LL;
  memset_0(&Connect, 0, 0x88uLL);
  Pid = 0;
  v34 = 0LL;
  v33 = 0LL;
  TargetHandle = (HANDLE)-1LL;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::GetImpl'::`2'::impl) )
  {
    v8 = (struct _TP_TIMER **)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v9 = v8;
    if ( v8 )
    {
      v10 = (__int64)g_AudioHealthMonitor;
      v11 = g_AudioSrvWatchDogTimerInMs;
      v12 = AudioSrvTelemetryProvider::Instance();
      v8 = CWatchdogTimer<1>::CWatchdogTimer<1>(
             v9,
             *((struct _TP_TIMER **)v12 + 1),
             v11,
             (struct _TP_TIMER *)L"s_midiOpenPort",
             v10);
      v5 = a2;
    }
    std::unique_ptr<CWatchdogTimer<1>>::reset(&v34, v8);
  }
  else
  {
    v13 = (struct _TP_TIMER **)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v14 = v13;
    if ( v13 )
    {
      v15 = (__int64)g_AudioHealthMonitor;
      v16 = g_AudioSrvWatchDogTimerInMs;
      v17 = AudioSrvTelemetryProvider::Instance();
      v13 = CWatchdogTimer_Old<1>::CWatchdogTimer_Old<1>(
              v14,
              *((struct _TP_TIMER **)v17 + 1),
              v16,
              (struct _TP_TIMER *)L"s_midiOpenPort",
              v15);
      v5 = a2;
    }
    std::unique_ptr<CWatchdogTimer_Old<1>>::reset(&v33, v13);
  }
  if ( a3 )
  {
    KsMidiDeviceInfo = GetKsMidiDeviceInfo(v5, &v29, &v43);
    v3 = v29;
    v18 = KsMidiDeviceInfo;
    if ( KsMidiDeviceInfo >= 0 )
    {
      v21 = FilterInstantiate2(v29, v20, &FilterHandle);
      v22 = (char *)FilterHandle;
      v18 = v21;
      if ( v21 >= 0 )
      {
        *(&Connect.PinId + 1) = 0;
        Connect.Interface.Set = GUID_1a8766a0_62ce_11cf_a5d6_28db04c10000;
        v37 = 0LL;
        v38 = 0;
        Connect.Medium.Set = GUID_4747b320_62ce_11cf_a5d6_28db04c10000;
        Connect.PinId = v43;
        *(&Connect.Interface.Alignment + 2) = 0LL;
        *(&Connect.Medium.Alignment + 2) = 0LL;
        v39 = GUID_e725d360_62cc_11cf_a5d6_28db04c10000;
        Connect.PinToHandle = 0LL;
        Connect.Priority.PriorityClass = 0x40000000;
        Connect.Priority.PrioritySubClass = 0x40000000;
        v41 = GUID_0f6417d6_c318_11d0_a43f_00a0c9223196;
        v36 = 64;
        v40 = GUID_1d262760_e957_11cf_a5d6_28db04c10000;
        v23 = KsCreatePin2(FilterHandle, &Connect, 0xC0000000, &ConnectionHandle);
        v18 = v23;
        if ( v23 > 0 )
          v18 = (unsigned __int16)v23 | 0x80070000;
        if ( v18 >= 0 )
        {
          v24 = I_RpcBindingInqLocalClientPID(BindingHandle, &Pid);
          if ( v24 )
          {
            if ( v24 > 0 )
              v18 = (unsigned __int16)v24 | 0x80070000;
            else
              v18 = v24;
          }
          else if ( !RpcImpersonateClient(BindingHandle) )
          {
            v7 = (__int64)OpenProcess(0x40u, 0, Pid);
            if ( v7
              && (v26 = ConnectionHandle,
                  CurrentProcess = GetCurrentProcess(),
                  DuplicateHandle(CurrentProcess, v26, (HANDLE)v7, &TargetHandle, 0xC0000000, 0, 1u)) )
            {
              *a3 = TargetHandle;
            }
            else
            {
              LastError = GetLastError();
              v18 = LastError;
              if ( LastError > 0 )
                v18 = (unsigned __int16)LastError | 0x80070000;
            }
            RpcRevertToSelf();
          }
        }
      }
      if ( (unsigned __int64)(v22 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v22);
      if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle((HANDLE)v7);
    }
  }
  else
  {
    v18 = -2147467261;
  }
  CoTaskMemFree(v3);
  if ( v18 < 0 )
    AudSrvTraceLoggingErrorHelper("s_midiOpenPort", 215, v18);
  std::unique_ptr<CWatchdogTimer_Old<1>>::~unique_ptr<CWatchdogTimer_Old<1>>(&v33);
  std::unique_ptr<CWatchdogTimer<1>>::~unique_ptr<CWatchdogTimer<1>>(&v34);
  return (unsigned int)v18;
}
