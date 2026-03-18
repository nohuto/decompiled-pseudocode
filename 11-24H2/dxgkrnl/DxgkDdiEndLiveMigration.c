/*
 * XREFs of DxgkDdiEndLiveMigration @ 0x14020FDA4
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x14023DB30 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x140054F44 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?EndLiveMigration@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@@Z @ 0x14020D200 (-EndLiveMigration@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@@Z.c)
 */

__int64 __fastcall DxgkDdiEndLiveMigration(_QWORD *a1, int a2, struct _LUID *a3)
{
  __int64 v5; // rbx
  LONG HighPart; // [rsp+28h] [rbp-30h]
  DWORD LowPart; // [rsp+30h] [rbp-28h]

  v5 = (int)ADAPTER_RENDER::EndLiveMigration(a1[391], a2, a3);
  if ( bTracingEnabled )
  {
    LowPart = a3->LowPart;
    HighPart = a3->HighPart;
    VgpuTrace(1, v5, a1, L"DxgkDdiEndLiveMigration", (wchar_t *)L"LUID: %d %d", HighPart, LowPart);
    DxgkLogInternalTriageEvent(
      (__int64)a1,
      196620LL,
      0xFFFFFFFFLL,
      L"EndLiveMigration called with status %1",
      v5,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v5;
}
