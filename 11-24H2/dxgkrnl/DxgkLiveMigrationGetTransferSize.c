/*
 * XREFs of DxgkLiveMigrationGetTransferSize @ 0x1402115C0
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x14023DB30 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x140054F44 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?LiveMigrationGetTransferSize@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@PEA_K@Z @ 0x14020DDDC (-LiveMigrationGetTransferSize@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkLiveMigrationGetTransferSize(_QWORD *a1, int a2, struct _LUID *a3, __int64 *a4)
{
  __int64 TransferSize; // rbx
  LONG HighPart; // [rsp+28h] [rbp-30h]
  DWORD LowPart; // [rsp+30h] [rbp-28h]

  TransferSize = (int)ADAPTER_RENDER::LiveMigrationGetTransferSize(a1[391], a2, a3, (__int64)a4);
  if ( bTracingEnabled )
  {
    LowPart = a3->LowPart;
    HighPart = a3->HighPart;
    VgpuTrace(1, TransferSize, a1, L"DxgkLiveMigrationGetTransferSize", (wchar_t *)L"LUID: %d %d", HighPart, LowPart);
    DxgkLogInternalTriageEvent(
      (__int64)a1,
      196629LL,
      0xFFFFFFFFLL,
      L"DxgkLiveMigrationGetTransferSize called with status %1 and transfer size %2",
      TransferSize,
      *a4,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)TransferSize;
}
