/*
 * XREFs of asm_AudioServerInitializeStream @ 0x1800B0F50
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180001598 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180021540 (--3@YAXPEAX@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180048600 (_tlgKeywordOn.c)
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18006449C (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z @ 0x1800AD550 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z.c)
 *     ??0?$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800AD630 (--0-$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$unique_ptr@V?$CWatchdogTimer@$00@@U?$default_delete@V?$CWatchdogTimer@$00@@@std@@@std@@QEAA@XZ @ 0x1800AD900 (--1-$unique_ptr@V-$CWatchdogTimer@$00@@U-$default_delete@V-$CWatchdogTimer@$00@@@std@@@std@@QEAA.c)
 *     ??1?$unique_ptr@V?$CWatchdogTimer_Old@$00@@U?$default_delete@V?$CWatchdogTimer_Old@$00@@@std@@@std@@QEAA@XZ @ 0x1800AD920 (--1-$unique_ptr@V-$CWatchdogTimer_Old@$00@@U-$default_delete@V-$CWatchdogTimer_Old@$00@@@std@@@s.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@details@wil@@QEAA_NXZ @ 0x1800B0A94 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@det.c)
 *     ?reset@?$unique_ptr@V?$CWatchdogTimer@$00@@U?$default_delete@V?$CWatchdogTimer@$00@@@std@@@std@@QEAAXPEAV?$CWatchdogTimer@$00@@@Z @ 0x1800B0B28 (-reset@-$unique_ptr@V-$CWatchdogTimer@$00@@U-$default_delete@V-$CWatchdogTimer@$00@@@std@@@std@@.c)
 *     ?reset@?$unique_ptr@V?$CWatchdogTimer_Old@$00@@U?$default_delete@V?$CWatchdogTimer_Old@$00@@@std@@@std@@QEAAXPEAV?$CWatchdogTimer_Old@$00@@@Z @ 0x1800B0B4C (-reset@-$unique_ptr@V-$CWatchdogTimer_Old@$00@@U-$default_delete@V-$CWatchdogTimer_Old@$00@@@std.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall asm_AudioServerInitializeStream(
        void *a1,
        struct IProcessSubmixProxy **a2,
        int a3,
        struct tWAVEFORMATEX *a4,
        struct _GUID *a5,
        struct VadServerSettings *a6,
        void **a7)
{
  struct _TP_TIMER **v10; // rax
  struct _TP_TIMER **v11; // rsi
  __int64 pftDueTime; // rbx
  unsigned int v13; // edi
  struct AudioSrvTelemetryProvider *v14; // rax
  struct _TP_TIMER **v15; // rax
  struct _TP_TIMER **v16; // rsi
  __int64 v17; // rbx
  unsigned int v18; // edi
  struct AudioSrvTelemetryProvider *v19; // rax
  __int64 v20; // rax
  const WCHAR *v21; // rdi
  struct AudioSrvTelemetryProvider *v22; // rax
  _DWORD *v23; // rbx
  struct IProcessSubmixProxy *v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // eax
  unsigned int v28; // ebx
  int v30; // [rsp+50h] [rbp-51h] BYREF
  unsigned __int16 *v31; // [rsp+58h] [rbp-49h] BYREF
  void *v32; // [rsp+60h] [rbp-41h] BYREF
  void *v33; // [rsp+68h] [rbp-39h] BYREF
  const WCHAR *v34; // [rsp+70h] [rbp-31h] BYREF
  void **v35; // [rsp+78h] [rbp-29h]
  struct tWAVEFORMATEX *v36; // [rsp+80h] [rbp-21h]
  __int128 v37; // [rsp+88h] [rbp-19h]
  __int128 v38; // [rsp+98h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+47h]

  v36 = a4;
  v35 = a7;
  v37 = *(_OWORD *)a6;
  v38 = v37;
  EtwEventActivityIdControl(4LL, &v38);
  v33 = 0LL;
  v32 = 0LL;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::GetImpl'::`2'::impl) )
  {
    v10 = (struct _TP_TIMER **)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v11 = v10;
    if ( v10 )
    {
      pftDueTime = (__int64)g_AudioHealthMonitor;
      v13 = g_AudioSrvWatchDogTimerInMs;
      v14 = AudioSrvTelemetryProvider::Instance();
      v10 = CWatchdogTimer<1>::CWatchdogTimer<1>(
              v11,
              *((struct _TP_TIMER **)v14 + 1),
              v13,
              (struct _TP_TIMER *)L"asm_AudioServerInitializeStream",
              pftDueTime);
    }
    std::unique_ptr<CWatchdogTimer<1>>::reset(&v33, v10);
  }
  else
  {
    v15 = (struct _TP_TIMER **)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v16 = v15;
    if ( v15 )
    {
      v17 = (__int64)g_AudioHealthMonitor;
      v18 = g_AudioSrvWatchDogTimerInMs;
      v19 = AudioSrvTelemetryProvider::Instance();
      v15 = CWatchdogTimer_Old<1>::CWatchdogTimer_Old<1>(
              v16,
              *((struct _TP_TIMER **)v19 + 1),
              v18,
              (struct _TP_TIMER *)L"asm_AudioServerInitializeStream",
              v17);
    }
    std::unique_ptr<CWatchdogTimer_Old<1>>::reset(&v32, v15);
  }
  v20 = (*(__int64 (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)*a2 + 184LL))(*a2);
  v31 = 0LL;
  v21 = (const WCHAR *)v20;
  v22 = AudioSrvTelemetryProvider::Instance();
  v23 = (_DWORD *)*((_QWORD *)v22 + 1);
  if ( *v23 > 4u && tlgKeywordOn(*((_QWORD *)v22 + 1), 512LL) )
  {
    v24 = *a2;
    v34 = v21;
    v30 = (*(__int64 (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v24 + 128LL))(v24);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      (int)v23,
      (int)&unk_1801A8E03,
      v25,
      v26,
      (__int64)&v30,
      &v34);
  }
  v27 = AudioServerInitialize_Internal(a1, v21, AUDCLNT_SHAREMODE_SHARED, a3, v36, a5, a6, &v31, *a2, v35);
  v28 = v27;
  if ( v27 >= 0 )
  {
    operator delete(v31);
    v28 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14F,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
      (const char *)(unsigned int)v27);
  }
  std::unique_ptr<CWatchdogTimer_Old<1>>::~unique_ptr<CWatchdogTimer_Old<1>>(&v32);
  std::unique_ptr<CWatchdogTimer<1>>::~unique_ptr<CWatchdogTimer<1>>(&v33);
  EtwEventActivityIdControl(4LL, &v38);
  return v28;
}
