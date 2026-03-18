/*
 * XREFs of DxgkSetPowerComponentLatencyCB @ 0x14006C5F0
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1400107F0 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x140010864 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ??1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ @ 0x140030E00 (--1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x140042A84 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 */

void __fastcall DxgkSetPowerComponentLatencyCB(__int64 a1, unsigned int a2, __int64 a3)
{
  DXGADAPTER *DxgAdapter; // rax
  _BYTE v7[56]; // [rsp+20h] [rbp-58h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v7);
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  DXGADAPTER::SetPowerComponentLatencyCB(DxgAdapter, a2, a3);
  DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v7);
}
