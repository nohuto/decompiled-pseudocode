/*
 * XREFs of DxgkDdiVirtualGpuDriverEscape @ 0x140183E0C
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x140237020 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@@Z @ 0x140183EA0 (-FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUI.c)
 */

__int64 __fastcall DxgkDdiVirtualGpuDriverEscape(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  _DWORD *VirtualGpuByLuid; // rax

  VirtualGpuByLuid = (_DWORD *)ADAPTER_RENDER::FindVirtualGpuByLuid(*(_QWORD *)(a1 + 3128));
  if ( VirtualGpuByLuid )
  {
    *a4 = VirtualGpuByLuid[6];
    return (*(__int64 (__fastcall **)(_DWORD *, _DWORD *))(*(_QWORD *)VirtualGpuByLuid + 40LL))(VirtualGpuByLuid, a4);
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2277;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Partition is not found", 2277LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
}
