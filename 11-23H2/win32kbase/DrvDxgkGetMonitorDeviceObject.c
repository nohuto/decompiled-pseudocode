/*
 * XREFs of DrvDxgkGetMonitorDeviceObject @ 0x1C006D2C0
 * Callers:
 *     ?PopulatePanelId@CInputSpaceRegion@@QEAAXXZ @ 0x1C006D25C (-PopulatePanelId@CInputSpaceRegion@@QEAAXXZ.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C01907BC (rimFindMonitorForDigitizerWithQDCData.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvDxgkGetMonitorDeviceObject(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // esi
  __int64 DxgkWin32kInterface; // rax

  v6 = a2;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1, a2);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(DxgkWin32kInterface + 456))(a1, v6, a3, a4);
}
