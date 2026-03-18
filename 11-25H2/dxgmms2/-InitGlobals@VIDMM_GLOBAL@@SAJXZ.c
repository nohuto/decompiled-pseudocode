/*
 * XREFs of ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x140109488
 * Callers:
 *     ?VidMmInitGlobals@@YAJXZ @ 0x140109470 (-VidMmInitGlobals@@YAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140027B84 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ @ 0x14002D9CC (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14002D9EC (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140038248 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     McGenEventRegister_EtwRegister @ 0x14004BC18 (McGenEventRegister_EtwRegister.c)
 *     TlgRegisterAggregateProviderEx @ 0x140091854 (TlgRegisterAggregateProviderEx.c)
 *     ?InitPhysicalHeap@VIDMM_GLOBAL@@CAXXZ @ 0x140094B38 (-InitPhysicalHeap@VIDMM_GLOBAL@@CAXXZ.c)
 *     ?VidMmInitDmaPoolGlobals@@YAJXZ @ 0x14009744C (-VidMmInitDmaPoolGlobals@@YAJXZ.c)
 *     ?InitGlobalStorage@VIDMM_PROCESS_FENCE_STORAGE@@SAJXZ @ 0x140097E10 (-InitGlobalStorage@VIDMM_PROCESS_FENCE_STORAGE@@SAJXZ.c)
 *     ?ReadConfiguration@VIDMM_GLOBAL@@SAXXZ @ 0x140109990 (-ReadConfiguration@VIDMM_GLOBAL@@SAXXZ.c)
 */

__int64 VIDMM_GLOBAL::InitGlobals(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v3; // rax
  unsigned __int64 MaximumGlobalAdapterCount; // kr00_8
  __int64 v5; // rcx
  int inited; // eax
  unsigned int v8; // esi
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rax
  NTSTATUS v12; // eax
  __int64 v13; // rcx
  NTSTATUS v14; // eax
  NTSTATUS v15; // eax
  NTSTATUS v16; // eax
  int LiveDumpWithWdLogs; // eax
  __int64 v18; // rcx
  _PCW_REGISTRATION_INFORMATION Info; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+88h] [rbp-80h]
  struct _PCW_REGISTRATION_INFORMATION v21; // [rsp+90h] [rbp-78h] BYREF
  __int64 v22; // [rsp+C0h] [rbp-48h]
  struct _PCW_REGISTRATION_INFORMATION v23; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v24; // [rsp+F8h] [rbp-10h]
  struct _PCW_REGISTRATION_INFORMATION v25; // [rsp+100h] [rbp-8h] BYREF
  __int64 v26; // [rsp+130h] [rbp+28h]

  KeQueryPerformanceCounter(&VIDMM_GLOBAL::_QpcFrequency);
  bTracingEnabled = 0;
  McGenEventRegister_EtwRegister();
  TlgRegisterAggregateProviderEx(v1, v0);
  VIDMM_GLOBAL::ReadConfiguration();
  VIDMM_GLOBAL::_RotationHistory = (void *)operator new[](98304LL, 0x6D4D6956u, 64LL);
  if ( VIDMM_GLOBAL::_RotationHistory )
    *(&VIDMM_GLOBAL::_RotationHistory + 1) = (void *)2048;
  Global = DXGGLOBAL::GetGlobal();
  MaximumGlobalAdapterCount = (unsigned int)DXGGLOBAL::GetMaximumGlobalAdapterCount(Global);
  v3 = 4 * MaximumGlobalAdapterCount;
  if ( !is_mul_ok(MaximumGlobalAdapterCount, 4uLL) )
    v3 = -1LL;
  VIDMM_PROCESS::_pDxProcessPerAdapterCount = (void *)operator new[](v3, 0x33316956u, 256LL);
  if ( !VIDMM_PROCESS::_pDxProcessPerAdapterCount )
  {
    _InterlockedAdd(&dword_1400816DC, 1u);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 740;
    DxgkLogInternalTriageEvent(v5, 262145LL);
    return -1073741801LL;
  }
  inited = VidMmInitDmaPoolGlobals();
  v8 = inited;
  if ( inited < 0 )
  {
    WdLogSingleEntry1(1LL, inited);
    WdLogGlobalForLineNumber = 752;
    goto LABEL_9;
  }
  v10 = VIDMM_PROCESS_FENCE_STORAGE::InitGlobalStorage();
  v8 = v10;
  if ( v10 < 0 )
  {
    WdLogSingleEntry1(1LL, v10);
    WdLogGlobalForLineNumber = 760;
    goto LABEL_9;
  }
  qword_1400819F8 = (__int64)&VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead;
  VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead.Flink = &VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead;
  v11 = operator new(32LL, 0x30316956u, 256LL);
  if ( v11 )
  {
    *(_QWORD *)v11 = 0LL;
    *(_QWORD *)(v11 + 8) = 0LL;
    *(_DWORD *)(v11 + 16) = 0;
    *(_DWORD *)(v11 + 20) = 75;
    *(_DWORD *)(v11 + 24) = -1;
    VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock = (struct DXGPUSHLOCK *)v11;
    qword_1400812B8 = (__int64)&VIDMM_GLOBAL::_AdapterListHead;
    VIDMM_GLOBAL::_AdapterListHead = &VIDMM_GLOBAL::_AdapterListHead;
    Info.Name = (PCUNICODE_STRING)L"$&";
    Info.Counters = (PPCW_COUNTER_DESCRIPTOR)&`InitRegistrationInformationGpuPerformanceCounterSetProcessMemory'::`2'::Descriptors;
    VIDMM_PARTITION::_PartitionTree = 0LL;
    *(_QWORD *)&Info.Version = 512LL;
    *(_QWORD *)&Info.CounterCount = 5LL;
    v20 = 0LL;
    Info.Callback = 0LL;
    Info.CallbackContext = 0LL;
    v12 = PcwRegister(&GpuPerformanceCounterSetProcessMemory, &Info);
    v8 = v12;
    if ( v12 >= 0 )
    {
      *(_QWORD *)&v21.Version = 512LL;
      v21.Name = (PCUNICODE_STRING)L"$&";
      *(_QWORD *)&v21.CounterCount = 3LL;
      v21.Counters = (PPCW_COUNTER_DESCRIPTOR)&`InitRegistrationInformationGpuPerformanceCounterSetAdapterMemory'::`2'::Descriptors;
      byte_1400818DB = 1;
      v22 = 0LL;
      v21.Callback = 0LL;
      v21.CallbackContext = 0LL;
      v14 = PcwRegister(&GpuPerformanceCounterSetAdapterMemory, &v21);
      v8 = v14;
      if ( v14 >= 0 )
      {
        byte_1400818DA = 1;
        v23.Name = (PCUNICODE_STRING)L"02";
        *(_QWORD *)&v23.Version = 512LL;
        v23.Counters = (PPCW_COUNTER_DESCRIPTOR)&`InitRegistrationInformationGpuPerformanceCounterSetNonLocalAdapterMemory'::`2'::Descriptors;
        *(_QWORD *)&v23.CounterCount = 1LL;
        v24 = 0LL;
        v23.Callback = 0LL;
        v23.CallbackContext = 0LL;
        v15 = PcwRegister(&GpuPerformanceCounterSetLocalAdapterMemory, &v23);
        v8 = v15;
        if ( v15 >= 0 )
        {
          byte_1400818D9 = 1;
          v25.Name = (PCUNICODE_STRING)L"8:";
          *(_QWORD *)&v25.Version = 512LL;
          v25.Counters = (PPCW_COUNTER_DESCRIPTOR)&`InitRegistrationInformationGpuPerformanceCounterSetNonLocalAdapterMemory'::`2'::Descriptors;
          *(_QWORD *)&v25.CounterCount = 1LL;
          v26 = 0LL;
          v25.Callback = 0LL;
          v25.CallbackContext = 0LL;
          v16 = PcwRegister(&GpuPerformanceCounterSetNonLocalAdapterMemory, &v25);
          v8 = v16;
          if ( v16 >= 0 )
          {
            byte_1400818D8 = 1;
            VIDMM_GLOBAL::InitPhysicalHeap();
            return v8;
          }
          WdLogSingleEntry1(1LL, v16);
          WdLogGlobalForLineNumber = 818;
        }
        else
        {
          WdLogSingleEntry1(1LL, v15);
          WdLogGlobalForLineNumber = 807;
        }
      }
      else
      {
        WdLogSingleEntry1(1LL, v14);
        WdLogGlobalForLineNumber = 796;
      }
    }
    else
    {
      WdLogSingleEntry1(1LL, v12);
      WdLogGlobalForLineNumber = 785;
    }
    DxgkLogInternalTriageEvent(v13, 0x40000LL);
    LiveDumpWithWdLogs = DxgCreateLiveDumpWithWdLogs(403LL, 2065LL, (int)v8, 0LL, 0LL, 0);
    if ( LiveDumpWithWdLogs >= 0 )
      return v8;
    WdLogSingleEntry1(1LL, LiveDumpWithWdLogs);
    WdLogGlobalForLineNumber = 839;
LABEL_9:
    DxgkLogInternalTriageEvent(v9, 0x40000LL);
    return v8;
  }
  VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock = 0LL;
  WdLogSingleEntry1(1LL, -1073741801LL);
  WdLogGlobalForLineNumber = 768;
  DxgkLogInternalTriageEvent(v18, 0x40000LL);
  return 3221225495LL;
}
