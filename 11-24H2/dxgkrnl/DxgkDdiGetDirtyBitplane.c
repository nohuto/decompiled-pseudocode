/*
 * XREFs of DxgkDdiGetDirtyBitplane @ 0x14020FF18
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x14023DB30 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x140054F44 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?LiveMigrationGetDirtyBitplane@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@I@Z @ 0x14020DC78 (-LiveMigrationGetDirtyBitplane@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@I@Z.c)
 */

__int64 __fastcall DxgkDdiGetDirtyBitplane(_QWORD *a1, int a2, struct _LUID *a3, unsigned int a4)
{
  __int64 DirtyBitplane; // rbx
  LONG HighPart; // [rsp+28h] [rbp-30h]
  DWORD LowPart; // [rsp+30h] [rbp-28h]

  DirtyBitplane = (int)ADAPTER_RENDER::LiveMigrationGetDirtyBitplane(a1[391], a2, a3, a4);
  if ( bTracingEnabled )
  {
    LowPart = a3->LowPart;
    HighPart = a3->HighPart;
    VgpuTrace(1, DirtyBitplane, a1, L"DxgkDdiGetDirtyBitplane", (wchar_t *)L"LUID: %d %d", HighPart, LowPart);
    DxgkLogInternalTriageEvent(
      (__int64)a1,
      196625LL,
      0xFFFFFFFFLL,
      L"DxgkDdiGetDirtyBitplane called with status %1",
      DirtyBitplane,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)DirtyBitplane;
}
