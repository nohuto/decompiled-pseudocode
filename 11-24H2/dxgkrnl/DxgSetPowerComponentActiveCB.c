/*
 * XREFs of DxgSetPowerComponentActiveCB @ 0x1403BE700
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1400107F0 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x140010864 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ?SetPowerComponentActiveCB@DXGADAPTER@@QEAAXI@Z @ 0x1400258A4 (-SetPowerComponentActiveCB@DXGADAPTER@@QEAAXI@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 */

void __fastcall DxgSetPowerComponentActiveCB(__int64 a1, unsigned int a2)
{
  DXGADAPTER *DxgAdapter; // rax
  _BYTE v5[8]; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v5);
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  DXGADAPTER::SetPowerComponentActiveCB(DxgAdapter, a2);
  if ( v5[0] )
    KeUnstackDetachProcess(&ApcState);
}
