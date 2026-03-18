/*
 * XREFs of DxgkSendDirtyToVRAM @ 0x140211740
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x14023DB30 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x140054F44 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?LiveMigrationTransferDirtyContent@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@IW4_DXGK_GPUP_MIGRATIONTYPE@@PEA_K@Z @ 0x14020DF44 (-LiveMigrationTransferDirtyContent@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@IW4_D.c)
 */

__int64 __fastcall DxgkSendDirtyToVRAM(_QWORD *a1, int a2, struct _LUID *a3, unsigned int a4, __int64 a5)
{
  __int64 v7; // rbx
  __int64 v9; // [rsp+28h] [rbp-30h]
  DWORD LowPart; // [rsp+30h] [rbp-28h]

  v7 = (int)ADAPTER_RENDER::LiveMigrationTransferDirtyContent(a1[391], a2, a3, a4, 1u, a5);
  if ( bTracingEnabled )
  {
    LowPart = a3->LowPart;
    LODWORD(v9) = a3->HighPart;
    VgpuTrace(1, v7, a1, L"DxgkSendDirtyToVRAM", (wchar_t *)L"LUID: %d %d", v9, LowPart);
    DxgkLogInternalTriageEvent(
      (__int64)a1,
      196628LL,
      0xFFFFFFFFLL,
      L"DxgkSendDirtyToVRAM called with status %1",
      v7,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v7;
}
