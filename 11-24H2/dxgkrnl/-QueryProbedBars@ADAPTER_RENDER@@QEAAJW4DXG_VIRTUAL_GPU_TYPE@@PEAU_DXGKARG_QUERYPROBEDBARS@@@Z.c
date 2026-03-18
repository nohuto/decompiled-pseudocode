/*
 * XREFs of ?QueryProbedBars@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_QUERYPROBEDBARS@@@Z @ 0x14020E798
 * Callers:
 *     DxgkDdiQueryProbedBars @ 0x1402108E0 (DxgkDdiQueryProbedBars.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400456A8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetVirtualGpuManager@ADAPTER_RENDER@@QEAAPEAVDXGVIRTUALGPUMANAGER@@W4DXG_VIRTUAL_GPU_TYPE@@@Z @ 0x1403CBAC8 (-GetVirtualGpuManager@ADAPTER_RENDER@@QEAAPEAVDXGVIRTUALGPUMANAGER@@W4DXG_VIRTUAL_GPU_TYPE@@@Z.c)
 *     ?GetVirtualGpuByIndex@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@I@Z @ 0x1403CBAE8 (-GetVirtualGpuByIndex@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@I@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::QueryProbedBars(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v4; // ebx
  __int64 VirtualGpuManager; // rax
  __int64 VirtualGpuByIndex; // rax
  unsigned int v8; // r8d
  unsigned int v9; // ebx
  __int64 v11; // [rsp+20h] [rbp-58h]
  _BYTE v12[32]; // [rsp+50h] [rbp-28h] BYREF

  v4 = a2;
  VirtualGpuManager = ADAPTER_RENDER::GetVirtualGpuManager(a1, a2);
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v12,
    (struct _KTHREAD **)(VirtualGpuManager + 40));
  VirtualGpuByIndex = ADAPTER_RENDER::GetVirtualGpuByIndex(a1, v4, *a3);
  if ( VirtualGpuByIndex )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)VirtualGpuByIndex + 32LL))(
           VirtualGpuByIndex,
           a3);
  }
  else
  {
    WdLogSingleEntry1(2LL, v8);
    v11 = *a3;
    WdLogGlobalForLineNumber = 1608;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid virtual GPU index: %I64n",
      v11,
      0LL,
      0LL,
      0LL,
      0LL);
    v9 = -1073741811;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12);
  return v9;
}
