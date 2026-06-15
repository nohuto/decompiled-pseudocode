/*
 * XREFs of s_rtgGetDefaultAudioEndpoint @ 0x18007CBC0
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180020AB0 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     MIDL_user_allocate @ 0x18003F650 (MIDL_user_allocate.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180042840 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?GetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJPEAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_NPEAPEAG@Z @ 0x180089CD0 (-GetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJPEAXW4__MIDL___MIDL_itf_mmdeviceapi_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z @ 0x1800AD550 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z.c)
 *     ??0?$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800AD630 (--0-$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer_Old@$00@@QEAA@XZ @ 0x1800AD7E4 (--1-$CWatchdogTimer_Old@$00@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@details@wil@@QEAA_NXZ @ 0x1800B0A94 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@det.c)
 */

__int64 __fastcall s_rtgGetDefaultAudioEndpoint(__int64 a1, unsigned int a2, int a3, char **a4, _DWORD *a5)
{
  char *v5; // rbx
  unsigned int v6; // ebp
  char *v9; // r14
  void *v10; // rdi
  void *v11; // rsi
  __int64 v12; // rcx
  void *v13; // r15
  struct _FILETIME pftDueTime; // rdi
  void *v15; // r15
  struct _FILETIME v16; // rsi
  int v17; // ebp
  _DWORD *v18; // r15
  int DefaultAudioEndpoint; // eax
  __int64 v20; // rax
  size_t v22; // rbp
  char *v23; // rax
  int v24; // eax
  HANDLE ProcessHeap; // rax
  LPVOID pv[2]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int8 v30; // [rsp+90h] [rbp+18h] BYREF

  v5 = 0LL;
  v6 = a2;
  v9 = 0LL;
  pv[0] = 0LL;
  v10 = 0LL;
  v30 = 0;
  v11 = 0LL;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::GetImpl'::`2'::impl) )
  {
    v13 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v13 )
      goto LABEL_7;
    pftDueTime = g_AudioHealthMonitor;
    AudioSrvTelemetryProvider::Instance();
    v10 = (void *)CWatchdogTimer<1>::CWatchdogTimer<1>(v13, pftDueTime);
  }
  else
  {
    v15 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v15 )
      goto LABEL_7;
    v16 = g_AudioHealthMonitor;
    AudioSrvTelemetryProvider::Instance();
    v11 = (void *)CWatchdogTimer_Old<1>::CWatchdogTimer_Old<1>(v15, v16);
  }
  v6 = a2;
LABEL_7:
  if ( a3 < 6 )
  {
    if ( a4 && (v18 = a5) != 0LL )
    {
      *a5 = 0;
      DefaultAudioEndpoint = DynamicAudioEndpointManager::GetDefaultAudioEndpoint(
                               v12,
                               a1,
                               v6,
                               (unsigned int)a3,
                               &v30,
                               pv);
      v5 = (char *)pv[0];
      v17 = DefaultAudioEndpoint;
      if ( DefaultAudioEndpoint >= 0 )
      {
        if ( pv[0] )
        {
          v20 = -1LL;
          while ( *((_WORD *)pv[0] + ++v20) != 0 )
            ;
          v22 = 2 * v20 + 2;
          v23 = (char *)MIDL_user_allocate(v22);
          v9 = v23;
          if ( v23 )
          {
            v17 = StringCbCopyW(v23, v22, v5);
            if ( v17 >= 0 )
            {
              v24 = v30;
              *a4 = v9;
              *v18 = v24;
              goto LABEL_22;
            }
          }
          else
          {
            v17 = -2147024882;
          }
        }
        else
        {
          v17 = -2147023728;
        }
      }
    }
    else
    {
      v17 = -2147467261;
    }
  }
  else
  {
    v17 = -2147024809;
  }
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v9);
LABEL_22:
  if ( v11 )
  {
    CWatchdogTimer_Old<1>::~CWatchdogTimer_Old<1>(v11);
    operator delete(v11, (const struct std::nothrow_t *)0x38);
  }
  if ( v10 )
  {
    CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v10);
    operator delete(v10, (const struct std::nothrow_t *)0x38);
  }
  CoTaskMemFree(0LL);
  CoTaskMemFree(v5);
  return (unsigned int)v17;
}
