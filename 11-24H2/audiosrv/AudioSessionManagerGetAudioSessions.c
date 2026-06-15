/*
 * XREFs of AudioSessionManagerGetAudioSessions @ 0x180079CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180042840 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z @ 0x1800AD550 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z.c)
 *     ??0?$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800AD630 (--0-$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer_Old@$00@@QEAA@XZ @ 0x1800AD7E4 (--1-$CWatchdogTimer_Old@$00@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@details@wil@@QEAA_NXZ @ 0x1800B0A94 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@det.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioSessionManagerGetAudioSessions(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v4; // rbx
  void *v5; // rdi
  void *v10; // rbp
  struct _FILETIME pftDueTime; // rbx
  void *v12; // rbp
  struct _FILETIME v13; // rdi
  _QWORD *v14; // rsi
  int v16; // eax
  unsigned int v17; // esi
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = 0LL;
  v5 = 0LL;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::GetImpl'::`2'::impl) )
  {
    v10 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v10 )
    {
      pftDueTime = g_AudioHealthMonitor;
      AudioSrvTelemetryProvider::Instance();
      v4 = (void *)CWatchdogTimer<1>::CWatchdogTimer<1>(v10, pftDueTime);
    }
  }
  else
  {
    v12 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v12 )
    {
      v13 = g_AudioHealthMonitor;
      AudioSrvTelemetryProvider::Instance();
      v5 = (void *)CWatchdogTimer_Old<1>::CWatchdogTimer_Old<1>(v12, v13);
    }
  }
  v14 = *(_QWORD **)a1;
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 8LL) + 112LL))(*(_QWORD *)(*(_QWORD *)a1 + 8LL)) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5C8,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)0x80070005LL);
    if ( v5 )
    {
      CWatchdogTimer_Old<1>::~CWatchdogTimer_Old<1>(v5);
      operator delete(v5, (const struct std::nothrow_t *)0x38);
    }
    if ( v4 )
    {
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v4);
      operator delete(v4, (const struct std::nothrow_t *)0x38);
    }
    return 2147942405LL;
  }
  else
  {
    v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, __int64))(**(_QWORD **)(*v14 + 96LL) + 32LL))(
            *(_QWORD *)(*v14 + 96LL),
            v14[1],
            a2,
            a3,
            a4);
    v17 = v16;
    if ( v16 >= 0 )
    {
      if ( v5 )
      {
        CWatchdogTimer_Old<1>::~CWatchdogTimer_Old<1>(v5);
        operator delete(v5, (const struct std::nothrow_t *)0x38);
      }
      if ( v4 )
      {
        CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v4);
        operator delete(v4, (const struct std::nothrow_t *)0x38);
      }
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5CA,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)v16);
      if ( v5 )
      {
        CWatchdogTimer_Old<1>::~CWatchdogTimer_Old<1>(v5);
        operator delete(v5, (const struct std::nothrow_t *)0x38);
      }
      if ( v4 )
      {
        CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v4);
        operator delete(v4, (const struct std::nothrow_t *)0x38);
      }
      return v17;
    }
  }
}
