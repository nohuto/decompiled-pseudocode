/*
 * XREFs of PolicyConfigGetDeviceFormatForConnector @ 0x180107820
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x180019F4C (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     MIDL_user_allocate @ 0x18003F650 (MIDL_user_allocate.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18005DA98 (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1800A7F28 (memcpy_0.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z @ 0x1800AD550 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z.c)
 *     ??0?$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800AD630 (--0-$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$unique_ptr@V?$CWatchdogTimer@$00@@U?$default_delete@V?$CWatchdogTimer@$00@@@std@@@std@@QEAA@XZ @ 0x1800AD900 (--1-$unique_ptr@V-$CWatchdogTimer@$00@@U-$default_delete@V-$CWatchdogTimer@$00@@@std@@@std@@QEAA.c)
 *     ??1?$unique_ptr@V?$CWatchdogTimer_Old@$00@@U?$default_delete@V?$CWatchdogTimer_Old@$00@@@std@@@std@@QEAA@XZ @ 0x1800AD920 (--1-$unique_ptr@V-$CWatchdogTimer_Old@$00@@U-$default_delete@V-$CWatchdogTimer_Old@$00@@@std@@@s.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@details@wil@@QEAA_NXZ @ 0x1800B0A94 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@det.c)
 *     ?reset@?$unique_ptr@V?$CWatchdogTimer@$00@@U?$default_delete@V?$CWatchdogTimer@$00@@@std@@@std@@QEAAXPEAV?$CWatchdogTimer@$00@@@Z @ 0x1800B0B28 (-reset@-$unique_ptr@V-$CWatchdogTimer@$00@@U-$default_delete@V-$CWatchdogTimer@$00@@@std@@@std@@.c)
 *     ?reset@?$unique_ptr@V?$CWatchdogTimer_Old@$00@@U?$default_delete@V?$CWatchdogTimer_Old@$00@@@std@@@std@@QEAAXPEAV?$CWatchdogTimer_Old@$00@@@Z @ 0x1800B0B4C (-reset@-$unique_ptr@V-$CWatchdogTimer_Old@$00@@U-$default_delete@V-$CWatchdogTimer_Old@$00@@@std.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall PolicyConfigGetDeviceFormatForConnector(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *a5)
{
  unsigned int v8; // ebx
  struct _TP_TIMER **v9; // rax
  struct _TP_TIMER **v10; // rsi
  __int64 pftDueTime; // rbx
  unsigned int v12; // edi
  struct AudioSrvTelemetryProvider *v13; // rax
  struct _TP_TIMER **v14; // rax
  struct _TP_TIMER **v15; // rsi
  __int64 v16; // rbx
  unsigned int v17; // edi
  struct AudioSrvTelemetryProvider *v18; // rax
  __int64 v19; // rax
  __int64 (__fastcall *v20)(CPolicyConfig *, __int64, _QWORD, _QWORD, int *); // rax
  __int64 v21; // rdx
  void *v22; // rax
  void *Src; // [rsp+30h] [rbp-30h] BYREF
  void *v25; // [rsp+38h] [rbp-28h] BYREF
  void *v26; // [rsp+40h] [rbp-20h] BYREF
  void **p_Src; // [rsp+48h] [rbp-18h] BYREF
  int v28[2]; // [rsp+50h] [rbp-10h] BYREF
  char v29; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  if ( a3 <= 4 )
  {
    Src = 0LL;
    v26 = 0LL;
    v25 = 0LL;
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::GetImpl'::`2'::impl) )
    {
      v9 = (struct _TP_TIMER **)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
      v10 = v9;
      if ( v9 )
      {
        pftDueTime = (__int64)g_AudioHealthMonitor;
        v12 = g_AudioSrvWatchDogTimerInMs;
        v13 = AudioSrvTelemetryProvider::Instance();
        v9 = CWatchdogTimer<1>::CWatchdogTimer<1>(
               v10,
               *((struct _TP_TIMER **)v13 + 1),
               v12,
               (struct _TP_TIMER *)L"PolicyConfigGetDeviceFormatForConnector",
               pftDueTime);
      }
      std::unique_ptr<CWatchdogTimer<1>>::reset(&v26, v9);
    }
    else
    {
      v14 = (struct _TP_TIMER **)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
      v15 = v14;
      if ( v14 )
      {
        v16 = (__int64)g_AudioHealthMonitor;
        v17 = g_AudioSrvWatchDogTimerInMs;
        v18 = AudioSrvTelemetryProvider::Instance();
        v14 = CWatchdogTimer_Old<1>::CWatchdogTimer_Old<1>(
                v15,
                *((struct _TP_TIMER **)v18 + 1),
                v17,
                (struct _TP_TIMER *)L"PolicyConfigGetDeviceFormatForConnector",
                v16);
      }
      std::unique_ptr<CWatchdogTimer_Old<1>>::reset(&v25, v14);
    }
    *a5 = 0LL;
    v19 = *(_QWORD *)g_PolicyConfig;
    *(_QWORD *)v28 = 0LL;
    p_Src = &Src;
    v20 = *(__int64 (__fastcall **)(CPolicyConfig *, __int64, _QWORD, _QWORD, int *))(v19 + 304);
    v29 = 1;
    v8 = v20(g_PolicyConfig, a2, a3, a4, v28);
    wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&p_Src);
    if ( (v8 & 0x80000000) == 0 )
    {
      v22 = MIDL_user_allocate(*((unsigned __int16 *)Src + 8) + 18LL);
      *a5 = v22;
      if ( v22 )
      {
        memcpy_0(v22, Src, *((unsigned __int16 *)Src + 8) + 18LL);
        v8 = 0;
        goto LABEL_16;
      }
      v8 = -2147024882;
      v21 = 2308LL;
    }
    else
    {
      v21 = 2301LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)v8);
LABEL_16:
    std::unique_ptr<CWatchdogTimer_Old<1>>::~unique_ptr<CWatchdogTimer_Old<1>>(&v25);
    std::unique_ptr<CWatchdogTimer<1>>::~unique_ptr<CWatchdogTimer<1>>(&v26);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      &Src,
      0LL);
    return v8;
  }
  v8 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8F6,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)0x80070057LL);
  return v8;
}
