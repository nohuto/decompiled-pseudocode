/*
 * XREFs of DxgkDdiSetVirtualGpuVmBus @ 0x140211168
 * Callers:
 *     ?DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x140062028 (-DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z.c)
 *     ?DpiSetPartitionFlexIovVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x14007D03C (-DpiSetPartitionFlexIovVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x140054F44 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@@Z @ 0x1401861F0 (-FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUI.c)
 */

__int64 __fastcall DxgkDdiSetVirtualGpuVmBus(_QWORD *a1, int a2, struct _LUID *a3, _DWORD *a4)
{
  struct DXGK_VIRTUAL_GPU *VirtualGpuByLuid; // rax
  int v7; // ebx
  __int64 v9; // [rsp+28h] [rbp-30h]

  VirtualGpuByLuid = ADAPTER_RENDER::FindVirtualGpuByLuid(a1[391], a2, a3);
  if ( VirtualGpuByLuid )
  {
    v7 = (*(__int64 (__fastcall **)(struct DXGK_VIRTUAL_GPU *, _DWORD *))(*(_QWORD *)VirtualGpuByLuid + 24LL))(
           VirtualGpuByLuid,
           a4);
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2261;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Failed to find vGPU by LUID", 2261LL, 0LL, 0LL, 0LL, 0LL);
    v7 = -1073741811;
  }
  if ( bTracingEnabled )
  {
    LODWORD(v9) = *a4;
    VgpuTrace(1, v7, a1, L"DxgkDdiSetVirtualGpuVmBus", (wchar_t *)L"%d", v9);
    DxgkLogInternalTriageEvent(
      (__int64)a1,
      196613LL,
      (unsigned int)*a4,
      L"VM initialization is configuring assignment of vGPU, returning %1",
      v7,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v7;
}
