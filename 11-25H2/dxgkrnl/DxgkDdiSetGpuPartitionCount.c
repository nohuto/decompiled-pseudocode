/*
 * XREFs of DxgkDdiSetGpuPartitionCount @ 0x14020A91C
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x140237020 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x140055794 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?SetGpuPartitionCount@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_SETGPUPARTITIONCOUNT@@E@Z @ 0x140208C64 (-SetGpuPartitionCount@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_SETGPUPARTITIONC.c)
 */

__int64 __fastcall DxgkDdiSetGpuPartitionCount(ADAPTER_RENDER **a1, int a2, unsigned int *a3)
{
  __int64 v5; // rbx
  int v7; // [rsp+28h] [rbp-30h]

  v5 = (int)ADAPTER_RENDER::SetGpuPartitionCount(a1[391], a2, (__int64)a3, 0LL);
  if ( bTracingEnabled )
  {
    v7 = *a3;
    VgpuTrace(1, v5, a1, L"DxgkDdiSetGpuPartitionCount", (wchar_t *)L"%d", v7);
    DxgkLogInternalTriageEvent(
      (__int64)a1,
      0x20000,
      0xFFFFFFFFLL,
      L"Setting partition count to %1 returns %2.",
      *a3,
      v5,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v5;
}
