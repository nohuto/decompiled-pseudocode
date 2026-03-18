/*
 * XREFs of ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x14011058C
 * Callers:
 *     ?VidMmInitGlobals@@YAJXZ @ 0x140110574 (-VidMmInitGlobals@@YAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14001C724 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ @ 0x1400359E0 (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140035A00 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036BA0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     McGenEventRegister_EtwRegister @ 0x14004B328 (McGenEventRegister_EtwRegister.c)
 *     Feature_3694358843__private_IsEnabledDeviceUsageNoInline @ 0x14004C408 (Feature_3694358843__private_IsEnabledDeviceUsageNoInline.c)
 *     TlgRegisterAggregateProviderEx @ 0x14009182C (TlgRegisterAggregateProviderEx.c)
 *     ?InitPhysicalHeap@VIDMM_GLOBAL@@CAXXZ @ 0x140094C64 (-InitPhysicalHeap@VIDMM_GLOBAL@@CAXXZ.c)
 *     ?VidMmInitDmaPoolGlobals@@YAJXZ @ 0x14009757C (-VidMmInitDmaPoolGlobals@@YAJXZ.c)
 *     ?InitGlobalStorage@VIDMM_PROCESS_FENCE_STORAGE@@SAJXZ @ 0x140097F40 (-InitGlobalStorage@VIDMM_PROCESS_FENCE_STORAGE@@SAJXZ.c)
 *     ?ReadConfiguration@VIDMM_GLOBAL@@SAXXZ @ 0x140107540 (-ReadConfiguration@VIDMM_GLOBAL@@SAXXZ.c)
 */

__int64 VIDMM_GLOBAL::InitGlobals(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  void *v2; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v4; // rax
  unsigned __int64 MaximumGlobalAdapterCount; // kr00_8
  __int64 v6; // rcx
  int inited; // eax
  unsigned int v9; // esi
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rax
  NTSTATUS v13; // eax
  __int64 v14; // rcx
  NTSTATUS v15; // eax
  NTSTATUS v16; // eax
  NTSTATUS v17; // eax
  int LiveDumpWithWdLogs; // eax
  __int64 v19; // rcx
  _PCW_REGISTRATION_INFORMATION Info; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+88h] [rbp-80h]
  struct _PCW_REGISTRATION_INFORMATION v22; // [rsp+90h] [rbp-78h] BYREF
  __int64 v23; // [rsp+C0h] [rbp-48h]
  struct _PCW_REGISTRATION_INFORMATION v24; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v25; // [rsp+F8h] [rbp-10h]
  struct _PCW_REGISTRATION_INFORMATION v26; // [rsp+100h] [rbp-8h] BYREF
  __int64 v27; // [rsp+130h] [rbp+28h]

  KeQueryPerformanceCounter(&VIDMM_GLOBAL::_QpcFrequency);
  bTracingEnabled = 0;
  McGenEventRegister_EtwRegister();
  TlgRegisterAggregateProviderEx(v1, v0);
  VIDMM_GLOBAL::ReadConfiguration(v2);
  VIDMM_GLOBAL::_RotationHistory = (void *)operator new[](98304LL, 0x6D4D6956u, 64LL);
  if ( VIDMM_GLOBAL::_RotationHistory )
    *(&VIDMM_GLOBAL::_RotationHistory + 1) = (void *)2048;
  Global = DXGGLOBAL::GetGlobal();
  MaximumGlobalAdapterCount = (unsigned int)DXGGLOBAL::GetMaximumGlobalAdapterCount(Global);
  v4 = 4 * MaximumGlobalAdapterCount;
  if ( !is_mul_ok(MaximumGlobalAdapterCount, 4uLL) )
    v4 = -1LL;
  VIDMM_PROCESS::_pDxProcessPerAdapterCount = (void *)operator new[](v4, 0x33316956u, 256LL);
  if ( !VIDMM_PROCESS::_pDxProcessPerAdapterCount )
  {
    _InterlockedAdd(&dword_1400816FC, 1u);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 746;
    DxgkLogInternalTriageEvent(v6, 262145LL);
    return -1073741801LL;
  }
  inited = VidMmInitDmaPoolGlobals();
  v9 = inited;
  if ( inited < 0 )
  {
    WdLogSingleEntry1(1LL, inited);
    WdLogGlobalForLineNumber = 758;
    goto LABEL_9;
  }
  v11 = VIDMM_PROCESS_FENCE_STORAGE::InitGlobalStorage();
  v9 = v11;
  if ( v11 < 0 )
  {
    WdLogSingleEntry1(1LL, v11);
    WdLogGlobalForLineNumber = 766;
    goto LABEL_9;
  }
  qword_140081A90 = (__int64)&VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead;
  VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead.Flink = &VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead;
  v12 = operator new(32LL, 0x30316956u, 256LL);
  if ( v12 )
  {
    *(_QWORD *)v12 = 0LL;
    *(_QWORD *)(v12 + 8) = 0LL;
    *(_DWORD *)(v12 + 16) = 0;
    *(_DWORD *)(v12 + 20) = 75;
    *(_DWORD *)(v12 + 24) = -1;
    VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock = (struct DXGPUSHLOCK *)v12;
    qword_1400812D8 = (__int64)&VIDMM_GLOBAL::_AdapterListHead;
    VIDMM_GLOBAL::_AdapterListHead = &VIDMM_GLOBAL::_AdapterListHead;
    Info.Name = (PCUNICODE_STRING)L"$&";
    Info.Counters = (PPCW_COUNTER_DESCRIPTOR)&`InitRegistrationInformationGpuPerformanceCounterSetProcessMemory'::`2'::Descriptors;
    VIDMM_PARTITION::_PartitionTree = 0LL;
    *(_QWORD *)&Info.Version = 512LL;
    *(_QWORD *)&Info.CounterCount = 5LL;
    v21 = 0LL;
    Info.Callback = 0LL;
    Info.CallbackContext = 0LL;
    v13 = PcwRegister(&GpuPerformanceCounterSetProcessMemory, &Info);
    v9 = v13;
    if ( v13 >= 0 )
    {
      *(_QWORD *)&v22.Version = 512LL;
      v22.Name = (PCUNICODE_STRING)L"$&";
      *(_QWORD *)&v22.CounterCount = 3LL;
      v22.Counters = (PPCW_COUNTER_DESCRIPTOR)&`InitRegistrationInformationGpuPerformanceCounterSetAdapterMemory'::`2'::Descriptors;
      byte_14008195B = 1;
      v23 = 0LL;
      v22.Callback = 0LL;
      v22.CallbackContext = 0LL;
      v15 = PcwRegister(&GpuPerformanceCounterSetAdapterMemory, &v22);
      v9 = v15;
      if ( v15 >= 0 )
      {
        byte_14008195A = 1;
        v24.Name = (PCUNICODE_STRING)L"02";
        *(_QWORD *)&v24.Version = 512LL;
        v24.Counters = (PPCW_COUNTER_DESCRIPTOR)&`InitRegistrationInformationGpuPerformanceCounterSetNonLocalAdapterMemory'::`2'::Descriptors;
        *(_QWORD *)&v24.CounterCount = 1LL;
        v25 = 0LL;
        v24.Callback = 0LL;
        v24.CallbackContext = 0LL;
        v16 = PcwRegister(&GpuPerformanceCounterSetLocalAdapterMemory, &v24);
        v9 = v16;
        if ( v16 >= 0 )
        {
          byte_140081959 = 1;
          v26.Name = (PCUNICODE_STRING)L"8:";
          *(_QWORD *)&v26.Version = 512LL;
          v26.Counters = (PPCW_COUNTER_DESCRIPTOR)&`InitRegistrationInformationGpuPerformanceCounterSetNonLocalAdapterMemory'::`2'::Descriptors;
          *(_QWORD *)&v26.CounterCount = 1LL;
          v27 = 0LL;
          v26.Callback = 0LL;
          v26.CallbackContext = 0LL;
          v17 = PcwRegister(&GpuPerformanceCounterSetNonLocalAdapterMemory, &v26);
          v9 = v17;
          if ( v17 >= 0 )
          {
            byte_140081958 = 1;
            VIDMM_GLOBAL::InitPhysicalHeap();
            if ( (unsigned int)Feature_3694358843__private_IsEnabledDeviceUsageNoInline() )
              ExInitializeLookasideListEx(&g_VaRangeLookasideList, 0LL, 0LL, PagedPool, 0, 0x90uLL, 0x35356956u, 0);
            return v9;
          }
          WdLogSingleEntry1(1LL, v17);
          WdLogGlobalForLineNumber = 824;
        }
        else
        {
          WdLogSingleEntry1(1LL, v16);
          WdLogGlobalForLineNumber = 813;
        }
      }
      else
      {
        WdLogSingleEntry1(1LL, v15);
        WdLogGlobalForLineNumber = 802;
      }
    }
    else
    {
      WdLogSingleEntry1(1LL, v13);
      WdLogGlobalForLineNumber = 791;
    }
    DxgkLogInternalTriageEvent(v14, 0x40000LL);
    LiveDumpWithWdLogs = DxgCreateLiveDumpWithWdLogs(403LL, 2065LL, (int)v9, 0LL, 0LL, 0);
    if ( LiveDumpWithWdLogs >= 0 )
      return v9;
    WdLogSingleEntry1(1LL, LiveDumpWithWdLogs);
    WdLogGlobalForLineNumber = 850;
LABEL_9:
    DxgkLogInternalTriageEvent(v10, 0x40000LL);
    return v9;
  }
  VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock = 0LL;
  WdLogSingleEntry1(1LL, -1073741801LL);
  WdLogGlobalForLineNumber = 774;
  DxgkLogInternalTriageEvent(v19, 0x40000LL);
  return 3221225495LL;
}
