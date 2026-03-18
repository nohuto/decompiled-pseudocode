/*
 * XREFs of DxgSetPowerComponentIdleCBInternal @ 0x14006C110
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1400107F0 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x140010864 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ?SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z @ 0x140011BF0 (-SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z.c)
 *     ??1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ @ 0x140030E00 (--1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 */

void __fastcall DxgSetPowerComponentIdleCBInternal(__int64 a1, unsigned int a2)
{
  DXGADAPTER *DxgAdapter; // rax
  _BYTE v5[56]; // [rsp+20h] [rbp-48h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v5);
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  DXGADAPTER::SetPowerComponentIdleCBInternal(DxgAdapter, a2, 0);
  DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v5);
}
