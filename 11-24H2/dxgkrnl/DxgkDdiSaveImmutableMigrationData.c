/*
 * XREFs of DxgkDdiSaveImmutableMigrationData @ 0x140210E40
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x14023DB30 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x140054F44 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?SaveImmutableMigrationData@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@PEAU_DXGKARG_GPUP_SAVE_IMMUTABLE_MIGRATION_DATA@@@Z @ 0x14020F050 (-SaveImmutableMigrationData@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@PEAU_DXGKARG.c)
 */

__int64 __fastcall DxgkDdiSaveImmutableMigrationData(_QWORD *a1, int a2, struct _LUID *a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rcx
  __int64 v8; // rbx
  LONG HighPart; // [rsp+28h] [rbp-50h]
  DWORD LowPart; // [rsp+30h] [rbp-48h]
  _DWORD v12[2]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v13; // [rsp+58h] [rbp-20h]
  __int64 v14; // [rsp+60h] [rbp-18h]

  v12[1] = 0;
  v6 = a1[391];
  v14 = a4;
  v12[0] = 0xFFFF;
  v13 = a5;
  v8 = (int)ADAPTER_RENDER::SaveImmutableMigrationData(v6, a2, a3, v12);
  if ( bTracingEnabled )
  {
    LowPart = a3->LowPart;
    HighPart = a3->HighPart;
    VgpuTrace(1, v8, a1, L"DxgkDdiSaveImmutableMigrationData", (wchar_t *)L"LUID: %d %d", HighPart, LowPart);
    DxgkLogInternalTriageEvent(
      (__int64)a1,
      196621LL,
      0xFFFFFFFFLL,
      L"DxgkDdiSaveImmutableMigrationData called with status %1",
      v8,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v8;
}
