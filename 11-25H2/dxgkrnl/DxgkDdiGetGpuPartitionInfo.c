/*
 * XREFs of DxgkDdiGetGpuPartitionInfo @ 0x140209900
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x140237020 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x140055794 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?GetGpuPartitionInfo@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETGPUPARTITIONINFO@@@Z @ 0x140206F9C (-GetGpuPartitionInfo@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETGPUPARTITIONIN.c)
 */

__int64 __fastcall DxgkDdiGetGpuPartitionInfo(
        ADAPTER_RENDER **a1,
        int a2,
        struct _DXGKARG_GETGPUPARTITIONINFO *a3,
        __int64 a4)
{
  __int64 GpuPartitionInfo; // rbx
  unsigned __int64 i; // rbp
  ULONG NumGpuPartitionOptions; // [rsp+28h] [rbp-30h]

  GpuPartitionInfo = (int)ADAPTER_RENDER::GetGpuPartitionInfo(a1[391], a2, a3, a4);
  if ( bTracingEnabled )
  {
    NumGpuPartitionOptions = a3->NumGpuPartitionOptions;
    VgpuTrace(1, GpuPartitionInfo, a1, L"DxgkDdiGetGpuPartitionInfo", (wchar_t *)L"%d", NumGpuPartitionOptions);
    for ( i = 0LL;
          i < a3->NumGpuPartitionOptions;
          DxgkLogInternalTriageEvent(
            (__int64)a1,
            131073,
            0xFFFFFFFFLL,
            L"Driver reports valid partitioning option %1, with status %2",
            a3->pGpuPartitionOptions[i++],
            GpuPartitionInfo,
            0LL,
            0LL,
            0LL) )
    {
      ;
    }
  }
  return (unsigned int)GpuPartitionInfo;
}
