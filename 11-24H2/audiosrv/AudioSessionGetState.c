/*
 * XREFs of AudioSessionGetState @ 0x180078BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180042840 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z @ 0x1800AD550 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z.c)
 *     ??0?$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800AD630 (--0-$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer_Old@$00@@QEAA@XZ @ 0x1800AD7E4 (--1-$CWatchdogTimer_Old@$00@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@details@wil@@QEAA_NXZ @ 0x1800B0A94 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@det.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioSessionGetState(__int64 *a1, __int64 a2)
{
  void *v3; // rbx
  void *v4; // rdi
  __int64 v5; // r15
  void *v6; // r14
  struct _FILETIME pftDueTime; // rbx
  void *v8; // r14
  struct _FILETIME v9; // rdi
  int v10; // esi
  __int64 v11; // rcx
  int v13; // [rsp+38h] [rbp-59h] BYREF
  _DWORD v14[3]; // [rsp+3Ch] [rbp-55h] BYREF
  _DWORD v15[2]; // [rsp+48h] [rbp-49h] BYREF
  __int64 v16; // [rsp+50h] [rbp-41h]
  unsigned __int16 *v17; // [rsp+58h] [rbp-39h]
  int v18; // [rsp+60h] [rbp-31h]
  int v19; // [rsp+64h] [rbp-2Dh]
  void *v20; // [rsp+68h] [rbp-29h]
  int v21; // [rsp+70h] [rbp-21h]
  int v22; // [rsp+74h] [rbp-1Dh]
  const char *v23; // [rsp+78h] [rbp-19h]
  __int64 v24; // [rsp+80h] [rbp-11h]
  _DWORD *v25; // [rsp+88h] [rbp-9h]
  __int64 v26; // [rsp+90h] [rbp-1h]
  int *v27; // [rsp+98h] [rbp+7h]
  __int64 v28; // [rsp+A0h] [rbp+Fh]

  v3 = 0LL;
  v4 = 0LL;
  v5 = *a1;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::GetImpl'::`2'::impl) )
  {
    v6 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v6 )
    {
      pftDueTime = g_AudioHealthMonitor;
      AudioSrvTelemetryProvider::Instance();
      v3 = (void *)CWatchdogTimer<1>::CWatchdogTimer<1>(v6, pftDueTime);
    }
  }
  else
  {
    v8 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v8 )
    {
      v9 = g_AudioHealthMonitor;
      AudioSrvTelemetryProvider::Instance();
      v4 = (void *)CWatchdogTimer_Old<1>::CWatchdogTimer_Old<1>(v8, v9);
    }
  }
  v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 144LL))(v5, a2);
  if ( v10 < 0 )
  {
    v11 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *(_DWORD *)v11 > 4u )
    {
      v13 = v10;
      v27 = &v13;
      v14[0] = 1657;
      v25 = v14;
      v28 = 4LL;
      v23 = "AudioSessionGetState";
      v15[1] = 4;
      v17 = *(unsigned __int16 **)(v11 + 8);
      v26 = 4LL;
      v24 = 21LL;
      v15[0] = 184549376;
      v16 = 0LL;
      v18 = *v17;
      v20 = &unk_1801AB1CE;
      v19 = 2;
      v21 = 35;
      v22 = 1;
      v14[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EtwEventWriteTransfer(*(_QWORD *)(v11 + 32), v15, 0LL, 0LL);
    }
  }
  if ( v4 )
  {
    CWatchdogTimer_Old<1>::~CWatchdogTimer_Old<1>(v4);
    operator delete(v4, (const struct std::nothrow_t *)0x38);
  }
  if ( v3 )
  {
    CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v3);
    operator delete(v3, (const struct std::nothrow_t *)0x38);
  }
  return (unsigned int)v10;
}
