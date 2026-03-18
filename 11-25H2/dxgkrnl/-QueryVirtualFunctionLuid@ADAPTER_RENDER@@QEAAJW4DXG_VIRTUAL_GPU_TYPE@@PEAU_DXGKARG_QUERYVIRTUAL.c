/*
 * XREFs of ?QueryVirtualFunctionLuid@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_QUERYVIRTUALFUNCTIONLUID@@@Z @ 0x1402081A0
 * Callers:
 *     DxgkDdiQueryVirtualFunctionLuid @ 0x14020A3D8 (DxgkDdiQueryVirtualFunctionLuid.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?GetVirtualGpuByIndex@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@I@Z @ 0x1403D3CAC (-GetVirtualGpuByIndex@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@I@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::QueryVirtualFunctionLuid(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 VirtualGpuByIndex; // rax
  unsigned int v5; // r8d
  __int64 v7; // [rsp+20h] [rbp-38h]

  VirtualGpuByIndex = ADAPTER_RENDER::GetVirtualGpuByIndex(a1, a2, *a3);
  if ( VirtualGpuByIndex )
  {
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)VirtualGpuByIndex + 112LL))(VirtualGpuByIndex, a3);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, v5);
    v7 = *a3;
    WdLogGlobalForLineNumber = 1758;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Invalid virtual GPU index: %I64n", v7, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
}
