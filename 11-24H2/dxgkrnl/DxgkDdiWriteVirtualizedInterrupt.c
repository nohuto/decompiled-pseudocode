/*
 * XREFs of DxgkDdiWriteVirtualizedInterrupt @ 0x1402113E0
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x14023DB30 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x140054F44 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?WriteVirtualizedInterrupt@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@PEAU_MSI_TABLE_ENTRY@@PEAU_DXGKARG_GPUP_WRITE_VIRTUALIZED_MSIX@@@Z @ 0x14020F898 (-WriteVirtualizedInterrupt@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@PEAU_MSI_TABL.c)
 */

__int64 __fastcall DxgkDdiWriteVirtualizedInterrupt(_QWORD *a1, int a2, struct _LUID *a3, __int16 a4, __int64 a5)
{
  __int64 v6; // rcx
  __int64 v8; // rbx
  LONG HighPart; // [rsp+28h] [rbp-60h]
  DWORD LowPart; // [rsp+30h] [rbp-58h]
  __int128 v12; // [rsp+50h] [rbp-38h] BYREF
  __int64 v13; // [rsp+60h] [rbp-28h]

  v13 = 0LL;
  v12 = 0LL;
  v6 = a1[391];
  WORD2(v12) = a4;
  LODWORD(v12) = 0xFFFF;
  v8 = (int)ADAPTER_RENDER::WriteVirtualizedInterrupt(v6, a2, a3, a5, &v12);
  if ( bTracingEnabled )
  {
    LowPart = a3->LowPart;
    HighPart = a3->HighPart;
    VgpuTrace(1, v8, a1, L"DxgkDdiWriteVirtualizedInterrupt", (wchar_t *)L"LUID: %d %d", HighPart, LowPart);
    DxgkLogInternalTriageEvent(
      (__int64)a1,
      196631LL,
      0xFFFFFFFFLL,
      L"WriteVirtualizedInterrupt called with status %1",
      v8,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v8;
}
