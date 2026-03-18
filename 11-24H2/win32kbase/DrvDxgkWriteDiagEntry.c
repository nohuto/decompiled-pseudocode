/*
 * XREFs of DrvDxgkWriteDiagEntry @ 0x1400E5440
 * Callers:
 *     PowerDimUndimResend @ 0x1400920B8 (PowerDimUndimResend.c)
 *     xxxUserChangeDisplaySettings @ 0x1400E4890 (xxxUserChangeDisplaySettings.c)
 *     LogDiagSDC @ 0x1400E51A0 (LogDiagSDC.c)
 *     PowerDimMonitor @ 0x140141F74 (PowerDimMonitor.c)
 *     LogDiagCDS @ 0x140199A8C (LogDiagCDS.c)
 *     LogDiagSDCAccessDenied @ 0x1401CCC50 (LogDiagSDCAccessDenied.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvDxgkWriteDiagEntry(__int64 a1)
{
  __int64 DxgkWin32kInterface; // rax

  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1);
  return (*(__int64 (__fastcall **)(__int64))(DxgkWin32kInterface + 304))(a1);
}
